Alkharid_Gym_1F_R3_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Alkharid_Gym_1F_R3_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Alkharid_Gym_1F_R3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 11
	call ALKHARID_GYM_ROOMS_STATE
	call ALKHARID_GYM_NPCS_POST_GYM_1F_3R
	return


ALKHARID_GYM_NPCS_POST_GYM_1F_3R::
	switch VAR_POKESCAPE_ALKHARID_GYM_QUEST
	case 0, ALKHARID_GYM_NPCS_POST_GYM_1F_3R_3
	case 30, ALKHARID_GYM_NPCS_POST_GYM_1F_3R_4
ALKHARID_GYM_NPCS_POST_GYM_1F_3R_1:
	return

ALKHARID_GYM_NPCS_POST_GYM_1F_3R_3:
	setobjectxyperm 2, 8, 2
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	goto ALKHARID_GYM_NPCS_POST_GYM_1F_3R_1

ALKHARID_GYM_NPCS_POST_GYM_1F_3R_4:
	setobjectxyperm 2, 9, 7
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
	goto ALKHARID_GYM_NPCS_POST_GYM_1F_3R_1


ALKHARID_GYM_ROOMS_STATE::
	switch VAR_POKESCAPE_ALKHARID_GYM_QUEST
	case 0, ALKHARID_GYM_ROOMS_STATE_3
	case 5, ALKHARID_GYM_ROOMS_STATE_4
	case 10, ALKHARID_GYM_ROOMS_STATE_5
	case 15, ALKHARID_GYM_ROOMS_STATE_6
	case 20, ALKHARID_GYM_ROOMS_STATE_7
	case 30, ALKHARID_GYM_ROOMS_STATE_8
ALKHARID_GYM_ROOMS_STATE_1:
	return

ALKHARID_GYM_ROOMS_STATE_3:
	removeobject 1
	setflag FLAG_TEMP_6
	goto ALKHARID_GYM_ROOMS_STATE_1

ALKHARID_GYM_ROOMS_STATE_4:
	removeobject 1
	setflag FLAG_TEMP_6
	goto ALKHARID_GYM_ROOMS_STATE_1

ALKHARID_GYM_ROOMS_STATE_5:
	removeobject 1
	setflag FLAG_TEMP_6
	goto ALKHARID_GYM_ROOMS_STATE_1

ALKHARID_GYM_ROOMS_STATE_6:
	removeobject 1
	setflag FLAG_TEMP_6
	goto ALKHARID_GYM_ROOMS_STATE_1

ALKHARID_GYM_ROOMS_STATE_7:
	removeobject 1
	setflag FLAG_TEMP_6
	goto ALKHARID_GYM_ROOMS_STATE_1

ALKHARID_GYM_ROOMS_STATE_8:
	removeobject 1
	setflag FLAG_TEMP_6
	goto ALKHARID_GYM_ROOMS_STATE_1


GYM_NPC_1::
	lock
	faceplayer
	goto_if_unset FLAG_ALKHARIDGYM_1, GYM_NPC_1_2
GYM_NPC_1_1:
	goto_if_set FLAG_BADGE06_GET, GYM_NPC_1_5
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 0
	goto_if_eq GYM_NPC_1_10
	namebox GYM_NPC_1_Text_1
	msgbox GYM_NPC_1_Text_8
GYM_NPC_1_9:
	closemessage
	release
	end

GYM_NPC_1_2:
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 15
	goto_if_eq GYM_NPC_1_7
	goto GYM_NPC_1_1

GYM_NPC_1_5:
	namebox GYM_NPC_1_Text_1
	msgbox GYM_NPC_1_Text_6
	release
	end

GYM_NPC_1_7:
	call CHECK_IF_ALI
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 20
	goto_if_eq GYM_NPC_1_14
	call GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC1
	namebox GYM_NPC_1_Text_1
	msgbox GYM_NPC_1_Text_2
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_TRAINER_1, GYM_NPC_1_Text_3
	namebox GYM_NPC_1_Text_1
	msgbox GYM_NPC_1_Text_5
	closemessage
	hidenamebox
	setobjectmovementtype 1, MOVEMENT_TYPE_WANDER_AROUND
	setobjectmovementtype 2, MOVEMENT_TYPE_WANDER_AROUND
	setobjectmovementtype 3, MOVEMENT_TYPE_WANDER_AROUND
	setflag FLAG_ALKHARIDGYM_1
	release
	end

GYM_NPC_1_10:
	namebox GYM_NPC_1_Text_1
	msgbox GYM_NPC_1_Text_7
	goto GYM_NPC_1_9

GYM_NPC_1_14:
	msgbox GYM_NPC_1_Text_0
	hidenamebox
	closemessage
	applymovement VAR_LAST_TALKED, Movement_AlkharidGym_TELEPORT
	delay 30
	removeobject VAR_LAST_TALKED
	addobject 1
	clearflag FLAG_TEMP_6
	call GYM_MOVEMENT_FOUND_ALI_NPC1
	namebox GYM_NPC_1_Text_1
	msgbox GYM_NPC_1_Text_2
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_TRAINER_1, GYM_NPC_1_Text_3
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq GYM_NPC_1_17
	namebox GYM_NPC_1_Text_1
	msgbox GYM_NPC_1_Text_4
	closemessage
	hidenamebox
	applymovement 1, MOVEMENT_WALK_DOWN
	waitmovement 0
	applymovement 1, MOVEMENT_FACE_UP
	waitmovement 0
	release
	end

GYM_NPC_1_17:
	setvar VAR_POKESCAPE_ALKHARID_GYM_QUEST, 0
	end


GYM_MOVEMENT_FOUND_ALI_NPC1::
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	switch VAR_TEMP_1
	case 1, GYM_MOVEMENT_FOUND_ALI_NPC1_3
	case 2, GYM_MOVEMENT_FOUND_ALI_NPC1_4
GYM_MOVEMENT_FOUND_ALI_NPC1_1:
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_DOWN
	waitmovement 0
	return

GYM_MOVEMENT_FOUND_ALI_NPC1_3:
	applymovement 3, Movement_AlkharidGym_DID_NOT_FIND_ALI_NPC1_1
	applymovement 1, Movement_AlkharidGym_FOUND_ALI_ALI_NPC1_1
	goto GYM_MOVEMENT_FOUND_ALI_NPC1_1

GYM_MOVEMENT_FOUND_ALI_NPC1_4:
	applymovement 3, Movement_AlkharidGym_DID_NOT_FIND_ALI_NPC1_2
	applymovement 1, Movement_AlkharidGym_FOUND_ALI_ALI_NPC1_2
	goto GYM_MOVEMENT_FOUND_ALI_NPC1_1


Movement_AlkharidGym_FOUND_ALI_ALI_NPC1_1:
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_down
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	face_up
	step_end

Movement_AlkharidGym_FOUND_ALI_ALI_NPC1_2:
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	face_down
	step_end

GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC1::
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	switch VAR_TEMP_1
	case 1, GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC1_3
	case 2, GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC1_4
GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC1_1:
	waitmovement 0
	return

GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC1_3:
	applymovement 3, Movement_AlkharidGym_DID_NOT_FIND_ALI_NPC1_1
	goto GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC1_1

GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC1_4:
	applymovement 3, Movement_AlkharidGym_DID_NOT_FIND_ALI_NPC1_2
	goto GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC1_1


Movement_AlkharidGym_DID_NOT_FIND_ALI_NPC1_1:
	walk_faster_up
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_up
	face_left
	step_end

Movement_AlkharidGym_DID_NOT_FIND_ALI_NPC1_2:
	walk_faster_up
	walk_faster_left
	walk_faster_left
	walk_faster_left
	step_end

GYM_NPC_2::
	lock
	faceplayer
	goto_if_unset FLAG_ALKHARIDGYM_1, GYM_NPC_2_2
GYM_NPC_2_1:
	goto_if_set FLAG_BADGE06_GET, GYM_NPC_2_5
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 0
	goto_if_eq GYM_NPC_2_10
	namebox GYM_NPC_1_Text_1
	msgbox GYM_NPC_2_Text_2
GYM_NPC_2_9:
	closemessage
	release
	end

GYM_NPC_2_2:
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 15
	goto_if_eq GYM_NPC_2_7
	goto GYM_NPC_2_1

GYM_NPC_2_5:
	namebox GYM_NPC_1_Text_1
	msgbox GYM_NPC_2_Text_0
	release
	end

GYM_NPC_2_7:
	call CHECK_IF_ALI
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 20
	goto_if_eq GYM_NPC_2_14
	call GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC2
	namebox GYM_NPC_1_Text_1
	msgbox GYM_NPC_1_Text_2
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_TRAINER_1, GYM_NPC_1_Text_3
	namebox GYM_NPC_1_Text_1
	msgbox GYM_NPC_1_Text_5
	closemessage
	hidenamebox
	setflag FLAG_ALKHARIDGYM_1
	applymovement 2, Movement_AlkharidGym_moveafterbattle_1
	waitmovement 0
	setobjectmovementtype 1, MOVEMENT_TYPE_WANDER_AROUND
	setobjectmovementtype 2, MOVEMENT_TYPE_WANDER_AROUND
	setobjectmovementtype 3, MOVEMENT_TYPE_WANDER_AROUND
	release
	end

GYM_NPC_2_10:
	namebox GYM_NPC_1_Text_1
	msgbox GYM_NPC_2_Text_1
	goto GYM_NPC_2_9

GYM_NPC_2_14:
	msgbox GYM_NPC_1_Text_0
	hidenamebox
	closemessage
	applymovement VAR_LAST_TALKED, Movement_AlkharidGym_TELEPORT
	delay 30
	removeobject VAR_LAST_TALKED
	addobject 1
	clearflag FLAG_TEMP_6
	call GYM_MOVEMENT_FOUND_ALI_NPC2
	namebox GYM_NPC_1_Text_1
	msgbox GYM_NPC_1_Text_2
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_TRAINER_1, GYM_NPC_1_Text_3
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq GYM_NPC_2_17
	namebox GYM_NPC_1_Text_1
	msgbox GYM_NPC_1_Text_4
	closemessage
	hidenamebox
	applymovement 2, Movement_AlkharidGym_moveafterbattle_1
	applymovement 1, Movement_AlkharidGym_moveafterbattle_2
	waitmovement 0
	release
	end

GYM_NPC_2_17:
	setvar VAR_POKESCAPE_ALKHARID_GYM_QUEST, 0
	end


GYM_MOVEMENT_FOUND_ALI_NPC2::
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	switch VAR_TEMP_1
	case 5, GYM_MOVEMENT_FOUND_ALI_NPC2_3
	case 6, GYM_MOVEMENT_FOUND_ALI_NPC2_4
GYM_MOVEMENT_FOUND_ALI_NPC2_1:
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_DOWN
	waitmovement 0
	return

GYM_MOVEMENT_FOUND_ALI_NPC2_3:
	applymovement 2, Movement_AlkharidGym_DID_NOT_FIND_ALI_NPC2_1
	applymovement 1, Movement_AlkharidGym_FOUND_ALI_ALI_NPC2_1
	goto GYM_MOVEMENT_FOUND_ALI_NPC2_1

GYM_MOVEMENT_FOUND_ALI_NPC2_4:
	applymovement 2, Movement_AlkharidGym_DID_NOT_FIND_ALI_NPC2_2
	applymovement 1, Movement_AlkharidGym_FOUND_ALI_ALI_NPC2_2
	goto GYM_MOVEMENT_FOUND_ALI_NPC2_1


Movement_AlkharidGym_FOUND_ALI_ALI_NPC2_1:
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_down
	step_end

Movement_AlkharidGym_FOUND_ALI_ALI_NPC2_2:
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	face_down
	step_end

GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC2::
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	switch VAR_TEMP_1
	case 5, GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC2_3
	case 6, GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC2_4
GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC2_1:
	waitmovement 0
	return

GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC2_3:
	applymovement 2, Movement_AlkharidGym_DID_NOT_FIND_ALI_NPC2_1
	goto GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC2_1

GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC2_4:
	applymovement 2, Movement_AlkharidGym_DID_NOT_FIND_ALI_NPC2_2
	goto GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC2_1


Movement_AlkharidGym_DID_NOT_FIND_ALI_NPC2_1:
	walk_faster_right
	walk_faster_down
	walk_faster_right
	walk_faster_right
	face_left
	step_end

Movement_AlkharidGym_DID_NOT_FIND_ALI_NPC2_2:
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	step_end

Movement_AlkharidGym_NPC_1:
	walk_faster_up
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	step_end

Movement_AlkharidGym_NPC_1_Ali:
	walk_faster_up
	walk_faster_left
	walk_faster_left
	face_player
	step_end

Movement_AlkharidGym_NPC_2:
	walk_faster_down
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	step_end

Movement_AlkharidGym_NPC_2_Ali:
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_right
	face_player
	step_end

Movement_AlkharidGym_TELEPORT:
	fly_up
	step_end

Movement_AlkharidGym_TELEPORT_IN:
	fly_down
	step_end

Movement_AlkharidGym_moveafterbattle_1:
	walk_left
	walk_up
	face_down
	step_end

Movement_AlkharidGym_moveafterbattle_2:
	walk_left
	walk_down
	face_up
	step_end

GYM_NPC_1_Text_0:
	.string "Guards help me as I make my escape!$"

GYM_NPC_1_Text_1:
	.string "Warrior$"

GYM_NPC_1_Text_2:
	.string "Brother, I will help thee with this\n"
	.string "infidel!$"

GYM_NPC_1_Text_3:
	.string "Consider that a warning!$"

GYM_NPC_1_Text_4:
	.string "You have defeated us!\p"
	.string "But the Prince has made his escape so\n"
	.string "we have done our jobs.$"

GYM_NPC_1_Text_5:
	.string "You have defeated us!\p"
	.string "But the Prince is still somewhere\n"
	.string "around the Palace.$"

GYM_NPC_1_Text_6:
	.string "The other day a Magicarpet flew out\n"
	.string "from underneath my feet!\p"
	.string "I thought it was just a regular carpet…$"

GYM_NPC_1_Text_7:
	.string "Greetings, if you wish to take up the\n"
	.string "challenge of the AlKharid Gym, then\l"
	.string "speak with Osman in the throne room.$"

GYM_NPC_1_Text_8:
	.string "I will continue to protect the prince\n"
	.string "forever!$"

GYM_NPC_2_Text_0:
	.string "Vultures are the best monsters to\n"
	.string "train, wouldn't you agree?$"

GYM_NPC_2_Text_1:
	.string "Are you are gym challenger?\p"
	.string "Speak to Osman in the throne room.$"

GYM_NPC_2_Text_2:
	.string "We defend our brothers like they are\n"
	.string "family.\p"
	.string "Because they are our family.$"

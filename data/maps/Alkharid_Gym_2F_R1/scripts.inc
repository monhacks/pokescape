Alkharid_Gym_2F_R1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Alkharid_Gym_2F_R1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Alkharid_Gym_2F_R1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 11
	call ALKHARID_GYM_ROOMS_STATE
	call ALKHARID_GYM_NPCS_POST_GYM_2F_1R
	return


ALKHARID_GYM_NPCS_POST_GYM_2F_1R::
	switch VAR_POKESCAPE_ALKHARID_GYM_QUEST
	case 0, ALKHARID_GYM_NPCS_POST_GYM_2F_1R_3
	case 30, ALKHARID_GYM_NPCS_POST_GYM_2F_1R_4
ALKHARID_GYM_NPCS_POST_GYM_2F_1R_1:
	return

ALKHARID_GYM_NPCS_POST_GYM_2F_1R_3:
	setobjectxyperm 2, 10, 5
	setobjectmovementtype 2, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
	goto ALKHARID_GYM_NPCS_POST_GYM_2F_1R_1

ALKHARID_GYM_NPCS_POST_GYM_2F_1R_4:
	setobjectxyperm 2, 10, 5
	setobjectmovementtype 2, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
	setobjectxyperm 3, 6, 3
	setobjectmovementtype 3, MOVEMENT_TYPE_WANDER_AROUND
	goto ALKHARID_GYM_NPCS_POST_GYM_2F_1R_1


GYM_NPC_5::
	lock
	faceplayer
	goto_if_unset FLAG_ALKHARIDGYM_3, GYM_NPC_5_2
GYM_NPC_5_1:
	goto_if_set FLAG_BADGE06_GET, GYM_NPC_5_5
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 0
	goto_if_eq GYM_NPC_5_10
	namebox GYM_NPC_5_Text_1
	msgbox GYM_NPC_5_Text_8
GYM_NPC_5_9:
	closemessage
	release
	end

GYM_NPC_5_2:
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 15
	goto_if_eq GYM_NPC_5_7
	goto GYM_NPC_5_1

GYM_NPC_5_5:
	namebox GYM_NPC_5_Text_1
	msgbox GYM_NPC_5_Text_6
	release
	end

GYM_NPC_5_7:
	call CHECK_IF_ALI
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 20
	goto_if_eq GYM_NPC_5_14
	call GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC5
	namebox GYM_NPC_5_Text_1
	msgbox GYM_NPC_5_Text_2
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_TRAINER_3, GYM_NPC_5_Text_3
	namebox GYM_NPC_5_Text_1
	msgbox GYM_NPC_5_Text_5
	closemessage
	hidenamebox
	setobjectmovementtype 1, MOVEMENT_TYPE_WANDER_AROUND
	setobjectmovementtype 2, MOVEMENT_TYPE_WANDER_AROUND
	setobjectmovementtype 3, MOVEMENT_TYPE_WANDER_AROUND
	setflag FLAG_ALKHARIDGYM_3
	release
	end

GYM_NPC_5_10:
	namebox GYM_NPC_5_Text_1
	msgbox GYM_NPC_5_Text_7
	goto GYM_NPC_5_9

GYM_NPC_5_14:
	msgbox GYM_NPC_5_Text_0
	hidenamebox
	closemessage
	applymovement VAR_LAST_TALKED, Movement_AlkharidGym_TELEPORT
	delay 30
	removeobject VAR_LAST_TALKED
	addobject 1
	clearflag FLAG_TEMP_6
	call GYM_MOVEMENT_FOUND_ALI_NPC5
	waitmovement 0
	namebox GYM_NPC_5_Text_1
	msgbox GYM_NPC_5_Text_2
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_TRAINER_3, GYM_NPC_5_Text_3
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq GYM_NPC_5_17
	namebox GYM_NPC_5_Text_1
	msgbox GYM_NPC_5_Text_4
	closemessage
	hidenamebox
	applymovement 3, MOVEMENT_WALK_LEFT
	waitmovement 0
	applymovement 3, MOVEMENT_FACE_RIGHT
	waitmovement 0
	release
	end

GYM_NPC_5_17:
	setvar VAR_POKESCAPE_ALKHARID_GYM_QUEST, 0
	end


GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC5::
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	switch VAR_TEMP_1
	case 5, GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC5_3
	case 6, GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC5_4
GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC5_1:
	waitmovement 0
	return

GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC5_3:
	applymovement 3, Movement_AlkharidGym_DID_NOT_FIND_ALI_NPC5_1
	goto GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC5_1

GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC5_4:
	applymovement 3, Movement_AlkharidGym_DID_NOT_FIND_ALI_NPC5_2
	goto GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC5_1


Movement_AlkharidGym_DID_NOT_FIND_ALI_NPC5_1:
	walk_faster_down
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_down
	walk_faster_down
	step_end

Movement_AlkharidGym_DID_NOT_FIND_ALI_NPC5_2:
	walk_faster_down
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_down
	walk_faster_down
	walk_faster_down
	step_end

GYM_MOVEMENT_FOUND_ALI_NPC5::
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	switch VAR_TEMP_1
	case 5, GYM_MOVEMENT_FOUND_ALI_NPC5_3
	case 6, GYM_MOVEMENT_FOUND_ALI_NPC5_4
GYM_MOVEMENT_FOUND_ALI_NPC5_1:
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_UP
	waitmovement 0
	return

GYM_MOVEMENT_FOUND_ALI_NPC5_3:
	applymovement 3, Movement_AlkharidGym_DID_NOT_FIND_ALI_NPC5_1
	applymovement 1, Movement_AlkharidGym_FOUND_ALI_ALI_NPC5_1
	goto GYM_MOVEMENT_FOUND_ALI_NPC5_1

GYM_MOVEMENT_FOUND_ALI_NPC5_4:
	applymovement 3, Movement_AlkharidGym_DID_NOT_FIND_ALI_NPC5_2
	applymovement 1, Movement_AlkharidGym_FOUND_ALI_ALI_NPC5_2
	goto GYM_MOVEMENT_FOUND_ALI_NPC5_1


Movement_AlkharidGym_FOUND_ALI_ALI_NPC5_1:
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_down
	walk_faster_down
	walk_faster_left
	step_end

Movement_AlkharidGym_FOUND_ALI_ALI_NPC5_2:
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_down
	walk_faster_down
	walk_faster_down
	face_left
	step_end

GYM_NPC_6::
	lock
	goto_if_unset FLAG_ALKHARIDGYM_3, GYM_NPC_6_2
GYM_NPC_6_1:
	goto_if_set FLAG_BADGE06_GET, GYM_NPC_6_5
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 0
	goto_if_eq GYM_NPC_6_10
	faceplayer
	namebox GYM_NPC_5_Text_1
	msgbox GYM_NPC_6_Text_3
GYM_NPC_6_9:
	closemessage
	release
	end

GYM_NPC_6_2:
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 15
	goto_if_eq GYM_NPC_6_7
	goto GYM_NPC_6_1

GYM_NPC_6_5:
	faceplayer
	namebox GYM_NPC_5_Text_1
	msgbox GYM_NPC_6_Text_0
	release
	end

GYM_NPC_6_7:
	faceplayer
	call CHECK_IF_ALI
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 20
	goto_if_eq GYM_NPC_6_14
	call GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC6
	namebox GYM_NPC_5_Text_1
	msgbox GYM_NPC_5_Text_2
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_TRAINER_3, GYM_NPC_5_Text_3
	namebox GYM_NPC_5_Text_1
	msgbox GYM_NPC_5_Text_5
	closemessage
	hidenamebox
	setobjectmovementtype 1, MOVEMENT_TYPE_WANDER_AROUND
	setobjectmovementtype 2, MOVEMENT_TYPE_WANDER_AROUND
	setobjectmovementtype 3, MOVEMENT_TYPE_WANDER_AROUND
	setflag FLAG_ALKHARIDGYM_3
	release
	end

GYM_NPC_6_10:
	namebox GYM_NPC_5_Text_1
	msgbox GYM_NPC_6_Text_1
	faceplayer
	namebox GYM_NPC_5_Text_1
	msgbox GYM_NPC_6_Text_2
	turnobject VAR_LAST_TALKED, DIR_NORTH
	goto GYM_NPC_6_9

GYM_NPC_6_14:
	msgbox GYM_NPC_5_Text_0
	hidenamebox
	closemessage
	applymovement VAR_LAST_TALKED, Movement_AlkharidGym_TELEPORT
	delay 30
	removeobject VAR_LAST_TALKED
	addobject 1
	clearflag FLAG_TEMP_6
	call GYM_MOVEMENT_FOUND_ALI_NPC6
	namebox GYM_NPC_5_Text_1
	msgbox GYM_NPC_5_Text_2
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_TRAINER_3, GYM_NPC_5_Text_3
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq GYM_NPC_6_17
	namebox GYM_NPC_5_Text_1
	msgbox GYM_NPC_5_Text_4
	closemessage
	hidenamebox
	applymovement 1, MOVEMENT_WALK_DOWN
	waitmovement 0
	applymovement 1, MOVEMENT_FACE_UP
	waitmovement 0
	release
	end

GYM_NPC_6_17:
	setvar VAR_POKESCAPE_ALKHARID_GYM_QUEST, 0
	end


GYM_MOVEMENT_FOUND_ALI_NPC6::
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	switch VAR_TEMP_1
	case 8, GYM_MOVEMENT_FOUND_ALI_NPC6_3
	case 9, GYM_MOVEMENT_FOUND_ALI_NPC6_4
	case 10, GYM_MOVEMENT_FOUND_ALI_NPC6_5
GYM_MOVEMENT_FOUND_ALI_NPC6_1:
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_DOWN
	waitmovement 0
	return

GYM_MOVEMENT_FOUND_ALI_NPC6_3:
	applymovement 2, Movement_AlkharidGym_DID_NOT_FIND_ALI_NPC6_1
	applymovement 1, Movement_AlkharidGym_FOUND_ALI_ALI_NPC6_1
	goto GYM_MOVEMENT_FOUND_ALI_NPC6_1

GYM_MOVEMENT_FOUND_ALI_NPC6_4:
	applymovement 2, Movement_AlkharidGym_DID_NOT_FIND_ALI_NPC6_2
	applymovement 1, Movement_AlkharidGym_FOUND_ALI_ALI_NPC6_2
	goto GYM_MOVEMENT_FOUND_ALI_NPC6_1

GYM_MOVEMENT_FOUND_ALI_NPC6_5:
	applymovement 2, Movement_AlkharidGym_DID_NOT_FIND_ALI_NPC6_3
	applymovement 1, Movement_AlkharidGym_FOUND_ALI_ALI_NPC6_3
	goto GYM_MOVEMENT_FOUND_ALI_NPC6_1


Movement_AlkharidGym_FOUND_ALI_ALI_NPC6_1:
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_up
	walk_faster_up
	face_left
	step_end

Movement_AlkharidGym_FOUND_ALI_ALI_NPC6_2:
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_up
	face_left
	step_end

Movement_AlkharidGym_FOUND_ALI_ALI_NPC6_3:
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_up
	walk_faster_up
	face_right
	step_end

GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC6::
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	switch VAR_TEMP_1
	case 8, GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC6_3
	case 9, GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC6_4
	case 10, GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC6_5
GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC6_1:
	waitmovement 0
	return

GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC6_3:
	applymovement 2, Movement_AlkharidGym_DID_NOT_FIND_ALI_NPC6_1
	goto GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC6_1

GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC6_4:
	applymovement 2, Movement_AlkharidGym_DID_NOT_FIND_ALI_NPC6_2
	goto GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC6_1

GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC6_5:
	applymovement 2, Movement_AlkharidGym_DID_NOT_FIND_ALI_NPC6_3
	goto GYM_MOVEMENT_DID_NOT_FIND_ALI_NPC6_1


Movement_AlkharidGym_DID_NOT_FIND_ALI_NPC6_1:
	walk_faster_up
	walk_faster_up
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_up
	walk_faster_up
	face_player
	step_end

Movement_AlkharidGym_DID_NOT_FIND_ALI_NPC6_2:
	walk_faster_up
	walk_faster_up
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_up
	face_player
	step_end

Movement_AlkharidGym_DID_NOT_FIND_ALI_NPC6_3:
	walk_faster_up
	walk_faster_up
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_up
	walk_faster_up
	face_player
	step_end

Movement_AlkharidGym_NPC_5:
	walk_faster_down
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_down
	walk_faster_down
	face_player
	step_end

Movement_AlkharidGym_NPC_5_Ali:
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_down
	walk_faster_down
	face_player
	step_end

Movement_AlkharidGym_NPC_6:
	walk_faster_up
	walk_faster_up
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_up
	face_player
	step_end

Movement_AlkharidGym_NPC_6_Ali:
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_up
	face_player
	step_end

ALKHARID_GYM_ARTWORK::
	msgbox ALKHARID_GYM_ARTWORK_Text_0
	release
	end


GYM_NPC_5_Text_0:
	.string "Guards help me as I make my escape!$"

GYM_NPC_5_Text_1:
	.string "Warrior$"

GYM_NPC_5_Text_2:
	.string "Brother, I will help thee with this\n"
	.string "infidel!$"

GYM_NPC_5_Text_3:
	.string "Consider that a warning!$"

GYM_NPC_5_Text_4:
	.string "You have defeated us!\p"
	.string "But the Prince has made his escape so\n"
	.string "we have done our jobs.$"

GYM_NPC_5_Text_5:
	.string "You have defeated us!\p"
	.string "But the Prince is still somewhere\n"
	.string "around the Palace.$"

GYM_NPC_5_Text_6:
	.string "Have you heard of our lord and savior\n"
	.string "Tumeken and Elindis?$"

GYM_NPC_5_Text_7:
	.string "Do you think you have what it takes to\n"
	.string "defeat Al Kharid's elite fighting force?$"

GYM_NPC_5_Text_8:
	.string "My prince has fled the scene!\p"
	.string "Just as we planned!$"

GYM_NPC_6_Text_0:
	.string "Have you ever wondered who drew that\n"
	.string "tastyful picture upon the wall?\p"
	.string "I believe it was an artist called Mod\n"
	.string "Blkwitch.\p"
	.string "I swear it has some magical power over\n"
	.string "me everytime I look at it though…$"

GYM_NPC_6_Text_1:
	.string "My, this picture…\p"
	.string "I feel so many things from it…\p"
	.string "Hail lord Zam…$"

GYM_NPC_6_Text_2:
	.string "Huh?\p"
	.string "What was I saying!?\p"
	.string "Prince Ali is the only man for me.$"

GYM_NPC_6_Text_3:
	.string "My brothers, have you seen this picture\n"
	.string "yet?$"

ALKHARID_GYM_ARTWORK_Text_0:
	.string "This piece is entitled: 'So… you think\n"
	.string "you can take him?'$"

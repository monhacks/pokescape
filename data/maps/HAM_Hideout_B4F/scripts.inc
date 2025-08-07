HAM_Hideout_B4F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, HAM_Hideout_B4F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HAM_Hideout_B4F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

HAM_Hideout_B4F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call HAM_HIDEOUT_B4F_STATE
	return

HAM_Hideout_B4F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_POKESCAPE_STORYMODE_PROGRESS, 245, STORYMODE_HAMHIDEOUT_BOSS_ROOM
	.2byte 0


HAM_HIDEOUT_B4F_STATE::
	setflag FLAG_TEMP_A
	setflag FLAG_TEMP_B
	setflag FLAG_TEMP_C
	setflag FLAG_TEMP_D
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 245
	goto_if_eq HAM_HIDEOUT_B4F_STATE_2
HAM_HIDEOUT_B4F_STATE_1:
	return

HAM_HIDEOUT_B4F_STATE_2:
	clearflag FLAG_TEMP_B
	clearflag FLAG_TEMP_C
	clearflag FLAG_TEMP_D
	goto HAM_HIDEOUT_B4F_STATE_1


STORYMODE_HAMHIDEOUT_BOSS_ROOM::
	lockall
	call FOLLOWER_REMOVE
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, movement_camera_setup_hamevent
	waitmovement 0
	applymovement 2, MOVEMENT_INTERACT_DOWN
	namebox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_0
	msgbox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_1
	applymovement 1, MOVEMENT_INTERACT_UP
	namebox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_2
	msgbox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_3
	applymovement 2, MOVEMENT_INTERACT_DOWN
	namebox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_0
	msgbox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_4
	applymovement 1, MOVEMENT_INTERACT_UP
	namebox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_2
	msgbox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_5
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_CAMERA, movement_camera_movedown_hamevent
	applymovement OBJ_EVENT_ID_PLAYER, movement_HAM_Hideout_finale_Player_Left_1
	applymovement 5, movement_HAM_Hideout_finale_Player_Right_1
	waitmovement 0
	namebox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_6
	msgbox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_7
	hidenamebox
	closemessage
	playse SE_PIN
	applymovement 1, MOVEMENT_QUESTIONMARK_FACEDOWN
	applymovement 2, MOVEMENT_QUESTIONMARK_FACEDOWN
	waitmovement 0
	delay 90
	namebox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_2
	msgbox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_8
	namebox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_0
	msgbox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_9
	hidenamebox
	closemessage
	clearflag FLAG_TEMP_A
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEDOWN
	applymovement 5, Movement_InteractFACEDOWN
	addobject 6
	applymovement 6, movement_surroundplayer_6
	delay 16
	addobject 7
	applymovement 7, movement_surroundplayer_7
	delay 16
	addobject 8
	applymovement 8, movement_surroundplayer_8
	delay 16
	addobject 9
	applymovement 9, movement_surroundplayer_9
	delay 16
	addobject 10
	applymovement 10, movement_surroundplayer_10
	delay 16
	addobject 11
	applymovement 11, movement_surroundplayer_11
	delay 16
	addobject 12
	applymovement 12, movement_surroundplayer_12
	delay 16
	addobject 13
	applymovement 13, movement_surroundplayer_13
	applymovement OBJ_EVENT_ID_PLAYER, movement_surroundplayer_panic_player
	applymovement 5, movement_surroundplayer_panic_zanik
	waitmovement 13
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACELEFT
	applymovement 5, Movement_InteractFACERIGHT
	waitmovement 0
	namebox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_6
	msgbox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_10
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, movement_playerapproaches_sigmund
	applymovement 5, movement_zanikapproaches_grunts
	applymovement 6, movement_surroundzanik_6
	applymovement 7, movement_surroundzanik_7
	applymovement 8, movement_surroundzanik_8
	applymovement 9, movement_surroundzanik_9
	applymovement 10, movement_surroundzanik_10
	applymovement 11, movement_surroundzanik_11
	applymovement 12, movement_surroundzanik_12
	applymovement 13, movement_surroundzanik_13
	waitmovement 0
	applymovement 2, movement_Johanhus_walkover_toPlayer
	namebox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_2
	msgbox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_11
	waitmovement 0
	applymovement 2, MOVEMENT_INTERACT_LEFT
	applymovement 1, Movement_InteractFACERIGHT
	namebox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_0
	msgbox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_12
	hidenamebox
	closemessage
	waitmovement 0
	applymovement 1, Movement_InteractFACEDOWN
	namebox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_2
	msgbox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_13
	hidenamebox
	closemessage
	applymovement 2, movement_HAM_Hideout_Johanhus_approachplayer
	applymovement 1, movement_HAM_Hideout_Sigmund_exit
	waitmovement 2
	delay 30
	namebox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_0
	msgbox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_14
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_HAM_HIDEOUT_JOHANHUS, STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_15
	namebox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_0
	msgbox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_16
	hidenamebox
	closemessage
	namebox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_0
	msgbox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_17
	hidenamebox
	closemessage
	namebox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_6
	msgbox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_18
	hidenamebox
	closemessage
	playse SE_FLEE
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MAIN_STORY, 11
	addvar VAR_GAMEMODE_LEVEL_CAP, 5
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 250
	setflag FLAG_HAM_HIDEOUT_DEFEATED_GUARDS_TO_LEAVE
	call FOLLOWER_REMOVE
	warp MAP_LUMBRIDGE_FOREST, 28, 5
	waitstate
	releaseall
	end
	addobject 35
	clearflag FLAG_TEMP_1C
	applymovement 35, movement_HAM_Hideout_finale_walk_up
	waitmovement 0
	applymovement 35, movement_HAM_Hideout_finale_walk_up
	applymovement OBJ_EVENT_ID_PLAYER, movement_HAM_Hideout_finale_walk_up
	applymovement OBJ_EVENT_ID_FOLLOWER, movement_HAM_Hideout_finale_walk_up
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, movement_HAM_Hideout_camera_2
	waitmovement 0
	applymovement 36, movement_HAM_Hideout_finale_reaction_1
	applymovement 37, movement_HAM_Hideout_finale_reaction_2
	applymovement 38, movement_HAM_Hideout_finale_reaction_1
	applymovement 39, movement_HAM_Hideout_finale_reaction_3
	applymovement 40, movement_HAM_Hideout_finale_reaction_2
	applymovement 41, movement_HAM_Hideout_finale_reaction_1
	applymovement 42, movement_HAM_Hideout_finale_reaction_3
	applymovement 21, MOVEMENT_EXCLAMATIONMARK
	waitmovement 0
	namebox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_0
	msgbox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_19
	applymovement 23, movement_HAM_Hideout_finale_reaction_1
	waitmovement 0
	namebox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_2
	msgbox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_19
	namebox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_0
	msgbox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_20
	namebox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_2
	msgbox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_21
	setobjectxy 43, 40, 34
	setobjectxyperm 43, 40, 34
	applymovement 43, movement_HAM_Hideout_finale_walk_up
	applymovement 42, movement_HAM_Hideout_finale_swarm_left_1
	applymovement 41, movement_HAM_Hideout_finale_swarm_right_1
	applymovement 39, movement_HAM_Hideout_finale_swarm_left_2
	applymovement 37, movement_HAM_Hideout_finale_swarm_right_2
	waitmovement 0
	applymovement 23, movement_HAM_Hideout_finale_Sigmund_exit
	waitmovement 0
	playse SE_EXIT
	removeobject 23
	setflag FLAG_TEMP_10
	namebox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_6
	msgbox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_22
	applymovement 40, movement_HAM_Hideout_finale_misc_1
	applymovement 21, movement_HAM_Hideout_finale_Johanhus_1
	applymovement OBJ_EVENT_ID_CAMERA, movement_HAM_Hideout_camera_3
	waitmovement 0
	special RemoveCameraObject
	namebox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_0
	msgbox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_23
	trainerbattle_no_intro TRAINER_HAM_HIDEOUT_JOHANHUS, STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_15
	namebox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_0
	msgbox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_16
	applymovement 21, Movement_InteractFACERIGHT
	namebox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_0
	msgbox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_24
	applymovement 21, Movement_InteractFACELEFT
	namebox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_0
	msgbox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_25
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_InteractFACEPLAYER
	namebox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_6
	msgbox STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_26
	fadescreenswapbuffers FADE_TO_BLACK
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MAIN_STORY, 11
	addvar VAR_GAMEMODE_LEVEL_CAP, 5
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 250
	setflag FLAG_HAM_HIDEOUT_DEFEATED_GUARDS_TO_LEAVE
	call FOLLOWER_REMOVE
	warp MAP_LUMBRIDGE_FOREST, 28, 5
	waitstate
	releaseall
	end


movement_HAM_Hideout_Johanhus_approachplayer:
	walk_left
	face_down
	step_end

movement_HAM_Hideout_Sigmund_exit:
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_down
	set_invisible
	step_end

movement_Johanhus_walkover_toPlayer:
	walk_right
	walk_right
	walk_down
	walk_down
	walk_left
	step_end

movement_surroundzanik_12:
	delay_16
	delay_16
	walk_up
	step_end

movement_surroundzanik_13:
	delay_16
	delay_16
	walk_up
	step_end

movement_surroundzanik_6:
	delay_16
	delay_16
	walk_right
	face_down
	step_end

movement_surroundzanik_7:
	delay_16
	delay_16
	walk_left
	face_down
	step_end

movement_surroundzanik_8:
	delay_16
	delay_16
	walk_right
	step_end

movement_surroundzanik_9:
	delay_16
	delay_16
	walk_left
	step_end

movement_surroundzanik_10:
	delay_16
	delay_16
	walk_up
	face_right
	step_end

movement_surroundzanik_11:
	delay_16
	delay_16
	walk_up
	face_left
	step_end

movement_zanikapproaches_grunts:
	delay_16
	delay_16
	walk_right
	face_down
	step_end

movement_camera_movedown_hamevent:
	walk_slow_down
	walk_slow_down
	step_end

movement_camera_setup_hamevent:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

movement_playerapproaches_sigmund:
	walk_left
	walk_up
	step_end

movement_HAM_Hideout_finale_Player_Left_1:
	walk_up
	walk_up
	walk_up
	walk_right
	face_up
	step_end

movement_HAM_Hideout_finale_Player_Right_1:
	delay_16
	walk_up
	walk_up
	walk_up
	walk_left
	face_up
	step_end

movement_surroundplayer_6:
	walk_up
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	face_right
	step_end

movement_surroundplayer_7:
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	face_left
	step_end

movement_surroundplayer_8:
	walk_up
	walk_left
	walk_left
	walk_up
	walk_up
	face_right
	step_end

movement_surroundplayer_9:
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	face_left
	step_end

movement_surroundplayer_10:
	walk_up
	walk_left
	walk_left
	walk_up
	face_right
	step_end

movement_surroundplayer_11:
	walk_up
	walk_right
	walk_right
	walk_up
	face_left
	step_end

movement_surroundplayer_12:
	walk_up
	walk_left
	face_up
	step_end

movement_surroundplayer_13:
	walk_up
	walk_right
	face_up
	step_end

movement_surroundplayer_panic_player:
	face_right
	delay_8
	face_down
	delay_8
	face_left
	delay_8
	face_right
	delay_8
	face_down
	delay_8
	face_right
	step_end

movement_surroundplayer_panic_zanik:
	face_left
	delay_8
	face_down
	delay_8
	face_right
	delay_8
	face_left
	delay_8
	face_down
	delay_8
	face_left
	step_end

MOVEMENT_QUESTIONMARK_FACEDOWN:
	emote_question_mark
	face_down
	step_end

STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_0:
	.string "Johanhus$"

STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_1:
	.string "So the capture was successful?\p"
	.string "Excellent, once we hand the prince over\n"
	.string "to Lady Keli, we'll be one step closer.$"

STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_2:
	.string "Sigmund$"

STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_3:
	.string "Good, then with Patty and Babe\n"
	.string "stationed in Varrock, I shall make my\l"
	.string "way to the Wilderness to make the final\l"
	.string "preparations as planned.$"

STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_4:
	.string "And you are sure this will save the\n"
	.string "world of the scourge that are monsters\l"
	.string "Sigmund?$"

STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_5:
	.string "Johanhus my friend.\p"
	.string "Everyday monsters cause problems\n"
	.string "around the world.\p"
	.string "And now adventurers, cooks, kings,\n"
	.string "queens, pawns and even goblins have\l"
	.string "decided to use them as their own to\l"
	.string "attain power.\p"
	.string "What we want is to prove to them that\n"
	.string "we hold absolute power.\p"
	.string "And then they will see that the only way\n"
	.string "for this world to be free is to kill and\l"
	.string "abandon every single monster in the\l"
	.string "world.\p"
	.string "And when that happens…\n"
	.string "The world will be at peace.{PAUSE 30}\l"
	.string "Just like we have always wanted…$"

STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_6:
	.string "Zanik$"

STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_7:
	.string "Not if we have anything to say with\n"
	.string "this!$"

STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_8:
	.string "Looks like some monsters just entered\n"
	.string "a den they shouldn't have, Johanhus.$"

STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_9:
	.string "Indeed, noisy little things aren't they.\p"
	.string "What shall we do?$"

STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_10:
	.string "Shoot there's so many of them!\p"
	.string "{PLAYER}, I will take care of these\n"
	.string "grunts, while you handle those guys.$"

STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_11:
	.string "I warned you what would happen if we\n"
	.string "were to meet again.$"

STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_12:
	.string "Hang on Sigmund, I'll handle this, you've\n"
	.string "got places to be.$"

STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_13:
	.string "Very well dear friend, I guess this is\n"
	.string "goodbye to you aswell pest.$"

STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_14:
	.string "Look, I get it.\p"
	.string "You believe you are righteous.\p"
	.string "You believe you are correct.\p"
	.string "You believe in yourself and that what\n"
	.string "you are doing is the good thing to do.\p"
	.string "And as do I.\p"
	.string "And so as leader of Humans Against\n"
	.string "Monsters, on behalf of the world.\p"
	.string "I will smite you…$"

STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_15:
	.string "NO!\p"
	.string "This cannot be!$"

STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_16:
	.string "So it seems my power is insignificant to\n"
	.string "yours.\p"
	.string "I guess it seems weird to use the power\n"
	.string "of monsters to fight when we ourselves\l"
	.string "use monsters?\p"
	.string "But what choice do we have?\p"
	.string "You and everyone else changed the\n"
	.string "rules.\p"
	.string "What is a dagger to a dragon?\p"
	.string "The world is changing.\p"
	.string "And we adapted.\p"
	.string "But this is not the world we wish to live\n"
	.string "in.$"

STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_17:
	.string "I will submit just this once.\p"
	.string "Out of goodness of my heart, you can\n"
	.string "even let the little gremlin over there\l"
	.string "live as well.\p"
	.string "As at the end of the day it doesn't\n"
	.string "matter.\p"
	.string "None of this matters.\p"
	.string "If Sigmund is right, you can not stop\n"
	.string "him.\p"
	.string "And he will make a world free of the\n"
	.string "monsters that once caused us so much\l"
	.string "pain.$"

STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_18:
	.string "Quick while he is monologuing\n"
	.string "{PLAYER}, lets get out of here!$"

STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_19:
	.string "$"

STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_20:
	.string "Indeed. What shall we do?$"

STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_21:
	.string "I will head to the wilderness as\n"
	.string "planned.\p"
	.string "I will station Patty and Babe in Varrock\n"
	.string "for the thing we discussed.\p"
	.string "As for these guys and the prince.\p"
	.string "Let us show them what happens to\n"
	.string "monster sympathisers taking a wrong\l"
	.string "turn.$"

STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_22:
	.string "Shoot.\p"
	.string "{PLAYER}!\p"
	.string "I will handle this.\p"
	.string "You go and get them!$"

STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_23:
	.string "I get it.\p"
	.string "You believe you are righteous.\p"
	.string "You believe you are correct.\p"
	.string "You believe in yourself and that what\n"
	.string "you are doing is the good thing to do.\p"
	.string "And as do I.\p"
	.string "As leader of Humans Against Monsters,\n"
	.string "on behalf of the world.\p"
	.string "I will smite you..$"

STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_24:
	.string "I will submit just this once.\p"
	.string "Take this prince and leave.$"

STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_25:
	.string "Out of goodness of my heart, you can\n"
	.string "even let the little gremlin over there\l"
	.string "live as well.\p"
	.string "It doesn't matter.\p"
	.string "None of this matters.\p"
	.string "If Sigmund is right, you can not stop\n"
	.string "him.\p"
	.string "And he will make a world free of the\n"
	.string "monsters that once caused us so much\l"
	.string "pain..$"

STORYMODE_HAMHIDEOUT_BOSS_ROOM_Text_26:
	.string "Quick while he is monologuing\n"
	.string "{PLAYER}.\p"
	.string "Grab the Prince and run!$"

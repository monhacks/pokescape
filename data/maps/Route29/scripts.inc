Route29_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route29_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, Route29_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route29_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 11
	call WEATHER_CHANGE_AREA_DESERT_CALM
	return

Route29_MapScripts_MAP_SCRIPT_ON_LOAD:
	call METATILES_ROUTE29
	return


BATTLE_ROUTE29_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE29_TRAINER_1, BATTLE_ROUTE29_TRAINER_1_Text_0, BATTLE_ROUTE29_TRAINER_1_Text_1
	namebox BATTLE_ROUTE29_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE29_TRAINER_1_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE29_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE29_TRAINER_2, BATTLE_ROUTE29_TRAINER_2_Text_0, BATTLE_ROUTE29_TRAINER_2_Text_1
	namebox BATTLE_ROUTE29_TRAINER_2_Text_2
	msgbox BATTLE_ROUTE29_TRAINER_2_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE29_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE29_TRAINER_3, BATTLE_ROUTE29_TRAINER_3_Text_0, BATTLE_ROUTE29_TRAINER_3_Text_1
	namebox BATTLE_ROUTE29_TRAINER_3_Text_2
	msgbox BATTLE_ROUTE29_TRAINER_3_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE29_TRAINER_4::
	trainerbattle_single TRAINER_ROUTE29_TRAINER_4, BATTLE_ROUTE29_TRAINER_4_Text_0, BATTLE_ROUTE29_TRAINER_4_Text_1
	namebox BATTLE_ROUTE29_TRAINER_4_Text_2
	msgbox BATTLE_ROUTE29_TRAINER_4_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE29_TRAINER_5::
	trainerbattle_single TRAINER_ROUTE29_TRAINER_5, BATTLE_ROUTE29_TRAINER_5_Text_0, BATTLE_ROUTE29_TRAINER_5_Text_1
	namebox BATTLE_ROUTE29_TRAINER_5_Text_2
	msgbox BATTLE_ROUTE29_TRAINER_5_Text_3
	hidenamebox
	namebox BATTLE_ROUTE29_TRAINER_5_Text_4
	msgbox BATTLE_ROUTE29_TRAINER_5_Text_5
	hidenamebox
	release
	end


METATILES_ROUTE29::
	switch VAR_DUNGEONEERING_DOOR_ROUTE29_STATE
	case 5, METATILES_ROUTE29_3
	case 10, METATILES_ROUTE29_4
	case 15, METATILES_ROUTE29_5
METATILES_ROUTE29_1:
	return

METATILES_ROUTE29_3:
	setmetatile 17, 15, METATILE_AlKharid_SPARKLE_CLIFF_LEFT, 1
	setmetatile 17, 22, METATILE_AlKharid_SPARKLE_CLIFF_LEFT, 1
	setmetatile 28, 13, METATILE_AlKharid_SPARKLE_CLIFF_RIGHT, 1
	setmetatile 32, 24, METATILE_AlKharid_SPARKLE_CLIFF_RIGHT, 1
	setmetatile 22, 24, METATILE_AlKharid_SPARKLE_SAND, 0
	setmetatile 20, 22, METATILE_AlKharid_SPARKLE_SAND, 0
	setmetatile 11, 19, METATILE_AlKharid_SPARKLE_SAND, 0
	setmetatile 32, 16, METATILE_AlKharid_SPARKLE_SAND, 0
	setmetatile 34, 18, METATILE_AlKharid_SPARKLE_SAND, 0
	setmetatile 36, 13, METATILE_AlKharid_SPARKLE_SAND, 0
	setmetatile 32, 10, METATILE_AlKharid_SPARKLE_SAND, 0
	setmetatile 22, 14, METATILE_AlKharid_SPARKLE_SAND, 0
	setmetatile 13, 14, METATILE_AlKharid_SPARKLE_SAND, 0
	setmetatile 31, 9, METATILE_AlKharid_SPARKLE_SAND, 0
	goto METATILES_ROUTE29_1

METATILES_ROUTE29_4:
	setmetatile 17, 15, METATILE_AlKharid_CLIFF_LEFT, 1
	setmetatile 17, 22, METATILE_AlKharid_CLIFF_LEFT, 1
	setmetatile 28, 13, METATILE_AlKharid_CLIFF_RIGHT, 1
	setmetatile 32, 24, METATILE_AlKharid_CLIFF_RIGHT, 1
	setmetatile 22, 24, METATILE_AlKharid_ENCOUNTER_SAND, 0
	setmetatile 20, 22, METATILE_AlKharid_ENCOUNTER_SAND, 0
	setmetatile 11, 19, METATILE_AlKharid_ENCOUNTER_SAND, 0
	setmetatile 32, 16, METATILE_AlKharid_ENCOUNTER_SAND, 0
	setmetatile 34, 18, METATILE_AlKharid_ENCOUNTER_SAND, 0
	setmetatile 36, 13, METATILE_AlKharid_ENCOUNTER_SAND, 0
	setmetatile 32, 10, METATILE_AlKharid_ENCOUNTER_SAND, 0
	setmetatile 22, 14, METATILE_AlKharid_ENCOUNTER_SAND, 0
	setmetatile 13, 14, METATILE_AlKharid_ENCOUNTER_SAND, 0
	setmetatile 31, 9, METATILE_AlKharid_ENCOUNTER_SAND, 0
	goto METATILES_ROUTE29_1

METATILES_ROUTE29_5:
	setmetatile 24, 11, 121, 0
	goto METATILES_ROUTE29_1


DUNGEONEERING_DOOR_ROUTE29_KEYS::
	compare VAR_DUNGEONEERING_DOOR_ROUTE29_STATE, 5
	goto_if_eq DUNGEONEERING_DOOR_ROUTE29_KEYS_2
DUNGEONEERING_DOOR_ROUTE29_KEYS_1:
	end

DUNGEONEERING_DOOR_ROUTE29_KEYS_2:
	setvar VAR_DUNGEONEERING_DOOR_ROUTE29_STATE, 10
	msgbox DUNGEONEERING_DOOR_ROUTE29_KEYS_Text_0
	playfanfare MUS_PS_GET_ITEM
	msgbox DUNGEONEERING_DOOR_ROUTE29_KEYS_Text_1
	waitfanfare
	closemessage
	call METATILES_ROUTE29
	special DrawWholeMapView
	goto DUNGEONEERING_DOOR_ROUTE29_KEYS_1


DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS::
	compare VAR_DUNGEONEERING_DOOR_ROUTE29_STATE, 5
	goto_if_eq DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_2
DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_1:
	end

DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_2:
	random 11
	switch VAR_RESULT
	case 0, DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_6
	case 1, DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_7
	case 2, DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_8
	case 3, DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_9
	case 4, DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_10
	case 5, DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_11
	case 6, DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_12
	case 7, DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_13
	case 8, DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_14
	case 9, DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_15
	msgbox DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_Text_10
DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_4:
	closemessage
	goto DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_1

DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_6:
	msgbox DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_Text_0
	goto DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_4

DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_7:
	msgbox DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_Text_1
	goto DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_4

DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_8:
	msgbox DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_Text_2
	goto DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_4

DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_9:
	msgbox DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_Text_3
	goto DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_4

DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_10:
	msgbox DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_Text_4
	goto DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_4

DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_11:
	msgbox DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_Text_5
	goto DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_4

DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_12:
	msgbox DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_Text_6
	goto DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_4

DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_13:
	msgbox DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_Text_7
	goto DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_4

DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_14:
	msgbox DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_Text_8
	giveitem ITEM_CABBAGE, 1
	goto DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_4

DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_15:
	msgbox DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_Text_9
	giveitem ITEM_SPIRIT_SHARD, 1
	goto DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_4


DUNGEONEERING_DOOR_ROUTE29::
	compare VAR_DUNGEONEERING_DOOR_ROUTE29_STATE, 15
	goto_if_ne DUNGEONEERING_DOOR_ROUTE29_2
	msgbox DUNGEONEERING_DOOR_ROUTE29_Text_4
	closemessage
DUNGEONEERING_DOOR_ROUTE29_1:
	release
	end

DUNGEONEERING_DOOR_ROUTE29_2:
	msgbox DUNGEONEERING_DOOR_ROUTE29_Text_0, MSGBOX_YESNO
	closemessage
	compare VAR_RESULT, 0
	goto_if_ne DUNGEONEERING_DOOR_ROUTE29_5
	goto DUNGEONEERING_DOOR_ROUTE29_1

DUNGEONEERING_DOOR_ROUTE29_5:
	compare VAR_DUNGEONEERING_DOOR_ROUTE29_STATE, 10
	goto_if_eq DUNGEONEERING_DOOR_ROUTE29_7
	playse SE_FU_ZAKU
	waitse
	delay 30
	msgbox DUNGEONEERING_DOOR_ROUTE29_Text_3
	closemessage
	setvar VAR_DUNGEONEERING_DOOR_ROUTE29_STATE, 5
	call METATILES_ROUTE29
	special DrawWholeMapView
	goto DUNGEONEERING_DOOR_ROUTE29_1

DUNGEONEERING_DOOR_ROUTE29_7:
	playse SE_SWITCH
	msgbox DUNGEONEERING_DOOR_ROUTE29_Text_1
	closemessage
	waitse
	delay 30
	setmetatile 24, 11, 121, 0
	special DrawWholeMapView
	playse SE_TRUCK_DOOR
	msgbox DUNGEONEERING_DOOR_ROUTE29_Text_2
	closemessage
	setvar VAR_DUNGEONEERING_DOOR_ROUTE29_STATE, 15
	setflag FLAG_DUNGEONEERING_DOOR_ROUTE29
	goto DUNGEONEERING_DOOR_ROUTE29_1


BATTLE_ROUTE29_TRAINER_1_Text_0:
	.string "Tell me where the Strykewyrms are!\p"
	.string "Now!$"

BATTLE_ROUTE29_TRAINER_1_Text_1:
	.string "Keep your secrets then, noob.$"

BATTLE_ROUTE29_TRAINER_1_Text_2:
	.string "Pay2Slay$"

BATTLE_ROUTE29_TRAINER_1_Text_3:
	.string "I've been looking for the Strykewyrms\n"
	.string "for hours.\p"
	.string "I was told they were found in the caves\n"
	.string "and desert but I have yet to come\l"
	.string "across any.$"

BATTLE_ROUTE29_TRAINER_2_Text_0:
	.string "Minerals are truly fascinating don't\n"
	.string "you think?$"

BATTLE_ROUTE29_TRAINER_2_Text_1:
	.string "Keep your strong monsters.\p"
	.string "I will keep to my minerals.$"

BATTLE_ROUTE29_TRAINER_2_Text_2:
	.string "0 R E Z$"

BATTLE_ROUTE29_TRAINER_3_Text_0:
	.string "I am examining this place for ancient\n"
	.string "relics.\p"
	.string "Do not disturb me!$"

BATTLE_ROUTE29_TRAINER_3_Text_1:
	.string "What do you mean the Digsite is north?$"

BATTLE_ROUTE29_TRAINER_3_Text_2:
	.string "Archaeologist$"

BATTLE_ROUTE29_TRAINER_4_Text_0:
	.string "I am getting real close to Falador.\p"
	.string "Get out of my way!$"

BATTLE_ROUTE29_TRAINER_4_Text_1:
	.string "I will keep going south.\p"
	.string "Eventually I will find Falador.$"

BATTLE_ROUTE29_TRAINER_4_Text_2:
	.string "DirkGently3$"

BATTLE_ROUTE29_TRAINER_5_Text_0:
	.string "Brother there is an enemy opposing us.\p"
	.string "Brother we must approach this enemy!\p"
	.string "No brother it is opposing us, Attack!$"

BATTLE_ROUTE29_TRAINER_5_Text_1:
	.string "Bro: Brother we lost! How could this\n"
	.string "be?!\p"
	.string "Brother: Shut up.$"

BATTLE_ROUTE29_TRAINER_5_Text_2:
	.string "Bro$"

BATTLE_ROUTE29_TRAINER_5_Text_3:
	.string "Brother we lost! How could this be?!$"

BATTLE_ROUTE29_TRAINER_5_Text_4:
	.string "Brother$"

BATTLE_ROUTE29_TRAINER_5_Text_5:
	.string "Shut up Bro.$"

DUNGEONEERING_DOOR_ROUTE29_KEYS_Text_0:
	.string "You shift through the sand…{PAUSE 15}…$"

DUNGEONEERING_DOOR_ROUTE29_KEYS_Text_1:
	.string "{PLAYER} found a DUNGEON KEY.$"

DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_Text_0:
	.string "You shift through the sand…\p"
	.string "You find nothing except some molten\n"
	.string "glass.$"

DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_Text_1:
	.string "You shift through the sand…\p"
	.string "You find nothing except a crushed\n"
	.string "gemstone.$"

DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_Text_2:
	.string "You shift through the sand…\p"
	.string "You find some sparkly but stinky\n"
	.string "kalphite poop.$"

DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_Text_3:
	.string "You shift through the sand…\p"
	.string "You find a shiny scarab!\p"
	.string "…{PAUSE 30}…{PAUSE 30} But it fled before the battle even\n"
	.string "begun…$"

DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_Text_4:
	.string "You shift through the sand…\p"
	.string "You find nothing interesting at all.$"

DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_Text_5:
	.string "You shift through the sand…\p"
	.string "You find a one of a kind antique Frogeel\n"
	.string "Plush!\p"
	.string "…{PAUSE 30}…{PAUSE 30} But unearthing it cause it to\n"
	.string "disinigrate and is now nothing but\l"
	.string "sand…$"

DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_Text_6:
	.string "You shift through the sand…\p"
	.string "The grains just fall through your\n"
	.string "hands.$"

DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_Text_7:
	.string "You shift through the sand…\p"
	.string "You find some sort of remains.\n"
	.string "YUCK!$"

DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_Text_8:
	.string "You shift through the sand…\p"
	.string "You find a cabbage.$"

DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_Text_9:
	.string "You shift through the sand…\p"
	.string "You a Spirit Shard!$"

DUNGEONEERING_DOOR_ROUTE29_FAKE_KEYS_Text_10:
	.string "You shift through the sand…\p"
	.string "And nothing interesting happens…$"

DUNGEONEERING_DOOR_ROUTE29_Text_0:
	.string "It appears to be a mysterious door.\p"
	.string "Would you like to try and pry it open?$"

DUNGEONEERING_DOOR_ROUTE29_Text_1:
	.string "The DUNGEON KEY slots into a hole.$"

DUNGEONEERING_DOOR_ROUTE29_Text_2:
	.string "The door opens.$"

DUNGEONEERING_DOOR_ROUTE29_Text_3:
	.string "The door refuses to open.\p"
	.string "Maybe there is something nearby that\n"
	.string "can open it.$"

DUNGEONEERING_DOOR_ROUTE29_Text_4:
	.string "The door is already open.$"

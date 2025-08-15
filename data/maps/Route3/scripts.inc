Route3_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 1
	return


ITEM_MUDSKIPPER_SOUND_1::
	finditem ITEM_SPIRIT_CHARM
	end


BATTLE_ROUTE3_Trainer_2::
	trainerbattle_single TRAINER_ROUTE3_TRAINER_2, BATTLE_ROUTE3_Trainer_2_Text_0, BATTLE_ROUTE3_Trainer_2_Text_1
	msgbox BATTLE_ROUTE3_Trainer_2_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE3_Trainer_1::
	trainerbattle_single TRAINER_ROUTE3_TRAINER_1, BATTLE_ROUTE3_Trainer_1_Text_0, BATTLE_ROUTE3_Trainer_1_Text_1
	msgbox BATTLE_ROUTE3_Trainer_1_Text_2
	hidenamebox
	release
	end


Script_Cauldron::
	msgbox Script_Cauldron_Text_0
	closemessage
	release
	end


Script_Wendy_1::
	lock
	faceplayer
	namebox Script_Wendy_1_Text_0
	checktrainerflag TRAINER_MAGGIE_1
	goto_if 0, Script_Wendy_1_2
	msgbox Script_Wendy_1_Text_2
	release
	end

Script_Wendy_1_2:
	msgbox Script_Wendy_1_Text_1
	release
	end


NPC_SKELETAL_OX_NORMAN::
	lock
	namebox NPC_SKELETAL_OX_NORMAN_Text_0
	playmoncry SPECIES_SKELETALOX_MALE_FORM, 0
	msgbox NPC_SKELETAL_OX_NORMAN_Text_1
	waitmoncry
	hidenamebox
	release
	end


NPC_SKELETAL_OX_BABE::
	lock
	namebox NPC_SKELETAL_OX_BABE_Text_0
	playmoncry SPECIES_SKELETALOX_FEMALE_FORM, 0
	msgbox NPC_SKELETAL_OX_BABE_Text_1
	waitmoncry
	hidenamebox
	release
	end


NPC_CAT_TROGS::
	lock
	faceplayer
	namebox NPC_CAT_TROGS_Text_0
	playmoncry SPECIES_CAT_PURPLE_FORM, 0
	msgbox NPC_CAT_TROGS_Text_1
	waitmoncry
	hidenamebox
	release
	end


BATTLE_MUDSKIPPERSOUND2_TRAINER_1::
	trainerbattle_single TRAINER_MUDSKIPPERSOUND2_TRAINER_1, BATTLE_MUDSKIPPERSOUND2_TRAINER_1_Text_0, BATTLE_MUDSKIPPERSOUND2_TRAINER_1_Text_1
	msgbox BATTLE_MUDSKIPPERSOUND2_TRAINER_1_Text_2
	hidenamebox
	closemessage
	release
	end


BATTLE_MUDSKIPPERSOUND2_TRAINER_2::
	trainerbattle_single TRAINER_MUDSKIPPERSOUND2_TRAINER_2, BATTLE_MUDSKIPPERSOUND2_TRAINER_2_Text_0, BATTLE_MUDSKIPPERSOUND2_TRAINER_2_Text_1
	msgbox BATTLE_MUDSKIPPERSOUND2_TRAINER_2_Text_2
	hidenamebox
	closemessage
	release
	end


BATTLE_MUDSKIPPERSOUND2_TRAINER_3::
	trainerbattle_single TRAINER_MUDSKIPPERSOUND2_TRAINER_3, BATTLE_MUDSKIPPERSOUND2_TRAINER_3_Text_0, BATTLE_MUDSKIPPERSOUND2_TRAINER_3_Text_1
	msgbox BATTLE_MUDSKIPPERSOUND2_TRAINER_3_Text_2
	hidenamebox
	closemessage
	release
	end


NPC_MAGGIE::
	lock
	faceplayer
	namebox NPC_MAGGIE_Text_0
	switch VAR_POKESCAPE_MAGGIE_STATE
	case 0, NPC_MAGGIE_2
	case 1, NPC_MAGGIE_3
	case 2, NPC_MAGGIE_4
	case 3, NPC_MAGGIE_5
	case 4, NPC_MAGGIE_6
	case 5, NPC_MAGGIE_7
	case 6, NPC_MAGGIE_8
	case 7, NPC_MAGGIE_9
	case 8, NPC_MAGGIE_10
	case 9, NPC_MAGGIE_11
	return

NPC_MAGGIE_2:
	goto_if_unset FLAG_BADGE01_GET, NPC_MAGGIE_13
	goto MaggieDoesntHaveABattle
NPC_MAGGIE_12:
	msgbox NPC_MAGGIE_Text_1
	trainerbattle_no_intro TRAINER_MAGGIE_1, NPC_MAGGIE_Text_2
	msgbox NPC_MAGGIE_Text_3
	hidenamebox
	giveitem ITEM_MANY_SWEETS, 5
	namebox NPC_MAGGIE_Text_0
	msgbox NPC_MAGGIE_Text_4
	closemessage
	setvar VAR_POKESCAPE_MAGGIE_STATE, 1
	release
	end

NPC_MAGGIE_3:
	goto_if_set FLAG_BADGE01_GET, NPC_MAGGIE_17
	goto MaggieDoesntHaveABattle
NPC_MAGGIE_16:
	msgbox NPC_MAGGIE_Text_1
	trainerbattle_no_intro TRAINER_MAGGIE_2, NPC_MAGGIE_Text_2
	msgbox NPC_MAGGIE_Text_3
	hidenamebox
	giveitem ITEM_MANY_SWEETS, 5
	namebox NPC_MAGGIE_Text_0
	msgbox NPC_MAGGIE_Text_4
	closemessage
	setvar VAR_POKESCAPE_MAGGIE_STATE, 2
	release
	end

NPC_MAGGIE_4:
	goto_if_set FLAG_BADGE02_GET, NPC_MAGGIE_21
	goto MaggieDoesntHaveABattle
NPC_MAGGIE_20:
	msgbox NPC_MAGGIE_Text_1
	trainerbattle_no_intro TRAINER_MAGGIE_3, NPC_MAGGIE_Text_2
	msgbox NPC_MAGGIE_Text_3
	hidenamebox
	giveitem ITEM_MANY_SWEETS, 5
	namebox NPC_MAGGIE_Text_0
	msgbox NPC_MAGGIE_Text_4
	closemessage
	setvar VAR_POKESCAPE_MAGGIE_STATE, 3
	release
	end

NPC_MAGGIE_5:
	goto_if_set FLAG_BADGE03_GET, NPC_MAGGIE_25
	goto MaggieDoesntHaveABattle
NPC_MAGGIE_24:
	msgbox NPC_MAGGIE_Text_1
	trainerbattle_no_intro TRAINER_MAGGIE_3, NPC_MAGGIE_Text_2
	msgbox NPC_MAGGIE_Text_3
	hidenamebox
	giveitem ITEM_MANY_SWEETS, 5
	namebox NPC_MAGGIE_Text_0
	msgbox NPC_MAGGIE_Text_4
	closemessage
	setvar VAR_POKESCAPE_MAGGIE_STATE, 4
	release
	end

NPC_MAGGIE_6:
	goto_if_set FLAG_BADGE04_GET, NPC_MAGGIE_29
	goto MaggieDoesntHaveABattle
NPC_MAGGIE_28:
	msgbox NPC_MAGGIE_Text_1
	trainerbattle_no_intro TRAINER_MAGGIE_4, NPC_MAGGIE_Text_2
	msgbox NPC_MAGGIE_Text_3
	hidenamebox
	giveitem ITEM_MANY_SWEETS, 5
	namebox NPC_MAGGIE_Text_0
	msgbox NPC_MAGGIE_Text_4
	closemessage
	setvar VAR_POKESCAPE_MAGGIE_STATE, 5
	release
	end

NPC_MAGGIE_7:
	goto_if_set FLAG_BADGE05_GET, NPC_MAGGIE_33
	goto MaggieDoesntHaveABattle
NPC_MAGGIE_32:
	msgbox NPC_MAGGIE_Text_1
	trainerbattle_no_intro TRAINER_MAGGIE_5, NPC_MAGGIE_Text_2
	msgbox NPC_MAGGIE_Text_3
	hidenamebox
	giveitem ITEM_MANY_SWEETS, 5
	namebox NPC_MAGGIE_Text_0
	msgbox NPC_MAGGIE_Text_4
	closemessage
	setvar VAR_POKESCAPE_MAGGIE_STATE, 6
	release
	end

NPC_MAGGIE_8:
	goto_if_set FLAG_BADGE06_GET, NPC_MAGGIE_37
	goto MaggieDoesntHaveABattle
NPC_MAGGIE_36:
	msgbox NPC_MAGGIE_Text_1
	trainerbattle_no_intro TRAINER_MAGGIE_6, NPC_MAGGIE_Text_2
	msgbox NPC_MAGGIE_Text_3
	hidenamebox
	giveitem ITEM_MANY_SWEETS, 5
	namebox NPC_MAGGIE_Text_0
	msgbox NPC_MAGGIE_Text_4
	closemessage
	setvar VAR_POKESCAPE_MAGGIE_STATE, 7
	release
	end

NPC_MAGGIE_9:
	goto_if_set FLAG_BADGE07_GET, NPC_MAGGIE_41
	goto MaggieDoesntHaveABattle
NPC_MAGGIE_40:
	msgbox NPC_MAGGIE_Text_1
	trainerbattle_no_intro TRAINER_MAGGIE_7, NPC_MAGGIE_Text_2
	msgbox NPC_MAGGIE_Text_3
	hidenamebox
	giveitem ITEM_MANY_SWEETS, 5
	namebox NPC_MAGGIE_Text_0
	msgbox NPC_MAGGIE_Text_4
	closemessage
	setvar VAR_POKESCAPE_MAGGIE_STATE, 8
	release
	end

NPC_MAGGIE_10:
	goto_if_set FLAG_BADGE08_GET, NPC_MAGGIE_45
	goto MaggieDoesntHaveABattle
NPC_MAGGIE_44:
	msgbox NPC_MAGGIE_Text_1
	trainerbattle_no_intro TRAINER_MAGGIE_8, NPC_MAGGIE_Text_2
	msgbox NPC_MAGGIE_Text_3
	hidenamebox
	giveitem ITEM_MANY_SWEETS, 5
	namebox NPC_MAGGIE_Text_0
	msgbox NPC_MAGGIE_Text_4
	closemessage
	setvar VAR_POKESCAPE_MAGGIE_STATE, 9
	release
	end

NPC_MAGGIE_11:
	msgbox NPC_MAGGIE_Text_5
	closemessage
	release
	end

NPC_MAGGIE_13:
	call AskMaggieForABattle
	goto NPC_MAGGIE_12

NPC_MAGGIE_17:
	call AskMaggieForABattle
	goto NPC_MAGGIE_16

NPC_MAGGIE_21:
	call AskMaggieForABattle
	goto NPC_MAGGIE_20

NPC_MAGGIE_25:
	call AskMaggieForABattle
	goto NPC_MAGGIE_24

NPC_MAGGIE_29:
	call AskMaggieForABattle
	goto NPC_MAGGIE_28

NPC_MAGGIE_33:
	call AskMaggieForABattle
	goto NPC_MAGGIE_32

NPC_MAGGIE_37:
	call AskMaggieForABattle
	goto NPC_MAGGIE_36

NPC_MAGGIE_41:
	call AskMaggieForABattle
	goto NPC_MAGGIE_40

NPC_MAGGIE_45:
	call AskMaggieForABattle
	goto NPC_MAGGIE_44


AskMaggieForABattle::
	msgbox AskMaggieForABattle_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq AskMaggieForABattle_2
	return

AskMaggieForABattle_2:
	msgbox AskMaggieForABattle_Text_1
	closemessage
	release
	end


MaggieDoesntHaveABattle::
	msgbox MaggieDoesntHaveABattle_Text_0
	closemessage
	release
	end


BATTLE_ROUTE3_Trainer_2_Text_0:
	.string "I'm going to give this whole battle with\n"
	.string "a monster thing a try!$"

BATTLE_ROUTE3_Trainer_2_Text_1:
	.string "Yeah, this isn't for me.$"

BATTLE_ROUTE3_Trainer_2_Text_2:
	.string "I think I'll stick to doing things on my\n"
	.string "own rather than with monsters.$"

BATTLE_ROUTE3_Trainer_1_Text_0:
	.string "I am not really a fan of MvM but I will\n"
	.string "give it a shot!$"

BATTLE_ROUTE3_Trainer_1_Text_1:
	.string "Yeah, I still don't like MvM.$"

BATTLE_ROUTE3_Trainer_1_Text_2:
	.string "I think I'll stick to skilling with my\n"
	.string "partners instead of trying out for the\l"
	.string "MvM championships.$"

Script_Cauldron_Text_0:
	.string "Something smells…{PAUSE 15}{PAUSE 15}{PAUSE 15}\n"
	.string "Interesting.$"

Script_Wendy_1_Text_0:
	.string "Wendy$"

Script_Wendy_1_Text_1:
	.string "Seems like Maggie over there is urging\n"
	.string "for a battle.\p"
	.string "Stop by once in awhile for a quick fix\n"
	.string "won't you?$"

Script_Wendy_1_Text_2:
	.string "Hey how's it going?\n"
	.string "Maggie has been in a better mood since\l"
	.string "your last battle.\p"
	.string "She usually becomes to irritating to be\n"
	.string "around without her battle fix.$"

NPC_SKELETAL_OX_NORMAN_Text_0:
	.string "Norman$"

NPC_SKELETAL_OX_NORMAN_Text_1:
	.string "Waaroo!$"

NPC_SKELETAL_OX_BABE_Text_0:
	.string "Babe$"

NPC_SKELETAL_OX_BABE_Text_1:
	.string "Weeroo!$"

NPC_CAT_TROGS_Text_0:
	.string "Trogs$"

NPC_CAT_TROGS_Text_1:
	.string "Meeoow…$"

BATTLE_MUDSKIPPERSOUND2_TRAINER_1_Text_0:
	.string "Where am I?\p"
	.string "I don't remember logging out here.\p"
	.string "Also what am I wearing?!$"

BATTLE_MUDSKIPPERSOUND2_TRAINER_1_Text_1:
	.string "Why is all my money gone!?!!?$"

BATTLE_MUDSKIPPERSOUND2_TRAINER_1_Text_2:
	.string "I think… I've been hacked…$"

BATTLE_MUDSKIPPERSOUND2_TRAINER_2_Text_0:
	.string "This area is flowing with spiritual\n"
	.string "power! Can you feel it!?$"

BATTLE_MUDSKIPPERSOUND2_TRAINER_2_Text_1:
	.string "Oooom…$"

BATTLE_MUDSKIPPERSOUND2_TRAINER_2_Text_2:
	.string "I wonder how to get into the dungeon.\p"
	.string "I think that's where I'm feeling the\n"
	.string "spiritual power coming from.$"

BATTLE_MUDSKIPPERSOUND2_TRAINER_3_Text_0:
	.string "My boat crashed and now I'm stranded!$"

BATTLE_MUDSKIPPERSOUND2_TRAINER_3_Text_1:
	.string "I'm going to be stuck here forever…$"

BATTLE_MUDSKIPPERSOUND2_TRAINER_3_Text_2:
	.string "I would send for help but as you know\n"
	.string "I'm an Ironman.\p"
	.string "Which means… Urgh… I might as well call\n"
	.string "myself 'LittleIsle locked Ironman' from\l"
	.string "now on…$"

NPC_MAGGIE_Text_0:
	.string "Maggie$"

NPC_MAGGIE_Text_1:
	.string "I hope you prepared chaself!$"

NPC_MAGGIE_Text_2:
	.string "What?! How couldcha!$"

NPC_MAGGIE_Text_3:
	.string "That was quite amusing don'tcha know.\p"
	.string "I have had far too many sweets, here.$"

NPC_MAGGIE_Text_4:
	.string "Come back to visit whenever!$"

NPC_MAGGIE_Text_5:
	.string "Sorry, I'm all battled out for awhile.\p"
	.string "It was fun though.$"

AskMaggieForABattle_Text_0:
	.string "Hiya!\n"
	.string "My name is Maggie.\p"
	.string "Say cha looks pretty strong, care for a\n"
	.string "battle?$"

AskMaggieForABattle_Text_1:
	.string "That's anything but sweet of cha…$"

MaggieDoesntHaveABattle_Text_0:
	.string "Oh, Hi!\n"
	.string "It's cha again!\p"
	.string "Another battle?\p"
	.string "Maybe once you've grown a bit more.$"

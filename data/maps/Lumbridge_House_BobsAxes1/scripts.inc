Lumbridge_House_BobsAxes1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Lumbridge_House_BobsAxes1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Lumbridge_House_BobsAxes1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call BobsAxes_STATE
	return


BobsAxes_STATE::
	setflag FLAG_TEMP_1F
	removeobject 2
	return


Lumbridge_House_BobsAxes::
	lock
	faceplayer
	namebox Lumbridge_House_BobsAxes_Text_0
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_2, 5
	goto_if_eq Lumbridge_House_BobsAxes_1
	msgbox Lumbridge_House_BobsAxes_Text_6
	closemessage
	hidenamebox
	release
	end

Lumbridge_House_BobsAxes_1:
	msgbox Lumbridge_House_BobsAxes_Text_1
	multichoicedefault 1, 0, MULTI_AXES, 0, 0
	switch VAR_RESULT
	case 0, Lumbridge_House_BobsAxes_6
	case 1, Lumbridge_House_BobsAxes_7
Lumbridge_House_BobsAxes_4:
	closemessage
	hidenamebox
	release
	end

Lumbridge_House_BobsAxes_6:
	checkitem ITEM_ROCKSMASH_TOOL, 1
	compare VAR_RESULT, 0
	goto_if_ne Lumbridge_House_BobsAxes_8
	msgbox Lumbridge_House_BobsAxes_Text_3
	goto Lumbridge_House_BobsAxes_4

Lumbridge_House_BobsAxes_7:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 215
	goto_if_eq Lumbridge_House_BobsAxes_11
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 216
	goto_if_eq Lumbridge_House_BobsAxes_11
	msgbox Lumbridge_House_BobsAxes_Text_5
	goto Lumbridge_House_BobsAxes_4

Lumbridge_House_BobsAxes_8:
	msgbox Lumbridge_House_BobsAxes_Text_2
	goto Lumbridge_House_BobsAxes_4

Lumbridge_House_BobsAxes_11:
	checkitem ITEM_CUT_TOOL, 1
	compare VAR_RESULT, 0
	goto_if_eq Lumbridge_House_BobsAxes_16
	msgbox Lumbridge_House_BobsAxes_Text_4
	goto Lumbridge_House_BobsAxes_4

Lumbridge_House_BobsAxes_16:
	goto WoM_BobsAxes_Script
	goto Lumbridge_House_BobsAxes_4


WoM_BobsAxes_Script::
	msgbox WoM_BobsAxes_Script_Text_0
	closemessage
	hidenamebox
	playse SE_DOOR
	clearflag FLAG_TEMP_1F
	addobject 2
	applymovement 2, movement_wom_walk_into_axestore
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACELEFT
	waitmovement 0
	namebox WoM_BobsAxes_Script_Text_1
	msgbox WoM_BobsAxes_Script_Text_2
	closemessage
	hidenamebox
	giveitem ITEM_CUT_TOOL, 1
	namebox Lumbridge_House_BobsAxes_Text_0
	msgbox WoM_BobsAxes_Script_Text_3
	closemessage
	hidenamebox
	applymovement 2, Movement_InteractFACEUP
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEUP
	waitmovement 0
	namebox Lumbridge_House_BobsAxes_Text_0
	msgbox WoM_BobsAxes_Script_Text_4
	closemessage
	hidenamebox
	namebox WoM_BobsAxes_Script_Text_1
	msgbox WoM_BobsAxes_Script_Text_5
	closemessage
	hidenamebox
	applymovement 2, Movement_InteractFACERIGHT
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACELEFT
	waitmovement 0
	namebox WoM_BobsAxes_Script_Text_1
	msgbox WoM_BobsAxes_Script_Text_6
	closemessage
	hidenamebox
	applymovement 2, movement_wom_walk_leave_axestore
	waitmovement 0
	playse SE_DOOR
	removeobject 2
	setflag FLAG_TEMP_1F
	release
	end


movement_wom_walk_into_axestore:
	walk_up
	walk_up
	walk_up
	face_right
	step_end

movement_wom_walk_leave_axestore:
	walk_down
	walk_down
	walk_down
	set_invisible
	step_end

Lumbridge_House_BobsAxes_Text_0:
	.string "Bob$"

Lumbridge_House_BobsAxes_Text_1:
	.string "Welcome to Bob's Brilliant Axes.\p"
	.string "My name is Bob, how may I be of\n"
	.string "assistance?$"

Lumbridge_House_BobsAxes_Text_2:
	.string "Hmm…\p"
	.string "Looks like you already have a mighty\n"
	.string "fine pickaxe.\p"
	.string "I hope you've been smashing many rocks\n"
	.string "with it.$"

Lumbridge_House_BobsAxes_Text_3:
	.string "Hmm, a Pickaxe you say?\p"
	.string "Sorry but I don't sell those here, I only\n"
	.string "fix them.\p"
	.string "If you want a pickaxe you should see\n"
	.string "the Dwarves up in the Dwarven Mines\l"
	.string "near Falador.$"

Lumbridge_House_BobsAxes_Text_4:
	.string "Hmm…\p"
	.string "Looks like you already have a mighty\n"
	.string "fine axe.\p"
	.string "I hope you've been cutting down many\n"
	.string "trees with it.$"

Lumbridge_House_BobsAxes_Text_5:
	.string "An Axe?\p"
	.string "Normally I could help you with that but\n"
	.string "I am still waiting for my shipment to\l"
	.string "arrive.\p"
	.string "It is quite late I hope nothing bad\n"
	.string "happened to it.$"

Lumbridge_House_BobsAxes_Text_6:
	.string "Are you the contractor we hired to fix\n"
	.string "our bed?\p"
	.string "No?\p"
	.string "Speak to from across the desk if you\n"
	.string "are a customer.$"

WoM_BobsAxes_Script_Text_0:
	.string "I'm sorry I still haven't recieved my\n"
	.string "stock of axes yet…$"

WoM_BobsAxes_Script_Text_1:
	.string "Wise Old Man$"

WoM_BobsAxes_Script_Text_2:
	.string "Why hello there {PLAYER}, odd place to\n"
	.string "run into one another isn't it?\p"
	.string "Are you here to get your armour\n"
	.string "repaired too?\p"
	.string "H.A.M kidnapped the Prince and thus you\n"
	.string "can not battle them for your next\l"
	.string "badge?\p"
	.string "And now you need an AXE to get past\n"
	.string "some trees but Bob is out of stock?\p"
	.string "Well that really does stop you from\n"
	.string "progressing doesn't it?\p"
	.string "Why back in my days I used to do quests\n"
	.string "like these as if they were second\l"
	.string "nature.\p"
	.string "But alas this will not be my Swan Song\n"
	.string "but instead yours…\p"
	.string "Speaking of such, I believe I heard\n"
	.string "reports about suspicious activity in\l"
	.string "Lumbridge forest.\p"
	.string "How about you take this and explore\n"
	.string "that forest some more.\p"
	.string "I would imagine it would be quite useful\n"
	.string "on your quest regardless.$"

WoM_BobsAxes_Script_Text_3:
	.string "Wow a Dragon Axe, I am jealous!\p"
	.string "I wish I was the one who could have\n"
	.string "given it to you!$"

WoM_BobsAxes_Script_Text_4:
	.string "Also here you go Dionysius, your armour\n"
	.string "is all repaired.\p"
	.string "I look forward to seeing you again.$"

WoM_BobsAxes_Script_Text_5:
	.string "Likewise.$"

WoM_BobsAxes_Script_Text_6:
	.string "And to you too {PLAYER} good luck on\n"
	.string "your quest!$"

WildernessVolcano_ChampionRoom_MapScripts::
	.byte 0


NPC_WILDERNESS_CRATER_START_CHALLENGE::
	lock
	faceplayer
	msgbox NPC_WILDERNESS_CRATER_START_CHALLENGE_Text_0
	msgbox NPC_WILDERNESS_CRATER_START_CHALLENGE_Text_1
	hidenamebox
	release
	end


WILDERNESS_CRATER_SIR_TIFFY::
	lock
	faceplayer
	namebox WILDERNESS_CRATER_SIR_TIFFY_Text_0
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq WILDERNESS_CRATER_SIR_TIFFY_2
	msgbox WILDERNESS_CRATER_SIR_TIFFY_Text_2
WILDERNESS_CRATER_SIR_TIFFY_1:
	msgbox WILDERNESS_CRATER_SIR_TIFFY_Text_3
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	call ELITE4_BATTLE_SIR_TIFFY_CASHIEN
	msgbox WILDERNESS_CRATER_SIR_TIFFY_Text_4
	hidenamebox
	call WILDERNESS_VOLCANO_ROOM_1_OpenNextRoom
	release
	end

WILDERNESS_CRATER_SIR_TIFFY_2:
	msgbox WILDERNESS_CRATER_SIR_TIFFY_Text_1
	goto WILDERNESS_CRATER_SIR_TIFFY_1


WILDERNESS_CRATER_HAZELMERE::
	lock
	faceplayer
	namebox WILDERNESS_CRATER_HAZELMERE_Text_0
	msgbox WILDERNESS_CRATER_HAZELMERE_Text_1
	call ELITE4_BATTLE_HAZELMERE
	msgbox WILDERNESS_CRATER_HAZELMERE_Text_2
	hidenamebox
	release
	end


WILDERNESS_CRATER_HANS::
	lock
	faceplayer
	namebox WILDERNESS_CRATER_HANS_Text_0
	msgbox WILDERNESS_CRATER_HANS_Text_1
	msgbox WILDERNESS_CRATER_HANS_Text_2
	call ELITE4_BATTLE_HANS
	msgbox WILDERNESS_CRATER_HANS_Text_3
	hidenamebox
	release
	end


WILDERNESS_CRATER_ZANIK::
	lock
	faceplayer
	namebox WILDERNESS_CRATER_ZANIK_Text_0
	msgbox WILDERNESS_CRATER_ZANIK_Text_1
	call ELITE4_BATTLE_ZANIK
	msgbox WILDERNESS_CRATER_ZANIK_Text_2
	hidenamebox
	release
	end


WILDERNESS_CRATER_WISEOLDMAN::
	lock
	faceplayer
	namebox WILDERNESS_CRATER_WISEOLDMAN_Text_0
	msgbox WILDERNESS_CRATER_WISEOLDMAN_Text_1
	call CHAMPION_BATTLE_WISE_OLD_MAN
	msgbox WILDERNESS_CRATER_WISEOLDMAN_Text_2
	hidenamebox
	release
	end


NPC_WILDERNESS_CRATER_START_CHALLENGE_Text_0:
	.string "Welcome to the Wilderness Crater!\p"
	.string "Before you can challenge the most elite\n"
	.string "MvMers I must check that you have 8\l"
	.string "badges.$"

NPC_WILDERNESS_CRATER_START_CHALLENGE_Text_1:
	.string "Alright! You have 8 Badges. You may\n"
	.string "enter. Good luck with your challenge!$"

WILDERNESS_CRATER_SIR_TIFFY_Text_0:
	.string "Sir Tiffy$"

WILDERNESS_CRATER_SIR_TIFFY_Text_1:
	.string "What ho, sirrah.\l"
	.string "Lovely of you to come here.\p"
	.string "Thank you for all the help so far, why\n"
	.string "don't you sit down here with me for a\l"
	.string "moment, hmm?$"

WILDERNESS_CRATER_SIR_TIFFY_Text_2:
	.string "What ho, milady.\l"
	.string "Lovely of you to come here.\p"
	.string "Thank you for all the help so far, why\n"
	.string "don't you sit down here with me for a\l"
	.string "moment, hmm?$"

WILDERNESS_CRATER_SIR_TIFFY_Text_3:
	.string "You helped us eliminate the H.A.M\n"
	.string "threat, wrestled the Black knights, and\l"
	.string "fought the Chaos Elemental.\l"
	.string "Spiffing work!\p"
	.string "Now you sit here, awaiting your battle\n"
	.string "against the Elite Four.\p"
	.string "This old man here is nothing but\n"
	.string "impressed.\p"
	.string "One day we of the older generation need\n"
	.string "to retire, but I hope I can leave it to\l"
	.string "the next generation to protect this\l"
	.string "world.\l"
	.string "Therefore, I would like for us to battle.\l"
	.string "Prepare yourself old bean.$"

WILDERNESS_CRATER_SIR_TIFFY_Text_4:
	.string "Jolly good show {PLAYER}.\l"
	.string "That was stupendous.\p"
	.string "You fought with all you had, and\n"
	.string "emerged victorious. As a member of the\l"
	.string "old guard I feel like I can rest easy.\l"
	.string "The future is in good hands dear\l"
	.string "{PLAYER}.\p"
	.string "Be sure to keep your chin up and make\n"
	.string "sure to pay me a visit at the park every\l"
	.string "now and then.\l"
	.string "Ta-ta for now!$"

WILDERNESS_CRATER_HAZELMERE_Text_0:
	.string "Hazelmere$"

WILDERNESS_CRATER_HAZELMERE_Text_1:
	.string "Lemanto quir.\l"
	.string "Laufolly lemantolly sarko, ta sind\l"
	.string "umesco meriz undri meriz.\l"
	.string "Ip quir es ta gal.\p"
	.string "Mi bom eso lemanto quir.$"

WILDERNESS_CRATER_HAZELMERE_Text_2:
	.string "Lemanto meso prit imindus.\l"
	.string "Ip quir es ta gal.\p"
	.string "Meso es imindus por smai.$"

WILDERNESS_CRATER_HANS_Text_0:
	.string "HANS$"

WILDERNESS_CRATER_HANS_Text_1:
	.string "Completionist in the making.\l"
	.string "{PLAYER}.\l"
	.string "You know I have been along with you for\l"
	.string "this ride, and I have a little secret to\l"
	.string "share with you.\p"
	.string "On the day you arrived at the castle,\n"
	.string "the day the professor gave you a\l"
	.string "monster.\l"
	.string "Well, I got one as well.$"

WILDERNESS_CRATER_HANS_Text_2:
	.string "On your journey you have seen a lot of\n"
	.string "things.\p"
	.string "Things to remember, things that were\n"
	.string "fun, things that made you angry,\l"
	.string "mithrilmen, leaders, knights, dragons\l"
	.string "and so much more.\l"
	.string "I have had the greatest time watching\l"
	.string "your journey Completionist in the\l"
	.string "making.\p"
	.string "You are about to face Hans of the Elite\n"
	.string "Four.\l"
	.string "I use flying types to achieve victory\l"
	.string "and I bet you already know how to beat\l"
	.string "me.\l"
	.string "So why don't you show me all you have\l"
	.string "learned?$"

WILDERNESS_CRATER_HANS_Text_3:
	.string "You did it Completionist in the Making.\l"
	.string "You actually did it!\l"
	.string "You beat the Elite Four!\p"
	.string "Go on! Forget about me!\l"
	.string "The champion of the MvM championship\l"
	.string "awaits you.$"

WILDERNESS_CRATER_ZANIK_Text_0:
	.string "Zanik$"

WILDERNESS_CRATER_ZANIK_Text_1:
	.string "Imagine my surprise when I found out\n"
	.string "you were the next challenger.\l"
	.string "Let me reintroduce myself. I am Zanik of\l"
	.string "the Dorgeshuun and member of the Elite\l"
	.string "Four.\p"
	.string "While I am thankful to you for\n"
	.string "exterminating the H.A.M threat, there is\l"
	.string "only one thing I can do right here.\l"
	.string "And that is to face you with all\l"
	.string "sincerity and might I can muster.\l"
	.string "Nothing else would feel fair to match\l"
	.string "the resolve you needed to get here.$"

WILDERNESS_CRATER_ZANIK_Text_2:
	.string "Haha.\l"
	.string "You win {PLAYER}.\p"
	.string "Wow you are something else, I kind of\n"
	.string "already knew that.\p"
	.string "I wish you the best of luck moving on.\l"
	.string "Don't worry, both you and I know you can\l"
	.string "do it.$"

WILDERNESS_CRATER_WISEOLDMAN_Text_0:
	.string "Wise Old Man$"

WILDERNESS_CRATER_WISEOLDMAN_Text_1:
	.string "Hello you mysterious person.\p"
	.string "You must be strong to make it here.\n"
	.string "Lets do it. If not I'll just take all your\l"
	.string "party hats.$"

WILDERNESS_CRATER_WISEOLDMAN_Text_2:
	.string "You won, YOU ARE THE CHAMPION!$"

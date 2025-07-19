Route46_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route46_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route46_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 16
	return


BATTLE_ROUTE_46_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE_46_TRAINER_1, BATTLE_ROUTE_46_TRAINER_1_Text_0, BATTLE_ROUTE_46_TRAINER_1_Text_1
	namebox BATTLE_ROUTE_46_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE_46_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE_46_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE_46_TRAINER_2, BATTLE_ROUTE_46_TRAINER_2_Text_0, BATTLE_ROUTE_46_TRAINER_2_Text_1
	namebox BATTLE_ROUTE_46_TRAINER_2_Text_2
	msgbox BATTLE_ROUTE_46_TRAINER_2_Text_1
	hidenamebox
	release
	end


ROUTE46_STUDENT::
	faceplayer
	namebox ROUTE46_STUDENT_Text_0
	msgbox ROUTE46_STUDENT_Text_1
	closemessage
	hidenamebox
	release
	end


ROUTE46_ARCHAEOLOGIST_1::
	faceplayer
	namebox BATTLE_ROUTE_46_TRAINER_1_Text_2
	msgbox ROUTE46_ARCHAEOLOGIST_1_Text_0
	closemessage
	hidenamebox
	release
	end


ROUTE46_ARCHAEOLOGIST_2::
	faceplayer
	namebox BATTLE_ROUTE_46_TRAINER_1_Text_2
	msgbox ROUTE46_ARCHAEOLOGIST_2_Text_0
	closemessage
	hidenamebox
	release
	end


ROUTE46_ARCHAEOLOGIST_3::
	faceplayer
	namebox BATTLE_ROUTE_46_TRAINER_1_Text_2
	msgbox ROUTE46_ARCHAEOLOGIST_3_Text_0
	closemessage
	hidenamebox
	release
	end


ROUTE46_ARCHAEOLOGIST_4::
	faceplayer
	namebox BATTLE_ROUTE_46_TRAINER_1_Text_2
	msgbox ROUTE46_ARCHAEOLOGIST_4_Text_0
	closemessage
	hidenamebox
	release
	end


ROUTE46_PANNING_GUIDE::
	faceplayer
	namebox ROUTE46_PANNING_GUIDE_Text_0
	msgbox ROUTE46_PANNING_GUIDE_Text_1
	closemessage
	hidenamebox
	release
	end


DIGSITE_SIGN::
	lock
	faceplayer
	msgbox DIGSITE_SIGN_Text_0
	release
	end


ITEM_DIGSITE_EARTH_TALISMAN::
	finditem ITEM_TALISMAN_EARTH
	end


ITEM_ALKHARID_FIRE_TALISMAN::
	finditem ITEM_TALISMAN_FIRE
	end


ITEM_DWARVENMINES_BODY_TALISMAN::
	finditem ITEM_TALISMAN_BODY
	end


MOVE_TUTOR_DEFLECT::
	lock
	faceplayer
	namebox MOVE_TUTOR_DEFLECT_Text_0
	msgbox MOVE_TUTOR_DEFLECT_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_DEFLECT_1
	msgbox MOVE_TUTOR_DEFLECT_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_DEFLECT_4
	checkmoney 3000, 0
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_DEFLECT_7
	setvar VAR_0x8005, MOVE_DEFLECT
	call MOVE_TUTOR_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_DEFLECT_11
MOVE_TUTOR_DEFLECT_10:
	msgbox MOVE_TUTOR_DEFLECT_Text_4
	removemoney 3000, 0
	release
	end

MOVE_TUTOR_DEFLECT_1:
	goto MOVE_TUTOR_PRAYER_NO
	return

MOVE_TUTOR_DEFLECT_4:
	goto MOVE_TUTOR_PRAYER_NO
	return

MOVE_TUTOR_DEFLECT_7:
	msgbox MOVE_TUTOR_DEFLECT_Text_3
	waitmessage
	hidenamebox
	release
	end

MOVE_TUTOR_DEFLECT_11:
	goto MOVE_TUTOR_PRAYER_NO
	goto MOVE_TUTOR_DEFLECT_10


MOVE_TUTOR_PIETY::
	lock
	faceplayer
	namebox MOVE_TUTOR_DEFLECT_Text_0
	msgbox MOVE_TUTOR_PIETY_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_PIETY_1
	msgbox MOVE_TUTOR_DEFLECT_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_PIETY_4
	checkmoney 3000, 0
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_PIETY_7
	setvar VAR_0x8005, MOVE_PIETY
	call MOVE_TUTOR_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_PIETY_11
MOVE_TUTOR_PIETY_10:
	msgbox MOVE_TUTOR_PIETY_Text_1
	removemoney 3000, 0
	release
	end

MOVE_TUTOR_PIETY_1:
	goto MOVE_TUTOR_PRAYER_NO
	return

MOVE_TUTOR_PIETY_4:
	goto MOVE_TUTOR_PRAYER_NO
	return

MOVE_TUTOR_PIETY_7:
	msgbox MOVE_TUTOR_DEFLECT_Text_3
	waitmessage
	hidenamebox
	release
	end

MOVE_TUTOR_PIETY_11:
	goto MOVE_TUTOR_PRAYER_NO
	goto MOVE_TUTOR_PIETY_10


MOVE_TUTOR_RIGOUR::
	lock
	faceplayer
	namebox MOVE_TUTOR_DEFLECT_Text_0
	msgbox MOVE_TUTOR_RIGOUR_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_RIGOUR_1
	msgbox MOVE_TUTOR_DEFLECT_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_RIGOUR_4
	checkmoney 3000, 0
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_RIGOUR_7
	setvar VAR_0x8005, MOVE_RIGOUR
	call MOVE_TUTOR_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_RIGOUR_11
MOVE_TUTOR_RIGOUR_10:
	msgbox MOVE_TUTOR_RIGOUR_Text_1
	removemoney 3000, 0
	release
	end

MOVE_TUTOR_RIGOUR_1:
	goto MOVE_TUTOR_PRAYER_NO
	return

MOVE_TUTOR_RIGOUR_4:
	goto MOVE_TUTOR_PRAYER_NO
	return

MOVE_TUTOR_RIGOUR_7:
	msgbox MOVE_TUTOR_DEFLECT_Text_3
	waitmessage
	hidenamebox
	release
	end

MOVE_TUTOR_RIGOUR_11:
	goto MOVE_TUTOR_PRAYER_NO
	goto MOVE_TUTOR_RIGOUR_10


MOVE_TUTOR_AUGURY::
	lock
	faceplayer
	namebox MOVE_TUTOR_DEFLECT_Text_0
	msgbox MOVE_TUTOR_AUGURY_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_AUGURY_1
	msgbox MOVE_TUTOR_DEFLECT_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_AUGURY_4
	checkmoney 3000, 0
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_AUGURY_7
	setvar VAR_0x8005, MOVE_AUGURY
	call MOVE_TUTOR_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_AUGURY_11
MOVE_TUTOR_AUGURY_10:
	msgbox MOVE_TUTOR_AUGURY_Text_1
	removemoney 3000, 0
	release
	end

MOVE_TUTOR_AUGURY_1:
	goto MOVE_TUTOR_PRAYER_NO
	return

MOVE_TUTOR_AUGURY_4:
	goto MOVE_TUTOR_PRAYER_NO
	return

MOVE_TUTOR_AUGURY_7:
	msgbox MOVE_TUTOR_DEFLECT_Text_3
	waitmessage
	hidenamebox
	release
	end

MOVE_TUTOR_AUGURY_11:
	goto MOVE_TUTOR_PRAYER_NO
	goto MOVE_TUTOR_AUGURY_10


MOVE_TUTOR_TURMOIL::
	lock
	faceplayer
	namebox MOVE_TUTOR_DEFLECT_Text_0
	msgbox MOVE_TUTOR_TURMOIL_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_TURMOIL_1
	msgbox MOVE_TUTOR_DEFLECT_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_TURMOIL_4
	checkmoney 3000, 0
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_TURMOIL_7
	setvar VAR_0x8005, MOVE_TURMOIL
	call MOVE_TUTOR_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_TURMOIL_11
MOVE_TUTOR_TURMOIL_10:
	msgbox MOVE_TUTOR_TURMOIL_Text_1
	removemoney 3000, 0
	release
	end

MOVE_TUTOR_TURMOIL_1:
	goto MOVE_TUTOR_PRAYER_NO
	return

MOVE_TUTOR_TURMOIL_4:
	goto MOVE_TUTOR_PRAYER_NO
	return

MOVE_TUTOR_TURMOIL_7:
	msgbox MOVE_TUTOR_DEFLECT_Text_3
	waitmessage
	hidenamebox
	release
	end

MOVE_TUTOR_TURMOIL_11:
	goto MOVE_TUTOR_PRAYER_NO
	goto MOVE_TUTOR_TURMOIL_10


MOVE_TUTOR_TORMENT_PRAYER::
	lock
	faceplayer
	namebox MOVE_TUTOR_DEFLECT_Text_0
	msgbox MOVE_TUTOR_TORMENT_PRAYER_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_TORMENT_PRAYER_1
	msgbox MOVE_TUTOR_DEFLECT_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_TORMENT_PRAYER_4
	checkmoney 3000, 0
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_TORMENT_PRAYER_7
	setvar VAR_0x8005, MOVE_TORMENT_PRAYER
	call MOVE_TUTOR_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_TORMENT_PRAYER_11
MOVE_TUTOR_TORMENT_PRAYER_10:
	msgbox MOVE_TUTOR_TORMENT_PRAYER_Text_1
	removemoney 3000, 0
	release
	end

MOVE_TUTOR_TORMENT_PRAYER_1:
	goto MOVE_TUTOR_PRAYER_NO
	return

MOVE_TUTOR_TORMENT_PRAYER_4:
	goto MOVE_TUTOR_PRAYER_NO
	return

MOVE_TUTOR_TORMENT_PRAYER_7:
	msgbox MOVE_TUTOR_DEFLECT_Text_3
	waitmessage
	hidenamebox
	release
	end

MOVE_TUTOR_TORMENT_PRAYER_11:
	goto MOVE_TUTOR_PRAYER_NO
	goto MOVE_TUTOR_TORMENT_PRAYER_10


MOVE_TUTOR_ANGUISH::
	lock
	faceplayer
	namebox MOVE_TUTOR_DEFLECT_Text_0
	msgbox MOVE_TUTOR_ANGUISH_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_ANGUISH_1
	msgbox MOVE_TUTOR_DEFLECT_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_ANGUISH_4
	checkmoney 3000, 0
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_ANGUISH_7
	setvar VAR_0x8005, MOVE_ANGUISH
	call MOVE_TUTOR_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_ANGUISH_11
MOVE_TUTOR_ANGUISH_10:
	msgbox MOVE_TUTOR_ANGUISH_Text_1
	removemoney 3000, 0
	release
	end

MOVE_TUTOR_ANGUISH_1:
	goto MOVE_TUTOR_PRAYER_NO
	return

MOVE_TUTOR_ANGUISH_4:
	goto MOVE_TUTOR_PRAYER_NO
	return

MOVE_TUTOR_ANGUISH_7:
	msgbox MOVE_TUTOR_DEFLECT_Text_3
	waitmessage
	hidenamebox
	release
	end

MOVE_TUTOR_ANGUISH_11:
	goto MOVE_TUTOR_PRAYER_NO
	goto MOVE_TUTOR_ANGUISH_10


MOVE_TUTOR_DIVINE_RAGE::
	lock
	faceplayer
	namebox MOVE_TUTOR_DEFLECT_Text_0
	msgbox MOVE_TUTOR_DIVINE_RAGE_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_DIVINE_RAGE_1
	msgbox MOVE_TUTOR_DEFLECT_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_DIVINE_RAGE_4
	checkmoney 3000, 0
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_DIVINE_RAGE_7
	setvar VAR_0x8005, MOVE_DIVINERAGE
	call MOVE_TUTOR_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq MOVE_TUTOR_DIVINE_RAGE_11
MOVE_TUTOR_DIVINE_RAGE_10:
	msgbox MOVE_TUTOR_DIVINE_RAGE_Text_1
	removemoney 3000, 0
	release
	end

MOVE_TUTOR_DIVINE_RAGE_1:
	goto MOVE_TUTOR_PRAYER_NO
	return

MOVE_TUTOR_DIVINE_RAGE_4:
	goto MOVE_TUTOR_PRAYER_NO
	return

MOVE_TUTOR_DIVINE_RAGE_7:
	msgbox MOVE_TUTOR_DEFLECT_Text_3
	waitmessage
	hidenamebox
	release
	end

MOVE_TUTOR_DIVINE_RAGE_11:
	goto MOVE_TUTOR_PRAYER_NO
	goto MOVE_TUTOR_DIVINE_RAGE_10


MOVE_TUTOR_PRAYER_NO::
	namebox MOVE_TUTOR_DEFLECT_Text_0
	msgbox MOVE_TUTOR_PRAYER_NO_Text_0
	closemessage
	hidenamebox
	release
	end


BATTLE_ROUTE_46_TRAINER_1_Text_0:
	.string "You won't believe what happened!\p"
	.string "Whilst excavating nearby, I found the\n"
	.string "most magical pot…$"

BATTLE_ROUTE_46_TRAINER_1_Text_1:
	.string "Aw, you made me drop it!$"

BATTLE_ROUTE_46_TRAINER_1_Text_2:
	.string "Archaeologist$"

BATTLE_ROUTE_46_TRAINER_2_Text_0:
	.string "I'm waiting until they open up the\n"
	.string "digsite so I can be the first one\l"
	.string "inside!\p"
	.string "I won't let you beat me to it!$"

BATTLE_ROUTE_46_TRAINER_2_Text_1:
	.string "Okay, fine. I'll go explore the cave to\n"
	.string "the east instead!$"

BATTLE_ROUTE_46_TRAINER_2_Text_2:
	.string "Le Me$"

ROUTE46_STUDENT_Text_0:
	.string "Student$"

ROUTE46_STUDENT_Text_1:
	.string "The study of Earth Sciences is: the\n"
	.string "study of the earth, its contents and\l"
	.string "history…\p"
	.string "Sorry, I didn't see you there.\p"
	.string "I'm too busy studying for my Earth\n"
	.string "Sciences exam to talk more right now.$"

ROUTE46_ARCHAEOLOGIST_1_Text_0:
	.string "I'm not really supposed to say\n"
	.string "anything, but…\p"
	.string "We think we have discovered the ruins\n"
	.string "of an ancient civilisation!\p"
	.string "I heard that the Museum Curator is\n"
	.string "coming down personally to inspect them!$"

ROUTE46_ARCHAEOLOGIST_2_Text_0:
	.string "Stay away from the ruins to the north.\p"
	.string "I'm going to explore them to find\n"
	.string "anything important so I can become\l"
	.string "famous.$"

ROUTE46_ARCHAEOLOGIST_3_Text_0:
	.string "I grew up thinking archaeology was fun,\n"
	.string "but there are a distinct lack of rolling\l"
	.string "boulders or, well, any kind of action\l"
	.string "really…$"

ROUTE46_ARCHAEOLOGIST_4_Text_0:
	.string "I might be skilled at excavating ruins,\n"
	.string "but I'm hopeless with any other kind of\l"
	.string "skills.\p"
	.string "I can't even light this fire!$"

ROUTE46_PANNING_GUIDE_Text_0:
	.string "Panning Guide$"

ROUTE46_PANNING_GUIDE_Text_1:
	.string "If you find any gold while panning, make\n"
	.string "sure you take it to the archaeological\l"
	.string "expert up in the museum storage\l"
	.string "facility.$"

DIGSITE_SIGN_Text_0:
	.string "Anyone wishing to do any work on the\n"
	.string "digsite must first prove they have\l"
	.string "passed all 3 Earth Science exams.$"

MOVE_TUTOR_DEFLECT_Text_0:
	.string "Priest$"

MOVE_TUTOR_DEFLECT_Text_1:
	.string "I see you taking an interest in the\n"
	.string "church.\p"
	.string "I know a special prayer, passed down\n"
	.string "through generations of devout\l"
	.string "followers called DEFLECT that I could\l"
	.string "teach one of your monsters.\p"
	.string "It increases their defense by 5 stages\n"
	.string "for 2 turns.\p"
	.string "Would you be interested in learning it?$"

MOVE_TUTOR_DEFLECT_Text_2:
	.string "Okay, great!\p"
	.string "Unfortunately the church is in dire\n"
	.string "need of renovation, so I must insist on\l"
	.string "a charitable donation for my services.\p"
	.string "I think 3,000gp should cover it.\p"
	.string "Is that okay with you?$"

MOVE_TUTOR_DEFLECT_Text_3:
	.string "I am very sorry, but you don't seem to\n"
	.string "have enough money.$"

MOVE_TUTOR_DEFLECT_Text_4:
	.string "Your monster was blessed with the\n"
	.string "power of DEFLECT.$"

MOVE_TUTOR_PIETY_Text_0:
	.string "I see you taking an interest in the\n"
	.string "church.\p"
	.string "I know a special prayer, passed down\n"
	.string "through generations of devout\l"
	.string "followers called PIETY that I could\l"
	.string "teach one of your monsters.\p"
	.string "It increases their attack and defense\n"
	.string "by 3 stages for 2 turns.\p"
	.string "Would you be interested in learning it?$"

MOVE_TUTOR_PIETY_Text_1:
	.string "Your monster was blessed with the\n"
	.string "power of PIETY.$"

MOVE_TUTOR_RIGOUR_Text_0:
	.string "I see you taking an interest in the\n"
	.string "church.\p"
	.string "I know a special prayer, passed down\n"
	.string "through generations of devout\l"
	.string "followers called RIGOUR that I could\l"
	.string "teach one of your monsters.\p"
	.string "It increases their special attack and\n"
	.string "special defense by 3 stages for 2\l"
	.string "turns.\p"
	.string "Would you be interested in learning it?$"

MOVE_TUTOR_RIGOUR_Text_1:
	.string "Your monster was blessed with the\n"
	.string "power of RIGOUR.$"

MOVE_TUTOR_AUGURY_Text_0:
	.string "I see you taking an interest in the\n"
	.string "church.\p"
	.string "I know a special prayer, passed down\n"
	.string "through generations of devout\l"
	.string "followers called AUGURY that I could\l"
	.string "teach one of your monsters.\p"
	.string "It increases their speed and accuracy\n"
	.string "by 3 stages for 2 turns.\p"
	.string "Would you be interested in learning it?$"

MOVE_TUTOR_AUGURY_Text_1:
	.string "Your monster was blessed with the\n"
	.string "power of AUGURY.$"

MOVE_TUTOR_TURMOIL_Text_0:
	.string "I see you taking an interest in the\n"
	.string "church.\p"
	.string "I know a special prayer, passed down\n"
	.string "through generations of devout\l"
	.string "followers called TURMOIL that I could\l"
	.string "teach one of your monsters.\p"
	.string "It increases their attack and defence\n"
	.string "by 5 stages for 2 turns.\p"
	.string "Would you be interested in learning it?$"

MOVE_TUTOR_TURMOIL_Text_1:
	.string "Your monster was blessed with the\n"
	.string "power of TURMOIL.$"

MOVE_TUTOR_TORMENT_PRAYER_Text_0:
	.string "I see you taking an interest in the\n"
	.string "church.\p"
	.string "I know a special prayer, passed down\n"
	.string "through generations of devout\l"
	.string "followers called TORMENT that I could\l"
	.string "teach one of your monsters.\p"
	.string "It increases their special attack and\n"
	.string "special defence by 5 stages for 2\l"
	.string "turns.\p"
	.string "Would you be interested in learning it?$"

MOVE_TUTOR_TORMENT_PRAYER_Text_1:
	.string "Your monster was blessed with the\n"
	.string "power of TORMENT.$"

MOVE_TUTOR_ANGUISH_Text_0:
	.string "I see you taking an interest in the\n"
	.string "church.\p"
	.string "I know a special prayer, passed down\n"
	.string "through generations of devout\l"
	.string "followers called ANGUISH that I could\l"
	.string "teach one of your monsters.\p"
	.string "It increases their speed and accuracy\n"
	.string "by 5 stages for 2 turns.\p"
	.string "Would you be interested in learning it?$"

MOVE_TUTOR_ANGUISH_Text_1:
	.string "Your monster was blessed with the\n"
	.string "power of ANGUISH.$"

MOVE_TUTOR_DIVINE_RAGE_Text_0:
	.string "I see you taking an interest in the\n"
	.string "church.\p"
	.string "I know a special prayer, passed down\n"
	.string "through generations of devout\l"
	.string "followers called DIVINE RAGE that I\l"
	.string "could teach one of your monsters.\p"
	.string "It increases ALL of their stats by 5\n"
	.string "stages for 2 turns.\p"
	.string "Would you be interested in learning it?$"

MOVE_TUTOR_DIVINE_RAGE_Text_1:
	.string "Your monster was blessed with the\n"
	.string "power of DIVINE RAGE.$"

MOVE_TUTOR_PRAYER_NO_Text_0:
	.string "If you change your mind, please feel\n"
	.string "free to come back anytime.$"

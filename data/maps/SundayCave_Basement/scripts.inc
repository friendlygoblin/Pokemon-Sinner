SundayCave_Basement_MapScripts::
	.byte 0


SCB_ChappellAskForHelp::
# 10 "data/maps/SundayCave_Basement/scripts.pory"
	lock
# 11 "data/maps/SundayCave_Basement/scripts.pory"
	faceplayer
# 12 "data/maps/SundayCave_Basement/scripts.pory"
	compare VAR_SUNDAYCAVE_STATE, 1
	goto_if_eq SCB_ChappellAskForHelp_2
# 15 "data/maps/SundayCave_Basement/scripts.pory"
	compare VAR_SUNDAYCAVE_STATE, 3
	goto_if_eq SCB_ChappellAskForHelp_3
SCB_ChappellAskForHelp_1:
# 25 "data/maps/SundayCave_Basement/scripts.pory"
	releaseall
	end

SCB_ChappellAskForHelp_2:
# 13 "data/maps/SundayCave_Basement/scripts.pory"
	msgbox CantTakeCareOfThatAlone, MSGBOX_AUTOCLOSE
	goto SCB_ChappellAskForHelp_1

SCB_ChappellAskForHelp_3:
# 16 "data/maps/SundayCave_Basement/scripts.pory"
	msgbox GoodJobImGoingBack, MSGBOX_AUTOCLOSE
# 17 "data/maps/SundayCave_Basement/scripts.pory"
	fadescreen FADE_TO_BLACK
# 18 "data/maps/SundayCave_Basement/scripts.pory"
	setflag FLAG_SCB_CHAPPELL
# 19 "data/maps/SundayCave_Basement/scripts.pory"
	setflag FLAG_CSCCH_CHAPPELLDOOR
# 20 "data/maps/SundayCave_Basement/scripts.pory"
	setflag FLAG_LIZZIE_ROUTE6
# 21 "data/maps/SundayCave_Basement/scripts.pory"
	removeobject 1
# 22 "data/maps/SundayCave_Basement/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto SCB_ChappellAskForHelp_1


SCB_Impidimp1::
# 58 "data/maps/SundayCave_Basement/scripts.pory"
	lock
# 59 "data/maps/SundayCave_Basement/scripts.pory"
	faceplayer
# 60 "data/maps/SundayCave_Basement/scripts.pory"
	playmoncry SPECIES_IMPIDIMP, CRY_MODE_NORMAL
# 61 "data/maps/SundayCave_Basement/scripts.pory"
	msgbox SCB_Impidimp1_Text_0, MSGBOX_AUTOCLOSE
# 62 "data/maps/SundayCave_Basement/scripts.pory"
	waitmoncry
# 63 "data/maps/SundayCave_Basement/scripts.pory"
	setwildbattle SPECIES_IMPIDIMP, 22
# 64 "data/maps/SundayCave_Basement/scripts.pory"
	dowildbattle
# 65 "data/maps/SundayCave_Basement/scripts.pory"
	setflag FLAG_SCB_IMPIDIMP_1
# 66 "data/maps/SundayCave_Basement/scripts.pory"
	removeobject 2
# 67 "data/maps/SundayCave_Basement/scripts.pory"
	setflag FLAG_SCB_IMPIDIMP_2
# 68 "data/maps/SundayCave_Basement/scripts.pory"
	removeobject 3
# 69 "data/maps/SundayCave_Basement/scripts.pory"
	compare VAR_SUNDAYCAVE_STATE, 1
	goto_if_eq SCB_Impidimp1_2
# 72 "data/maps/SundayCave_Basement/scripts.pory"
	compare VAR_SUNDAYCAVE_STATE, 2
	goto_if_eq SCB_Impidimp1_3
SCB_Impidimp1_1:
# 75 "data/maps/SundayCave_Basement/scripts.pory"
	releaseall
	end

SCB_Impidimp1_2:
# 70 "data/maps/SundayCave_Basement/scripts.pory"
	setvar VAR_SUNDAYCAVE_STATE, 2
	goto SCB_Impidimp1_1

SCB_Impidimp1_3:
# 73 "data/maps/SundayCave_Basement/scripts.pory"
	setvar VAR_SUNDAYCAVE_STATE, 3
	goto SCB_Impidimp1_1


SCB_Impidimp2::
# 80 "data/maps/SundayCave_Basement/scripts.pory"
	lock
# 81 "data/maps/SundayCave_Basement/scripts.pory"
	faceplayer
# 82 "data/maps/SundayCave_Basement/scripts.pory"
	playmoncry SPECIES_IMPIDIMP, CRY_MODE_NORMAL
# 83 "data/maps/SundayCave_Basement/scripts.pory"
	msgbox SCB_Impidimp1_Text_0, MSGBOX_AUTOCLOSE
# 84 "data/maps/SundayCave_Basement/scripts.pory"
	waitmoncry
# 85 "data/maps/SundayCave_Basement/scripts.pory"
	setwildbattle SPECIES_IMPIDIMP, 22
# 86 "data/maps/SundayCave_Basement/scripts.pory"
	dowildbattle
# 87 "data/maps/SundayCave_Basement/scripts.pory"
	setflag FLAG_SCB_IMPIDIMP_1
# 88 "data/maps/SundayCave_Basement/scripts.pory"
	removeobject 2
# 89 "data/maps/SundayCave_Basement/scripts.pory"
	setflag FLAG_SCB_IMPIDIMP_2
# 90 "data/maps/SundayCave_Basement/scripts.pory"
	removeobject 3
# 91 "data/maps/SundayCave_Basement/scripts.pory"
	compare VAR_SUNDAYCAVE_STATE, 1
	goto_if_eq SCB_Impidimp2_2
# 94 "data/maps/SundayCave_Basement/scripts.pory"
	compare VAR_SUNDAYCAVE_STATE, 2
	goto_if_eq SCB_Impidimp2_3
SCB_Impidimp2_1:
# 97 "data/maps/SundayCave_Basement/scripts.pory"
	releaseall
	end

SCB_Impidimp2_2:
# 92 "data/maps/SundayCave_Basement/scripts.pory"
	setvar VAR_SUNDAYCAVE_STATE, 2
	goto SCB_Impidimp2_1

SCB_Impidimp2_3:
# 95 "data/maps/SundayCave_Basement/scripts.pory"
	setvar VAR_SUNDAYCAVE_STATE, 3
	goto SCB_Impidimp2_1


SCB_Impidimp3::
# 102 "data/maps/SundayCave_Basement/scripts.pory"
	lock
# 103 "data/maps/SundayCave_Basement/scripts.pory"
	faceplayer
# 104 "data/maps/SundayCave_Basement/scripts.pory"
	playmoncry SPECIES_IMPIDIMP, CRY_MODE_NORMAL
# 105 "data/maps/SundayCave_Basement/scripts.pory"
	msgbox SCB_Impidimp1_Text_0, MSGBOX_AUTOCLOSE
# 106 "data/maps/SundayCave_Basement/scripts.pory"
	waitmoncry
# 107 "data/maps/SundayCave_Basement/scripts.pory"
	setwildbattle SPECIES_IMPIDIMP, 22
# 108 "data/maps/SundayCave_Basement/scripts.pory"
	dowildbattle
# 109 "data/maps/SundayCave_Basement/scripts.pory"
	setflag FLAG_SCB_IMPIDIMP_3
# 110 "data/maps/SundayCave_Basement/scripts.pory"
	removeobject 4
# 111 "data/maps/SundayCave_Basement/scripts.pory"
	setflag FLAG_SCB_IMPIDIMP_4
# 112 "data/maps/SundayCave_Basement/scripts.pory"
	removeobject 5
# 113 "data/maps/SundayCave_Basement/scripts.pory"
	compare VAR_SUNDAYCAVE_STATE, 1
	goto_if_eq SCB_Impidimp3_2
# 116 "data/maps/SundayCave_Basement/scripts.pory"
	compare VAR_SUNDAYCAVE_STATE, 2
	goto_if_eq SCB_Impidimp3_3
SCB_Impidimp3_1:
# 119 "data/maps/SundayCave_Basement/scripts.pory"
	releaseall
	end

SCB_Impidimp3_2:
# 114 "data/maps/SundayCave_Basement/scripts.pory"
	setvar VAR_SUNDAYCAVE_STATE, 2
	goto SCB_Impidimp3_1

SCB_Impidimp3_3:
# 117 "data/maps/SundayCave_Basement/scripts.pory"
	setvar VAR_SUNDAYCAVE_STATE, 3
	goto SCB_Impidimp3_1


SCB_Impidimp4::
# 124 "data/maps/SundayCave_Basement/scripts.pory"
	lock
# 125 "data/maps/SundayCave_Basement/scripts.pory"
	faceplayer
# 126 "data/maps/SundayCave_Basement/scripts.pory"
	playmoncry SPECIES_IMPIDIMP, CRY_MODE_NORMAL
# 127 "data/maps/SundayCave_Basement/scripts.pory"
	msgbox SCB_Impidimp1_Text_0, MSGBOX_AUTOCLOSE
# 128 "data/maps/SundayCave_Basement/scripts.pory"
	waitmoncry
# 129 "data/maps/SundayCave_Basement/scripts.pory"
	setwildbattle SPECIES_IMPIDIMP, 22
# 130 "data/maps/SundayCave_Basement/scripts.pory"
	dowildbattle
# 131 "data/maps/SundayCave_Basement/scripts.pory"
	setflag FLAG_SCB_IMPIDIMP_3
# 132 "data/maps/SundayCave_Basement/scripts.pory"
	removeobject 4
# 133 "data/maps/SundayCave_Basement/scripts.pory"
	setflag FLAG_SCB_IMPIDIMP_4
# 134 "data/maps/SundayCave_Basement/scripts.pory"
	removeobject 5
# 135 "data/maps/SundayCave_Basement/scripts.pory"
	compare VAR_SUNDAYCAVE_STATE, 1
	goto_if_eq SCB_Impidimp4_2
# 138 "data/maps/SundayCave_Basement/scripts.pory"
	compare VAR_SUNDAYCAVE_STATE, 2
	goto_if_eq SCB_Impidimp4_3
SCB_Impidimp4_1:
# 141 "data/maps/SundayCave_Basement/scripts.pory"
	releaseall
	end

SCB_Impidimp4_2:
# 136 "data/maps/SundayCave_Basement/scripts.pory"
	setvar VAR_SUNDAYCAVE_STATE, 2
	goto SCB_Impidimp4_1

SCB_Impidimp4_3:
# 139 "data/maps/SundayCave_Basement/scripts.pory"
	setvar VAR_SUNDAYCAVE_STATE, 3
	goto SCB_Impidimp4_1


SCB_Impidimp1_Text_0:
# 61 "data/maps/SundayCave_Basement/scripts.pory"
	.string "IMPIDIMP: Iiiiiiimp!$"

CantTakeCareOfThatAlone::
# 29 "data/maps/SundayCave_Basement/scripts.pory"
	.string "CHAPPELL: Who are you? \p"
	.string "Ah, the challenge? \p"
	.string "It's gonna have to wait, as you can \n"
	.string "see we have a bit of a … problem right \l"
	.string "now. \p"
	.string "I can't take care of all of them alone, \n"
	.string "but if you help we should be okay. \p"
	.string "Take two and I'll take the other two. \p"
	.string "Just find a way to get rid of them, catch \n"
	.string "them or knock them out I don't care.$"

GoodJobImGoingBack::
# 42 "data/maps/SundayCave_Basement/scripts.pory"
	.string "CHAPPELL: That should do, they're all \n"
	.string "gone. \p"
	.string "Thanks for your help. \p"
	.string "You might be wondering why I'm here and \n"
	.string "not at the Concert Hall. \p"
	.string "The thing is we artists have to be good \n"
	.string "at POKéMON battles if we want the \l"
	.string "challenges to work. \p"
	.string "So then people call us when no one else\n"
	.string "can help. \p"
	.string "I'm going back, see you at the Concert \n"
	.string "Hall.$"

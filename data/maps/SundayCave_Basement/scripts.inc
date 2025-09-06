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
# 26 "data/maps/SundayCave_Basement/scripts.pory"
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
# 23 "data/maps/SundayCave_Basement/scripts.pory"
	setvar VAR_SUNDAYCAVE_STATE, 4
	goto SCB_ChappellAskForHelp_1


SCB_Impidimp1::
# 59 "data/maps/SundayCave_Basement/scripts.pory"
	lock
# 60 "data/maps/SundayCave_Basement/scripts.pory"
	faceplayer
# 61 "data/maps/SundayCave_Basement/scripts.pory"
	playmoncry SPECIES_IMPIDIMP, CRY_MODE_NORMAL
# 62 "data/maps/SundayCave_Basement/scripts.pory"
	msgbox SCB_Impidimp1_Text_0, MSGBOX_AUTOCLOSE
# 63 "data/maps/SundayCave_Basement/scripts.pory"
	waitmoncry
# 64 "data/maps/SundayCave_Basement/scripts.pory"
	setwildbattle SPECIES_IMPIDIMP, 22
# 65 "data/maps/SundayCave_Basement/scripts.pory"
	dowildbattle
# 66 "data/maps/SundayCave_Basement/scripts.pory"
	setflag FLAG_SCB_IMPIDIMP_1
# 67 "data/maps/SundayCave_Basement/scripts.pory"
	removeobject 2
# 68 "data/maps/SundayCave_Basement/scripts.pory"
	setflag FLAG_SCB_IMPIDIMP_2
# 69 "data/maps/SundayCave_Basement/scripts.pory"
	removeobject 3
# 70 "data/maps/SundayCave_Basement/scripts.pory"
	compare VAR_SUNDAYCAVE_STATE, 1
	goto_if_eq SCB_Impidimp1_2
# 73 "data/maps/SundayCave_Basement/scripts.pory"
	compare VAR_SUNDAYCAVE_STATE, 2
	goto_if_eq SCB_Impidimp1_3
SCB_Impidimp1_1:
# 76 "data/maps/SundayCave_Basement/scripts.pory"
	releaseall
	end

SCB_Impidimp1_2:
# 71 "data/maps/SundayCave_Basement/scripts.pory"
	setvar VAR_SUNDAYCAVE_STATE, 2
	goto SCB_Impidimp1_1

SCB_Impidimp1_3:
# 74 "data/maps/SundayCave_Basement/scripts.pory"
	setvar VAR_SUNDAYCAVE_STATE, 3
	goto SCB_Impidimp1_1


SCB_Impidimp2::
# 81 "data/maps/SundayCave_Basement/scripts.pory"
	lock
# 82 "data/maps/SundayCave_Basement/scripts.pory"
	faceplayer
# 83 "data/maps/SundayCave_Basement/scripts.pory"
	playmoncry SPECIES_IMPIDIMP, CRY_MODE_NORMAL
# 84 "data/maps/SundayCave_Basement/scripts.pory"
	msgbox SCB_Impidimp1_Text_0, MSGBOX_AUTOCLOSE
# 85 "data/maps/SundayCave_Basement/scripts.pory"
	waitmoncry
# 86 "data/maps/SundayCave_Basement/scripts.pory"
	setwildbattle SPECIES_IMPIDIMP, 22
# 87 "data/maps/SundayCave_Basement/scripts.pory"
	dowildbattle
# 88 "data/maps/SundayCave_Basement/scripts.pory"
	setflag FLAG_SCB_IMPIDIMP_1
# 89 "data/maps/SundayCave_Basement/scripts.pory"
	removeobject 2
# 90 "data/maps/SundayCave_Basement/scripts.pory"
	setflag FLAG_SCB_IMPIDIMP_2
# 91 "data/maps/SundayCave_Basement/scripts.pory"
	removeobject 3
# 92 "data/maps/SundayCave_Basement/scripts.pory"
	compare VAR_SUNDAYCAVE_STATE, 1
	goto_if_eq SCB_Impidimp2_2
# 95 "data/maps/SundayCave_Basement/scripts.pory"
	compare VAR_SUNDAYCAVE_STATE, 2
	goto_if_eq SCB_Impidimp2_3
SCB_Impidimp2_1:
# 98 "data/maps/SundayCave_Basement/scripts.pory"
	releaseall
	end

SCB_Impidimp2_2:
# 93 "data/maps/SundayCave_Basement/scripts.pory"
	setvar VAR_SUNDAYCAVE_STATE, 2
	goto SCB_Impidimp2_1

SCB_Impidimp2_3:
# 96 "data/maps/SundayCave_Basement/scripts.pory"
	setvar VAR_SUNDAYCAVE_STATE, 3
	goto SCB_Impidimp2_1


SCB_Impidimp3::
# 103 "data/maps/SundayCave_Basement/scripts.pory"
	lock
# 104 "data/maps/SundayCave_Basement/scripts.pory"
	faceplayer
# 105 "data/maps/SundayCave_Basement/scripts.pory"
	playmoncry SPECIES_IMPIDIMP, CRY_MODE_NORMAL
# 106 "data/maps/SundayCave_Basement/scripts.pory"
	msgbox SCB_Impidimp1_Text_0, MSGBOX_AUTOCLOSE
# 107 "data/maps/SundayCave_Basement/scripts.pory"
	waitmoncry
# 108 "data/maps/SundayCave_Basement/scripts.pory"
	setwildbattle SPECIES_IMPIDIMP, 22
# 109 "data/maps/SundayCave_Basement/scripts.pory"
	dowildbattle
# 110 "data/maps/SundayCave_Basement/scripts.pory"
	setflag FLAG_SCB_IMPIDIMP_3
# 111 "data/maps/SundayCave_Basement/scripts.pory"
	removeobject 4
# 112 "data/maps/SundayCave_Basement/scripts.pory"
	setflag FLAG_SCB_IMPIDIMP_4
# 113 "data/maps/SundayCave_Basement/scripts.pory"
	removeobject 5
# 114 "data/maps/SundayCave_Basement/scripts.pory"
	compare VAR_SUNDAYCAVE_STATE, 1
	goto_if_eq SCB_Impidimp3_2
# 117 "data/maps/SundayCave_Basement/scripts.pory"
	compare VAR_SUNDAYCAVE_STATE, 2
	goto_if_eq SCB_Impidimp3_3
SCB_Impidimp3_1:
# 120 "data/maps/SundayCave_Basement/scripts.pory"
	releaseall
	end

SCB_Impidimp3_2:
# 115 "data/maps/SundayCave_Basement/scripts.pory"
	setvar VAR_SUNDAYCAVE_STATE, 2
	goto SCB_Impidimp3_1

SCB_Impidimp3_3:
# 118 "data/maps/SundayCave_Basement/scripts.pory"
	setvar VAR_SUNDAYCAVE_STATE, 3
	goto SCB_Impidimp3_1


SCB_Impidimp4::
# 125 "data/maps/SundayCave_Basement/scripts.pory"
	lock
# 126 "data/maps/SundayCave_Basement/scripts.pory"
	faceplayer
# 127 "data/maps/SundayCave_Basement/scripts.pory"
	playmoncry SPECIES_IMPIDIMP, CRY_MODE_NORMAL
# 128 "data/maps/SundayCave_Basement/scripts.pory"
	msgbox SCB_Impidimp1_Text_0, MSGBOX_AUTOCLOSE
# 129 "data/maps/SundayCave_Basement/scripts.pory"
	waitmoncry
# 130 "data/maps/SundayCave_Basement/scripts.pory"
	setwildbattle SPECIES_IMPIDIMP, 22
# 131 "data/maps/SundayCave_Basement/scripts.pory"
	dowildbattle
# 132 "data/maps/SundayCave_Basement/scripts.pory"
	setflag FLAG_SCB_IMPIDIMP_3
# 133 "data/maps/SundayCave_Basement/scripts.pory"
	removeobject 4
# 134 "data/maps/SundayCave_Basement/scripts.pory"
	setflag FLAG_SCB_IMPIDIMP_4
# 135 "data/maps/SundayCave_Basement/scripts.pory"
	removeobject 5
# 136 "data/maps/SundayCave_Basement/scripts.pory"
	compare VAR_SUNDAYCAVE_STATE, 1
	goto_if_eq SCB_Impidimp4_2
# 139 "data/maps/SundayCave_Basement/scripts.pory"
	compare VAR_SUNDAYCAVE_STATE, 2
	goto_if_eq SCB_Impidimp4_3
SCB_Impidimp4_1:
# 142 "data/maps/SundayCave_Basement/scripts.pory"
	releaseall
	end

SCB_Impidimp4_2:
# 137 "data/maps/SundayCave_Basement/scripts.pory"
	setvar VAR_SUNDAYCAVE_STATE, 2
	goto SCB_Impidimp4_1

SCB_Impidimp4_3:
# 140 "data/maps/SundayCave_Basement/scripts.pory"
	setvar VAR_SUNDAYCAVE_STATE, 3
	goto SCB_Impidimp4_1


SundayCave_Absolite::
# 147 "data/maps/SundayCave_Basement/scripts.pory"
	goto_if_set FLAG_SCB_ABSOLITE, SundayCave_Absolite_1
	return

SundayCave_Absolite_1:
# 148 "data/maps/SundayCave_Basement/scripts.pory"
	lock
# 149 "data/maps/SundayCave_Basement/scripts.pory"
	msgbox SundayCave_Absolite_Text_0
# 150 "data/maps/SundayCave_Basement/scripts.pory"
	giveitem ITEM_ABSOLITE
# 151 "data/maps/SundayCave_Basement/scripts.pory"
	release
	end


SCB_Impidimp1_Text_0:
# 62 "data/maps/SundayCave_Basement/scripts.pory"
	.string "IMPIDIMP: Iiiiiiimp!$"

SundayCave_Absolite_Text_0:
# 149 "data/maps/SundayCave_Basement/scripts.pory"
	.string "There is something stuck in the drill's\n"
	.string "tracks.$"

CantTakeCareOfThatAlone::
# 30 "data/maps/SundayCave_Basement/scripts.pory"
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
# 43 "data/maps/SundayCave_Basement/scripts.pory"
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

SundayCave_MapScripts::
	.byte 0


SundayCave_Scientist1::
# 4 "data/maps/SundayCave/scripts.pory"
	lock
# 5 "data/maps/SundayCave/scripts.pory"
	faceplayer
# 6 "data/maps/SundayCave/scripts.pory"
	compare VAR_SUNDAYCAVE_STATE, 3
	goto_if_eq SundayCave_Scientist1_2
# 11 "data/maps/SundayCave/scripts.pory"
	msgbox SundayCave_Scientist1_PleaseHelp, MSGBOX_AUTOCLOSE
SundayCave_Scientist1_1:
# 13 "data/maps/SundayCave/scripts.pory"
	releaseall
	end

SundayCave_Scientist1_2:
# 7 "data/maps/SundayCave/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, SundayCave_Scientist1_BattleIntro, SundayCave_Scientist1_Defeated
# 8 "data/maps/SundayCave/scripts.pory"
	msgbox SundayCave_Scientist1_PostBattle, MSGBOX_AUTOCLOSE
	goto SundayCave_Scientist1_1


SundayCave_Scientist2::
# 43 "data/maps/SundayCave/scripts.pory"
	lock
# 44 "data/maps/SundayCave/scripts.pory"
	faceplayer
# 45 "data/maps/SundayCave/scripts.pory"
	compare VAR_SUNDAYCAVE_STATE, 4
	goto_if_eq SundayCave_Scientist2_2
# 50 "data/maps/SundayCave/scripts.pory"
	msgbox SundayCave_Scientist2_PleaseHelp, MSGBOX_AUTOCLOSE
SundayCave_Scientist2_1:
# 52 "data/maps/SundayCave/scripts.pory"
	releaseall
	end

SundayCave_Scientist2_2:
# 46 "data/maps/SundayCave/scripts.pory"
	trainerbattle_single TRAINER_TAYLOR, SundayCave_Scientist2_BattleIntro, SundayCave_Scientist2_Defeated
# 47 "data/maps/SundayCave/scripts.pory"
	msgbox SundayCave_Scientist2_PostBattle, MSGBOX_AUTOCLOSE
	goto SundayCave_Scientist2_1


SundayCave_MachineGuy::
# 85 "data/maps/SundayCave/scripts.pory"
	lock
# 86 "data/maps/SundayCave/scripts.pory"
	faceplayer
# 87 "data/maps/SundayCave/scripts.pory"
	compare VAR_SUNDAYCAVE_STATE, 4
	goto_if_eq SundayCave_MachineGuy_2
# 117 "data/maps/SundayCave/scripts.pory"
	msgbox SundayCave_MachineGuy_ImpidimpsHere, MSGBOX_AUTOCLOSE
SundayCave_MachineGuy_1:
# 119 "data/maps/SundayCave/scripts.pory"
	releaseall
	end

SundayCave_MachineGuy_2:
# 88 "data/maps/SundayCave/scripts.pory"
	compare VAR_SUNDAYCAVE_MACHINEGUY, 0
	goto_if_eq SundayCave_MachineGuy_5
# 112 "data/maps/SundayCave/scripts.pory"
	msgbox SundayCave_MachineGuy_FindFossils, MSGBOX_AUTOCLOSE
	goto SundayCave_MachineGuy_1

SundayCave_MachineGuy_5:
# 89 "data/maps/SundayCave/scripts.pory"
	msgbox SundayCave_MachineGuy_ImpidimpsCleared
# 91 "data/maps/SundayCave/scripts.pory"
	dynmultipush SundayCave_MachineGuy_Text_0, ITEM_JAW_FOSSIL
# 92 "data/maps/SundayCave/scripts.pory"
	dynmultipush SundayCave_MachineGuy_Text_1, ITEM_SAIL_FOSSIL
# 93 "data/maps/SundayCave/scripts.pory"
	dynmultipush SundayCave_MachineGuy_Text_2, ITEM_NONE
# 94 "data/maps/SundayCave/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 3, DYN_MULTICHOICE_CB_NONE
# 96 "data/maps/SundayCave/scripts.pory"
	switch VAR_RESULT
# 97 "data/maps/SundayCave/scripts.pory"
	case ITEM_JAW_FOSSIL, SundayCave_MachineGuy_9
# 101 "data/maps/SundayCave/scripts.pory"
	case ITEM_SAIL_FOSSIL, SundayCave_MachineGuy_10
# 105 "data/maps/SundayCave/scripts.pory"
	case ITEM_NONE, SundayCave_MachineGuy_11
# 108 "data/maps/SundayCave/scripts.pory"
	msgbox SundayCave_MachineGuy_Text_3, MSGBOX_AUTOCLOSE
	goto SundayCave_MachineGuy_1

SundayCave_MachineGuy_9:
# 98 "data/maps/SundayCave/scripts.pory"
	giveitem ITEM_JAW_FOSSIL
# 99 "data/maps/SundayCave/scripts.pory"
	msgbox SundayCave_MachineGuy_ExplainFossil, MSGBOX_AUTOCLOSE
# 100 "data/maps/SundayCave/scripts.pory"
	setvar VAR_SUNDAYCAVE_MACHINEGUY, 1
	goto SundayCave_MachineGuy_1

SundayCave_MachineGuy_10:
# 102 "data/maps/SundayCave/scripts.pory"
	giveitem ITEM_SAIL_FOSSIL
# 103 "data/maps/SundayCave/scripts.pory"
	msgbox SundayCave_MachineGuy_ExplainFossil, MSGBOX_AUTOCLOSE
# 104 "data/maps/SundayCave/scripts.pory"
	setvar VAR_SUNDAYCAVE_MACHINEGUY, 1
	goto SundayCave_MachineGuy_1

SundayCave_MachineGuy_11:
# 106 "data/maps/SundayCave/scripts.pory"
	msgbox SundayCave_MachineGuy_Text_3, MSGBOX_AUTOCLOSE
	goto SundayCave_MachineGuy_1


SundayCave_MachineGuy_Text_0:
# 91 "data/maps/SundayCave/scripts.pory"
	.string "Jaw Fossil$"

SundayCave_MachineGuy_Text_1:
# 92 "data/maps/SundayCave/scripts.pory"
	.string "Sail Fossil$"

SundayCave_MachineGuy_Text_2:
# 93 "data/maps/SundayCave/scripts.pory"
	.string "None, thanks!$"

SundayCave_MachineGuy_Text_3:
# 106 "data/maps/SundayCave/scripts.pory"
	.string "Oh okay, come back later if you change\n"
	.string "your mind!$"

SundayCave_Scientist1_BattleIntro::
# 17 "data/maps/SundayCave/scripts.pory"
	.string "I need a break from digging all day.$"

SundayCave_Scientist1_Defeated::
# 21 "data/maps/SundayCave/scripts.pory"
	.string "Time to get back to work…$"

SundayCave_Scientist1_PostBattle::
# 25 "data/maps/SundayCave/scripts.pory"
	.string "This cave is full of fossils for some\n"
	.string "reason. \p"
	.string "That's very convenient for the Crystal \n"
	.string "Stream City Museum's research program. $"

SundayCave_Scientist1_PleaseHelp::
# 32 "data/maps/SundayCave/scripts.pory"
	.string "We're having technical issues with \n"
	.string "our equipments on the lower level! \p"
	.string "Some POKéMON are messing with it, \n"
	.string "we called Chappell for help but there \l"
	.string "are too many of them. \p"
	.string "Please go help her if you can, we can't \n"
	.string "work without our machines!$"

SundayCave_Scientist2_BattleIntro::
# 56 "data/maps/SundayCave/scripts.pory"
	.string "We use our drills to excavate fossils. \p"
	.string "Then we bring them back to the museum \n"
	.string "to study them! \p"
	.string "It's a whole process!$"

SundayCave_Scientist2_Defeated::
# 63 "data/maps/SundayCave/scripts.pory"
	.string "I suppose battles are also a whole \n"
	.string "process…$"

SundayCave_Scientist2_PostBattle::
# 68 "data/maps/SundayCave/scripts.pory"
	.string "The fossils in good condition can be\n"
	.string "brought back to life at the Crystal \l"
	.string "Stream City Museum! \p"
	.string "It's a marvel of science that allows us \n"
	.string "to learn a lot about ancient POKéMON. $"

SundayCave_Scientist2_PleaseHelp::
# 76 "data/maps/SundayCave/scripts.pory"
	.string "We need our machines for our research! \p"
	.string "POKéMON often mess with them but this \n"
	.string "time is worse than usual. \p"
	.string "You're a POKéMON trainer, please help \n"
	.string "us! $"

SundayCave_MachineGuy_ImpidimpsHere::
# 123 "data/maps/SundayCave/scripts.pory"
	.string "We're having big technical difficulties\n"
	.string "right now! \p"
	.string "We asked Chappell Roan to help us with \n"
	.string "the POKéMON on the lower level but I think \l"
	.string "she needs help! $"

SundayCave_MachineGuy_ImpidimpsCleared::
# 131 "data/maps/SundayCave/scripts.pory"
	.string "Thank you so much for your help! \p"
	.string "As a thank you gift, please accept one of \n"
	.string "these fossils. \p"
	.string "We found them last year but already got\n"
	.string "all the data we need from them! $"

SundayCave_MachineGuy_ExplainFossil::
# 139 "data/maps/SundayCave/scripts.pory"
	.string "Here you go!\p"
	.string "Again, thank you so much for your help! \p"
	.string "You can bring this fossil to the Crystal \n"
	.string "Stream City Museum if you want it to be \l"
	.string "turned back into a POKéMON!$"

SundayCave_MachineGuy_FindFossils::
# 147 "data/maps/SundayCave/scripts.pory"
	.string "We find fossils thanks to our drills. \p"
	.string "But not only that, we also sometimes \n"
	.string "find more things like strange stones \l"
	.string "that have different effects on POKéMON.$"

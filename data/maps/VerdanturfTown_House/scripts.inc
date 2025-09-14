# 1 "data/maps/VerdanturfTown_House/scripts.pory"

# 2 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_MapScripts::
# 3 "data/maps/VerdanturfTown_House/scripts.pory"
	.byte 0

BigDogIslandHouse_Woman1::
# 6 "data/maps/VerdanturfTown_House/scripts.pory"
	lock
# 7 "data/maps/VerdanturfTown_House/scripts.pory"
	faceplayer
# 8 "data/maps/VerdanturfTown_House/scripts.pory"
	goto_if_set FLAG_ITEM_MT_PYRE_6F_TM_SHADOW_BALL, BigDogIslandHouse_Woman1_2
# 12 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox KnowShadowBall
# 13 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM30
# 14 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox ExplainShadowBall, MSGBOX_AUTOCLOSE
# 15 "data/maps/VerdanturfTown_House/scripts.pory"
	setflag FLAG_ITEM_MT_PYRE_6F_TM_SHADOW_BALL
BigDogIslandHouse_Woman1_1:
# 17 "data/maps/VerdanturfTown_House/scripts.pory"
	release
	end

BigDogIslandHouse_Woman1_2:
# 9 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox ExplainShadowBall, MSGBOX_AUTOCLOSE
	goto BigDogIslandHouse_Woman1_1


BDI_Greavard::
# 36 "data/maps/VerdanturfTown_House/scripts.pory"
	lock
# 37 "data/maps/VerdanturfTown_House/scripts.pory"
	faceplayer
# 38 "data/maps/VerdanturfTown_House/scripts.pory"
	playmoncry SPECIES_GREAVARD, CRY_MODE_NORMAL
# 39 "data/maps/VerdanturfTown_House/scripts.pory"
	waitmoncry
# 40 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox BDI_Greavard_Text_0
# 41 "data/maps/VerdanturfTown_House/scripts.pory"
	release
	end


BDI_Greavard_Text_0:
# 40 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "GREAVARD: Woof!$"

KnowShadowBall::
# 21 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "I taught my POKéMON a powerful Ghost \n"
	.string "Type move. \p"
	.string "And since I'm feeling generous, this \n"
	.string "is for you!$"

ExplainShadowBall::
# 28 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "This move, Shadow Ball, is suuuuper \n"
	.string "cool! \p"
	.string "Your POKéMON makes a ball ow darkness \n"
	.string "and then it goes wooosh BOOM!$"

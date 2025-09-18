SundayCave_Exit_MapScripts::
# 2 "data/maps/SundayCave_Exit/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SundayCave_ResetPorygon
	.byte 0


SundayCave_ResetPorygon::
# 6 "data/maps/SundayCave_Exit/scripts.pory"
	setvar VAR_GODZILLAND_PORYGON, 0
	return


SundayCave_Waris::
# 10 "data/maps/SundayCave_Exit/scripts.pory"
	trainerbattle_single TRAINER_WARIS, SundayCave_Waris_Text_0, SundayCave_Waris_Text_1, GiveGengarite
# 11 "data/maps/SundayCave_Exit/scripts.pory"
	goto GiveGengarite
# 12 "data/maps/SundayCave_Exit/scripts.pory"
	release
	end


GiveGengarite::
# 17 "data/maps/SundayCave_Exit/scripts.pory"
	lock
# 18 "data/maps/SundayCave_Exit/scripts.pory"
	faceplayer
	checkitem ITEM_MEGA_RING
# 0 "data/maps/SundayCave_Exit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne GiveGengarite_2
GiveGengarite_1:
# 30 "data/maps/SundayCave_Exit/scripts.pory"
	release
	end

GiveGengarite_2:
# 20 "data/maps/SundayCave_Exit/scripts.pory"
	goto_if_set FLAG_RECEIVED_GENGARITE, GiveGengarite_4
# 24 "data/maps/SundayCave_Exit/scripts.pory"
	msgbox SundayCave_WarisIsThatMegaRing
# 25 "data/maps/SundayCave_Exit/scripts.pory"
	giveitem ITEM_GENGARITE
# 26 "data/maps/SundayCave_Exit/scripts.pory"
	setflag FLAG_RECEIVED_GENGARITE
# 27 "data/maps/SundayCave_Exit/scripts.pory"
	msgbox GiveGengarite_Text_1, MSGBOX_AUTOCLOSE
	goto GiveGengarite_1

GiveGengarite_4:
# 21 "data/maps/SundayCave_Exit/scripts.pory"
	msgbox GiveGengarite_Text_0
	goto GiveGengarite_1


SundayCave_Waris_Text_0:
# 10 "data/maps/SundayCave_Exit/scripts.pory"
	.string "WARIS: I love caves, no one bothers me\n"
	.string "here and I get to listen to music\l"
	.string "while I work!$"

SundayCave_Waris_Text_1:
# 10 "data/maps/SundayCave_Exit/scripts.pory"
	.string "Cave is my vibes, yes!$"

GiveGengarite_Text_0:
# 21 "data/maps/SundayCave_Exit/scripts.pory"
	.string "WARIS: The Last Dinner Party is the\n"
	.string "best band to listen to in a cave!$"

GiveGengarite_Text_1:
# 27 "data/maps/SundayCave_Exit/scripts.pory"
	.string "WARIS: I hope you'll find it useful!$"

SundayCave_WarisIsThatMegaRing::
# 33 "data/maps/SundayCave_Exit/scripts.pory"
	.string "WARIS: Hey, is this a Mega-Ring?\p"
	.string "I don't have one of these so I can't \n"
	.string "use this stone I found. \p"
	.string "Here, you should take it.$"

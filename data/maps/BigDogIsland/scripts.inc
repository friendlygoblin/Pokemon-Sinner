BigDogIsland_MapScripts::
# 2 "data/maps/BigDogIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ClearKatieFlag
	.byte 0


ClearKatieFlag::
# 6 "data/maps/BigDogIsland/scripts.pory"
	clearflag FLAG_BDI_KATIE
	return


BDI_Fisherman::
# 10 "data/maps/BigDogIsland/scripts.pory"
	trainerbattle_single TRAINER_IVAN, BDI_Fisherman_BattleIntro, BDI_Fisherman_Defeated
# 11 "data/maps/BigDogIsland/scripts.pory"
	msgbox BDI_Fisherman_PostBattle, MSGBOX_AUTOCLOSE
	return


BDI_TuberGirl::
# 30 "data/maps/BigDogIsland/scripts.pory"
	trainerbattle_single TRAINER_LOLA_1, BDI_TuberGirl_BattleIntro, BDI_TuberGirl_Defeated
# 31 "data/maps/BigDogIsland/scripts.pory"
	msgbox BDI_TuberGirl_PostBattle, MSGBOX_AUTOCLOSE
	return


BDI_Fisherman_BattleIntro::
# 14 "data/maps/BigDogIsland/scripts.pory"
	.string "I know this place is famous for the\n"
	.string "dog POKéMON but I prefer fishing! $"

BDI_Fisherman_Defeated::
# 19 "data/maps/BigDogIsland/scripts.pory"
	.string "I'm good at catching POKéMON, not \n"
	.string "training them…$"

BDI_Fisherman_PostBattle::
# 24 "data/maps/BigDogIsland/scripts.pory"
	.string "No one really knows why the POKéMON\n"
	.string "here are all canines.$"

BDI_TuberGirl_BattleIntro::
# 34 "data/maps/BigDogIsland/scripts.pory"
	.string "I love swimming here with my friends!\n"
	.string "Come join us!$"

BDI_TuberGirl_Defeated::
# 39 "data/maps/BigDogIsland/scripts.pory"
	.string "That was fun but I'm a little tired…$"

BDI_TuberGirl_PostBattle::
# 43 "data/maps/BigDogIsland/scripts.pory"
	.string "Living on an island is so cool, I can\n"
	.string "go swimming every day!$"

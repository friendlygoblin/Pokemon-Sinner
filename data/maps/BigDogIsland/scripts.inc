BigDogIsland_MapScripts::
# 2 "data/maps/BigDogIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ClearKatieFlag
	.byte 0


ClearKatieFlag::
# 6 "data/maps/BigDogIsland/scripts.pory"
	setflag FLAG_VISITED_VERDANTURF_TOWN
# 7 "data/maps/BigDogIsland/scripts.pory"
	clearflag FLAG_BDI_KATIE
	return


BDI_Fisherman::
# 11 "data/maps/BigDogIsland/scripts.pory"
	trainerbattle_single TRAINER_IVAN, BDI_Fisherman_Text_0, BDI_Fisherman_Text_1
# 12 "data/maps/BigDogIsland/scripts.pory"
	msgbox BDI_Fisherman_Text_2, MSGBOX_AUTOCLOSE
	return


BDI_TuberGirl::
# 16 "data/maps/BigDogIsland/scripts.pory"
	trainerbattle_single TRAINER_LOLA_1, BDI_TuberGirl_Text_0, BDI_TuberGirl_Text_1
# 17 "data/maps/BigDogIsland/scripts.pory"
	msgbox BDI_TuberGirl_Text_2, MSGBOX_AUTOCLOSE
	return


BDI_Birdkeeper::
# 21 "data/maps/BigDogIsland/scripts.pory"
	trainerbattle_single TRAINER_PERRY, BDI_Birdkeeper_Text_0, BDI_Birdkeeper_Text_1
# 22 "data/maps/BigDogIsland/scripts.pory"
	msgbox BDI_Birdkeeper_Text_2, MSGBOX_AUTOCLOSE
	return


BDI_BattleGirl::
# 26 "data/maps/BigDogIsland/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, BDI_BattleGirl_Text_0, BDI_BattleGirl_Text_1
# 27 "data/maps/BigDogIsland/scripts.pory"
	msgbox BDI_BattleGirl_Text_2, MSGBOX_AUTOCLOSE
	return


BDI_Fisherman_Text_0:
# 11 "data/maps/BigDogIsland/scripts.pory"
	.string "I know this place is famous for the dog\n"
	.string "POKéMON but I prefer fishing! $"

BDI_Fisherman_Text_1:
# 11 "data/maps/BigDogIsland/scripts.pory"
	.string "I'm good at catching POKéMON, not\n"
	.string "training them…$"

BDI_Fisherman_Text_2:
# 12 "data/maps/BigDogIsland/scripts.pory"
	.string "No one really knows why the POKéMON\n"
	.string "here are all canines.$"

BDI_TuberGirl_Text_0:
# 16 "data/maps/BigDogIsland/scripts.pory"
	.string "I love swimming here with my friends!\n"
	.string "Come join us!$"

BDI_TuberGirl_Text_1:
# 16 "data/maps/BigDogIsland/scripts.pory"
	.string "That was fun but I'm a little tired…$"

BDI_TuberGirl_Text_2:
# 17 "data/maps/BigDogIsland/scripts.pory"
	.string "Living on an island is so cool, I can go\n"
	.string "swimming every day!$"

BDI_Birdkeeper_Text_0:
# 21 "data/maps/BigDogIsland/scripts.pory"
	.string "The canine POKéMON always scare the\n"
	.string "birds away…$"

BDI_Birdkeeper_Text_1:
# 21 "data/maps/BigDogIsland/scripts.pory"
	.string "My birds…$"

BDI_Birdkeeper_Text_2:
# 22 "data/maps/BigDogIsland/scripts.pory"
	.string "I wish there were more birds on this\n"
	.string "island.$"

BDI_BattleGirl_Text_0:
# 26 "data/maps/BigDogIsland/scripts.pory"
	.string "My team and I train hard in the cave!$"

BDI_BattleGirl_Text_1:
# 26 "data/maps/BigDogIsland/scripts.pory"
	.string "I guess we need more training…$"

BDI_BattleGirl_Text_2:
# 27 "data/maps/BigDogIsland/scripts.pory"
	.string "I came to this island to focus on myself\n"
	.string "and my POKéMON.$"

BigDogIsland_MapScripts::
# 2 "data/maps/BigDogIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ClearKatieFlag
	.byte 0


ClearKatieFlag::
# 6 "data/maps/BigDogIsland/scripts.pory"
	setflag FLAG_VISITED_VERDANTURF_TOWN
# 7 "data/maps/BigDogIsland/scripts.pory"
	clearflag FLAG_BDI_KATIE
# 8 "data/maps/BigDogIsland/scripts.pory"
	setvar VAR_GODZILLAND_PORYGON, 0
	return


BDI_Fisherman::
# 12 "data/maps/BigDogIsland/scripts.pory"
	trainerbattle_single TRAINER_IVAN, BDI_Fisherman_Text_0, BDI_Fisherman_Text_1
# 13 "data/maps/BigDogIsland/scripts.pory"
	msgbox BDI_Fisherman_Text_2, MSGBOX_AUTOCLOSE
	return


BDI_TuberGirl::
# 17 "data/maps/BigDogIsland/scripts.pory"
	trainerbattle_single TRAINER_LOLA_1, BDI_TuberGirl_Text_0, BDI_TuberGirl_Text_1
# 18 "data/maps/BigDogIsland/scripts.pory"
	msgbox BDI_TuberGirl_Text_2, MSGBOX_AUTOCLOSE
	return


BDI_Birdkeeper::
# 22 "data/maps/BigDogIsland/scripts.pory"
	trainerbattle_single TRAINER_PERRY, BDI_Birdkeeper_Text_0, BDI_Birdkeeper_Text_1
# 23 "data/maps/BigDogIsland/scripts.pory"
	msgbox BDI_Birdkeeper_Text_2, MSGBOX_AUTOCLOSE
	return


BDI_BattleGirl::
# 27 "data/maps/BigDogIsland/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, BDI_BattleGirl_Text_0, BDI_BattleGirl_Text_1
# 28 "data/maps/BigDogIsland/scripts.pory"
	msgbox BDI_BattleGirl_Text_2, MSGBOX_AUTOCLOSE
	return


BDI_Woman::
# 32 "data/maps/BigDogIsland/scripts.pory"
	lock
# 33 "data/maps/BigDogIsland/scripts.pory"
	faceplayer
# 34 "data/maps/BigDogIsland/scripts.pory"
	msgbox BDI_Woman_Text_0
# 35 "data/maps/BigDogIsland/scripts.pory"
	release
	end


BDI_Man::
# 40 "data/maps/BigDogIsland/scripts.pory"
	lock
# 41 "data/maps/BigDogIsland/scripts.pory"
	faceplayer
# 42 "data/maps/BigDogIsland/scripts.pory"
	msgbox BDI_Man_Text_0
# 43 "data/maps/BigDogIsland/scripts.pory"
	release
	end


BDI_TuberBoy::
# 48 "data/maps/BigDogIsland/scripts.pory"
	lock
# 49 "data/maps/BigDogIsland/scripts.pory"
	faceplayer
# 50 "data/maps/BigDogIsland/scripts.pory"
	msgbox BDI_TuberBoy_Text_0
# 51 "data/maps/BigDogIsland/scripts.pory"
	release
	end


BDI_Sign::
# 56 "data/maps/BigDogIsland/scripts.pory"
	lock
# 57 "data/maps/BigDogIsland/scripts.pory"
	msgbox BDI_Sign_Text_0
# 58 "data/maps/BigDogIsland/scripts.pory"
	release
	end


BDI_Fisherman_Text_0:
# 12 "data/maps/BigDogIsland/scripts.pory"
	.string "I know this place is famous for the dog\n"
	.string "POKéMON but I prefer fishing! $"

BDI_Fisherman_Text_1:
# 12 "data/maps/BigDogIsland/scripts.pory"
	.string "I'm good at catching POKéMON, not\n"
	.string "training them…$"

BDI_Fisherman_Text_2:
# 13 "data/maps/BigDogIsland/scripts.pory"
	.string "No one really knows why the POKéMON\n"
	.string "here are all canines.$"

BDI_TuberGirl_Text_0:
# 17 "data/maps/BigDogIsland/scripts.pory"
	.string "I love swimming here with my friends!\n"
	.string "Come join us!$"

BDI_TuberGirl_Text_1:
# 17 "data/maps/BigDogIsland/scripts.pory"
	.string "That was fun but I'm a little tired…$"

BDI_TuberGirl_Text_2:
# 18 "data/maps/BigDogIsland/scripts.pory"
	.string "Living on an island is so cool, I can go\n"
	.string "swimming every day!$"

BDI_Birdkeeper_Text_0:
# 22 "data/maps/BigDogIsland/scripts.pory"
	.string "The canine POKéMON always scare the\n"
	.string "birds away…$"

BDI_Birdkeeper_Text_1:
# 22 "data/maps/BigDogIsland/scripts.pory"
	.string "My birds…$"

BDI_Birdkeeper_Text_2:
# 23 "data/maps/BigDogIsland/scripts.pory"
	.string "I wish there were more birds on this\n"
	.string "island.$"

BDI_BattleGirl_Text_0:
# 27 "data/maps/BigDogIsland/scripts.pory"
	.string "My team and I train hard in the cave!$"

BDI_BattleGirl_Text_1:
# 27 "data/maps/BigDogIsland/scripts.pory"
	.string "I guess we need more training…$"

BDI_BattleGirl_Text_2:
# 28 "data/maps/BigDogIsland/scripts.pory"
	.string "I came to this island to focus on myself\n"
	.string "and my POKéMON.$"

BDI_Woman_Text_0:
# 34 "data/maps/BigDogIsland/scripts.pory"
	.string "I never go in the cave.\p"
	.string "I've seen people go in, and I think\n"
	.string "someone lives on the other side.\p"
	.string "I'm still to scared to try.$"

BDI_Man_Text_0:
# 42 "data/maps/BigDogIsland/scripts.pory"
	.string "I couldn't pick a better place to retire.\p"
	.string "It's just me and the wild dogs!$"

BDI_TuberBoy_Text_0:
# 50 "data/maps/BigDogIsland/scripts.pory"
	.string "The POKéMON on our island are all\n"
	.string "canines.\p"
	.string "I wonder if there's a cat island…$"

BDI_Sign_Text_0:
# 57 "data/maps/BigDogIsland/scripts.pory"
	.string "Welcome to Big Dog Island!\p"
	.string "So sweet your absence will feel like\n"
	.string "violence!$"

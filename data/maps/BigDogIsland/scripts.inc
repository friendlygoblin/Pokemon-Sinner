BigDogIsland_MapScripts::
# 2 "data/maps/BigDogIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ClearKatieFlag
	.byte 0


ClearKatieFlag::
# 6 "data/maps/BigDogIsland/scripts.pory"
	clearflag FLAG_BDI_KATIE
	return


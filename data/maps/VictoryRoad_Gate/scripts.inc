VictoryRoad_Gate_MapScripts::
	.byte 0


VRG_HealPokemon::
# 4 "data/maps/VictoryRoad_Gate/scripts.pory"
	lock
# 5 "data/maps/VictoryRoad_Gate/scripts.pory"
	msgbox VRG_HealPokemon_Text_0
# 6 "data/maps/VictoryRoad_Gate/scripts.pory"
	fadescreen FADE_TO_BLACK
# 7 "data/maps/VictoryRoad_Gate/scripts.pory"
	special HealPlayerParty
# 8 "data/maps/VictoryRoad_Gate/scripts.pory"
	playfanfare MUS_HEAL
# 9 "data/maps/VictoryRoad_Gate/scripts.pory"
	waitfanfare
# 10 "data/maps/VictoryRoad_Gate/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 11 "data/maps/VictoryRoad_Gate/scripts.pory"
	msgbox VRG_HealPokemon_Text_1
# 12 "data/maps/VictoryRoad_Gate/scripts.pory"
	release
	end


	.align 2
# 16 "data/maps/VictoryRoad_Gate/scripts.pory"
VRG_Mart:
# 17 "data/maps/VictoryRoad_Gate/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/VictoryRoad_Gate/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 19 "data/maps/VictoryRoad_Gate/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 20 "data/maps/VictoryRoad_Gate/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 21 "data/maps/VictoryRoad_Gate/scripts.pory"
	.2byte ITEM_MAX_POTION
# 22 "data/maps/VictoryRoad_Gate/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 23 "data/maps/VictoryRoad_Gate/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 24 "data/maps/VictoryRoad_Gate/scripts.pory"
	.2byte ITEM_REVIVE
# 25 "data/maps/VictoryRoad_Gate/scripts.pory"
	.2byte ITEM_TM61
# 26 "data/maps/VictoryRoad_Gate/scripts.pory"
	.2byte ITEM_TM64
	.2byte ITEM_NONE

VRG_MartGuy::
# 30 "data/maps/VictoryRoad_Gate/scripts.pory"
	lock
# 31 "data/maps/VictoryRoad_Gate/scripts.pory"
	msgbox VRG_MartGuy_Text_0
# 32 "data/maps/VictoryRoad_Gate/scripts.pory"
	message VRG_MartGuy_Text_1
# 33 "data/maps/VictoryRoad_Gate/scripts.pory"
	pokemart VRG_Mart
# 34 "data/maps/VictoryRoad_Gate/scripts.pory"
	msgbox VRG_MartGuy_Text_2
# 35 "data/maps/VictoryRoad_Gate/scripts.pory"
	release
	end


VRG_HealPokemon_Text_0:
# 5 "data/maps/VictoryRoad_Gate/scripts.pory"
	.string "The road ahead is full of trainers\n"
	.string "wanting to challenge The Last Dinner\l"
	.string "Party.\p"
	.string "They'll want to train against you, let\n"
	.string "your POKéMON rest before you go.$"

VRG_HealPokemon_Text_1:
# 11 "data/maps/VictoryRoad_Gate/scripts.pory"
	.string "Good luck, come back here if you need to\n"
	.string "heal your team.$"

VRG_MartGuy_Text_0:
# 31 "data/maps/VictoryRoad_Gate/scripts.pory"
	.string "The road ahead is full of trainers\n"
	.string "wanting to challenge The Last Dinner\l"
	.string "Party.$"

VRG_MartGuy_Text_1:
# 32 "data/maps/VictoryRoad_Gate/scripts.pory"
	.string "We offer a stock of medicine, have a\n"
	.string "look.$"

VRG_MartGuy_Text_2:
# 34 "data/maps/VictoryRoad_Gate/scripts.pory"
	.string "Good luck!$"

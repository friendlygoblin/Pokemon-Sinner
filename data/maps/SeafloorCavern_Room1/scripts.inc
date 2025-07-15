# 1 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 2 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_MapScripts::
# 3 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.byte 0
# 4 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 5 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_EventScript_Grunt1::
# 6 "data/maps/SeafloorCavern_Room1/scripts.pory"
	msgbox SeafloorCavern_Room1_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 7 "data/maps/SeafloorCavern_Room1/scripts.pory"
	end
# 8 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 9 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_EventScript_Grunt2::
# 10 "data/maps/SeafloorCavern_Room1/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, SeafloorCavern_Room1_Text_Grunt2Intro, SeafloorCavern_Room1_Text_Grunt2Defeat
# 11 "data/maps/SeafloorCavern_Room1/scripts.pory"
	msgbox SeafloorCavern_Room1_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 12 "data/maps/SeafloorCavern_Room1/scripts.pory"
	end
# 13 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 14 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt1Intro:
# 15 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "We don't need a kid around!\n"
# 16 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "Go on home already!$"
# 17 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 18 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt1Defeat:
# 19 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "I want to go home…$"
# 20 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 21 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt1PostBattle:
# 22 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "I want to get a promotion so I can\n"
# 23 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "boss around the GRUNTS…$"
# 24 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 25 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt2Intro:
# 26 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "That submarine… It's tiny inside.\n"
# 27 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "I'm sore all over!$"
# 28 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 29 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt2Defeat:
# 30 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "Losing makes me sore!$"
# 31 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 32 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt2PostBattle:
# 33 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "That submarine we jacked, man,\n"
# 34 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "it's brutal as a ride.\l"
# 35 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "It's way too tight in there!$"

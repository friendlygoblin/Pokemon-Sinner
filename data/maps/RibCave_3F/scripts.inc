RibCave_3F_MapScripts::
	.byte 0


RibCave3F_Hiker::
# 6 "data/maps/RibCave_3F/scripts.pory"
	trainerbattle_single TRAINER_ELI, RibCave3F_Hiker_BattleIntro, RibCave3F_Hiker_Defeated
# 7 "data/maps/RibCave_3F/scripts.pory"
	msgbox RibCave3F_Hiker_PostBattle, MSGBOX_AUTOCLOSE
	return


RibCave3F_CoolTrainer::
# 27 "data/maps/RibCave_3F/scripts.pory"
	trainerbattle_single TRAINER_MARY, RibCave3F_CoolTrainer_BattleIntro, RibCave3F_CoolTrainer_Defeated
# 28 "data/maps/RibCave_3F/scripts.pory"
	msgbox RibCave3F_CoolTrainer_PostBattle, MSGBOX_AUTOCLOSE
	return


RibCave_FindPotion::
# 48 "data/maps/RibCave_3F/scripts.pory"
	lock
# 49 "data/maps/RibCave_3F/scripts.pory"
	giveitem ITEM_POTION
# 50 "data/maps/RibCave_3F/scripts.pory"
	hideobjectat 6, 0
# 51 "data/maps/RibCave_3F/scripts.pory"
	removeobject 6
# 52 "data/maps/RibCave_3F/scripts.pory"
	setflag FLAG_POTION_RIBCAVE
# 53 "data/maps/RibCave_3F/scripts.pory"
	release
	end


RibCave3F_Hiker_BattleIntro::
# 10 "data/maps/RibCave_3F/scripts.pory"
	.string "I love exploring caves!\p"
	.string "It's not dangerous if you have \n"
	.string "your POKéMON to protect you!$"

RibCave3F_Hiker_Defeated::
# 16 "data/maps/RibCave_3F/scripts.pory"
	.string "Well you're definitely safe…$"

RibCave3F_Hiker_PostBattle::
# 20 "data/maps/RibCave_3F/scripts.pory"
	.string "People often come to train in caves.\p"
	.string "So you have to look out for trainers\n"
	.string "as well as wild POKéMON!$"

RibCave3F_CoolTrainer_BattleIntro::
# 31 "data/maps/RibCave_3F/scripts.pory"
	.string "The way out is just over there!\p"
	.string "But before you get to Candlewax City,\n"
	.string "I challenge you to a POKéMON battle!$"

RibCave3F_CoolTrainer_Defeated::
# 37 "data/maps/RibCave_3F/scripts.pory"
	.string "Awh I really thought I'd win…$"

RibCave3F_CoolTrainer_PostBattle::
# 41 "data/maps/RibCave_3F/scripts.pory"
	.string "Trainers are more fun to battle than\n"
	.string "wild POKéMON.$"

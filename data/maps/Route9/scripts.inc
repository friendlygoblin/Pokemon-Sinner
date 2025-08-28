Route9_MapScripts::
	.byte 0


Route9_Fisherman1::
# 4 "data/maps/Route9/scripts.pory"
	trainerbattle_single TRAINER_JONAH, Route9_Fisherman1_Text_0, Route9_Fisherman1_Text_1
# 5 "data/maps/Route9/scripts.pory"
	msgbox Route9_Fisherman1_Text_2, MSGBOX_AUTOCLOSE
	return


Route9_AromaLady::
# 9 "data/maps/Route9/scripts.pory"
	trainerbattle_single TRAINER_ROSE_1, Route9_AromaLady_Text_0, Route9_AromaLady_Text_1, GiveSunStone
# 10 "data/maps/Route9/scripts.pory"
	msgbox Route9_AromaLady_Text_2, MSGBOX_AUTOCLOSE
	return


Route9_SchoolBoy::
# 14 "data/maps/Route9/scripts.pory"
	trainerbattle_single TRAINER_PAUL, Route9_SchoolBoy_Text_0, Route9_SchoolBoy_Text_1
# 15 "data/maps/Route9/scripts.pory"
	msgbox Route9_SchoolBoy_Text_2, MSGBOX_AUTOCLOSE
	return


Route9_Runner::
# 19 "data/maps/Route9/scripts.pory"
	trainerbattle_single TRAINER_KYRA, Route9_Runner_Text_0, Route9_Runner_Text_1
# 20 "data/maps/Route9/scripts.pory"
	msgbox Route9_Runner_Text_2, MSGBOX_AUTOCLOSE
	return


Route9_Birdkeeper::
# 24 "data/maps/Route9/scripts.pory"
	trainerbattle_single TRAINER_HUGH, Route9_Birdkeeper_Text_0, Route9_Birdkeeper_Text_1
# 25 "data/maps/Route9/scripts.pory"
	msgbox Route9_Birdkeeper_Text_2, MSGBOX_AUTOCLOSE
	return


GiveSunStone::
# 29 "data/maps/Route9/scripts.pory"
	msgbox GiveSunStone_Text_0
# 30 "data/maps/Route9/scripts.pory"
	giveitem ITEM_SUN_STONE
# 31 "data/maps/Route9/scripts.pory"
	msgbox Route9_AromaLady_Text_2
# 32 "data/maps/Route9/scripts.pory"
	release
	end


Route9_Fisherman1_Text_0:
# 4 "data/maps/Route9/scripts.pory"
	.string "A good bait will catch you the best\n"
	.string "POKéMON!$"

Route9_Fisherman1_Text_1:
# 4 "data/maps/Route9/scripts.pory"
	.string "And strong trainers, apparently…$"

Route9_Fisherman1_Text_2:
# 5 "data/maps/Route9/scripts.pory"
	.string "You gotta fish to learn to fish!$"

Route9_AromaLady_Text_0:
# 9 "data/maps/Route9/scripts.pory"
	.string "My POKéMON all evolved thanks to a\n"
	.string "strange stone!$"

Route9_AromaLady_Text_1:
# 9 "data/maps/Route9/scripts.pory"
	.string "Oh…$"

Route9_AromaLady_Text_2:
# 10 "data/maps/Route9/scripts.pory"
	.string "POKéMON that evolved are stronger but\n"
	.string "they learn moves more slowly.$"

Route9_SchoolBoy_Text_0:
# 14 "data/maps/Route9/scripts.pory"
	.string "The cable car is fascinating, I wonder\n"
	.string "if they take interns…$"

Route9_SchoolBoy_Text_1:
# 14 "data/maps/Route9/scripts.pory"
	.string "Fascinating…$"

Route9_SchoolBoy_Text_2:
# 15 "data/maps/Route9/scripts.pory"
	.string "I want to be an engineer and work on\n"
	.string "the cable car when I grow up.$"

Route9_Runner_Text_0:
# 19 "data/maps/Route9/scripts.pory"
	.string "Running in water is so hard, but if I get\n"
	.string "better at it I'll be even faster on land!$"

Route9_Runner_Text_1:
# 19 "data/maps/Route9/scripts.pory"
	.string "My POKéMON doesn't like running in\n"
	.string "water…$"

Route9_Runner_Text_2:
# 20 "data/maps/Route9/scripts.pory"
	.string "You really gotta be good at everything\n"
	.string "when you're a triathlete!$"

Route9_Birdkeeper_Text_0:
# 24 "data/maps/Route9/scripts.pory"
	.string "Take flight!\n"
	.string "My BIRD POKéMON!$"

Route9_Birdkeeper_Text_1:
# 24 "data/maps/Route9/scripts.pory"
	.string "You can land now…$"

Route9_Birdkeeper_Text_2:
# 25 "data/maps/Route9/scripts.pory"
	.string "The stronger my POKéMON get, the longer\n"
	.string "they can fly.$"

GiveSunStone_Text_0:
# 29 "data/maps/Route9/scripts.pory"
	.string "Maybe this will make some of your\n"
	.string "POKéMON evolve too…$"

Route1_MapScripts::
	.byte 0


Route1_GoblinScript::
# 9 "data/maps/Route1/scripts.pory"
	lock
# 10 "data/maps/Route1/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 11 "data/maps/Route1/scripts.pory"
	msgbox GobTips
# 12 "data/maps/Route1/scripts.pory"
	release
	end


GobGreets1::
# 17 "data/maps/Route1/scripts.pory"
	lock
# 18 "data/maps/Route1/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 19 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 20 "data/maps/Route1/scripts.pory"
	delay 40
# 21 "data/maps/Route1/scripts.pory"
	applymovement 1, GobGoToPlayer1
# 22 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 23 "data/maps/Route1/scripts.pory"
	goto GobTeach
	return


GobGreets2::
# 27 "data/maps/Route1/scripts.pory"
	lock
# 28 "data/maps/Route1/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 29 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route1/scripts.pory"
	delay 40
# 31 "data/maps/Route1/scripts.pory"
	applymovement 1, GobGoToPlayer2
# 32 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 33 "data/maps/Route1/scripts.pory"
	goto GobTeach
	return


GobTeach::
# 37 "data/maps/Route1/scripts.pory"
	msgbox GobTeachIntro, MSGBOX_YESNO
# 38 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GobTeach_2
# 42 "data/maps/Route1/scripts.pory"
	msgbox GobTeach_Text_0
GobTeach_1:
# 44 "data/maps/Route1/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 45 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 46 "data/maps/Route1/scripts.pory"
	msgbox GivePokeballs
# 47 "data/maps/Route1/scripts.pory"
	giveitem ITEM_POKE_BALL, amount = 10
# 48 "data/maps/Route1/scripts.pory"
	msgbox GobGoodLuck
# 49 "data/maps/Route1/scripts.pory"
	closemessage
# 50 "data/maps/Route1/scripts.pory"
	applymovement 1, GobGoBack
# 51 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route1/scripts.pory"
	setvar VAR_CATCHING_TUTORIAL, 1
# 53 "data/maps/Route1/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 54 "data/maps/Route1/scripts.pory"
	release
	end

GobTeach_2:
# 39 "data/maps/Route1/scripts.pory"
	msgbox TeachHowToCatch
	goto GobTeach_1


Route1_Youngster::
# 59 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 60 "data/maps/Route1/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	return


# 112 "data/maps/Route1/scripts.pory"
GobGoToPlayer1:
# 113 "data/maps/Route1/scripts.pory"
	walk_right
# 114 "data/maps/Route1/scripts.pory"
	walk_down
# 114 "data/maps/Route1/scripts.pory"
	walk_down
# 114 "data/maps/Route1/scripts.pory"
	walk_down
# 115 "data/maps/Route1/scripts.pory"
	step_end

# 118 "data/maps/Route1/scripts.pory"
GobGoToPlayer2:
# 119 "data/maps/Route1/scripts.pory"
	walk_right
# 119 "data/maps/Route1/scripts.pory"
	walk_right
# 120 "data/maps/Route1/scripts.pory"
	walk_down
# 120 "data/maps/Route1/scripts.pory"
	walk_down
# 120 "data/maps/Route1/scripts.pory"
	walk_down
# 121 "data/maps/Route1/scripts.pory"
	step_end

# 124 "data/maps/Route1/scripts.pory"
GobGoBack:
# 125 "data/maps/Route1/scripts.pory"
	walk_up
# 125 "data/maps/Route1/scripts.pory"
	walk_up
# 125 "data/maps/Route1/scripts.pory"
	walk_up
# 126 "data/maps/Route1/scripts.pory"
	walk_left
# 127 "data/maps/Route1/scripts.pory"
	step_end

Route1_BugCatcher::
# 131 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 132 "data/maps/Route1/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end


GobTeach_Text_0:
# 42 "data/maps/Route1/scripts.pory"
	.string "Great!$"

GobTeachIntro::
# 63 "data/maps/Route1/scripts.pory"
	.string "GOBLIN: {PLAYER}{KUN}!\p"
	.string "What are you doing here?\p"
	.string "…\p"
	.string "What? A POKéMON? From Abigail?\p"
	.string "Cool!\p"
	.string "Oh! And that's a POKéDEX! \p"
	.string "Wow {PLAYER}{KUN}! Look at you, you're\n"
	.string "becoming a real POKéMON trainer!\p"
	.string "Me? \p"
	.string "Oh I'm just trying to catch some new \n"
	.string "POKéMON.\p"
	.string "I can teach you if you want, since \n"
	.string "you're really doing this.\p"
	.string "Do you know how to catch POKéMON?$"

TeachHowToCatch::
# 80 "data/maps/Route1/scripts.pory"
	.string "Okay it's not that hard I promise! \p"
	.string "When you encounter a wild POKéMON, \n"
	.string "tire it out a bit by lowering its \l"
	.string "HP, and then throw a Poké Ball at it! \p"
	.string "Some POKéMON are harder to catch than \n"
	.string "others, but some Poké Balls are more \l"
	.string "effective than others too. \p"
	.string "I'm sure you'll get it quickly!$"

GivePokeballs::
# 91 "data/maps/Route1/scripts.pory"
	.string "Here, you can use these to get started!\p"
	.string "You can buy more from shops.$"

GobGoodLuck::
# 96 "data/maps/Route1/scripts.pory"
	.string "Well, have fun on your POKéMON \n"
	.string "catching adventures, and good \l"
	.string "luck for the challenge!\p"
	.string "I think I'll try it too, but I'm \n"
	.string "nowhere near ready yet…$"

GobTips::
# 104 "data/maps/Route1/scripts.pory"
	.string "GOBLIN: Weakened POKéMON are easier\n"
	.string "to catch.\p"
	.string "Oh, and if your own POKéMON get tired,\n"
	.string "a nap in your bed or a drink from the \l"
	.string "Two Legged Dog will definitely help!$"

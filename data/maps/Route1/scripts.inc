Route1_MapScripts::
	.byte 0


Route1_GoblinScript::
# 6 "data/maps/Route1/scripts.pory"
	lock
# 7 "data/maps/Route1/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 8 "data/maps/Route1/scripts.pory"
	msgbox GobTips
# 9 "data/maps/Route1/scripts.pory"
	release
	end


GobGreets1::
# 14 "data/maps/Route1/scripts.pory"
	lock
# 15 "data/maps/Route1/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 16 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 17 "data/maps/Route1/scripts.pory"
	delay 40
# 18 "data/maps/Route1/scripts.pory"
	applymovement 1, GobGoToPlayer1
# 19 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 20 "data/maps/Route1/scripts.pory"
	goto GobTeach
	return


GobGreets2::
# 24 "data/maps/Route1/scripts.pory"
	lock
# 25 "data/maps/Route1/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 26 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 27 "data/maps/Route1/scripts.pory"
	delay 40
# 28 "data/maps/Route1/scripts.pory"
	applymovement 1, GobGoToPlayer2
# 29 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route1/scripts.pory"
	goto GobTeach
	return


GobTeach::
# 34 "data/maps/Route1/scripts.pory"
	msgbox GobTeachIntro, MSGBOX_YESNO
# 35 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GobTeach_2
# 39 "data/maps/Route1/scripts.pory"
	msgbox GobTeach_Text_0
GobTeach_1:
# 41 "data/maps/Route1/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 42 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 43 "data/maps/Route1/scripts.pory"
	msgbox GivePokeballs
# 44 "data/maps/Route1/scripts.pory"
	giveitem ITEM_POKE_BALL, amount = 10
# 45 "data/maps/Route1/scripts.pory"
	msgbox GobGoodLuck
# 46 "data/maps/Route1/scripts.pory"
	closemessage
# 47 "data/maps/Route1/scripts.pory"
	applymovement 1, GobGoBack
# 48 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route1/scripts.pory"
	setvar VAR_CATCHING_TUTORIAL, 1
# 50 "data/maps/Route1/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 51 "data/maps/Route1/scripts.pory"
	release
	end

GobTeach_2:
# 36 "data/maps/Route1/scripts.pory"
	msgbox TeachHowToCatch
	goto GobTeach_1


Route1_Youngster::
# 56 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 57 "data/maps/Route1/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	return


# 109 "data/maps/Route1/scripts.pory"
GobGoToPlayer1:
# 110 "data/maps/Route1/scripts.pory"
	walk_right
# 111 "data/maps/Route1/scripts.pory"
	walk_down
# 111 "data/maps/Route1/scripts.pory"
	walk_down
# 111 "data/maps/Route1/scripts.pory"
	walk_down
# 112 "data/maps/Route1/scripts.pory"
	step_end

# 115 "data/maps/Route1/scripts.pory"
GobGoToPlayer2:
# 116 "data/maps/Route1/scripts.pory"
	walk_right
# 116 "data/maps/Route1/scripts.pory"
	walk_right
# 117 "data/maps/Route1/scripts.pory"
	walk_down
# 117 "data/maps/Route1/scripts.pory"
	walk_down
# 117 "data/maps/Route1/scripts.pory"
	walk_down
# 118 "data/maps/Route1/scripts.pory"
	step_end

# 121 "data/maps/Route1/scripts.pory"
GobGoBack:
# 122 "data/maps/Route1/scripts.pory"
	walk_up
# 122 "data/maps/Route1/scripts.pory"
	walk_up
# 122 "data/maps/Route1/scripts.pory"
	walk_up
# 123 "data/maps/Route1/scripts.pory"
	walk_left
# 124 "data/maps/Route1/scripts.pory"
	step_end

Route1_BugCatcher::
# 128 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 129 "data/maps/Route1/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end


GobTeach_Text_0:
# 39 "data/maps/Route1/scripts.pory"
	.string "Great!$"

GobTeachIntro::
# 60 "data/maps/Route1/scripts.pory"
	.string "GOBLIN: {PLAYER}{KUN}!\p"
	.string "What are you doing here?\p"
	.string "…\p"
	.string "What? A POKéMON? From Abigail?\p"
	.string "Cool!\p"
	.string "Oh! And that's a POKéDEX! \p"
	.string "Wow {PLAYER}! Look at you, you're\n"
	.string "becoming a real POKéMON trainer!\p"
	.string "Me? \p"
	.string "Oh I'm just trying to catch some new \n"
	.string "POKéMON.\p"
	.string "I can teach you if you want, since \n"
	.string "you're really doing this.\p"
	.string "Do you know how to catch POKéMON?$"

TeachHowToCatch::
# 77 "data/maps/Route1/scripts.pory"
	.string "Okay it's not that hard I promise! \p"
	.string "When you encounter a wild POKéMON, \n"
	.string "tire it out a bit by lowering its \l"
	.string "HP, and then throw a Poké Ball at it! \p"
	.string "Some POKéMON are harder to catch than \n"
	.string "others, but some Poké Balls are more \l"
	.string "effective than others too. \p"
	.string "I'm sure you'll get it quickly!$"

GivePokeballs::
# 88 "data/maps/Route1/scripts.pory"
	.string "Here, you can use these to get started!\p"
	.string "You can buy more from shops.$"

GobGoodLuck::
# 93 "data/maps/Route1/scripts.pory"
	.string "Well, have fun on your POKéMON \n"
	.string "catching adventures, and good \l"
	.string "luck for the challenge!\p"
	.string "I think I'll try it too, but I'm \n"
	.string "nowhere near ready yet…$"

GobTips::
# 101 "data/maps/Route1/scripts.pory"
	.string "GOBLIN: Weakened POKéMON are easier\n"
	.string "to catch.\p"
	.string "Oh, and if your own POKéMON get tired,\n"
	.string "a nap in your bed or a drink from the \l"
	.string "Two Legged Dog will definitely help!$"

VictoryRoad_5_MapScripts::
	.byte 0


VictoryRoad_Tilly::
# 4 "data/maps/VictoryRoad_5/scripts.pory"
	lock
# 5 "data/maps/VictoryRoad_5/scripts.pory"
	faceplayer
# 6 "data/maps/VictoryRoad_5/scripts.pory"
	msgbox VictoryRoad_Tilly_BattleIntro, MSGBOX_YESNO
# 7 "data/maps/VictoryRoad_5/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VictoryRoad_Tilly_2
# 12 "data/maps/VictoryRoad_5/scripts.pory"
	msgbox VictoryRoad_Tilly_Text_1
VictoryRoad_Tilly_1:
# 14 "data/maps/VictoryRoad_5/scripts.pory"
	release
	end

VictoryRoad_Tilly_2:
# 8 "data/maps/VictoryRoad_5/scripts.pory"
	trainerbattle_no_intro TRAINER_TILLY_2, VictoryRoad_Tilly_Text_0
# 9 "data/maps/VictoryRoad_5/scripts.pory"
	msgbox VictoryRoad_Tilly_PostBattle, MSGBOX_AUTOCLOSE
	goto VictoryRoad_Tilly_1


VictoryRoad_Gosia::
# 32 "data/maps/VictoryRoad_5/scripts.pory"
	lock
# 33 "data/maps/VictoryRoad_5/scripts.pory"
	faceplayer
# 34 "data/maps/VictoryRoad_5/scripts.pory"
	msgbox VictoryRoad_Gosia_BattleIntro, MSGBOX_YESNO
# 35 "data/maps/VictoryRoad_5/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VictoryRoad_Gosia_2
# 40 "data/maps/VictoryRoad_5/scripts.pory"
	msgbox VictoryRoad_Gosia_Text_1
VictoryRoad_Gosia_1:
# 42 "data/maps/VictoryRoad_5/scripts.pory"
	release
	end

VictoryRoad_Gosia_2:
# 36 "data/maps/VictoryRoad_5/scripts.pory"
	trainerbattle_no_intro TRAINER_GOSIA_2, VictoryRoad_Gosia_Text_0
# 37 "data/maps/VictoryRoad_5/scripts.pory"
	msgbox VictoryRoad_Gosia_PostBattle, MSGBOX_AUTOCLOSE
	goto VictoryRoad_Gosia_1


VictoryRoad_Waris::
# 60 "data/maps/VictoryRoad_5/scripts.pory"
	lock
# 61 "data/maps/VictoryRoad_5/scripts.pory"
	faceplayer
# 62 "data/maps/VictoryRoad_5/scripts.pory"
	msgbox VictoryRoad_Waris_BattleIntro, MSGBOX_YESNO
# 63 "data/maps/VictoryRoad_5/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VictoryRoad_Waris_2
# 68 "data/maps/VictoryRoad_5/scripts.pory"
	msgbox VictoryRoad_Waris_Text_1
VictoryRoad_Waris_1:
# 70 "data/maps/VictoryRoad_5/scripts.pory"
	release
	end

VictoryRoad_Waris_2:
# 64 "data/maps/VictoryRoad_5/scripts.pory"
	trainerbattle_no_intro TRAINER_WARIS_2, VictoryRoad_Waris_Text_0
# 65 "data/maps/VictoryRoad_5/scripts.pory"
	msgbox VictoryRoad_Waris_PostBattle, MSGBOX_AUTOCLOSE
	goto VictoryRoad_Waris_1


VictoryRoad_Morpheus::
# 87 "data/maps/VictoryRoad_5/scripts.pory"
	lock
# 88 "data/maps/VictoryRoad_5/scripts.pory"
	faceplayer
# 89 "data/maps/VictoryRoad_5/scripts.pory"
	msgbox VictoryRoad_Morpheus_BattleIntro, MSGBOX_YESNO
# 90 "data/maps/VictoryRoad_5/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VictoryRoad_Morpheus_2
# 95 "data/maps/VictoryRoad_5/scripts.pory"
	msgbox VictoryRoad_Morpheus_Text_1
VictoryRoad_Morpheus_1:
# 97 "data/maps/VictoryRoad_5/scripts.pory"
	release
	end

VictoryRoad_Morpheus_2:
# 91 "data/maps/VictoryRoad_5/scripts.pory"
	trainerbattle_no_intro TRAINER_MORPHEUS, VictoryRoad_Morpheus_Text_0
# 92 "data/maps/VictoryRoad_5/scripts.pory"
	msgbox VictoryRoad_Morpheus_PostBattle, MSGBOX_AUTOCLOSE
	goto VictoryRoad_Morpheus_1


VictoryRoad_Tilly_Text_0:
# 8 "data/maps/VictoryRoad_5/scripts.pory"
	.string "Is it show time yet?$"

VictoryRoad_Tilly_Text_1:
# 12 "data/maps/VictoryRoad_5/scripts.pory"
	.string "Guess I'll just wait here and try not to\n"
	.string "go insane…$"

VictoryRoad_Gosia_Text_0:
# 36 "data/maps/VictoryRoad_5/scripts.pory"
	.string "So, did I look cool?$"

VictoryRoad_Gosia_Text_1:
# 40 "data/maps/VictoryRoad_5/scripts.pory"
	.string "Ah, that's okay I guess, I'll just\n"
	.string "practice here.$"

VictoryRoad_Waris_Text_0:
# 64 "data/maps/VictoryRoad_5/scripts.pory"
	.string "Oh wow…$"

VictoryRoad_Waris_Text_1:
# 68 "data/maps/VictoryRoad_5/scripts.pory"
	.string "I get it, the band's right there go for\n"
	.string "it!$"

VictoryRoad_Morpheus_Text_0:
# 91 "data/maps/VictoryRoad_5/scripts.pory"
	.string "End of line…$"

VictoryRoad_Morpheus_Text_1:
# 95 "data/maps/VictoryRoad_5/scripts.pory"
	.string "Alright then.$"

VictoryRoad_Tilly_BattleIntro::
# 18 "data/maps/VictoryRoad_5/scripts.pory"
	.string "TILLY: I can't wait to hear Emily's \n"
	.string "guitar solos! \p"
	.string "I can't wait at all, wanna battle to \n"
	.string "pass the time? $"

VictoryRoad_Tilly_PostBattle::
# 25 "data/maps/VictoryRoad_5/scripts.pory"
	.string "TILLY: What if the band plays during \n"
	.string "battles? \p"
	.string "I'll get distracted for sure…  $"

VictoryRoad_Gosia_BattleIntro::
# 46 "data/maps/VictoryRoad_5/scripts.pory"
	.string "GOSIA: What if Marina shows up to \n"
	.string "watch TLDP battle? \p"
	.string "I'll need to look cool, can I show \n"
	.string "you how I fight? $"

VictoryRoad_Gosia_PostBattle::
# 53 "data/maps/VictoryRoad_5/scripts.pory"
	.string "GOSIA: Imagine Marina and TLDP in the \n"
	.string "same room…  \p"
	.string "I'm so excited! $"

VictoryRoad_Waris_BattleIntro::
# 74 "data/maps/VictoryRoad_5/scripts.pory"
	.string "WARIS: I didn't know you had to cross\n"
	.string "a cave to get to Mirror City. \p"
	.string "I love that, I love caves! \p"
	.string "The way out is just over there, but \n"
	.string "do you wanna have a quick battle?$"

VictoryRoad_Waris_PostBattle::
# 82 "data/maps/VictoryRoad_5/scripts.pory"
	.string "WARIS: I hope TLDP are well prepared! $"

VictoryRoad_Morpheus_BattleIntro::
# 101 "data/maps/VictoryRoad_5/scripts.pory"
	.string "MORPHEUS: I'll give it my best, I'll \n"
	.string "be Caesar on a TV screen! \p"
	.string "Let me show you! $"

VictoryRoad_Morpheus_PostBattle::
# 107 "data/maps/VictoryRoad_5/scripts.pory"
	.string "MORPHEUS: The band are tough, the only \n"
	.string "way to win is to survive. $"

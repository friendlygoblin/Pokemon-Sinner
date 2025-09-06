VictoryRoad_1_MapScripts::
	.byte 0


VictoryRoad_Jay::
# 4 "data/maps/VictoryRoad_1/scripts.pory"
	lock
# 5 "data/maps/VictoryRoad_1/scripts.pory"
	faceplayer
# 6 "data/maps/VictoryRoad_1/scripts.pory"
	msgbox VictoryRoad_Jay_BattleIntro, MSGBOX_YESNO
# 7 "data/maps/VictoryRoad_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VictoryRoad_Jay_2
# 12 "data/maps/VictoryRoad_1/scripts.pory"
	msgbox VictoryRoad_Jay_Text_1
VictoryRoad_Jay_1:
# 14 "data/maps/VictoryRoad_1/scripts.pory"
	release
	end

VictoryRoad_Jay_2:
# 8 "data/maps/VictoryRoad_1/scripts.pory"
	trainerbattle_no_intro TRAINER_JAY_2, VictoryRoad_Jay_Text_0
# 9 "data/maps/VictoryRoad_1/scripts.pory"
	msgbox VictoryRoad_Jay_PostBattle, MSGBOX_AUTOCLOSE
	goto VictoryRoad_Jay_1


VictoryRoad_Grace::
# 34 "data/maps/VictoryRoad_1/scripts.pory"
	lock
# 35 "data/maps/VictoryRoad_1/scripts.pory"
	faceplayer
# 36 "data/maps/VictoryRoad_1/scripts.pory"
	msgbox VictoryRoad_Grace_BattleIntro, MSGBOX_YESNO
# 37 "data/maps/VictoryRoad_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VictoryRoad_Grace_2
# 42 "data/maps/VictoryRoad_1/scripts.pory"
	msgbox VictoryRoad_Grace_Text_1
VictoryRoad_Grace_1:
# 44 "data/maps/VictoryRoad_1/scripts.pory"
	release
	end

VictoryRoad_Grace_2:
# 38 "data/maps/VictoryRoad_1/scripts.pory"
	trainerbattle_no_intro TRAINER_GRACE_3, VictoryRoad_Grace_Text_0
# 39 "data/maps/VictoryRoad_1/scripts.pory"
	msgbox VictoryRoad_Grace_PostBattle, MSGBOX_AUTOCLOSE
	goto VictoryRoad_Grace_1


VictoryRoad_Nina::
# 63 "data/maps/VictoryRoad_1/scripts.pory"
	lock
# 64 "data/maps/VictoryRoad_1/scripts.pory"
	faceplayer
# 65 "data/maps/VictoryRoad_1/scripts.pory"
	msgbox VictoryRoad_Nina_BattleIntro, MSGBOX_YESNO
# 66 "data/maps/VictoryRoad_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VictoryRoad_Nina_2
# 71 "data/maps/VictoryRoad_1/scripts.pory"
	msgbox VictoryRoad_Nina_Text_0
VictoryRoad_Nina_1:
# 73 "data/maps/VictoryRoad_1/scripts.pory"
	release
	end

VictoryRoad_Nina_2:
# 67 "data/maps/VictoryRoad_1/scripts.pory"
	trainerbattle_no_intro TRAINER_NINA_2, VictoryRoad_Jay_Text_0
# 68 "data/maps/VictoryRoad_1/scripts.pory"
	msgbox VictoryRoad_Nina_PostBattle, MSGBOX_AUTOCLOSE
	goto VictoryRoad_Nina_1


VictoryRoad_Julie::
# 90 "data/maps/VictoryRoad_1/scripts.pory"
	lock
# 91 "data/maps/VictoryRoad_1/scripts.pory"
	faceplayer
# 92 "data/maps/VictoryRoad_1/scripts.pory"
	msgbox VictoryRoad_Julie_BattleIntro, MSGBOX_YESNO
# 93 "data/maps/VictoryRoad_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VictoryRoad_Julie_2
# 98 "data/maps/VictoryRoad_1/scripts.pory"
	msgbox VictoryRoad_Julie_Text_0
VictoryRoad_Julie_1:
# 100 "data/maps/VictoryRoad_1/scripts.pory"
	release
	end

VictoryRoad_Julie_2:
# 94 "data/maps/VictoryRoad_1/scripts.pory"
	trainerbattle_no_intro TRAINER_JULIE_2, VictoryRoad_Jay_Text_0
# 95 "data/maps/VictoryRoad_1/scripts.pory"
	msgbox VictoryRoad_Julie_PostBattle, MSGBOX_AUTOCLOSE
	goto VictoryRoad_Julie_1


VictoryRoad_Steff::
# 118 "data/maps/VictoryRoad_1/scripts.pory"
	lock
# 119 "data/maps/VictoryRoad_1/scripts.pory"
	faceplayer
# 120 "data/maps/VictoryRoad_1/scripts.pory"
	msgbox VictoryRoad_Steff_BattleIntro, MSGBOX_YESNO
# 121 "data/maps/VictoryRoad_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VictoryRoad_Steff_2
# 126 "data/maps/VictoryRoad_1/scripts.pory"
	msgbox VictoryRoad_Steff_Text_1
VictoryRoad_Steff_1:
# 128 "data/maps/VictoryRoad_1/scripts.pory"
	release
	end

VictoryRoad_Steff_2:
# 122 "data/maps/VictoryRoad_1/scripts.pory"
	trainerbattle_no_intro TRAINER_STEFF_3, VictoryRoad_Steff_Text_0
# 123 "data/maps/VictoryRoad_1/scripts.pory"
	msgbox VictoryRoad_Steff_PostBattle, MSGBOX_AUTOCLOSE
	goto VictoryRoad_Steff_1


VictoryRoad_Jay_Text_0:
# 8 "data/maps/VictoryRoad_1/scripts.pory"
	.string "I think you can win against TLDP!$"

VictoryRoad_Jay_Text_1:
# 12 "data/maps/VictoryRoad_1/scripts.pory"
	.string "Saving your strength? That's smart, I'll\n"
	.string "be training here if you change your\l"
	.string "mind.$"

VictoryRoad_Grace_Text_0:
# 38 "data/maps/VictoryRoad_1/scripts.pory"
	.string "Yes, I think you're ready!$"

VictoryRoad_Grace_Text_1:
# 42 "data/maps/VictoryRoad_1/scripts.pory"
	.string "You're almost there, I'll be here to\n"
	.string "train with you if you need to.$"

VictoryRoad_Nina_Text_0:
# 71 "data/maps/VictoryRoad_1/scripts.pory"
	.string "I'll stay here for a bit, come back if\n"
	.string "you wanna spar!$"

VictoryRoad_Julie_Text_0:
# 98 "data/maps/VictoryRoad_1/scripts.pory"
	.string "That's okay, maybe it'll come back\n"
	.string "later…$"

VictoryRoad_Steff_Text_0:
# 122 "data/maps/VictoryRoad_1/scripts.pory"
	.string "Good thing POKéMON Centers are free…$"

VictoryRoad_Steff_Text_1:
# 126 "data/maps/VictoryRoad_1/scripts.pory"
	.string "Alright, as you wish.$"

VictoryRoad_Jay_BattleIntro::
# 18 "data/maps/VictoryRoad_1/scripts.pory"
	.string "JAY: {PLAYER}, it's been so long! \p"
	.string "I knew I'd see you here, we're almost \n"
	.string "in Mirror City! \p"
	.string "I'm so much stronger than the first \n"
	.string "time we met, let me show you! $"

VictoryRoad_Jay_PostBattle::
# 26 "data/maps/VictoryRoad_1/scripts.pory"
	.string "JAY: If I can't win against you now, \n"
	.string "I'll stand no chance against the band. \p"
	.string "I'll train here a bit longer, but you \n"
	.string "go get'em! $"

VictoryRoad_Grace_BattleIntro::
# 48 "data/maps/VictoryRoad_1/scripts.pory"
	.string "GRACE: {PLAYER}! \p"
	.string "So this is it, huh? \n"
	.string "TLDP's at the end of this road! \p"
	.string "Show me how far you've come! $"

VictoryRoad_Grace_PostBattle::
# 55 "data/maps/VictoryRoad_1/scripts.pory"
	.string "GRACE: Wow, {PLAYER}…  \p"
	.string "I still remember our first battle in \n"
	.string "Prelude Town, like it was yesterday… \p"
	.string "You got this, you can totally win! $"

VictoryRoad_Nina_BattleIntro::
# 77 "data/maps/VictoryRoad_1/scripts.pory"
	.string "NINA: I'm preparing to battle TLDP! \p"
	.string "I heard they're super strong, let's \n"
	.string "prepare together! $"

VictoryRoad_Nina_PostBattle::
# 83 "data/maps/VictoryRoad_1/scripts.pory"
	.string "NINA: Well, it looks like you're closer \n"
	.string "to being ready than I am. \p"
	.string "I'll get there soon though! $"

VictoryRoad_Julie_BattleIntro::
# 104 "data/maps/VictoryRoad_1/scripts.pory"
	.string "JULIE: I don't even remember how I \n"
	.string "discovered TLDP… \p"
	.string "Maybe I'll remember better after a \n"
	.string "POKéMON battle! $"

VictoryRoad_Julie_PostBattle::
# 111 "data/maps/VictoryRoad_1/scripts.pory"
	.string "JULIE: I still don't remember how I, \n"
	.string "discovered TLDP, but I'm still excited \l"
	.string "to see them! $"

VictoryRoad_Steff_BattleIntro::
# 132 "data/maps/VictoryRoad_1/scripts.pory"
	.string "STEFF: It was so expensive to get here\n"
	.string "but it was so worth it! \p"
	.string "I can't wait to battle with TLDP, how \n"
	.string "about you? \p"
	.string "We could prepare together!$"

VictoryRoad_Steff_PostBattle::
# 140 "data/maps/VictoryRoad_1/scripts.pory"
	.string "STEFF: I spent all my money on TLDP, \n"
	.string "and I'm ready to give them my POKéMON \l"
	.string "too! \p"
	.string "… I'm very normal about this band… $"

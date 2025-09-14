VictoryRoad_4_MapScripts::
	.byte 0


VictoryRoad_Amy::
# 4 "data/maps/VictoryRoad_4/scripts.pory"
	lock
# 5 "data/maps/VictoryRoad_4/scripts.pory"
	faceplayer
# 6 "data/maps/VictoryRoad_4/scripts.pory"
	msgbox VictoryRoad_Amy_BattleIntro, MSGBOX_YESNO
# 7 "data/maps/VictoryRoad_4/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VictoryRoad_Amy_2
# 12 "data/maps/VictoryRoad_4/scripts.pory"
	msgbox VictoryRoad_Amy_Text_1
VictoryRoad_Amy_1:
# 14 "data/maps/VictoryRoad_4/scripts.pory"
	release
	end

VictoryRoad_Amy_2:
# 8 "data/maps/VictoryRoad_4/scripts.pory"
	trainerbattle_no_intro TRAINER_AMY_2, VictoryRoad_Amy_Text_0
# 9 "data/maps/VictoryRoad_4/scripts.pory"
	msgbox VictoryRoad_Amy_PostBattle, MSGBOX_AUTOCLOSE
	goto VictoryRoad_Amy_1


VictoryRoad_Aiden::
# 34 "data/maps/VictoryRoad_4/scripts.pory"
	lock
# 35 "data/maps/VictoryRoad_4/scripts.pory"
	faceplayer
# 36 "data/maps/VictoryRoad_4/scripts.pory"
	msgbox VictoryRoad_Aiden_BattleIntro, MSGBOX_YESNO
# 37 "data/maps/VictoryRoad_4/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VictoryRoad_Aiden_2
# 42 "data/maps/VictoryRoad_4/scripts.pory"
	msgbox VictoryRoad_Aiden_Text_1
VictoryRoad_Aiden_1:
# 44 "data/maps/VictoryRoad_4/scripts.pory"
	release
	end

VictoryRoad_Aiden_2:
# 38 "data/maps/VictoryRoad_4/scripts.pory"
	trainerbattle_no_intro TRAINER_AIDEN_2, VictoryRoad_Aiden_Text_0
# 39 "data/maps/VictoryRoad_4/scripts.pory"
	msgbox VictoryRoad_Aiden_PostBattle, MSGBOX_AUTOCLOSE
	goto VictoryRoad_Aiden_1


VictoryRoad_Meinth::
# 61 "data/maps/VictoryRoad_4/scripts.pory"
	lock
# 62 "data/maps/VictoryRoad_4/scripts.pory"
	faceplayer
# 63 "data/maps/VictoryRoad_4/scripts.pory"
	msgbox VictoryRoad_Meinth_BattleIntro, MSGBOX_YESNO
# 64 "data/maps/VictoryRoad_4/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VictoryRoad_Meinth_2
# 69 "data/maps/VictoryRoad_4/scripts.pory"
	msgbox VictoryRoad_Meinth_Text_1
VictoryRoad_Meinth_1:
# 71 "data/maps/VictoryRoad_4/scripts.pory"
	release
	end

VictoryRoad_Meinth_2:
# 65 "data/maps/VictoryRoad_4/scripts.pory"
	trainerbattle_no_intro TRAINER_MEINTH_2, VictoryRoad_Meinth_Text_0
# 66 "data/maps/VictoryRoad_4/scripts.pory"
	msgbox VictoryRoad_Meinth_PostBattle, MSGBOX_AUTOCLOSE
	goto VictoryRoad_Meinth_1


VictoryRoad_Amy_Text_0:
# 8 "data/maps/VictoryRoad_4/scripts.pory"
	.string "Noted!$"

VictoryRoad_Amy_Text_1:
# 12 "data/maps/VictoryRoad_4/scripts.pory"
	.string "What a shame, our readers love you!$"

VictoryRoad_Aiden_Text_0:
# 38 "data/maps/VictoryRoad_4/scripts.pory"
	.string "Oh, I think I know…$"

VictoryRoad_Aiden_Text_1:
# 42 "data/maps/VictoryRoad_4/scripts.pory"
	.string "I'll figure it out, maybe I could ask\n"
	.string "them to tour close to my home…$"

VictoryRoad_Meinth_Text_0:
# 65 "data/maps/VictoryRoad_4/scripts.pory"
	.string "Well, I won't lose against the band…$"

VictoryRoad_Meinth_Text_1:
# 69 "data/maps/VictoryRoad_4/scripts.pory"
	.string "Awh that's okay.\p"
	.string "I'm gonna win the challenge with my dog\n"
	.string "POKéMON, you know!$"

VictoryRoad_Amy_BattleIntro::
# 18 "data/maps/VictoryRoad_4/scripts.pory"
	.string "AMY: {PLAYER}! Are you on your way \n"
	.string "to Mirror City? \p"
	.string "Why am I even asking, of course you \n"
	.string "are! \p"
	.string "Would you answer a few questions for \n"
	.string "ParlourZine as a promising challenger?$"

VictoryRoad_Amy_PostBattle::
# 27 "data/maps/VictoryRoad_4/scripts.pory"
	.string "AMY: Our readers loved you in our last \n"
	.string "issue, they'll love you in this one! \p"
	.string "Good luck against TLDP! $"

VictoryRoad_Aiden_BattleIntro::
# 48 "data/maps/VictoryRoad_4/scripts.pory"
	.string "AIDEN: What am I even gonna say \n"
	.string "to TLDP when I challenge them? \p"
	.string "Any ideas? $"

VictoryRoad_Aiden_PostBattle::
# 54 "data/maps/VictoryRoad_4/scripts.pory"
	.string "AIDEN: I'll ask TLDP to tour close to \n"
	.string "where I live, it took me forever to \l"
	.string "get here! $"

VictoryRoad_Meinth_BattleIntro::
# 75 "data/maps/VictoryRoad_4/scripts.pory"
	.string "MEINTH: I travelled for so long to \n"
	.string "get here, I'll win against TLDP! \p"
	.string "I can always use more training, what \n"
	.string "do you say? $"

VictoryRoad_Meinth_PostBattle::
# 82 "data/maps/VictoryRoad_4/scripts.pory"
	.string "MEINTH: I'm ready to travel anywhere for \n"
	.string "The Last Dinner Party, especially if I\l"
	.string "don't have to pay for tickets.  $"

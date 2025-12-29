VictoryRoad_2_MapScripts::
	.byte 0


VictoryRoad_Spraggy::
# 4 "data/maps/VictoryRoad_2/scripts.pory"
	lock
# 5 "data/maps/VictoryRoad_2/scripts.pory"
	faceplayer
# 6 "data/maps/VictoryRoad_2/scripts.pory"
	msgbox VictoryRoad_Spraggy_BattleIntro, MSGBOX_YESNO
# 7 "data/maps/VictoryRoad_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VictoryRoad_Spraggy_2
# 12 "data/maps/VictoryRoad_2/scripts.pory"
	msgbox VictoryRoad_Spraggy_Text_1
VictoryRoad_Spraggy_1:
# 14 "data/maps/VictoryRoad_2/scripts.pory"
	release
	end

VictoryRoad_Spraggy_2:
# 8 "data/maps/VictoryRoad_2/scripts.pory"
	trainerbattle_no_intro TRAINER_SPRAGGY_2, VictoryRoad_Spraggy_Text_0
# 9 "data/maps/VictoryRoad_2/scripts.pory"
	msgbox VictoryRoad_Spraggy_PostBattle, MSGBOX_AUTOCLOSE
	goto VictoryRoad_Spraggy_1


VictoryRoad_Wren::
# 34 "data/maps/VictoryRoad_2/scripts.pory"
	lock
# 35 "data/maps/VictoryRoad_2/scripts.pory"
	faceplayer
# 36 "data/maps/VictoryRoad_2/scripts.pory"
	msgbox VictoryRoad_Wren_BattleIntro, MSGBOX_YESNO
# 37 "data/maps/VictoryRoad_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VictoryRoad_Wren_2
# 42 "data/maps/VictoryRoad_2/scripts.pory"
	msgbox VictoryRoad_Wren_Text_1
VictoryRoad_Wren_1:
# 44 "data/maps/VictoryRoad_2/scripts.pory"
	release
	end

VictoryRoad_Wren_2:
# 38 "data/maps/VictoryRoad_2/scripts.pory"
	trainerbattle_no_intro TRAINER_WREN_3, VictoryRoad_Wren_Text_0
# 39 "data/maps/VictoryRoad_2/scripts.pory"
	msgbox VictoryRoad_Wren_PostBattle, MSGBOX_AUTOCLOSE
	goto VictoryRoad_Wren_1


VictoryRoad_George::
# 62 "data/maps/VictoryRoad_2/scripts.pory"
	lock
# 63 "data/maps/VictoryRoad_2/scripts.pory"
	faceplayer
# 64 "data/maps/VictoryRoad_2/scripts.pory"
	msgbox VictoryRoad_George_BattleIntro, MSGBOX_YESNO
# 65 "data/maps/VictoryRoad_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VictoryRoad_George_2
# 70 "data/maps/VictoryRoad_2/scripts.pory"
	msgbox VictoryRoad_George_Text_1
VictoryRoad_George_1:
# 72 "data/maps/VictoryRoad_2/scripts.pory"
	release
	end

VictoryRoad_George_2:
# 66 "data/maps/VictoryRoad_2/scripts.pory"
	trainerbattle_no_intro TRAINER_GEORGE_2, VictoryRoad_George_Text_0
# 67 "data/maps/VictoryRoad_2/scripts.pory"
	msgbox VictoryRoad_George_PostBattle, MSGBOX_AUTOCLOSE
	goto VictoryRoad_George_1


VictoryRoad_Rachel::
# 92 "data/maps/VictoryRoad_2/scripts.pory"
	lock
# 93 "data/maps/VictoryRoad_2/scripts.pory"
	faceplayer
# 94 "data/maps/VictoryRoad_2/scripts.pory"
	msgbox VictoryRoad_Rachel_BattleIntro, MSGBOX_YESNO
# 95 "data/maps/VictoryRoad_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VictoryRoad_Rachel_2
# 100 "data/maps/VictoryRoad_2/scripts.pory"
	msgbox VictoryRoad_Rachel_Text_1
VictoryRoad_Rachel_1:
# 102 "data/maps/VictoryRoad_2/scripts.pory"
	release
	end

VictoryRoad_Rachel_2:
# 96 "data/maps/VictoryRoad_2/scripts.pory"
	trainerbattle_no_intro TRAINER_RACHEL_2, VictoryRoad_Rachel_Text_0
# 97 "data/maps/VictoryRoad_2/scripts.pory"
	msgbox VictoryRoad_Rachel_PostBattle, MSGBOX_AUTOCLOSE
	goto VictoryRoad_Rachel_1


VictoryRoad_Meggo::
# 122 "data/maps/VictoryRoad_2/scripts.pory"
	lock
# 123 "data/maps/VictoryRoad_2/scripts.pory"
	faceplayer
# 124 "data/maps/VictoryRoad_2/scripts.pory"
	msgbox VictoryRoad_Meggo_BattleIntro, MSGBOX_YESNO
# 125 "data/maps/VictoryRoad_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VictoryRoad_Meggo_2
# 130 "data/maps/VictoryRoad_2/scripts.pory"
	msgbox VictoryRoad_Meggo_Text_1
VictoryRoad_Meggo_1:
# 132 "data/maps/VictoryRoad_2/scripts.pory"
	release
	end

VictoryRoad_Meggo_2:
# 126 "data/maps/VictoryRoad_2/scripts.pory"
	trainerbattle_no_intro TRAINER_MEGGO_2, VictoryRoad_Meggo_Text_0
# 127 "data/maps/VictoryRoad_2/scripts.pory"
	msgbox VictoryRoad_Meggo_PostBattle, MSGBOX_AUTOCLOSE
	goto VictoryRoad_Meggo_1


VictoryRoad_Ann::
# 149 "data/maps/VictoryRoad_2/scripts.pory"
	lock
# 150 "data/maps/VictoryRoad_2/scripts.pory"
	faceplayer
# 151 "data/maps/VictoryRoad_2/scripts.pory"
	msgbox VictoryRoad_Ann_BattleIntro, MSGBOX_YESNO
# 152 "data/maps/VictoryRoad_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VictoryRoad_Ann_2
# 157 "data/maps/VictoryRoad_2/scripts.pory"
	msgbox VictoryRoad_Ann_Text_1
VictoryRoad_Ann_1:
# 159 "data/maps/VictoryRoad_2/scripts.pory"
	release
	end

VictoryRoad_Ann_2:
# 153 "data/maps/VictoryRoad_2/scripts.pory"
	trainerbattle_no_intro TRAINER_ANN_3, VictoryRoad_Ann_Text_0
# 154 "data/maps/VictoryRoad_2/scripts.pory"
	msgbox VictoryRoad_Ann_PostBattle, MSGBOX_AUTOCLOSE
	goto VictoryRoad_Ann_1


VictoryRoad_Chantal::
# 177 "data/maps/VictoryRoad_2/scripts.pory"
	lock
# 178 "data/maps/VictoryRoad_2/scripts.pory"
	faceplayer
# 179 "data/maps/VictoryRoad_2/scripts.pory"
	msgbox VictoryRoad_Chantal_BattleIntro, MSGBOX_YESNO
# 180 "data/maps/VictoryRoad_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VictoryRoad_Chantal_2
# 185 "data/maps/VictoryRoad_2/scripts.pory"
	msgbox VictoryRoad_Chantal_Text_1
VictoryRoad_Chantal_1:
# 187 "data/maps/VictoryRoad_2/scripts.pory"
	release
	end

VictoryRoad_Chantal_2:
# 181 "data/maps/VictoryRoad_2/scripts.pory"
	trainerbattle_no_intro TRAINER_CHANTAL_2, VictoryRoad_Chantal_Text_0
# 182 "data/maps/VictoryRoad_2/scripts.pory"
	msgbox VictoryRoad_Chantal_PostBattle, MSGBOX_AUTOCLOSE
	goto VictoryRoad_Chantal_1


VictoryRoad_Elle::
# 204 "data/maps/VictoryRoad_2/scripts.pory"
	lock
# 205 "data/maps/VictoryRoad_2/scripts.pory"
	faceplayer
# 206 "data/maps/VictoryRoad_2/scripts.pory"
	msgbox VictoryRoad_Elle_Text_0
# 207 "data/maps/VictoryRoad_2/scripts.pory"
	release
	end


VictoryRoad_Spraggy_Text_0:
# 8 "data/maps/VictoryRoad_2/scripts.pory"
	.string "Well? How was it?$"

VictoryRoad_Spraggy_Text_1:
# 12 "data/maps/VictoryRoad_2/scripts.pory"
	.string "Ah? No? Well, I'll prepare anywyay.$"

VictoryRoad_Wren_Text_0:
# 38 "data/maps/VictoryRoad_2/scripts.pory"
	.string "Woah, you totally have your chance!$"

VictoryRoad_Wren_Text_1:
# 42 "data/maps/VictoryRoad_2/scripts.pory"
	.string "Awh, fair.\p"
	.string "I'll be here if you change your mind!$"

VictoryRoad_George_Text_0:
# 66 "data/maps/VictoryRoad_2/scripts.pory"
	.string "I wonder if my neighbour will be trying\n"
	.string "her luck too…$"

VictoryRoad_George_Text_1:
# 70 "data/maps/VictoryRoad_2/scripts.pory"
	.string "Okay, not you too…\p"
	.string "But I'll be here with Manwhacker and\n"
	.string "Orbigail if you need me!$"

VictoryRoad_Rachel_Text_0:
# 96 "data/maps/VictoryRoad_2/scripts.pory"
	.string "They will HAVE to play Second Best, I'm\n"
	.string "so serious!$"

VictoryRoad_Rachel_Text_1:
# 100 "data/maps/VictoryRoad_2/scripts.pory"
	.string "Okay, well I'll keep thinking about it,\n"
	.string "come back if you wanna brainstorm!$"

VictoryRoad_Meggo_Text_0:
# 126 "data/maps/VictoryRoad_2/scripts.pory"
	.string "Lay me near the altar of lust…$"

VictoryRoad_Meggo_Text_1:
# 130 "data/maps/VictoryRoad_2/scripts.pory"
	.string "Mmh maybe I'll find something even\n"
	.string "better…$"

VictoryRoad_Ann_Text_0:
# 153 "data/maps/VictoryRoad_2/scripts.pory"
	.string "I think you can win against TLDP!$"

VictoryRoad_Ann_Text_1:
# 157 "data/maps/VictoryRoad_2/scripts.pory"
	.string "That's fine I can pick by myself…$"

VictoryRoad_Chantal_Text_0:
# 181 "data/maps/VictoryRoad_2/scripts.pory"
	.string "Do you think they'll accept?$"

VictoryRoad_Chantal_Text_1:
# 185 "data/maps/VictoryRoad_2/scripts.pory"
	.string "That's alright, I'll be practicing here if\n"
	.string "you change your mind…$"

VictoryRoad_Elle_Text_0:
# 206 "data/maps/VictoryRoad_2/scripts.pory"
	.string "ELLE: Oh, I'm not here to battle or\n"
	.string "anything, I just wanna go to the show.\p"
	.string "I think I spotted my old neighbour on\n"
	.string "the way but he didn't see me.$"

VictoryRoad_Spraggy_BattleIntro::
# 18 "data/maps/VictoryRoad_2/scripts.pory"
	.string "SPRAGGY: I'm dressed up as CMAT! \p"
	.string "She and TLDP are friends, so I thought \n"
	.string "it would be funny. \p"
	.string "I need to nail my imitation, can I \n"
	.string "show you? $"

VictoryRoad_Spraggy_PostBattle::
# 26 "data/maps/VictoryRoad_2/scripts.pory"
	.string "SPRAGGY: I'll rehearse a little bit \n"
	.string "more. \p"
	.string "I have to get it right, what if CMAT \n"
	.string "also shows up?$"

VictoryRoad_Wren_BattleIntro::
# 48 "data/maps/VictoryRoad_2/scripts.pory"
	.string "WREN: {PLAYER}! Of course you made it \n"
	.string "here! \p"
	.string "I'm excited to take on the challenge, \n"
	.string "wanna train with me? $"

VictoryRoad_Wren_PostBattle::
# 55 "data/maps/VictoryRoad_2/scripts.pory"
	.string "WREN: I'm so excited about this, but \n"
	.string "I'm also super nervous.\p"
	.string "I really need to be sure I'm ready! $"

VictoryRoad_George_BattleIntro::
# 76 "data/maps/VictoryRoad_2/scripts.pory"
	.string "GEORGE: I may not have found my old \n"
	.string "neighbour, but I got to travel the \l"
	.string "world with my POKéMON.\p"
	.string "And well, since I'm there might as \n"
	.string "well challenge The Last Dinner Party.\p"
	.string "And you too? $"

VictoryRoad_George_PostBattle::
# 85 "data/maps/VictoryRoad_2/scripts.pory"
	.string "GEORGE: I can't wait to take Orbigail \n"
	.string "and Manwhacker to the show, I'm sure \l"
	.string "they'll love Abigail! $"

VictoryRoad_Rachel_BattleIntro::
# 106 "data/maps/VictoryRoad_2/scripts.pory"
	.string "RACHEL: I hope TLDP play Second Best! \p"
	.string "I'll make sure they play it when I \n"
	.string "face them! \p"
	.string "Wanna help me rehearse how I'm gonna \n"
	.string "ask?$"

VictoryRoad_Rachel_PostBattle::
# 114 "data/maps/VictoryRoad_2/scripts.pory"
	.string "RACHEL: Should I start by saying I work \n"
	.string "for ParlourZine? \p"
	.string "Surely they wouldn't refuse to play \n"
	.string "Second Best for the press! $"

VictoryRoad_Meggo_BattleIntro::
# 136 "data/maps/VictoryRoad_2/scripts.pory"
	.string "MEGGO: I think I know what I'll say \n"
	.string "when I challenge TLDP! \p"
	.string "The killer heard your call! \p"
	.string "That work? $"

VictoryRoad_Meggo_PostBattle::
# 143 "data/maps/VictoryRoad_2/scripts.pory"
	.string "MEGGO: Well, looks like you got this! \p"
	.string "Keep burning! $"

VictoryRoad_Ann_BattleIntro::
# 163 "data/maps/VictoryRoad_2/scripts.pory"
	.string "ANN: I'm gonna ask TLDP to cover a \n"
	.string "Marina song! \p"
	.string "Wanna help me pick which one over a \n"
	.string "quick battle? $"

VictoryRoad_Ann_PostBattle::
# 170 "data/maps/VictoryRoad_2/scripts.pory"
	.string "ANN: I also hope Lizzie will dress up as \n"
	.string "a cowboy, I've drawn too much cowboy \l"
	.string "Lizzie art to not see it happen! $"

VictoryRoad_Chantal_BattleIntro::
# 191 "data/maps/VictoryRoad_2/scripts.pory"
	.string "CHANTAL: I brought my favourite TLDP \n"
	.string "record for the band to sign! \p"
	.string "Can I show you how I'm planning to \n"
	.string "ask them? $"

VictoryRoad_Chantal_PostBattle::
# 198 "data/maps/VictoryRoad_2/scripts.pory"
	.string "CHANTAL: I collect records, I have so \n"
	.string "many variants already! $"

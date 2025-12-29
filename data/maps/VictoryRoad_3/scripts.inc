VictoryRoad_3_MapScripts::
	.byte 0


VictoryRoad_Katie::
# 4 "data/maps/VictoryRoad_3/scripts.pory"
	lock
# 5 "data/maps/VictoryRoad_3/scripts.pory"
	faceplayer
# 6 "data/maps/VictoryRoad_3/scripts.pory"
	msgbox VictoryRoad_Katie_BattleIntro, MSGBOX_YESNO
# 7 "data/maps/VictoryRoad_3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VictoryRoad_Katie_2
# 12 "data/maps/VictoryRoad_3/scripts.pory"
	msgbox VictoryRoad_Katie_Text_1
VictoryRoad_Katie_1:
# 14 "data/maps/VictoryRoad_3/scripts.pory"
	release
	end

VictoryRoad_Katie_2:
# 8 "data/maps/VictoryRoad_3/scripts.pory"
	trainerbattle_no_intro TRAINER_KATIE_3, VictoryRoad_Katie_Text_0
# 9 "data/maps/VictoryRoad_3/scripts.pory"
	msgbox VictoryRoad_Katie_PostBattle, MSGBOX_AUTOCLOSE
	goto VictoryRoad_Katie_1


VictoryRoad_Norah::
# 33 "data/maps/VictoryRoad_3/scripts.pory"
	lock
# 34 "data/maps/VictoryRoad_3/scripts.pory"
	faceplayer
# 35 "data/maps/VictoryRoad_3/scripts.pory"
	msgbox VictoryRoad_Norah_BattleIntro, MSGBOX_YESNO
# 36 "data/maps/VictoryRoad_3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VictoryRoad_Norah_2
# 41 "data/maps/VictoryRoad_3/scripts.pory"
	msgbox VictoryRoad_Norah_Text_1
VictoryRoad_Norah_1:
# 43 "data/maps/VictoryRoad_3/scripts.pory"
	release
	end

VictoryRoad_Norah_2:
# 37 "data/maps/VictoryRoad_3/scripts.pory"
	trainerbattle_no_intro TRAINER_NORAH_2, VictoryRoad_Norah_Text_0
# 38 "data/maps/VictoryRoad_3/scripts.pory"
	msgbox VictoryRoad_Norah_PostBattle, MSGBOX_AUTOCLOSE
	goto VictoryRoad_Norah_1


VictoryRoad_Talia::
# 63 "data/maps/VictoryRoad_3/scripts.pory"
	lock
# 64 "data/maps/VictoryRoad_3/scripts.pory"
	faceplayer
# 65 "data/maps/VictoryRoad_3/scripts.pory"
	msgbox VictoryRoad_Talia_BattleIntro, MSGBOX_YESNO
# 66 "data/maps/VictoryRoad_3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VictoryRoad_Talia_2
# 71 "data/maps/VictoryRoad_3/scripts.pory"
	msgbox VictoryRoad_Talia_Text_1
VictoryRoad_Talia_1:
# 73 "data/maps/VictoryRoad_3/scripts.pory"
	release
	end

VictoryRoad_Talia_2:
# 67 "data/maps/VictoryRoad_3/scripts.pory"
	trainerbattle_no_intro TRAINER_TALIA_3, VictoryRoad_Talia_Text_0
# 68 "data/maps/VictoryRoad_3/scripts.pory"
	msgbox VictoryRoad_Talia_PostBattle, MSGBOX_AUTOCLOSE
	goto VictoryRoad_Talia_1


VictoryRoad_Yapgob::
# 92 "data/maps/VictoryRoad_3/scripts.pory"
	lock
# 93 "data/maps/VictoryRoad_3/scripts.pory"
	faceplayer
# 94 "data/maps/VictoryRoad_3/scripts.pory"
	msgbox VictoryRoad_Yapgob_BattleIntro, MSGBOX_YESNO
# 95 "data/maps/VictoryRoad_3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VictoryRoad_Yapgob_2
# 100 "data/maps/VictoryRoad_3/scripts.pory"
	msgbox VictoryRoad_Yapgob_Text_1
VictoryRoad_Yapgob_1:
# 102 "data/maps/VictoryRoad_3/scripts.pory"
	release
	end

VictoryRoad_Yapgob_2:
# 96 "data/maps/VictoryRoad_3/scripts.pory"
	trainerbattle_no_intro TRAINER_YAPGOB_2, VictoryRoad_Yapgob_Text_0
# 97 "data/maps/VictoryRoad_3/scripts.pory"
	msgbox VictoryRoad_Yapgob_PostBattle, MSGBOX_AUTOCLOSE
	goto VictoryRoad_Yapgob_1


VictoryRoad_Toto::
# 122 "data/maps/VictoryRoad_3/scripts.pory"
	lock
# 123 "data/maps/VictoryRoad_3/scripts.pory"
	faceplayer
# 124 "data/maps/VictoryRoad_3/scripts.pory"
	msgbox VictoryRoad_Toto_Text_0
# 125 "data/maps/VictoryRoad_3/scripts.pory"
	release
	end


VictoryRoad_Aux::
# 130 "data/maps/VictoryRoad_3/scripts.pory"
	lock
# 131 "data/maps/VictoryRoad_3/scripts.pory"
	faceplayer
# 132 "data/maps/VictoryRoad_3/scripts.pory"
	msgbox VictoryRoad_Aux_BattleIntro, MSGBOX_YESNO
# 133 "data/maps/VictoryRoad_3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VictoryRoad_Aux_2
# 138 "data/maps/VictoryRoad_3/scripts.pory"
	msgbox VictoryRoad_Aux_Text_1
VictoryRoad_Aux_1:
# 140 "data/maps/VictoryRoad_3/scripts.pory"
	release
	end

VictoryRoad_Aux_2:
# 134 "data/maps/VictoryRoad_3/scripts.pory"
	trainerbattle_no_intro TRAINER_AUX_2, VictoryRoad_Aux_Text_0
# 135 "data/maps/VictoryRoad_3/scripts.pory"
	msgbox VictoryRoad_Aux_PostBattle, MSGBOX_AUTOCLOSE
	goto VictoryRoad_Aux_1


VictoryRoad_Bear::
# 157 "data/maps/VictoryRoad_3/scripts.pory"
	lock
# 158 "data/maps/VictoryRoad_3/scripts.pory"
	faceplayer
# 159 "data/maps/VictoryRoad_3/scripts.pory"
	msgbox VictoryRoad_Bear_BattleIntro, MSGBOX_YESNO
# 160 "data/maps/VictoryRoad_3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VictoryRoad_Bear_2
# 165 "data/maps/VictoryRoad_3/scripts.pory"
	msgbox VictoryRoad_Bear_Text_1
VictoryRoad_Bear_1:
# 167 "data/maps/VictoryRoad_3/scripts.pory"
	release
	end

VictoryRoad_Bear_2:
# 161 "data/maps/VictoryRoad_3/scripts.pory"
	trainerbattle_no_intro TRAINER_BEAR_2, VictoryRoad_Bear_Text_0
# 162 "data/maps/VictoryRoad_3/scripts.pory"
	msgbox VictoryRoad_Bear_PostBattle, MSGBOX_AUTOCLOSE
	goto VictoryRoad_Bear_1


VictoryRoad_Q::
# 185 "data/maps/VictoryRoad_3/scripts.pory"
	lock
# 186 "data/maps/VictoryRoad_3/scripts.pory"
	faceplayer
# 187 "data/maps/VictoryRoad_3/scripts.pory"
	msgbox VictoryRoad_Q_BattleIntro, MSGBOX_YESNO
# 188 "data/maps/VictoryRoad_3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VictoryRoad_Q_2
# 193 "data/maps/VictoryRoad_3/scripts.pory"
	msgbox VictoryRoad_Q_Text_1
VictoryRoad_Q_1:
# 195 "data/maps/VictoryRoad_3/scripts.pory"
	release
	end

VictoryRoad_Q_2:
# 189 "data/maps/VictoryRoad_3/scripts.pory"
	trainerbattle_no_intro TRAINER_Q_2, VictoryRoad_Q_Text_0
# 190 "data/maps/VictoryRoad_3/scripts.pory"
	msgbox VictoryRoad_Q_PostBattle, MSGBOX_AUTOCLOSE
	goto VictoryRoad_Q_1


VictoryRoad_Katie_Text_0:
# 8 "data/maps/VictoryRoad_3/scripts.pory"
	.string "Maybe I should give them the portraits\n"
	.string "before battling?$"

VictoryRoad_Katie_Text_1:
# 12 "data/maps/VictoryRoad_3/scripts.pory"
	.string "Oh I get it, you also have to get ready…$"

VictoryRoad_Norah_Text_0:
# 37 "data/maps/VictoryRoad_3/scripts.pory"
	.string "They will HAVE to play Second Best, I'm\n"
	.string "so serious!$"

VictoryRoad_Norah_Text_1:
# 41 "data/maps/VictoryRoad_3/scripts.pory"
	.string "Oh alright, I'll just keep training here\n"
	.string "for a bit.$"

VictoryRoad_Talia_Text_0:
# 67 "data/maps/VictoryRoad_3/scripts.pory"
	.string "Okay, I'll train a bit longer…\n"
	.string "But I'm still winning the challenge!$"

VictoryRoad_Talia_Text_1:
# 71 "data/maps/VictoryRoad_3/scripts.pory"
	.string "Ah? No? Well, I'll prepare anywyay.$"

VictoryRoad_Yapgob_Text_0:
# 96 "data/maps/VictoryRoad_3/scripts.pory"
	.string "You defeated the almighty Goblin King?\n"
	.string "How??$"

VictoryRoad_Yapgob_Text_1:
# 100 "data/maps/VictoryRoad_3/scripts.pory"
	.string "Oh, okay.$"

VictoryRoad_Toto_Text_0:
# 124 "data/maps/VictoryRoad_3/scripts.pory"
	.string "TOTO: I'm not gonna challenge the band,\n"
	.string "I'm just here for the music.\p"
	.string "I wonder if they gave nicknames to\n"
	.string "their POKéMON…$"

VictoryRoad_Aux_Text_0:
# 134 "data/maps/VictoryRoad_3/scripts.pory"
	.string "What if I lose? Should I still ask?$"

VictoryRoad_Aux_Text_1:
# 138 "data/maps/VictoryRoad_3/scripts.pory"
	.string "No? You're right, it should come from\n"
	.string "me…$"

VictoryRoad_Bear_Text_0:
# 161 "data/maps/VictoryRoad_3/scripts.pory"
	.string "What can I say, I'm a Big Dog fan!$"

VictoryRoad_Bear_Text_1:
# 165 "data/maps/VictoryRoad_3/scripts.pory"
	.string "Awh that's okay.\p"
	.string "I'm gonna win the challenge with my dog\n"
	.string "POKéMON, you know!$"

VictoryRoad_Q_Text_0:
# 189 "data/maps/VictoryRoad_3/scripts.pory"
	.string "Not quite ready yet…$"

VictoryRoad_Q_Text_1:
# 193 "data/maps/VictoryRoad_3/scripts.pory"
	.string "I'll find someone else to train with,\n"
	.string "then…$"

VictoryRoad_Katie_BattleIntro::
# 18 "data/maps/VictoryRoad_3/scripts.pory"
	.string "KATIE: I drew a bunch of portraits \n"
	.string "of The Last Dinner Party! \p"
	.string "I'll hand them over after battling \n"
	.string "the band but I'm so nervous… \p"
	.string "Can I practice with you first? $"

VictoryRoad_Katie_PostBattle::
# 26 "data/maps/VictoryRoad_3/scripts.pory"
	.string "KATIE: Okay, I'll just be cool and\n"
	.string "give them the portraits…  \p"
	.string "How hard can it be? $"

VictoryRoad_Norah_BattleIntro::
# 47 "data/maps/VictoryRoad_3/scripts.pory"
	.string "NORAH: I heard many other artists \n"
	.string "will be in Mirror City… \p"
	.string "What if we can challenge them too? \p"
	.string "Oh, I need to train even harder just \n"
	.string "in case! \p"
	.string "Wanna help?$"

VictoryRoad_Norah_PostBattle::
# 56 "data/maps/VictoryRoad_3/scripts.pory"
	.string "NORAH: Do you think artists spar with \n"
	.string "each other? \p"
	.string "I would kill to see that! $"

VictoryRoad_Talia_BattleIntro::
# 77 "data/maps/VictoryRoad_3/scripts.pory"
	.string "TALIA: I've seen TLDP many times, \n"
	.string "and I'll see them many times more! \p"
	.string "Especially since I'm gonna win the \n"
	.string "guestlist challenge, and you're gonna \l"
	.string "help me prepare! $"

VictoryRoad_Talia_PostBattle::
# 85 "data/maps/VictoryRoad_3/scripts.pory"
	.string "TALIA: I guess I need to polish my \n"
	.string "strategy a bit more. \p"
	.string "I'll see you at the shows! $"

VictoryRoad_Yapgob_BattleIntro::
# 106 "data/maps/VictoryRoad_3/scripts.pory"
	.string "YAPGOB: I left my island in the middle \n"
	.string "of Mirror Lake to go see TLDP! \p"
	.string "I know it's gonna be worth it, but if \n"
	.string "I win the challenge, even better!\p"
	.string "Would you like to train with me? $"

VictoryRoad_Yapgob_PostBattle::
# 114 "data/maps/VictoryRoad_3/scripts.pory"
	.string "YAPGOB: I wonder what the band's teams \n"
	.string "look like. \p"
	.string "Do you think they'll have Big Dog \n"
	.string "POKéMON? $"

VictoryRoad_Aux_BattleIntro::
# 144 "data/maps/VictoryRoad_3/scripts.pory"
	.string "AUX: If I win, I'll ask TLDP to \n"
	.string "play Godzilla! \p"
	.string "Now how am I gonna word it… \p"
	.string "Brainstorm with me over a battle! $"

VictoryRoad_Aux_PostBattle::
# 151 "data/maps/VictoryRoad_3/scripts.pory"
	.string "AUX: I love Godzilla so much, I need \n"
	.string "to hear it live! $"

VictoryRoad_Bear_BattleIntro::
# 171 "data/maps/VictoryRoad_3/scripts.pory"
	.string "BEAR: I visited Big Dog Island when \n"
	.string "I found out TLDP went there! \p"
	.string "I caught my POKéMON there, wanna see \n"
	.string "them? $"

VictoryRoad_Bear_PostBattle::
# 178 "data/maps/VictoryRoad_3/scripts.pory"
	.string "BEAR: Have you been to Big Dog Island? \p"
	.string "I really liked it there, and I love \n"
	.string "the song Big Dog too! $"

VictoryRoad_Q_BattleIntro::
# 199 "data/maps/VictoryRoad_3/scripts.pory"
	.string "Q: I've been listening to The Last \n"
	.string "Dinner Party's music on a loop for \l"
	.string "months! \p"
	.string "I can't wait to face them, can I battle \n"
	.string "with you to be sure I'm ready? $"

VictoryRoad_Q_PostBattle::
# 207 "data/maps/VictoryRoad_3/scripts.pory"
	.string "Q: I guess I'll prepare a bit longer \n"
	.string "while listening to the band…  $"

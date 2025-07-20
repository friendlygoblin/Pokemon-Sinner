FurgeTown_Clearing_MapScripts::
	.byte 0


FlorenceHall_GraceBattle::
# 7 "data/maps/FurgeTown_Clearing/scripts.pory"
	lock
# 8 "data/maps/FurgeTown_Clearing/scripts.pory"
	faceplayer
# 10 "data/maps/FurgeTown_Clearing/scripts.pory"
	checktrainerflag TRAINER_FLORENCE
	goto_if 1, FlorenceHall_GraceBattle_2
# 14 "data/maps/FurgeTown_Clearing/scripts.pory"
	trainerbattle_single TRAINER_GRACE_2, FlorenceHall_GraceBattleIntro, FlorenceHall_GraceLostBattle
# 15 "data/maps/FurgeTown_Clearing/scripts.pory"
	msgbox FlorenceHall_GracePostBattle_BeforeFlorence, MSGBOX_AUTOCLOSE
FlorenceHall_GraceBattle_1:
# 17 "data/maps/FurgeTown_Clearing/scripts.pory"
	releaseall
	end

FlorenceHall_GraceBattle_2:
# 11 "data/maps/FurgeTown_Clearing/scripts.pory"
	msgbox FlorenceHall_GracePostBattle_AfterFlorence, MSGBOX_AUTOCLOSE
	goto FlorenceHall_GraceBattle_1


FlorenceHall_JulieBattle::
# 56 "data/maps/FurgeTown_Clearing/scripts.pory"
	lock
# 57 "data/maps/FurgeTown_Clearing/scripts.pory"
	faceplayer
# 59 "data/maps/FurgeTown_Clearing/scripts.pory"
	checktrainerflag TRAINER_FLORENCE
	goto_if 1, FlorenceHall_JulieBattle_2
# 63 "data/maps/FurgeTown_Clearing/scripts.pory"
	trainerbattle_single TRAINER_JULIE, FlorenceHall_JulieBattleIntro, FlorenceHall_JulieLostBattle
# 64 "data/maps/FurgeTown_Clearing/scripts.pory"
	msgbox FlorenceHall_JuliePostBattle, MSGBOX_AUTOCLOSE
FlorenceHall_JulieBattle_1:
# 66 "data/maps/FurgeTown_Clearing/scripts.pory"
	releaseall
	end

FlorenceHall_JulieBattle_2:
# 60 "data/maps/FurgeTown_Clearing/scripts.pory"
	msgbox FlorenceHall_JuliePostBattle, MSGBOX_AUTOCLOSE
	goto FlorenceHall_JulieBattle_1


FlorenceHall_FlorenceBattle::
# 85 "data/maps/FurgeTown_Clearing/scripts.pory"
	lock
# 86 "data/maps/FurgeTown_Clearing/scripts.pory"
	faceplayer
# 88 "data/maps/FurgeTown_Clearing/scripts.pory"
	checktrainerflag TRAINER_FLORENCE
	goto_if 1, FlorenceHall_FlorenceBattle_2
# 92 "data/maps/FurgeTown_Clearing/scripts.pory"
	trainerbattle_single TRAINER_FLORENCE, FlorenceHall_FlorenceBattleIntro, FlorenceHall_FlorenceLostBattle, FlorenceGiveBadge, NO_MUSIC
FlorenceHall_FlorenceBattle_1:
# 94 "data/maps/FurgeTown_Clearing/scripts.pory"
	releaseall
	end

FlorenceHall_FlorenceBattle_2:
# 89 "data/maps/FurgeTown_Clearing/scripts.pory"
	msgbox Florence_WordAboutTLDP, MSGBOX_AUTOCLOSE
	goto FlorenceHall_FlorenceBattle_1


FlorenceGiveBadge::
# 138 "data/maps/FurgeTown_Clearing/scripts.pory"
	msgbox FlorenceHall_FlorenceGiveBadge, MSGBOX_AUTOCLOSE
# 139 "data/maps/FurgeTown_Clearing/scripts.pory"
	message FlorenceGiveBadge_Text_0
# 140 "data/maps/FurgeTown_Clearing/scripts.pory"
	waitmessage
# 141 "data/maps/FurgeTown_Clearing/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 142 "data/maps/FurgeTown_Clearing/scripts.pory"
	setflag FLAG_BADGE02_GET
# 143 "data/maps/FurgeTown_Clearing/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 144 "data/maps/FurgeTown_Clearing/scripts.pory"
	msgbox FlorenceBadgePerks, MSGBOX_AUTOCLOSE
# 145 "data/maps/FurgeTown_Clearing/scripts.pory"
	releaseall
	end


FlorenceGiveBadge_Text_0:
# 139 "data/maps/FurgeTown_Clearing/scripts.pory"
	.string "Received the SPECTRUM BADGE from\n"
	.string "FLORENCE WELCH!$"

FlorenceHall_GraceBattleIntro::
# 21 "data/maps/FurgeTown_Clearing/scripts.pory"
	.string "GRACE: {PLAYER}! It's been a while, what \n"
	.string "have you been up to? \p"
	.string "… … …\p"
	.string "Won against Hozier? \p"
	.string "I knew you'd be good at this whole \n"
	.string "POKéMON Trainer thing! \p"
	.string "Well, if you'll allow me I'd like to \n"
	.string "see how much you've progressed.\p"
	.string "I'm not gonna hold back as much this \n"
	.string "time, I'll show you what it means to \l"
	.string "battle! $"

FlorenceHall_GraceLostBattle::
# 35 "data/maps/FurgeTown_Clearing/scripts.pory"
	.string "You're definitely stronger than last \n"
	.string "time!$"

FlorenceHall_GracePostBattle_BeforeFlorence::
# 40 "data/maps/FurgeTown_Clearing/scripts.pory"
	.string "GRACE: I maintain what I said after \n"
	.string "our first battle.\p"
	.string "You're a natural at this.\p"
	.string "Florence will be really tough to beat, \n"
	.string "though. $"

FlorenceHall_GracePostBattle_AfterFlorence::
# 48 "data/maps/FurgeTown_Clearing/scripts.pory"
	.string "GRACE: I maintain what I said after \n"
	.string "our first battle. \p"
	.string "You're a natural at this.\p"
	.string "Good luck for the next challenge! $"

FlorenceHall_JulieBattleIntro::
# 70 "data/maps/FurgeTown_Clearing/scripts.pory"
	.string "JULIE: I came to Furge Town just \n"
	.string "to see Florence!$"

FlorenceHall_JulieLostBattle::
# 75 "data/maps/FurgeTown_Clearing/scripts.pory"
	.string "You too?$"

FlorenceHall_JuliePostBattle::
# 79 "data/maps/FurgeTown_Clearing/scripts.pory"
	.string "JULIE: This place is so perfect for \n"
	.string "Florence's vibe.$"

FlorenceHall_FlorenceBattleIntro::
# 98 "data/maps/FurgeTown_Clearing/scripts.pory"
	.string "FLORENCE: There you are! \p"
	.string "I was waiting for you. \p"
	.string "Thank you for visiting my humble \n"
	.string "forest. \p"
	.string "I know you've come to challenge me, so \n"
	.string "let's see what you can do shall we?$"

FlorenceHall_FlorenceLostBattle::
# 107 "data/maps/FurgeTown_Clearing/scripts.pory"
	.string "How beautiful…$"

FlorenceHall_FlorenceGiveBadge::
# 111 "data/maps/FurgeTown_Clearing/scripts.pory"
	.string "FLORENCE: What a beautiful display \n"
	.string "of skill! \p"
	.string "Yes, you definitely deserve this.$"

FlorenceBadgePerks::
# 117 "data/maps/FurgeTown_Clearing/scripts.pory"
	.string "With this badge, your companions will \n"
	.string "listen to you until they reach the \l"
	.string "level 30.\p"
	.string "Keep this up, and you will reach great \n"
	.string "heights.\p"
	.string "I know you can!$"

Florence_WordAboutTLDP::
# 126 "data/maps/FurgeTown_Clearing/scripts.pory"
	.string "FLORENCE: So your true goal is to win \n"
	.string "against The Last Dinner Party?\p"
	.string "I think you have the potential to succeed.\p"
	.string "I'm quite fond of them, and I know they \n"
	.string "are not to be underestimated.\p"
	.string "Keep this up, and you will reach great \n"
	.string "heights.\p"
	.string "I know you can!$"

Godzilland_ConcertHall_MapScripts::
	.byte 0


StVincentHall_StVincentBattle::
# 7 "data/maps/Godzilland_ConcertHall/scripts.pory"
	lock
# 8 "data/maps/Godzilland_ConcertHall/scripts.pory"
	faceplayer
# 10 "data/maps/Godzilland_ConcertHall/scripts.pory"
	checktrainerflag TRAINER_STVINCENT
	goto_if 1, StVincentHall_StVincentBattle_2
# 14 "data/maps/Godzilland_ConcertHall/scripts.pory"
	trainerbattle_single TRAINER_STVINCENT, StVincentHall_StVincentBattleIntro, StVincentHall_StVincentLostBattle, StVincentGiveBadge, NO_MUSIC
StVincentHall_StVincentBattle_1:
# 16 "data/maps/Godzilland_ConcertHall/scripts.pory"
	releaseall
	end

StVincentHall_StVincentBattle_2:
# 11 "data/maps/Godzilland_ConcertHall/scripts.pory"
	msgbox StVincent_WordAboutTLDP, MSGBOX_AUTOCLOSE
	goto StVincentHall_StVincentBattle_1


StVincentGiveBadge::
# 33 "data/maps/Godzilland_ConcertHall/scripts.pory"
	msgbox StVincentHall_StVincentGiveBadge, MSGBOX_AUTOCLOSE
# 34 "data/maps/Godzilland_ConcertHall/scripts.pory"
	message StVincentGiveBadge_Text_0
# 35 "data/maps/Godzilland_ConcertHall/scripts.pory"
	waitmessage
# 36 "data/maps/Godzilland_ConcertHall/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 37 "data/maps/Godzilland_ConcertHall/scripts.pory"
	setflag FLAG_BADGE03_GET
# 38 "data/maps/Godzilland_ConcertHall/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 39 "data/maps/Godzilland_ConcertHall/scripts.pory"
	msgbox StVincentBadgePerks, MSGBOX_AUTOCLOSE
# 40 "data/maps/Godzilland_ConcertHall/scripts.pory"
	releaseall
	end


StVincent_EmilyCutscene::
# 71 "data/maps/Godzilland_ConcertHall/scripts.pory"
	lock
# 73 "data/maps/Godzilland_ConcertHall/scripts.pory"
	addobject 2
# 74 "data/maps/Godzilland_ConcertHall/scripts.pory"
	applymovement 2, EmilyWalksToStVincent
# 75 "data/maps/Godzilland_ConcertHall/scripts.pory"
	waitmovement 0
# 76 "data/maps/Godzilland_ConcertHall/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 79 "data/maps/Godzilland_ConcertHall/scripts.pory"
	waitmovement 0
# 80 "data/maps/Godzilland_ConcertHall/scripts.pory"
	msgbox StVincent_EmilyYoureHere, MSGBOX_AUTOCLOSE
# 81 "data/maps/Godzilland_ConcertHall/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 82 "data/maps/Godzilland_ConcertHall/scripts.pory"
	waitmovement 0
# 83 "data/maps/Godzilland_ConcertHall/scripts.pory"
	delay 20
# 84 "data/maps/Godzilland_ConcertHall/scripts.pory"
	msgbox Emily_WasInTheArea, MSGBOX_AUTOCLOSE
# 85 "data/maps/Godzilland_ConcertHall/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 86 "data/maps/Godzilland_ConcertHall/scripts.pory"
	waitmovement 0
# 87 "data/maps/Godzilland_ConcertHall/scripts.pory"
	delay 20
# 88 "data/maps/Godzilland_ConcertHall/scripts.pory"
	msgbox StVincent_GotSomethingForYou, MSGBOX_AUTOCLOSE
# 89 "data/maps/Godzilland_ConcertHall/scripts.pory"
	applymovement 2, ExcitedEmily
# 90 "data/maps/Godzilland_ConcertHall/scripts.pory"
	waitmovement 0
# 91 "data/maps/Godzilland_ConcertHall/scripts.pory"
	delay 20
# 92 "data/maps/Godzilland_ConcertHall/scripts.pory"
	msgbox Emily_ThatsBeautiful, MSGBOX_AUTOCLOSE
# 93 "data/maps/Godzilland_ConcertHall/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 94 "data/maps/Godzilland_ConcertHall/scripts.pory"
	waitmovement 0
# 95 "data/maps/Godzilland_ConcertHall/scripts.pory"
	delay 20
# 96 "data/maps/Godzilland_ConcertHall/scripts.pory"
	msgbox StVincent_AllYours, MSGBOX_AUTOCLOSE
# 97 "data/maps/Godzilland_ConcertHall/scripts.pory"
	applymovement 2, ExcitedEmily_NoEmote
# 98 "data/maps/Godzilland_ConcertHall/scripts.pory"
	waitmovement 0
# 99 "data/maps/Godzilland_ConcertHall/scripts.pory"
	delay 20
# 100 "data/maps/Godzilland_ConcertHall/scripts.pory"
	msgbox Emily_ThankYouSoMuch, MSGBOX_AUTOCLOSE
# 101 "data/maps/Godzilland_ConcertHall/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 102 "data/maps/Godzilland_ConcertHall/scripts.pory"
	waitmovement 0
# 103 "data/maps/Godzilland_ConcertHall/scripts.pory"
	delay 20
# 104 "data/maps/Godzilland_ConcertHall/scripts.pory"
	msgbox StVincent_ByeEmily, MSGBOX_AUTOCLOSE
# 105 "data/maps/Godzilland_ConcertHall/scripts.pory"
	delay 20
# 108 "data/maps/Godzilland_ConcertHall/scripts.pory"
	applymovement 2, EmilyLeaves_Godzilland
# 109 "data/maps/Godzilland_ConcertHall/scripts.pory"
	waitmovement 0
# 110 "data/maps/Godzilland_ConcertHall/scripts.pory"
	removeobject 2
# 111 "data/maps/Godzilland_ConcertHall/scripts.pory"
	setvar VAR_GODZILLANDHALL_EMILY, 1
# 113 "data/maps/Godzilland_ConcertHall/scripts.pory"
	releaseall
	end


# 117 "data/maps/Godzilland_ConcertHall/scripts.pory"
EmilyWalksToStVincent:
# 118 "data/maps/Godzilland_ConcertHall/scripts.pory"
	walk_left
# 118 "data/maps/Godzilland_ConcertHall/scripts.pory"
	walk_left
# 118 "data/maps/Godzilland_ConcertHall/scripts.pory"
	walk_left
# 119 "data/maps/Godzilland_ConcertHall/scripts.pory"
	step_end

# 122 "data/maps/Godzilland_ConcertHall/scripts.pory"
ExcitedEmily:
# 123 "data/maps/Godzilland_ConcertHall/scripts.pory"
	emote_exclamation_mark
# 124 "data/maps/Godzilland_ConcertHall/scripts.pory"
	delay_16
# 124 "data/maps/Godzilland_ConcertHall/scripts.pory"
	delay_16
# 125 "data/maps/Godzilland_ConcertHall/scripts.pory"
	walk_in_place_fast_left
# 125 "data/maps/Godzilland_ConcertHall/scripts.pory"
	walk_in_place_fast_left
# 125 "data/maps/Godzilland_ConcertHall/scripts.pory"
	walk_in_place_fast_left
# 126 "data/maps/Godzilland_ConcertHall/scripts.pory"
	step_end

# 128 "data/maps/Godzilland_ConcertHall/scripts.pory"
ExcitedEmily_NoEmote:
# 129 "data/maps/Godzilland_ConcertHall/scripts.pory"
	walk_in_place_fast_left
# 129 "data/maps/Godzilland_ConcertHall/scripts.pory"
	walk_in_place_fast_left
# 130 "data/maps/Godzilland_ConcertHall/scripts.pory"
	step_end

# 133 "data/maps/Godzilland_ConcertHall/scripts.pory"
EmilyLeaves_Godzilland:
# 134 "data/maps/Godzilland_ConcertHall/scripts.pory"
	walk_right
# 134 "data/maps/Godzilland_ConcertHall/scripts.pory"
	walk_right
# 134 "data/maps/Godzilland_ConcertHall/scripts.pory"
	walk_right
# 134 "data/maps/Godzilland_ConcertHall/scripts.pory"
	walk_right
# 135 "data/maps/Godzilland_ConcertHall/scripts.pory"
	step_end

StVincentGiveBadge_Text_0:
# 34 "data/maps/Godzilland_ConcertHall/scripts.pory"
	.string "Received the MARROW BADGE from\n"
	.string "ST.VINCENT!$"

StVincentHall_StVincentBattleIntro::
# 20 "data/maps/Godzilland_ConcertHall/scripts.pory"
	.string "ST.VINCENT: Sorry I kept you waiting. \p"
	.string "I'd been hoping Emily would stop by, \n"
	.string "I had this guitar made just for her. \p"
	.string "I know why you're here.\p"
	.string "Let's have a bit of fun!$"

StVincentHall_StVincentLostBattle::
# 28 "data/maps/Godzilland_ConcertHall/scripts.pory"
	.string "You're a natural, baby!$"

StVincentHall_StVincentGiveBadge::
# 44 "data/maps/Godzilland_ConcertHall/scripts.pory"
	.string "ST.VINCENT: Not bad at all!\p"
	.string "Here, I you won this fair and square!$"

StVincentBadgePerks::
# 49 "data/maps/Godzilland_ConcertHall/scripts.pory"
	.string "I hope you'll come to more shows, since \n"
	.string "you'll be allowed in for free! \p"
	.string "This badge also allows you to use the \n"
	.string "move Surf outside of battles. \p"
	.string "It's really handy when you need to \n"
	.string "travel on water. $"

StVincent_WordAboutTLDP::
# 58 "data/maps/Godzilland_ConcertHall/scripts.pory"
	.string "ST.VINCENT: The Last Dinner Party? \p"
	.string "I really like them, and am proud to be \n"
	.string "one of their inspirations. \p"
	.string "They're really talented, you're gonna \n"
	.string "need a lot of training to win against \l"
	.string "them. \p"
	.string "I believe you can do it though, I'll \n"
	.string "be cheering for you! $"

StVincent_EmilyYoureHere::
# 138 "data/maps/Godzilland_ConcertHall/scripts.pory"
	.string "ST.VINCENT: Emily hi!\p"
	.string "I didn't know you were visiting! $"

Emily_WasInTheArea::
# 143 "data/maps/Godzilland_ConcertHall/scripts.pory"
	.string "EMILY: Well, I was in the area so I \n"
	.string "thought I'd come say hi. $"

StVincent_GotSomethingForYou::
# 148 "data/maps/Godzilland_ConcertHall/scripts.pory"
	.string "ST.VINCENT: Perfect timing, I've just \n"
	.string "received this for you. \p"
	.string "Thought you'd like it in this colour! $"

Emily_ThatsBeautiful::
# 154 "data/maps/Godzilland_ConcertHall/scripts.pory"
	.string "EMILY: What?? \p"
	.string "It's so beautiful I don't know what\n"
	.string "to say! \p"
	.string "I've seen beautiful guitars before \n"
	.string "but this… $"

StVincent_AllYours::
# 162 "data/maps/Godzilland_ConcertHall/scripts.pory"
	.string "ST.VINCENT: It's all yours! \p"
	.string "Have fun with it, I know you'll turn it\n"
	.string "into a legendary instrument!$"

Emily_ThankYouSoMuch::
# 168 "data/maps/Godzilland_ConcertHall/scripts.pory"
	.string "EMILY: I sure will! \p"
	.string "Thank you so much, I should go now but \n"
	.string "I hope I'll see you again soon! $"

StVincent_ByeEmily::
# 174 "data/maps/Godzilland_ConcertHall/scripts.pory"
	.string "ST.VINCENT: I hope so too, goodbye Emily!$"

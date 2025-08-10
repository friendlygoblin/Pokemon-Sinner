MercyTown_ConcertHall_MapScripts::
	.byte 0


CMATHall_CMATBattle::
# 9 "data/maps/MercyTown_ConcertHall/scripts.pory"
	lock
# 10 "data/maps/MercyTown_ConcertHall/scripts.pory"
	faceplayer
# 12 "data/maps/MercyTown_ConcertHall/scripts.pory"
	checktrainerflag TRAINER_CMAT
	goto_if 1, CMATHall_CMATBattle_2
# 16 "data/maps/MercyTown_ConcertHall/scripts.pory"
	trainerbattle_single TRAINER_CMAT, CMATHall_CMATBattleIntro, CMATHall_CMATLostBattle, CMATGiveBadge, NO_MUSIC
CMATHall_CMATBattle_1:
# 18 "data/maps/MercyTown_ConcertHall/scripts.pory"
	releaseall
	end

CMATHall_CMATBattle_2:
# 13 "data/maps/MercyTown_ConcertHall/scripts.pory"
	msgbox CMAT_WordAboutTLDP, MSGBOX_AUTOCLOSE
	goto CMATHall_CMATBattle_1


CMATGiveBadge::
# 33 "data/maps/MercyTown_ConcertHall/scripts.pory"
	msgbox CMATHall_CMATGiveBadge, MSGBOX_AUTOCLOSE
# 34 "data/maps/MercyTown_ConcertHall/scripts.pory"
	message CMATGiveBadge_Text_0
# 35 "data/maps/MercyTown_ConcertHall/scripts.pory"
	waitmessage
# 36 "data/maps/MercyTown_ConcertHall/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 37 "data/maps/MercyTown_ConcertHall/scripts.pory"
	setflag FLAG_BADGE05_GET
# 38 "data/maps/MercyTown_ConcertHall/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 39 "data/maps/MercyTown_ConcertHall/scripts.pory"
	msgbox CMATBadgePerks, MSGBOX_AUTOCLOSE
# 40 "data/maps/MercyTown_ConcertHall/scripts.pory"
	releaseall
	end


CMATHall_TriggerLeft::
# 66 "data/maps/MercyTown_ConcertHall/scripts.pory"
	lock
# 67 "data/maps/MercyTown_ConcertHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayerRight
# 68 "data/maps/MercyTown_ConcertHall/scripts.pory"
	call CMATHall_Interview
# 69 "data/maps/MercyTown_ConcertHall/scripts.pory"
	release
	end


CMATHall_TriggerRight::
# 74 "data/maps/MercyTown_ConcertHall/scripts.pory"
	lock
# 75 "data/maps/MercyTown_ConcertHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayerLeft
# 76 "data/maps/MercyTown_ConcertHall/scripts.pory"
	call CMATHall_Interview
# 77 "data/maps/MercyTown_ConcertHall/scripts.pory"
	release
	end


CMATHall_TriggerMiddle::
# 82 "data/maps/MercyTown_ConcertHall/scripts.pory"
	lock
# 83 "data/maps/MercyTown_ConcertHall/scripts.pory"
	call CMATHall_Interview
# 84 "data/maps/MercyTown_ConcertHall/scripts.pory"
	release
	end


# 88 "data/maps/MercyTown_ConcertHall/scripts.pory"
MovePlayerRight:
# 89 "data/maps/MercyTown_ConcertHall/scripts.pory"
	walk_right
# 90 "data/maps/MercyTown_ConcertHall/scripts.pory"
	face_up
# 91 "data/maps/MercyTown_ConcertHall/scripts.pory"
	step_end

# 94 "data/maps/MercyTown_ConcertHall/scripts.pory"
MovePlayerLeft:
# 95 "data/maps/MercyTown_ConcertHall/scripts.pory"
	walk_left
# 96 "data/maps/MercyTown_ConcertHall/scripts.pory"
	face_up
# 97 "data/maps/MercyTown_ConcertHall/scripts.pory"
	step_end

CMATHall_Interview::
# 101 "data/maps/MercyTown_ConcertHall/scripts.pory"
	lock
# 104 "data/maps/MercyTown_ConcertHall/scripts.pory"
	applymovement 2, WalkInPlaceUp
# 105 "data/maps/MercyTown_ConcertHall/scripts.pory"
	waitmovement 0
# 106 "data/maps/MercyTown_ConcertHall/scripts.pory"
	msgbox CMATHall_InterviewConclusionAmy, MSGBOX_AUTOCLOSE
# 107 "data/maps/MercyTown_ConcertHall/scripts.pory"
	applymovement 1, WalkInPlaceDown
# 108 "data/maps/MercyTown_ConcertHall/scripts.pory"
	waitmovement 0
# 109 "data/maps/MercyTown_ConcertHall/scripts.pory"
	msgbox CMATHall_InterviewConclusionCMAT
# 112 "data/maps/MercyTown_ConcertHall/scripts.pory"
	addobject 4
# 113 "data/maps/MercyTown_ConcertHall/scripts.pory"
	addobject 3
# 114 "data/maps/MercyTown_ConcertHall/scripts.pory"
	applymovement 4, AbiGeorgiaWalkIn
# 115 "data/maps/MercyTown_ConcertHall/scripts.pory"
	waitmovement 0
# 116 "data/maps/MercyTown_ConcertHall/scripts.pory"
	msgbox CMATHall_GeorgiaInterruption, MSGBOX_AUTOCLOSE
# 117 "data/maps/MercyTown_ConcertHall/scripts.pory"
	applymovement 3, AbiGeorgiaWalkIn
# 118 "data/maps/MercyTown_ConcertHall/scripts.pory"
	waitmovement 0
# 119 "data/maps/MercyTown_ConcertHall/scripts.pory"
	msgbox CMATHall_AbiInterruption, MSGBOX_AUTOCLOSE
# 120 "data/maps/MercyTown_ConcertHall/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 121 "data/maps/MercyTown_ConcertHall/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 122 "data/maps/MercyTown_ConcertHall/scripts.pory"
	waitmovement 0
# 123 "data/maps/MercyTown_ConcertHall/scripts.pory"
	delay 30
# 124 "data/maps/MercyTown_ConcertHall/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 125 "data/maps/MercyTown_ConcertHall/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 126 "data/maps/MercyTown_ConcertHall/scripts.pory"
	waitmovement 0
# 127 "data/maps/MercyTown_ConcertHall/scripts.pory"
	delay 30
# 128 "data/maps/MercyTown_ConcertHall/scripts.pory"
	msgbox CMATHall_AbiGeorgiaInterruption, MSGBOX_AUTOCLOSE
# 129 "data/maps/MercyTown_ConcertHall/scripts.pory"
	msgbox CMATHall_Interview_Text_0
# 130 "data/maps/MercyTown_ConcertHall/scripts.pory"
	applymovement 4, AbiGeorgiaWalkOut
# 131 "data/maps/MercyTown_ConcertHall/scripts.pory"
	applymovement 3, AbiGeorgiaWalkOut
# 132 "data/maps/MercyTown_ConcertHall/scripts.pory"
	closemessage
# 133 "data/maps/MercyTown_ConcertHall/scripts.pory"
	waitmovement 0
# 134 "data/maps/MercyTown_ConcertHall/scripts.pory"
	removeobject 4
# 135 "data/maps/MercyTown_ConcertHall/scripts.pory"
	removeobject 3
# 138 "data/maps/MercyTown_ConcertHall/scripts.pory"
	applymovement 1, WalkInPlaceDown
# 139 "data/maps/MercyTown_ConcertHall/scripts.pory"
	waitmovement 0
# 140 "data/maps/MercyTown_ConcertHall/scripts.pory"
	msgbox CMATHall_PostInterruptionCMAT, MSGBOX_AUTOCLOSE
# 141 "data/maps/MercyTown_ConcertHall/scripts.pory"
	applymovement 2, WalkInPlaceUp
# 142 "data/maps/MercyTown_ConcertHall/scripts.pory"
	waitmovement 0
# 143 "data/maps/MercyTown_ConcertHall/scripts.pory"
	msgbox CMATHall_PostInterruptionAmy, MSGBOX_AUTOCLOSE
# 144 "data/maps/MercyTown_ConcertHall/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 145 "data/maps/MercyTown_ConcertHall/scripts.pory"
	waitmovement 0
# 146 "data/maps/MercyTown_ConcertHall/scripts.pory"
	msgbox CMATHall_AmyHiPlayer, MSGBOX_AUTOCLOSE
# 147 "data/maps/MercyTown_ConcertHall/scripts.pory"
	applymovement 2, CMATHall_AmyLeaves
# 148 "data/maps/MercyTown_ConcertHall/scripts.pory"
	waitmovement 0
# 149 "data/maps/MercyTown_ConcertHall/scripts.pory"
	removeobject 2
# 150 "data/maps/MercyTown_ConcertHall/scripts.pory"
	setflag FLAG_CMATHALL_AMY
# 151 "data/maps/MercyTown_ConcertHall/scripts.pory"
	setvar VAR_CMATHALL_INTERVIEW, 1
	return


# 194 "data/maps/MercyTown_ConcertHall/scripts.pory"
AbiGeorgiaWalkIn:
# 195 "data/maps/MercyTown_ConcertHall/scripts.pory"
	walk_fast_up
# 195 "data/maps/MercyTown_ConcertHall/scripts.pory"
	walk_fast_up
# 195 "data/maps/MercyTown_ConcertHall/scripts.pory"
	walk_fast_up
# 195 "data/maps/MercyTown_ConcertHall/scripts.pory"
	walk_fast_up
# 195 "data/maps/MercyTown_ConcertHall/scripts.pory"
	walk_fast_up
# 195 "data/maps/MercyTown_ConcertHall/scripts.pory"
	walk_fast_up
# 195 "data/maps/MercyTown_ConcertHall/scripts.pory"
	walk_fast_up
# 195 "data/maps/MercyTown_ConcertHall/scripts.pory"
	walk_fast_up
# 196 "data/maps/MercyTown_ConcertHall/scripts.pory"
	face_down
# 197 "data/maps/MercyTown_ConcertHall/scripts.pory"
	step_end

# 200 "data/maps/MercyTown_ConcertHall/scripts.pory"
AbiGeorgiaWalkOut:
# 201 "data/maps/MercyTown_ConcertHall/scripts.pory"
	walk_fast_down
# 201 "data/maps/MercyTown_ConcertHall/scripts.pory"
	walk_fast_down
# 201 "data/maps/MercyTown_ConcertHall/scripts.pory"
	walk_fast_down
# 201 "data/maps/MercyTown_ConcertHall/scripts.pory"
	walk_fast_down
# 201 "data/maps/MercyTown_ConcertHall/scripts.pory"
	walk_fast_down
# 201 "data/maps/MercyTown_ConcertHall/scripts.pory"
	walk_fast_down
# 201 "data/maps/MercyTown_ConcertHall/scripts.pory"
	walk_fast_down
# 201 "data/maps/MercyTown_ConcertHall/scripts.pory"
	walk_fast_down
# 202 "data/maps/MercyTown_ConcertHall/scripts.pory"
	step_end

# 205 "data/maps/MercyTown_ConcertHall/scripts.pory"
CMATHall_AmyLeaves:
# 206 "data/maps/MercyTown_ConcertHall/scripts.pory"
	walk_right
# 207 "data/maps/MercyTown_ConcertHall/scripts.pory"
	walk_down
# 207 "data/maps/MercyTown_ConcertHall/scripts.pory"
	walk_down
# 207 "data/maps/MercyTown_ConcertHall/scripts.pory"
	walk_down
# 207 "data/maps/MercyTown_ConcertHall/scripts.pory"
	walk_down
# 207 "data/maps/MercyTown_ConcertHall/scripts.pory"
	walk_down
# 207 "data/maps/MercyTown_ConcertHall/scripts.pory"
	walk_down
# 207 "data/maps/MercyTown_ConcertHall/scripts.pory"
	walk_down
# 208 "data/maps/MercyTown_ConcertHall/scripts.pory"
	step_end

CMATGiveBadge_Text_0:
# 34 "data/maps/MercyTown_ConcertHall/scripts.pory"
	.string "Received the GROUNDHOG BADGE from\n"
	.string "CMAT!$"

CMATHall_Interview_Text_0:
# 129 "data/maps/MercyTown_ConcertHall/scripts.pory"
	.string "Hehehehehehe$"

CMATHall_CMATBattleIntro::
# 22 "data/maps/MercyTown_ConcertHall/scripts.pory"
	.string "CMAT: Haha sorry you had to see that. \p"
	.string "Well, I don't want a deep, long chatter \n"
	.string "so let's just get this over with! $"

CMATHall_CMATLostBattle::
# 28 "data/maps/MercyTown_ConcertHall/scripts.pory"
	.string "I'm tryna have a good time… $"

CMATHall_CMATGiveBadge::
# 44 "data/maps/MercyTown_ConcertHall/scripts.pory"
	.string "CMAT: You won, you get this thing! \n"
	.string "That's the rule!$"

CMATBadgePerks::
# 49 "data/maps/MercyTown_ConcertHall/scripts.pory"
	.string "Show this at the doors when you decide \n"
	.string "to attend a show of mine, they'll let \l"
	.string "you in. \p"
	.string "Say hi to TLDP for me when you challenge \n"
	.string "them!$"

CMAT_WordAboutTLDP::
# 57 "data/maps/MercyTown_ConcertHall/scripts.pory"
	.string "CMAT: The Last Dinner Party? \p"
	.string "They're good friends of mine, love these \n"
	.string "people. \p"
	.string "Say hi to them for me next time you see \n"
	.string "them. $"

CMATHall_InterviewConclusionAmy::
# 154 "data/maps/MercyTown_ConcertHall/scripts.pory"
	.string "AMY: So CMAT, is there anything you'd\n"
	.string "like to tell our readers at Parlour \l"
	.string "Zine to end our interview?$"

CMATHall_InterviewConclusionCMAT::
# 160 "data/maps/MercyTown_ConcertHall/scripts.pory"
	.string "CMAT: Well, I'd like to- $"

CMATHall_GeorgiaInterruption::
# 164 "data/maps/MercyTown_ConcertHall/scripts.pory"
	.string "GEORGIA: We have something to say!$"

CMATHall_AbiInterruption::
# 168 "data/maps/MercyTown_ConcertHall/scripts.pory"
	.string "ABIGAIL: Yeah!$"

CMATHall_AbiGeorgiaInterruption::
# 172 "data/maps/MercyTown_ConcertHall/scripts.pory"
	.string "ABIGAIL & GEORGIA: CMAT is GAY!$"

CMATHall_PostInterruptionCMAT::
# 176 "data/maps/MercyTown_ConcertHall/scripts.pory"
	.string "CMAT: Uh well… I guess you can conclude \n"
	.string "your article with that, Amy.$"

CMATHall_PostInterruptionAmy::
# 181 "data/maps/MercyTown_ConcertHall/scripts.pory"
	.string "AMY: I… guess I will, thank you for \n"
	.string "taking the time to answer Parlour \l"
	.string "Zine's questions!$"

CMATHall_AmyHiPlayer::
# 187 "data/maps/MercyTown_ConcertHall/scripts.pory"
	.string "AMY: Oh, hi {PLAYER}! \p"
	.string "I was just interviewing CMAT but we're \n"
	.string "done now. \p"
	.string "Good luck for the challenge!$"

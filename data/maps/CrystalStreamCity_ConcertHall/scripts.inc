CrystalStreamCity_ConcertHall_MapScripts::
	.byte 0


ChappellBattle::
# 7 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	lock
# 8 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	checktrainerflag TRAINER_CHAPPELL
	goto_if 1, ChappellBattle_2
# 12 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	trainerbattle_single TRAINER_CHAPPELL, Chappell_BattleIntro, Chappell_DefeatedText, Chappell_DefeatedScript, NO_MUSIC
ChappellBattle_1:
# 14 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	release
	end

ChappellBattle_2:
# 9 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	msgbox Chappell_WordAboutTLDP, MSGBOX_DEFAULT
	goto ChappellBattle_1


Chappell_DefeatedScript::
# 19 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	msgbox ChappellGiveBadge, MSGBOX_AUTOCLOSE
# 20 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	message Chappell_DefeatedScript_Text_0
# 21 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	waitmessage
# 22 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 23 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	setflag FLAG_BADGE04_GET
# 24 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
# 25 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	msgbox ChappellBadgePerks, MSGBOX_AUTOCLOSE
# 26 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	releaseall
	end


CSCCH_LizzieChappellConvo_Trigger1::
# 67 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	lock
# 68 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	call CSCCH_LizzieChappellConvo_Part1
# 69 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	applymovement 2, Walk_Down
# 70 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	waitmovement 0
# 71 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	call CSCCH_LizzieChappellConvo_Part2
# 72 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	applymovement 2, CSCCH_LizzieLeave1
# 73 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	waitmovement 0
# 74 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	removeobject 2
# 75 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	setflag FLAG_CHAPPELLHALL_LIZZIE
# 76 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	setvar VAR_CSCCH_TRIGGER, 1
# 77 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	release
	end


CSCCH_LizzieChappellConvo_Trigger2::
# 83 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	lock
# 84 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	call CSCCH_LizzieChappellConvo_Part1
# 85 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	applymovement 2, CSCCH_PlaceLizzieTrigger2
# 86 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	waitmovement 0
# 87 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	call CSCCH_LizzieChappellConvo_Part2
# 88 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	applymovement 2, CSCCH_LizzieLeave2
# 89 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	waitmovement 0
# 90 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	removeobject 2
# 91 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	setflag FLAG_CHAPPELLHALL_LIZZIE
# 92 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	setvar VAR_CSCCH_TRIGGER, 1
# 93 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	release
	end


CSCCH_LizzieChappellConvo_Part1::
# 99 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	applymovement 2, WalkInPlaceUp
# 100 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	waitmovement 0
# 101 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	msgbox CSCCH_LizzieShortVisit, MSGBOX_AUTOCLOSE
# 102 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	delay 20
# 103 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	applymovement 1, WalkInPlaceDown
# 104 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	waitmovement 0
# 105 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	msgbox CSCCH_ChappellYeahDefinitely, MSGBOX_AUTOCLOSE
	return


CSCCH_LizzieChappellConvo_Part2::
# 109 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	msgbox CSCCH_LizzieImAHugeFanToo, MSGBOX_AUTOCLOSE
# 110 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 111 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	waitmovement 0
# 112 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	delay 20
# 113 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	msgbox CSCCH_SeeYouLater, MSGBOX_AUTOCLOSE
	return


# 116 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
Walk_Down:
# 117 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	walk_down
# 118 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	step_end

# 121 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
WalkInPlaceDown:
# 122 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	walk_in_place_down
# 123 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	step_end

# 126 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
WalkInPlaceUp:
# 127 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	walk_in_place_up
# 128 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	step_end

# 131 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
CSCCH_PlaceLizzieTrigger2:
# 132 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	walk_down
# 132 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	walk_down
# 133 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	face_player
# 134 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	step_end

# 137 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
CSCCH_LizzieLeave2:
# 138 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	walk_down
# 138 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	walk_down
# 138 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	walk_down
# 139 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	step_end

# 142 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
CSCCH_LizzieLeave1:
# 143 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	walk_right
# 144 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	walk_down
# 144 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	walk_down
# 144 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	walk_down
# 144 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	walk_down
# 145 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	step_end

Chappell_DefeatedScript_Text_0:
# 20 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	.string "Received the CASUAL BADGE from\n"
	.string "CHAPPELL ROAN!$"

Chappell_BattleIntro::
# 30 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	.string "CHAPPELL: Now that our Impidimp problem \n"
	.string "is solved, let's finally get to what \l"
	.string "you're here for! \p"
	.string "I'm your favourite artist's favourite \n"
	.string "artist, you think you can win against \l"
	.string "me? \p"
	.string "I'm gonna serve exactly what you are…\p"
	.string "Cunt! $"

Chappell_DefeatedText::
# 41 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	.string "You certainly get the job done…$"

ChappellGiveBadge::
# 45 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	.string "CHAPPELL: Wow you're one badass bitch! \p"
	.string "You totally deserve this cunty badge! $"

ChappellBadgePerks::
# 50 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	.string "This thing will make your POKéMON listen \n"
	.string "to you until they reach level 50. \p"
	.string "Well now I guess I have to add you to \n"
	.string "my forever guest list.  $"

Chappell_WordAboutTLDP::
# 57 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	.string "CHAPPELL: The Last Dinner Party? \p"
	.string "Yeah they slay, they're like really \n"
	.string "cool. \p"
	.string "You won't stand a chance against them \n"
	.string "if you don't train super hard. \p"
	.string "Good luck with that, babe. $"

CSCCH_LizzieShortVisit::
# 148 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	.string "LIZZIE: It was so lovely to meet you, \n"
	.string "Chappell! \p"
	.string "Hopefully next time I can stay a bit \n"
	.string "longer.$"

CSCCH_ChappellYeahDefinitely::
# 155 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	.string "CHAPPELL: Yeah, and I'd love to visit \n"
	.string "you and the band in Mirror City!$"

CSCCH_LizzieImAHugeFanToo::
# 160 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	.string "LIZZIE: Ah, there you are! \p"
	.string "Thanks for your help earlier! \p"
	.string "… … … \p"
	.string "You look familiar, have we met before?\n"
	.string "Before Route 6, I mean.$"

CSCCH_SeeYouLater::
# 168 "data/maps/CrystalStreamCity_ConcertHall/scripts.pory"
	.string "Right! The Two-Legged Dog! \p"
	.string "Yeah, Abi told me she gave a POKéMON to \n"
	.string "a fan! \p"
	.string "I'm not gonna hold you back any longer, \n"
	.string "good luck against Chappell and see you \l"
	.string "in Mirror City! $"

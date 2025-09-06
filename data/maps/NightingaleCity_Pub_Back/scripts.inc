NightingaleCity_Pub_Back_MapScripts::
	.byte 0


NCPub_BrianEmilyConvo::
# 7 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	lock
# 9 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 10 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	waitmovement 0
# 11 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	msgbox NCPub_EmilyInvite, MSGBOX_AUTOCLOSE
# 12 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 13 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	waitmovement 0
# 14 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	msgbox NCPub_BrianAccept, MSGBOX_AUTOCLOSE
# 15 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	applymovement 1, ExcitedEmily_NoEmote
# 16 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	waitmovement 0
# 17 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	msgbox NCPub_EmilyThankYou, MSGBOX_AUTOCLOSE
# 19 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 20 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 21 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	applymovement 1, NCPub_EmilyLeaves1
# 22 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 23 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	waitmovement 1
# 24 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	msgbox NCPub_EmilyHappy, MSGBOX_AUTOCLOSE
# 25 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NCPub_PlayerMoveAside
# 26 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	waitmovement 0
# 27 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	applymovement 1, NCPub_EmilyLeaves2
# 28 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	waitmovement 0
# 30 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	removeobject 1
# 31 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	setvar VAR_NIGHTINGALECITY_PUB, 1
# 32 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	setflag FLAG_NIGHTINGALECITY_BACK_EMILY
# 33 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	release
	end


# 67 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
NCPub_EmilyLeaves1:
# 68 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	walk_right
# 69 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	walk_down
# 69 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	walk_down
# 69 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	walk_down
# 70 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	walk_left
# 71 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	step_end

# 74 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
NCPub_PlayerMoveAside:
# 75 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	walk_left
# 76 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	face_right
# 77 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	step_end

# 80 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
NCPub_EmilyLeaves2:
# 81 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	walk_left
# 82 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	walk_down
# 83 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	step_end

NCPub_BrianMayBattle::
# 87 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	lock
# 88 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	faceplayer
# 90 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	checktrainerflag TRAINER_BRIANMAY
	goto_if 1, NCPub_BrianMayBattle_2
# 94 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	msgbox BrianMayHall_BrianMayBattleIntro, MSGBOX_YESNO
# 95 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NCPub_BrianMayBattle_5
# 100 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	msgbox NCPub_BrianMayBattle_Text_1
NCPub_BrianMayBattle_1:
# 103 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	releaseall
	end

NCPub_BrianMayBattle_2:
# 91 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	msgbox BrianMay_WordAboutTLDP, MSGBOX_AUTOCLOSE
	goto NCPub_BrianMayBattle_1

NCPub_BrianMayBattle_5:
# 96 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	trainerbattle_no_intro TRAINER_BRIANMAY, NCPub_BrianMayBattle_Text_0
# 97 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	call BrianMayGiveBadge
	goto NCPub_BrianMayBattle_1


BrianMayGiveBadge::
# 108 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	msgbox BrianMayHall_BrianMayGiveBadge, MSGBOX_AUTOCLOSE
# 109 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	message BrianMayGiveBadge_Text_0
# 110 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	waitmessage
# 111 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 112 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	setflag FLAG_BADGE07_GET
# 113 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
# 114 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	msgbox BrianMayBadgePerks, MSGBOX_AUTOCLOSE
# 115 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	releaseall
	end


NCPub_BrianMayBattle_Text_0:
# 96 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	.string "You're a champion, my friend.$"

NCPub_BrianMayBattle_Text_1:
# 100 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	.string "Very well, another time then!$"

BrianMayGiveBadge_Text_0:
# 109 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	.string "Received the RHAPSODY BADGE from\n"
	.string "BRIAN MAY!$"

NCPub_EmilyInvite::
# 37 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	.string "EMILY: … and you're a huge inspiration \n"
	.string "for the band and I so I had to invite \l"
	.string "you to our first show in Mirror City! $"

NCPub_BrianAccept::
# 43 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	.string "BRIAN MAY: It would be an honour to \n"
	.string "be there! \p"
	.string "I've been listening to your work, it \n"
	.string "sounds like music has a bright future. \p"
	.string "And I've heard of the challenge thing \n"
	.string "you do, it sounds fun! \p"
	.string "Rock is in good hands with you people. $"

NCPub_EmilyThankYou::
# 53 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	.string "EMILY: Thank you! \p"
	.string "We will keep you a good spot for sure! \p"
	.string "Well I should go now, thank you so much \n"
	.string "for everything! $"

NCPub_EmilyHappy::
# 60 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	.string "EMILY: {PLAYER}! \p"
	.string "Brian May accepted my invitation, he'll \n"
	.string "be in Mirror City! \p"
	.string "I have to go tell the others, see ya! $"

BrianMayHall_BrianMayBattleIntro::
# 119 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	.string "BRIAN MAY: Hello, are you a friend of \n"
	.string "Emily's? \p"
	.string "Oh, a fan of hers! \p"
	.string "I see, are you going to see The Last \n"
	.string "Dinner Party in Mirror City too? \p"
	.string "I'll see you there, then. \p"
	.string "You know, I really like their idea of \n"
	.string "challenging their fans. \p"
	.string "I haven't battled in a little while, I \n"
	.string "was focused on keeping my guitar \l"
	.string "skills sharp instead. \p"
	.string "Why don't we spar together? \n"
	.string "It would be good training for you! $"

BrianMayHall_BrianMayGiveBadge::
# 135 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	.string "BRIAN MAY: Impressive! \p"
	.string "The Last Dinner Party will have to \n"
	.string "prepare for you. \p"
	.string "I have a little something for you, as \n"
	.string "a souvenir. $"

BrianMayBadgePerks::
# 143 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	.string "We used to give those to our close \n"
	.string "friends so they could attend our \l"
	.string "shows for free. \p"
	.string "You can keep it, for good luck against \n"
	.string "the band.$"

BrianMay_WordAboutTLDP::
# 151 "data/maps/NightingaleCity_Pub_Back/scripts.pory"
	.string "BRIAN MAY: Both rock music and POKéMON \n"
	.string "battles have bright days ahead of them. \p"
	.string "It's good, it shows people still know \n"
	.string "how to have fun! $"

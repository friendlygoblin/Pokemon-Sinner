FurgeTown_MapScripts::
	.byte 0


FurgeTown_Sign::
# 9 "data/maps/FurgeTown/scripts.pory"
	lock
# 10 "data/maps/FurgeTown/scripts.pory"
	msgbox FurgeTown_Sign_Text_0, MSGBOX_AUTOCLOSE
# 11 "data/maps/FurgeTown/scripts.pory"
	releaseall
	end


FurgeTown_ShopSign::
# 16 "data/maps/FurgeTown/scripts.pory"
	lock
# 17 "data/maps/FurgeTown/scripts.pory"
	msgbox FurgeTown_ShopSign_Text_0, MSGBOX_AUTOCLOSE
# 18 "data/maps/FurgeTown/scripts.pory"
	releaseall
	end


FurgeTown_CampSign::
# 23 "data/maps/FurgeTown/scripts.pory"
	lock
# 24 "data/maps/FurgeTown/scripts.pory"
	msgbox FurgeTown_CampSign_Text_0, MSGBOX_AUTOCLOSE
# 25 "data/maps/FurgeTown/scripts.pory"
	releaseall
	end


FurgeTown_FlorenceSign::
# 30 "data/maps/FurgeTown/scripts.pory"
	lock
# 31 "data/maps/FurgeTown/scripts.pory"
	msgbox FurgeTown_FlorenceSign_Text_0, MSGBOX_AUTOCLOSE
# 32 "data/maps/FurgeTown/scripts.pory"
	releaseall
	end


FurgeTown_BoyInLine::
# 37 "data/maps/FurgeTown/scripts.pory"
	lock
# 38 "data/maps/FurgeTown/scripts.pory"
	faceplayer
# 39 "data/maps/FurgeTown/scripts.pory"
	msgbox FurgeTown_BoyInLine_Text_0, MSGBOX_AUTOCLOSE
# 40 "data/maps/FurgeTown/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 41 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 42 "data/maps/FurgeTown/scripts.pory"
	releaseall
	end


FurgeTown_GirlInLine::
# 47 "data/maps/FurgeTown/scripts.pory"
	lock
# 48 "data/maps/FurgeTown/scripts.pory"
	faceplayer
# 49 "data/maps/FurgeTown/scripts.pory"
	msgbox FurgeTown_GirlInLine_Text_0, MSGBOX_AUTOCLOSE
# 50 "data/maps/FurgeTown/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 51 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 52 "data/maps/FurgeTown/scripts.pory"
	releaseall
	end


Florence_Georgia_Scene::
# 57 "data/maps/FurgeTown/scripts.pory"
	lock
# 59 "data/maps/FurgeTown/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceRight
# 60 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 61 "data/maps/FurgeTown/scripts.pory"
	msgbox Florence_Georgia_Scene_Text_0, MSGBOX_AUTOCLOSE
# 62 "data/maps/FurgeTown/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 63 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 64 "data/maps/FurgeTown/scripts.pory"
	delay 20
# 65 "data/maps/FurgeTown/scripts.pory"
	applymovement 4, FlorenceLookAround
# 66 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 67 "data/maps/FurgeTown/scripts.pory"
	msgbox Florence_DutyCalls, MSGBOX_AUTOCLOSE
# 68 "data/maps/FurgeTown/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 69 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 70 "data/maps/FurgeTown/scripts.pory"
	msgbox Georgia_ByeFlorence, MSGBOX_AUTOCLOSE
# 73 "data/maps/FurgeTown/scripts.pory"
	applymovement 4, Florence_ComesToPlayer
# 74 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 75 "data/maps/FurgeTown/scripts.pory"
	msgbox Florence_WillBeWaiting, MSGBOX_AUTOCLOSE
# 76 "data/maps/FurgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerOutOfTheWay
# 77 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 78 "data/maps/FurgeTown/scripts.pory"
	applymovement 4, FlorenceLeaves
# 79 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 80 "data/maps/FurgeTown/scripts.pory"
	removeobject 4
# 83 "data/maps/FurgeTown/scripts.pory"
	applymovement 3, Georgia_ComesToPlayer
# 84 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 85 "data/maps/FurgeTown/scripts.pory"
	msgbox Georgia_WordToPlayer, MSGBOX_AUTOCLOSE
# 86 "data/maps/FurgeTown/scripts.pory"
	applymovement 3, FurgeTown_GeorgiaLeaves
# 87 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 88 "data/maps/FurgeTown/scripts.pory"
	removeobject 3
# 90 "data/maps/FurgeTown/scripts.pory"
	setflag FLAG_FURGETOWN_LINE
# 91 "data/maps/FurgeTown/scripts.pory"
	setvar VAR_FLORENCE_GEORGIA_SCENE, 1
# 92 "data/maps/FurgeTown/scripts.pory"
	releaseall
	end


# 96 "data/maps/FurgeTown/scripts.pory"
FlorenceLookAround:
# 97 "data/maps/FurgeTown/scripts.pory"
	walk_in_place_left
# 98 "data/maps/FurgeTown/scripts.pory"
	delay_16
# 99 "data/maps/FurgeTown/scripts.pory"
	delay_16
# 100 "data/maps/FurgeTown/scripts.pory"
	walk_in_place_right
# 101 "data/maps/FurgeTown/scripts.pory"
	delay_16
# 102 "data/maps/FurgeTown/scripts.pory"
	delay_16
# 103 "data/maps/FurgeTown/scripts.pory"
	walk_in_place_right
# 104 "data/maps/FurgeTown/scripts.pory"
	step_end

# 107 "data/maps/FurgeTown/scripts.pory"
Florence_ComesToPlayer:
# 108 "data/maps/FurgeTown/scripts.pory"
	walk_down
# 109 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 110 "data/maps/FurgeTown/scripts.pory"
	step_end

# 113 "data/maps/FurgeTown/scripts.pory"
PlayerOutOfTheWay:
# 114 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 115 "data/maps/FurgeTown/scripts.pory"
	walk_down
# 116 "data/maps/FurgeTown/scripts.pory"
	face_up
# 117 "data/maps/FurgeTown/scripts.pory"
	step_end

# 120 "data/maps/FurgeTown/scripts.pory"
FlorenceLeaves:
# 121 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 121 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 121 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 121 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 121 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 122 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 122 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 122 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 122 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 122 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 122 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 123 "data/maps/FurgeTown/scripts.pory"
	step_end

# 126 "data/maps/FurgeTown/scripts.pory"
Georgia_ComesToPlayer:
# 127 "data/maps/FurgeTown/scripts.pory"
	walk_down
# 128 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 128 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 128 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 128 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 129 "data/maps/FurgeTown/scripts.pory"
	face_down
# 130 "data/maps/FurgeTown/scripts.pory"
	step_end

# 133 "data/maps/FurgeTown/scripts.pory"
FurgeTown_GeorgiaLeaves:
# 134 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 134 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 134 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 135 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 135 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 135 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 135 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 135 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 135 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 136 "data/maps/FurgeTown/scripts.pory"
	step_end

FurgeTown_Sign_Text_0:
# 10 "data/maps/FurgeTown/scripts.pory"
	.string "Welcome to Furge Town!\p"
	.string "Enjoy the peace of the forest!$"

FurgeTown_ShopSign_Text_0:
# 17 "data/maps/FurgeTown/scripts.pory"
	.string "Granny's medicinal herbs\p"
	.string "Nature knows best!$"

FurgeTown_CampSign_Text_0:
# 24 "data/maps/FurgeTown/scripts.pory"
	.string "Furge Town Campsite\p"
	.string "Please make sure your campfires are\n"
	.string "fully out before leaving.$"

FurgeTown_FlorenceSign_Text_0:
# 31 "data/maps/FurgeTown/scripts.pory"
	.string "FURGE TOWN CONCERT CLEARING\p"
	.string "CURRENT RESIDENT: FLORENCE WELCH\p"
	.string "(not done yet)$"

FurgeTown_BoyInLine_Text_0:
# 39 "data/maps/FurgeTown/scripts.pory"
	.string "GRACE: Hi, {PLAYER}!\p"
	.string "We're waiting for the concert to start!$"

FurgeTown_GirlInLine_Text_0:
# 49 "data/maps/FurgeTown/scripts.pory"
	.string "JULIE: I can't wait to see Florence!$"

Florence_Georgia_Scene_Text_0:
# 61 "data/maps/FurgeTown/scripts.pory"
	.string "???: … Mirror City? How impressive!$"

Florence_DutyCalls::
# 139 "data/maps/FurgeTown/scripts.pory"
	.string "???: Oh, it looks like duty is calling. \p"
	.string "Well, dear Georgia, it was a pleasure \n"
	.string "to have a chat with you. \p"
	.string "I will see you again another time.$"

Georgia_ByeFlorence::
# 146 "data/maps/FurgeTown/scripts.pory"
	.string "GEORGIA: Goodbye, Florence!$"

Florence_WillBeWaiting::
# 150 "data/maps/FurgeTown/scripts.pory"
	.string "FLORENCE: A visitor! \p"
	.string "What is your name? \p"
	.string "… … …\p"
	.string "Well I will be waiting for you in the \n"
	.string "clearing, {PLAYER}.$"

Georgia_WordToPlayer::
# 158 "data/maps/FurgeTown/scripts.pory"
	.string "GEORGIA: Hello! \p"
	.string "You're the one Abi gave a POKéMON to, \n"
	.string "right? \p"
	.string "And you're here to challenge Florence? \p"
	.string "Well, good luck! \p"
	.string "I've had a chance to spar with her a bit, \n"
	.string "she's super talented. \p"
	.string "She's a huge inspiration for us, both as \n"
	.string "an artist and as a POKéMON trainer! \p"
	.string "I should go now, I'll see you around! $"

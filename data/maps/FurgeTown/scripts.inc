FurgeTown_MapScripts::
# 2 "data/maps/FurgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FurgeTown_Visited
	.byte 0


FurgeTown_Visited::
# 6 "data/maps/FurgeTown/scripts.pory"
	setflag FLAG_VISITED_DEWFORD_TOWN
	return


FurgeTown_Sign::
# 15 "data/maps/FurgeTown/scripts.pory"
	lock
# 16 "data/maps/FurgeTown/scripts.pory"
	msgbox FurgeTown_Sign_Text_0, MSGBOX_AUTOCLOSE
# 17 "data/maps/FurgeTown/scripts.pory"
	releaseall
	end


FurgeTown_ShopSign::
# 22 "data/maps/FurgeTown/scripts.pory"
	lock
# 23 "data/maps/FurgeTown/scripts.pory"
	msgbox FurgeTown_ShopSign_Text_0, MSGBOX_AUTOCLOSE
# 24 "data/maps/FurgeTown/scripts.pory"
	releaseall
	end


FurgeTown_CampSign::
# 29 "data/maps/FurgeTown/scripts.pory"
	lock
# 30 "data/maps/FurgeTown/scripts.pory"
	msgbox FurgeTown_CampSign_Text_0, MSGBOX_AUTOCLOSE
# 31 "data/maps/FurgeTown/scripts.pory"
	releaseall
	end


FurgeTown_FlorenceSign::
# 36 "data/maps/FurgeTown/scripts.pory"
	lock
# 37 "data/maps/FurgeTown/scripts.pory"
	msgbox FurgeTown_FlorenceSign_Text_0, MSGBOX_AUTOCLOSE
# 38 "data/maps/FurgeTown/scripts.pory"
	releaseall
	end


FurgeTown_BoyInLine::
# 43 "data/maps/FurgeTown/scripts.pory"
	lock
# 44 "data/maps/FurgeTown/scripts.pory"
	faceplayer
# 45 "data/maps/FurgeTown/scripts.pory"
	msgbox FurgeTown_BoyInLine_Text_0, MSGBOX_AUTOCLOSE
# 46 "data/maps/FurgeTown/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 47 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 48 "data/maps/FurgeTown/scripts.pory"
	releaseall
	end


FurgeTown_GirlInLine::
# 53 "data/maps/FurgeTown/scripts.pory"
	lock
# 54 "data/maps/FurgeTown/scripts.pory"
	faceplayer
# 55 "data/maps/FurgeTown/scripts.pory"
	msgbox FurgeTown_GirlInLine_Text_0, MSGBOX_AUTOCLOSE
# 56 "data/maps/FurgeTown/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 57 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 58 "data/maps/FurgeTown/scripts.pory"
	releaseall
	end


Florence_Georgia_Scene::
# 63 "data/maps/FurgeTown/scripts.pory"
	lock
# 65 "data/maps/FurgeTown/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceRight
# 66 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 67 "data/maps/FurgeTown/scripts.pory"
	msgbox Florence_Georgia_Scene_Text_0, MSGBOX_AUTOCLOSE
# 68 "data/maps/FurgeTown/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 69 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 70 "data/maps/FurgeTown/scripts.pory"
	delay 20
# 71 "data/maps/FurgeTown/scripts.pory"
	applymovement 4, FlorenceLookAround
# 72 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 73 "data/maps/FurgeTown/scripts.pory"
	msgbox Florence_DutyCalls, MSGBOX_AUTOCLOSE
# 74 "data/maps/FurgeTown/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 75 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 76 "data/maps/FurgeTown/scripts.pory"
	msgbox Georgia_ByeFlorence, MSGBOX_AUTOCLOSE
# 79 "data/maps/FurgeTown/scripts.pory"
	applymovement 4, Florence_ComesToPlayer
# 80 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 81 "data/maps/FurgeTown/scripts.pory"
	msgbox Florence_WillBeWaiting, MSGBOX_AUTOCLOSE
# 82 "data/maps/FurgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerOutOfTheWay
# 83 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 84 "data/maps/FurgeTown/scripts.pory"
	applymovement 4, FlorenceLeaves
# 85 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 86 "data/maps/FurgeTown/scripts.pory"
	removeobject 4
# 89 "data/maps/FurgeTown/scripts.pory"
	applymovement 3, Georgia_ComesToPlayer
# 90 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 91 "data/maps/FurgeTown/scripts.pory"
	msgbox Georgia_WordToPlayer, MSGBOX_AUTOCLOSE
# 92 "data/maps/FurgeTown/scripts.pory"
	applymovement 3, FurgeTown_GeorgiaLeaves
# 93 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 94 "data/maps/FurgeTown/scripts.pory"
	removeobject 3
# 96 "data/maps/FurgeTown/scripts.pory"
	setflag FLAG_FURGETOWN_LINE
# 97 "data/maps/FurgeTown/scripts.pory"
	setvar VAR_FLORENCE_GEORGIA_SCENE, 1
# 98 "data/maps/FurgeTown/scripts.pory"
	releaseall
	end


# 102 "data/maps/FurgeTown/scripts.pory"
FlorenceLookAround:
# 103 "data/maps/FurgeTown/scripts.pory"
	walk_in_place_left
# 104 "data/maps/FurgeTown/scripts.pory"
	delay_16
# 105 "data/maps/FurgeTown/scripts.pory"
	delay_16
# 106 "data/maps/FurgeTown/scripts.pory"
	walk_in_place_right
# 107 "data/maps/FurgeTown/scripts.pory"
	delay_16
# 108 "data/maps/FurgeTown/scripts.pory"
	delay_16
# 109 "data/maps/FurgeTown/scripts.pory"
	walk_in_place_right
# 110 "data/maps/FurgeTown/scripts.pory"
	step_end

# 113 "data/maps/FurgeTown/scripts.pory"
Florence_ComesToPlayer:
# 114 "data/maps/FurgeTown/scripts.pory"
	walk_down
# 115 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 116 "data/maps/FurgeTown/scripts.pory"
	step_end

# 119 "data/maps/FurgeTown/scripts.pory"
PlayerOutOfTheWay:
# 120 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 121 "data/maps/FurgeTown/scripts.pory"
	walk_down
# 122 "data/maps/FurgeTown/scripts.pory"
	face_up
# 123 "data/maps/FurgeTown/scripts.pory"
	step_end

# 126 "data/maps/FurgeTown/scripts.pory"
FlorenceLeaves:
# 127 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 127 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 127 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 127 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 127 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 128 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 128 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 128 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 128 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 128 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 128 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 129 "data/maps/FurgeTown/scripts.pory"
	step_end

# 132 "data/maps/FurgeTown/scripts.pory"
Georgia_ComesToPlayer:
# 133 "data/maps/FurgeTown/scripts.pory"
	walk_down
# 134 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 134 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 134 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 134 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 135 "data/maps/FurgeTown/scripts.pory"
	face_down
# 136 "data/maps/FurgeTown/scripts.pory"
	step_end

# 139 "data/maps/FurgeTown/scripts.pory"
FurgeTown_GeorgiaLeaves:
# 140 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 140 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 140 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 141 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 141 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 141 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 141 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 141 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 141 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 142 "data/maps/FurgeTown/scripts.pory"
	step_end

FurgeTown_Sign_Text_0:
# 16 "data/maps/FurgeTown/scripts.pory"
	.string "Welcome to Furge Town!\p"
	.string "Enjoy the peace of the forest!$"

FurgeTown_ShopSign_Text_0:
# 23 "data/maps/FurgeTown/scripts.pory"
	.string "Granny's medicinal herbs\p"
	.string "Nature knows best!$"

FurgeTown_CampSign_Text_0:
# 30 "data/maps/FurgeTown/scripts.pory"
	.string "Furge Town Campsite\p"
	.string "Please make sure your campfires are\n"
	.string "fully out before leaving.$"

FurgeTown_FlorenceSign_Text_0:
# 37 "data/maps/FurgeTown/scripts.pory"
	.string "FURGE TOWN CONCERT CLEARING\p"
	.string "CURRENT RESIDENT: FLORENCE WELCH\p"
	.string "(not done yet)$"

FurgeTown_BoyInLine_Text_0:
# 45 "data/maps/FurgeTown/scripts.pory"
	.string "GRACE: Hi, {PLAYER}!\p"
	.string "We're waiting for the concert to start!$"

FurgeTown_GirlInLine_Text_0:
# 55 "data/maps/FurgeTown/scripts.pory"
	.string "JULIE: I can't wait to see Florence!$"

Florence_Georgia_Scene_Text_0:
# 67 "data/maps/FurgeTown/scripts.pory"
	.string "???: … Mirror City? How impressive!$"

Florence_DutyCalls::
# 145 "data/maps/FurgeTown/scripts.pory"
	.string "???: Oh, it looks like duty is calling. \p"
	.string "Well, dear Georgia, it was a pleasure \n"
	.string "to have a chat with you. \p"
	.string "I will see you again another time.$"

Georgia_ByeFlorence::
# 152 "data/maps/FurgeTown/scripts.pory"
	.string "GEORGIA: Goodbye, Florence!$"

Florence_WillBeWaiting::
# 156 "data/maps/FurgeTown/scripts.pory"
	.string "FLORENCE: A visitor! \p"
	.string "What is your name? \p"
	.string "… … …\p"
	.string "Well I will be waiting for you in the \n"
	.string "clearing, {PLAYER}.$"

Georgia_WordToPlayer::
# 164 "data/maps/FurgeTown/scripts.pory"
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

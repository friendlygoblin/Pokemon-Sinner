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


FurgeTown_VespiquenGirl::
# 43 "data/maps/FurgeTown/scripts.pory"
	lock
# 44 "data/maps/FurgeTown/scripts.pory"
	faceplayer
# 45 "data/maps/FurgeTown/scripts.pory"
	msgbox FurgeTown_VespiquenGirl_Text_0, MSGBOX_AUTOCLOSE
# 46 "data/maps/FurgeTown/scripts.pory"
	releaseall
	end


FurgeTown_Vespiquen::
# 51 "data/maps/FurgeTown/scripts.pory"
	lock
# 52 "data/maps/FurgeTown/scripts.pory"
	faceplayer
# 53 "data/maps/FurgeTown/scripts.pory"
	playmoncry SPECIES_VESPIQUEN, CRY_MODE_NORMAL
# 54 "data/maps/FurgeTown/scripts.pory"
	waitmoncry
# 55 "data/maps/FurgeTown/scripts.pory"
	msgbox FurgeTown_Vespiquen_Text_0, MSGBOX_AUTOCLOSE
# 56 "data/maps/FurgeTown/scripts.pory"
	releaseall
	end


FurgeTown_OldWoman::
# 61 "data/maps/FurgeTown/scripts.pory"
	lock
# 62 "data/maps/FurgeTown/scripts.pory"
	faceplayer
# 63 "data/maps/FurgeTown/scripts.pory"
	msgbox FurgeTown_OldWoman_Text_0, MSGBOX_AUTOCLOSE
# 64 "data/maps/FurgeTown/scripts.pory"
	releaseall
	end


FurgeTown_Man::
# 69 "data/maps/FurgeTown/scripts.pory"
	lock
# 70 "data/maps/FurgeTown/scripts.pory"
	faceplayer
# 71 "data/maps/FurgeTown/scripts.pory"
	msgbox FurgeTown_Man_Text_0, MSGBOX_AUTOCLOSE
# 72 "data/maps/FurgeTown/scripts.pory"
	releaseall
	end


FurgeTown_BoyInLine::
# 77 "data/maps/FurgeTown/scripts.pory"
	lock
# 78 "data/maps/FurgeTown/scripts.pory"
	faceplayer
# 79 "data/maps/FurgeTown/scripts.pory"
	msgbox FurgeTown_BoyInLine_Text_0, MSGBOX_AUTOCLOSE
# 80 "data/maps/FurgeTown/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 81 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 82 "data/maps/FurgeTown/scripts.pory"
	releaseall
	end


FurgeTown_GirlInLine::
# 87 "data/maps/FurgeTown/scripts.pory"
	lock
# 88 "data/maps/FurgeTown/scripts.pory"
	faceplayer
# 89 "data/maps/FurgeTown/scripts.pory"
	msgbox FurgeTown_GirlInLine_Text_0, MSGBOX_AUTOCLOSE
# 90 "data/maps/FurgeTown/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 91 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 92 "data/maps/FurgeTown/scripts.pory"
	releaseall
	end


Florence_Georgia_Scene::
# 97 "data/maps/FurgeTown/scripts.pory"
	lock
# 99 "data/maps/FurgeTown/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceRight
# 100 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 101 "data/maps/FurgeTown/scripts.pory"
	msgbox Florence_Georgia_Scene_Text_0, MSGBOX_AUTOCLOSE
# 102 "data/maps/FurgeTown/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 103 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 104 "data/maps/FurgeTown/scripts.pory"
	delay 20
# 105 "data/maps/FurgeTown/scripts.pory"
	applymovement 4, FlorenceLookAround
# 106 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 107 "data/maps/FurgeTown/scripts.pory"
	msgbox Florence_DutyCalls, MSGBOX_AUTOCLOSE
# 108 "data/maps/FurgeTown/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 109 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 110 "data/maps/FurgeTown/scripts.pory"
	msgbox Georgia_ByeFlorence, MSGBOX_AUTOCLOSE
# 113 "data/maps/FurgeTown/scripts.pory"
	applymovement 4, Florence_ComesToPlayer
# 114 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 115 "data/maps/FurgeTown/scripts.pory"
	msgbox Florence_WillBeWaiting, MSGBOX_AUTOCLOSE
# 116 "data/maps/FurgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerOutOfTheWay
# 117 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 118 "data/maps/FurgeTown/scripts.pory"
	applymovement 4, FlorenceLeaves
# 119 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 120 "data/maps/FurgeTown/scripts.pory"
	removeobject 4
# 123 "data/maps/FurgeTown/scripts.pory"
	applymovement 3, Georgia_ComesToPlayer
# 124 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 125 "data/maps/FurgeTown/scripts.pory"
	msgbox Georgia_WordToPlayer, MSGBOX_AUTOCLOSE
# 126 "data/maps/FurgeTown/scripts.pory"
	applymovement 3, FurgeTown_GeorgiaLeaves
# 127 "data/maps/FurgeTown/scripts.pory"
	waitmovement 0
# 128 "data/maps/FurgeTown/scripts.pory"
	removeobject 3
# 130 "data/maps/FurgeTown/scripts.pory"
	setflag FLAG_FURGETOWN_LINE
# 131 "data/maps/FurgeTown/scripts.pory"
	setvar VAR_FLORENCE_GEORGIA_SCENE, 1
# 132 "data/maps/FurgeTown/scripts.pory"
	releaseall
	end


# 136 "data/maps/FurgeTown/scripts.pory"
FlorenceLookAround:
# 137 "data/maps/FurgeTown/scripts.pory"
	walk_in_place_left
# 138 "data/maps/FurgeTown/scripts.pory"
	delay_16
# 139 "data/maps/FurgeTown/scripts.pory"
	delay_16
# 140 "data/maps/FurgeTown/scripts.pory"
	walk_in_place_right
# 141 "data/maps/FurgeTown/scripts.pory"
	delay_16
# 142 "data/maps/FurgeTown/scripts.pory"
	delay_16
# 143 "data/maps/FurgeTown/scripts.pory"
	walk_in_place_right
# 144 "data/maps/FurgeTown/scripts.pory"
	step_end

# 147 "data/maps/FurgeTown/scripts.pory"
Florence_ComesToPlayer:
# 148 "data/maps/FurgeTown/scripts.pory"
	walk_down
# 149 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 150 "data/maps/FurgeTown/scripts.pory"
	step_end

# 153 "data/maps/FurgeTown/scripts.pory"
PlayerOutOfTheWay:
# 154 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 155 "data/maps/FurgeTown/scripts.pory"
	walk_down
# 156 "data/maps/FurgeTown/scripts.pory"
	face_up
# 157 "data/maps/FurgeTown/scripts.pory"
	step_end

# 160 "data/maps/FurgeTown/scripts.pory"
FlorenceLeaves:
# 161 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 161 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 161 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 161 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 161 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 162 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 162 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 162 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 162 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 162 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 162 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 163 "data/maps/FurgeTown/scripts.pory"
	step_end

# 166 "data/maps/FurgeTown/scripts.pory"
Georgia_ComesToPlayer:
# 167 "data/maps/FurgeTown/scripts.pory"
	walk_down
# 168 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 168 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 168 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 168 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 169 "data/maps/FurgeTown/scripts.pory"
	face_down
# 170 "data/maps/FurgeTown/scripts.pory"
	step_end

# 173 "data/maps/FurgeTown/scripts.pory"
FurgeTown_GeorgiaLeaves:
# 174 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 174 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 174 "data/maps/FurgeTown/scripts.pory"
	walk_left
# 175 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 175 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 175 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 175 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 175 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 175 "data/maps/FurgeTown/scripts.pory"
	walk_up
# 176 "data/maps/FurgeTown/scripts.pory"
	step_end

FurgeTown_Sign_Text_0:
# 16 "data/maps/FurgeTown/scripts.pory"
	.string "Welcome to Furge Town!\p"
	.string "Let the trees swallow you!$"

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

FurgeTown_VespiquenGirl_Text_0:
# 45 "data/maps/FurgeTown/scripts.pory"
	.string "My dad befriended the Combees, and I\n"
	.string "befriended their Vespiquen!$"

FurgeTown_Vespiquen_Text_0:
# 55 "data/maps/FurgeTown/scripts.pory"
	.string "VESPIQUEN: Zzzzzzz.$"

FurgeTown_OldWoman_Text_0:
# 63 "data/maps/FurgeTown/scripts.pory"
	.string "A little while ago, a band of five\n"
	.string "eccentric musicians came here and\l"
	.string "wrote a song.\p"
	.string "I'm not sure how it goes, something\n"
	.string "about becoming a forest?$"

FurgeTown_Man_Text_0:
# 71 "data/maps/FurgeTown/scripts.pory"
	.string "I came here because I wanted to be\n"
	.string "closer to nature.\p"
	.string "I think I picked the right town!$"

FurgeTown_BoyInLine_Text_0:
# 79 "data/maps/FurgeTown/scripts.pory"
	.string "GRACE: Hi, {PLAYER}!\p"
	.string "We're waiting for the concert to start!$"

FurgeTown_GirlInLine_Text_0:
# 89 "data/maps/FurgeTown/scripts.pory"
	.string "JULIE: I can't wait to see Florence!$"

Florence_Georgia_Scene_Text_0:
# 101 "data/maps/FurgeTown/scripts.pory"
	.string "???: … Mirror City? How impressive!$"

Florence_DutyCalls::
# 179 "data/maps/FurgeTown/scripts.pory"
	.string "???: Oh, it looks like duty is calling. \p"
	.string "Well, dear Georgia, it was a pleasure \n"
	.string "to have a chat with you. \p"
	.string "I will see you again another time.$"

Georgia_ByeFlorence::
# 186 "data/maps/FurgeTown/scripts.pory"
	.string "GEORGIA: Goodbye, Florence!$"

Florence_WillBeWaiting::
# 190 "data/maps/FurgeTown/scripts.pory"
	.string "FLORENCE: A visitor! \p"
	.string "What is your name? \p"
	.string "… … …\p"
	.string "Well I will be waiting for you in the \n"
	.string "clearing, {PLAYER}.$"

Georgia_WordToPlayer::
# 198 "data/maps/FurgeTown/scripts.pory"
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

RibCave_SecretRoom_MapScripts::
# 2 "data/maps/RibCave_SecretRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RibCave_BadGuysArguing
	.byte 0


RibCave_BadGuysArguing::
# 10 "data/maps/RibCave_SecretRoom/scripts.pory"
	lock
# 11 "data/maps/RibCave_SecretRoom/scripts.pory"
	special SpawnCameraObject
# 12 "data/maps/RibCave_SecretRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PanCameraUp
# 13 "data/maps/RibCave_SecretRoom/scripts.pory"
	waitmovement 0
# 14 "data/maps/RibCave_SecretRoom/scripts.pory"
	special RemoveCameraObject
# 16 "data/maps/RibCave_SecretRoom/scripts.pory"
	applymovement 1, RightGuySpeaks
# 17 "data/maps/RibCave_SecretRoom/scripts.pory"
	waitmovement 0
# 18 "data/maps/RibCave_SecretRoom/scripts.pory"
	msgbox WhyAreYouNotOutside, MSGBOX_AUTOCLOSE
# 20 "data/maps/RibCave_SecretRoom/scripts.pory"
	applymovement 3, LeftGuySpeaks
# 21 "data/maps/RibCave_SecretRoom/scripts.pory"
	waitmovement 0
# 22 "data/maps/RibCave_SecretRoom/scripts.pory"
	msgbox YourTurnOutside, MSGBOX_AUTOCLOSE
# 24 "data/maps/RibCave_SecretRoom/scripts.pory"
	applymovement 1, RightGuySpeaks
# 25 "data/maps/RibCave_SecretRoom/scripts.pory"
	waitmovement 0
# 26 "data/maps/RibCave_SecretRoom/scripts.pory"
	msgbox GuardingThePokemon, MSGBOX_AUTOCLOSE
# 28 "data/maps/RibCave_SecretRoom/scripts.pory"
	special SpawnCameraObject
# 29 "data/maps/RibCave_SecretRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PanCameraDown
# 30 "data/maps/RibCave_SecretRoom/scripts.pory"
	waitmovement 0
# 31 "data/maps/RibCave_SecretRoom/scripts.pory"
	special RemoveCameraObject
# 33 "data/maps/RibCave_SecretRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerWalksUp
# 34 "data/maps/RibCave_SecretRoom/scripts.pory"
	waitmovement 0
# 36 "data/maps/RibCave_SecretRoom/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 37 "data/maps/RibCave_SecretRoom/scripts.pory"
	waitmovement 0
# 38 "data/maps/RibCave_SecretRoom/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 39 "data/maps/RibCave_SecretRoom/scripts.pory"
	waitmovement 0
# 40 "data/maps/RibCave_SecretRoom/scripts.pory"
	msgbox NotSupposedToBeHere, MSGBOX_AUTOCLOSE
# 42 "data/maps/RibCave_SecretRoom/scripts.pory"
	applymovement 3, LeftGuyRunsToPlayer
# 43 "data/maps/RibCave_SecretRoom/scripts.pory"
	waitmovement 0
# 44 "data/maps/RibCave_SecretRoom/scripts.pory"
	msgbox NotGettingBack, MSGBOX_AUTOCLOSE
# 45 "data/maps/RibCave_SecretRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, CantBeatUsBoth
# 47 "data/maps/RibCave_SecretRoom/scripts.pory"
	applymovement 1, RightGuySpeaks
# 48 "data/maps/RibCave_SecretRoom/scripts.pory"
	waitmovement 0
# 49 "data/maps/RibCave_SecretRoom/scripts.pory"
	msgbox OutOfTheWay, MSGBOX_AUTOCLOSE
# 50 "data/maps/RibCave_SecretRoom/scripts.pory"
	applymovement 3, LeftGuyOutOfTheWay
# 51 "data/maps/RibCave_SecretRoom/scripts.pory"
	waitmovement 0
# 52 "data/maps/RibCave_SecretRoom/scripts.pory"
	applymovement 1, RightGuyGoesToPlayer
# 53 "data/maps/RibCave_SecretRoom/scripts.pory"
	waitmovement 0
# 54 "data/maps/RibCave_SecretRoom/scripts.pory"
	msgbox MindYourBusiness, MSGBOX_AUTOCLOSE
# 55 "data/maps/RibCave_SecretRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, LetsGetOutOfHere
# 57 "data/maps/RibCave_SecretRoom/scripts.pory"
	msgbox ForgetThePkmn, MSGBOX_AUTOCLOSE
# 58 "data/maps/RibCave_SecretRoom/scripts.pory"
	applymovement 1, RightGuyRunsAway
# 59 "data/maps/RibCave_SecretRoom/scripts.pory"
	waitmovement 0
# 60 "data/maps/RibCave_SecretRoom/scripts.pory"
	removeobject 1
# 61 "data/maps/RibCave_SecretRoom/scripts.pory"
	setflag FLAG_RIGHTGUY_RIBCAVE
# 63 "data/maps/RibCave_SecretRoom/scripts.pory"
	applymovement 3, LeftGuyRunsAway
# 64 "data/maps/RibCave_SecretRoom/scripts.pory"
	waitmovement 0
# 65 "data/maps/RibCave_SecretRoom/scripts.pory"
	removeobject 3
# 66 "data/maps/RibCave_SecretRoom/scripts.pory"
	setflag FLAG_LEFTGUY_RIBCAVE
# 68 "data/maps/RibCave_SecretRoom/scripts.pory"
	setvar VAR_CANDLEWAX_CITY_JAY, 3
# 70 "data/maps/RibCave_SecretRoom/scripts.pory"
	releaseall
	end


# 74 "data/maps/RibCave_SecretRoom/scripts.pory"
PanCameraUp:
# 75 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_up
# 75 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_up
# 75 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_up
# 75 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_up
# 75 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_up
# 75 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_up
# 76 "data/maps/RibCave_SecretRoom/scripts.pory"
	step_end

# 79 "data/maps/RibCave_SecretRoom/scripts.pory"
PanCameraDown:
# 80 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 80 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 80 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 80 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 80 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 80 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 81 "data/maps/RibCave_SecretRoom/scripts.pory"
	step_end

# 84 "data/maps/RibCave_SecretRoom/scripts.pory"
LeftGuySpeaks:
# 85 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_in_place_fast_right
# 85 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_in_place_fast_right
# 86 "data/maps/RibCave_SecretRoom/scripts.pory"
	step_end

# 89 "data/maps/RibCave_SecretRoom/scripts.pory"
RightGuySpeaks:
# 90 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_in_place_fast_left
# 90 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_in_place_fast_left
# 91 "data/maps/RibCave_SecretRoom/scripts.pory"
	step_end

# 94 "data/maps/RibCave_SecretRoom/scripts.pory"
PlayerWalksUp:
# 95 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_up
# 95 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_up
# 95 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_up
# 95 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_up
# 96 "data/maps/RibCave_SecretRoom/scripts.pory"
	step_end

# 99 "data/maps/RibCave_SecretRoom/scripts.pory"
LeftGuyRunsToPlayer:
# 100 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_right
# 101 "data/maps/RibCave_SecretRoom/scripts.pory"
	face_down
# 102 "data/maps/RibCave_SecretRoom/scripts.pory"
	step_end

# 105 "data/maps/RibCave_SecretRoom/scripts.pory"
RightGuyGoesToPlayer:
# 106 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_left
# 107 "data/maps/RibCave_SecretRoom/scripts.pory"
	face_down
# 108 "data/maps/RibCave_SecretRoom/scripts.pory"
	step_end

# 111 "data/maps/RibCave_SecretRoom/scripts.pory"
LeftGuyOutOfTheWay:
# 112 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_left
# 113 "data/maps/RibCave_SecretRoom/scripts.pory"
	face_right
# 114 "data/maps/RibCave_SecretRoom/scripts.pory"
	step_end

# 117 "data/maps/RibCave_SecretRoom/scripts.pory"
RightGuyRunsAway:
# 118 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_right
# 119 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 119 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 119 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 119 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 119 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 120 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_left
# 121 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 122 "data/maps/RibCave_SecretRoom/scripts.pory"
	step_end

# 125 "data/maps/RibCave_SecretRoom/scripts.pory"
LeftGuyRunsAway:
# 126 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 126 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 126 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 126 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 126 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 127 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_right
# 128 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 129 "data/maps/RibCave_SecretRoom/scripts.pory"
	step_end

RibCave_Pokeball::
# 181 "data/maps/RibCave_SecretRoom/scripts.pory"
	lock
# 182 "data/maps/RibCave_SecretRoom/scripts.pory"
	msgbox JaysPkmn, MSGBOX_AUTOCLOSE
# 183 "data/maps/RibCave_SecretRoom/scripts.pory"
	removeobject 2
# 184 "data/maps/RibCave_SecretRoom/scripts.pory"
	setflag FLAG_POKEBALL_RIBCAVE
# 185 "data/maps/RibCave_SecretRoom/scripts.pory"
	setvar VAR_CANDLEWAX_CITY_JAY, 2
# 186 "data/maps/RibCave_SecretRoom/scripts.pory"
	releaseall
	end


WhyAreYouNotOutside::
# 132 "data/maps/RibCave_SecretRoom/scripts.pory"
	.string "What are you doing here, go back \n"
	.string "to the entrance!$"

YourTurnOutside::
# 137 "data/maps/RibCave_SecretRoom/scripts.pory"
	.string "I've been there for hours, why don't \n"
	.string "you go for a bit?$"

GuardingThePokemon::
# 142 "data/maps/RibCave_SecretRoom/scripts.pory"
	.string "Because I'm guarding the POKéMON, and \n"
	.string "you're guarding the cave! \p"
	.string "We've been over this!$"

NotSupposedToBeHere::
# 148 "data/maps/RibCave_SecretRoom/scripts.pory"
	.string "Hey! We don't know you!\p"
	.string "You're not supposed to be here!$"

NotGettingBack::
# 153 "data/maps/RibCave_SecretRoom/scripts.pory"
	.string "You're not getting that POKéMON\n"
	.string "back!$"

CantBeatUsBoth::
# 158 "data/maps/RibCave_SecretRoom/scripts.pory"
	.string "Well, you can't beat us both!$"

OutOfTheWay::
# 162 "data/maps/RibCave_SecretRoom/scripts.pory"
	.string "Ugh just get out of my way… $"

MindYourBusiness::
# 166 "data/maps/RibCave_SecretRoom/scripts.pory"
	.string "You, mind your own business and go \n"
	.string "away!$"

LetsGetOutOfHere::
# 171 "data/maps/RibCave_SecretRoom/scripts.pory"
	.string "Whatever, let's get out of here… $"

ForgetThePkmn::
# 175 "data/maps/RibCave_SecretRoom/scripts.pory"
	.string "Argh forget about the POKéMON, it's \n"
	.string "not worth it! $"

JaysPkmn::
# 190 "data/maps/RibCave_SecretRoom/scripts.pory"
	.string "It's Jay's POKéMON! \p"
	.string "He'll be thrilled to have it back. \p"
	.string "He's waiting outside of the cave, in \n"
	.string "Candlewax City. $"

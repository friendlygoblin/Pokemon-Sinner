RibCave_SecretRoom_MapScripts::
	.byte 0


RibCave_BadGuysArguing::
# 8 "data/maps/RibCave_SecretRoom/scripts.pory"
	lock
# 9 "data/maps/RibCave_SecretRoom/scripts.pory"
	special SpawnCameraObject
# 10 "data/maps/RibCave_SecretRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PanCameraUp
# 11 "data/maps/RibCave_SecretRoom/scripts.pory"
	waitmovement 0
# 12 "data/maps/RibCave_SecretRoom/scripts.pory"
	special RemoveCameraObject
# 14 "data/maps/RibCave_SecretRoom/scripts.pory"
	applymovement 1, RightGuySpeaks
# 15 "data/maps/RibCave_SecretRoom/scripts.pory"
	waitmovement 0
# 16 "data/maps/RibCave_SecretRoom/scripts.pory"
	msgbox WhyAreYouNotOutside, MSGBOX_AUTOCLOSE
# 18 "data/maps/RibCave_SecretRoom/scripts.pory"
	applymovement 3, LeftGuySpeaks
# 19 "data/maps/RibCave_SecretRoom/scripts.pory"
	waitmovement 0
# 20 "data/maps/RibCave_SecretRoom/scripts.pory"
	msgbox YourTurnOutside, MSGBOX_AUTOCLOSE
# 22 "data/maps/RibCave_SecretRoom/scripts.pory"
	applymovement 1, RightGuySpeaks
# 23 "data/maps/RibCave_SecretRoom/scripts.pory"
	waitmovement 0
# 24 "data/maps/RibCave_SecretRoom/scripts.pory"
	msgbox GuardingThePokemon, MSGBOX_AUTOCLOSE
# 26 "data/maps/RibCave_SecretRoom/scripts.pory"
	special SpawnCameraObject
# 27 "data/maps/RibCave_SecretRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PanCameraDown
# 28 "data/maps/RibCave_SecretRoom/scripts.pory"
	waitmovement 0
# 29 "data/maps/RibCave_SecretRoom/scripts.pory"
	special RemoveCameraObject
# 31 "data/maps/RibCave_SecretRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerWalksUp
# 32 "data/maps/RibCave_SecretRoom/scripts.pory"
	waitmovement 0
# 34 "data/maps/RibCave_SecretRoom/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 35 "data/maps/RibCave_SecretRoom/scripts.pory"
	waitmovement 0
# 36 "data/maps/RibCave_SecretRoom/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 37 "data/maps/RibCave_SecretRoom/scripts.pory"
	waitmovement 0
# 38 "data/maps/RibCave_SecretRoom/scripts.pory"
	msgbox NotSupposedToBeHere, MSGBOX_AUTOCLOSE
# 40 "data/maps/RibCave_SecretRoom/scripts.pory"
	applymovement 3, LeftGuyRunsToPlayer
# 41 "data/maps/RibCave_SecretRoom/scripts.pory"
	waitmovement 0
# 42 "data/maps/RibCave_SecretRoom/scripts.pory"
	msgbox NotGettingBack, MSGBOX_AUTOCLOSE
# 43 "data/maps/RibCave_SecretRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, CantBeatUsBoth
# 45 "data/maps/RibCave_SecretRoom/scripts.pory"
	applymovement 1, RightGuySpeaks
# 46 "data/maps/RibCave_SecretRoom/scripts.pory"
	waitmovement 0
# 47 "data/maps/RibCave_SecretRoom/scripts.pory"
	msgbox OutOfTheWay, MSGBOX_AUTOCLOSE
# 48 "data/maps/RibCave_SecretRoom/scripts.pory"
	applymovement 3, LeftGuyOutOfTheWay
# 49 "data/maps/RibCave_SecretRoom/scripts.pory"
	waitmovement 0
# 50 "data/maps/RibCave_SecretRoom/scripts.pory"
	applymovement 1, RightGuyGoesToPlayer
# 51 "data/maps/RibCave_SecretRoom/scripts.pory"
	waitmovement 0
# 52 "data/maps/RibCave_SecretRoom/scripts.pory"
	msgbox MindYourBusiness, MSGBOX_AUTOCLOSE
# 53 "data/maps/RibCave_SecretRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, LetsGetOutOfHere
# 55 "data/maps/RibCave_SecretRoom/scripts.pory"
	msgbox ForgetThePkmn, MSGBOX_AUTOCLOSE
# 56 "data/maps/RibCave_SecretRoom/scripts.pory"
	applymovement 1, RightGuyRunsAway
# 57 "data/maps/RibCave_SecretRoom/scripts.pory"
	waitmovement 0
# 58 "data/maps/RibCave_SecretRoom/scripts.pory"
	removeobject 1
# 59 "data/maps/RibCave_SecretRoom/scripts.pory"
	setflag FLAG_RIGHTGUY_RIBCAVE
# 61 "data/maps/RibCave_SecretRoom/scripts.pory"
	applymovement 3, LeftGuyRunsAway
# 62 "data/maps/RibCave_SecretRoom/scripts.pory"
	waitmovement 0
# 63 "data/maps/RibCave_SecretRoom/scripts.pory"
	removeobject 3
# 64 "data/maps/RibCave_SecretRoom/scripts.pory"
	setflag FLAG_LEFTGUY_RIBCAVE
# 66 "data/maps/RibCave_SecretRoom/scripts.pory"
	setvar VAR_CANDLEWAX_CITY_JAY, 3
# 68 "data/maps/RibCave_SecretRoom/scripts.pory"
	releaseall
	end


# 72 "data/maps/RibCave_SecretRoom/scripts.pory"
PanCameraUp:
# 73 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_up
# 73 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_up
# 73 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_up
# 73 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_up
# 73 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_up
# 73 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_up
# 74 "data/maps/RibCave_SecretRoom/scripts.pory"
	step_end

# 77 "data/maps/RibCave_SecretRoom/scripts.pory"
PanCameraDown:
# 78 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 78 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 78 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 78 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 78 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 78 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 79 "data/maps/RibCave_SecretRoom/scripts.pory"
	step_end

# 82 "data/maps/RibCave_SecretRoom/scripts.pory"
LeftGuySpeaks:
# 83 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_in_place_fast_right
# 83 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_in_place_fast_right
# 84 "data/maps/RibCave_SecretRoom/scripts.pory"
	step_end

# 87 "data/maps/RibCave_SecretRoom/scripts.pory"
RightGuySpeaks:
# 88 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_in_place_fast_left
# 88 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_in_place_fast_left
# 89 "data/maps/RibCave_SecretRoom/scripts.pory"
	step_end

# 92 "data/maps/RibCave_SecretRoom/scripts.pory"
PlayerWalksUp:
# 93 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_up
# 93 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_up
# 93 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_up
# 93 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_up
# 94 "data/maps/RibCave_SecretRoom/scripts.pory"
	step_end

# 97 "data/maps/RibCave_SecretRoom/scripts.pory"
LeftGuyRunsToPlayer:
# 98 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_right
# 99 "data/maps/RibCave_SecretRoom/scripts.pory"
	face_down
# 100 "data/maps/RibCave_SecretRoom/scripts.pory"
	step_end

# 103 "data/maps/RibCave_SecretRoom/scripts.pory"
RightGuyGoesToPlayer:
# 104 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_left
# 105 "data/maps/RibCave_SecretRoom/scripts.pory"
	face_down
# 106 "data/maps/RibCave_SecretRoom/scripts.pory"
	step_end

# 109 "data/maps/RibCave_SecretRoom/scripts.pory"
LeftGuyOutOfTheWay:
# 110 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_left
# 111 "data/maps/RibCave_SecretRoom/scripts.pory"
	face_right
# 112 "data/maps/RibCave_SecretRoom/scripts.pory"
	step_end

# 115 "data/maps/RibCave_SecretRoom/scripts.pory"
RightGuyRunsAway:
# 116 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_right
# 117 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 117 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 117 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 117 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 117 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 118 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_left
# 119 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 120 "data/maps/RibCave_SecretRoom/scripts.pory"
	step_end

# 123 "data/maps/RibCave_SecretRoom/scripts.pory"
LeftGuyRunsAway:
# 124 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 124 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 124 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 124 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 124 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 125 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_right
# 126 "data/maps/RibCave_SecretRoom/scripts.pory"
	walk_fast_down
# 127 "data/maps/RibCave_SecretRoom/scripts.pory"
	step_end

RibCave_Pokeball::
# 179 "data/maps/RibCave_SecretRoom/scripts.pory"
	lock
# 180 "data/maps/RibCave_SecretRoom/scripts.pory"
	msgbox JaysPkmn, MSGBOX_AUTOCLOSE
# 181 "data/maps/RibCave_SecretRoom/scripts.pory"
	removeobject 2
# 182 "data/maps/RibCave_SecretRoom/scripts.pory"
	setflag FLAG_POKEBALL_RIBCAVE
# 183 "data/maps/RibCave_SecretRoom/scripts.pory"
	setvar VAR_CANDLEWAX_CITY_JAY, 2
# 184 "data/maps/RibCave_SecretRoom/scripts.pory"
	releaseall
	end


WhyAreYouNotOutside::
# 130 "data/maps/RibCave_SecretRoom/scripts.pory"
	.string "What are you doing here, go back \n"
	.string "to the entrance!$"

YourTurnOutside::
# 135 "data/maps/RibCave_SecretRoom/scripts.pory"
	.string "I've been there for hours, why don't \n"
	.string "you go for a bit?$"

GuardingThePokemon::
# 140 "data/maps/RibCave_SecretRoom/scripts.pory"
	.string "Because I'm guarding the POKéMON, and \n"
	.string "you're guarding the cave! \p"
	.string "We've been over this!$"

NotSupposedToBeHere::
# 146 "data/maps/RibCave_SecretRoom/scripts.pory"
	.string "Hey! We don't know you!\p"
	.string "You're not supposed to be here!$"

NotGettingBack::
# 151 "data/maps/RibCave_SecretRoom/scripts.pory"
	.string "You're not getting that POKéMON\n"
	.string "back!$"

CantBeatUsBoth::
# 156 "data/maps/RibCave_SecretRoom/scripts.pory"
	.string "Well, you can't beat us both!$"

OutOfTheWay::
# 160 "data/maps/RibCave_SecretRoom/scripts.pory"
	.string "Ugh just get out of my way… $"

MindYourBusiness::
# 164 "data/maps/RibCave_SecretRoom/scripts.pory"
	.string "You, mind your own business and go \n"
	.string "away!$"

LetsGetOutOfHere::
# 169 "data/maps/RibCave_SecretRoom/scripts.pory"
	.string "Whatever, let's get out of here… $"

ForgetThePkmn::
# 173 "data/maps/RibCave_SecretRoom/scripts.pory"
	.string "Argh forget about the POKéMON, it's \n"
	.string "not worth it! $"

JaysPkmn::
# 188 "data/maps/RibCave_SecretRoom/scripts.pory"
	.string "It's Jay's POKéMON! \p"
	.string "He'll be thrilled to have it back. \p"
	.string "He's waiting outside of the cave, in \n"
	.string "Candlewax City. $"

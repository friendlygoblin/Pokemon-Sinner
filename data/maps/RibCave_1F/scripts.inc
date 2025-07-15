RibCave_1F_MapScripts::
	.byte 0


RibCave_Guard::
# 4 "data/maps/RibCave_1F/scripts.pory"
	lock
# 5 "data/maps/RibCave_1F/scripts.pory"
	faceplayer
# 6 "data/maps/RibCave_1F/scripts.pory"
	msgbox Guard_GoAway, MSGBOX_AUTOCLOSE
# 7 "data/maps/RibCave_1F/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 8 "data/maps/RibCave_1F/scripts.pory"
	waitmovement 0
# 9 "data/maps/RibCave_1F/scripts.pory"
	releaseall
	end


Guard_GoAway::
# 14 "data/maps/RibCave_1F/scripts.pory"
	.string "Who are you? \p"
	.string "There's nothing to see here,\n"
	.string "go away!$"

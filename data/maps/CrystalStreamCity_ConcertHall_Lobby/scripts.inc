CrystalStreamCity_ConcertHall_Lobby_MapScripts::
	.byte 0


CSCCH_ChappellNotHere::
# 4 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	lock
# 5 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	faceplayer
# 6 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	msgbox CSCCH_ExplainChappellNotHere, MSGBOX_AUTOCLOSE
# 7 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 8 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	releaseall
	end


CSCCH_ExplainChappellNotHere::
# 12 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	.string "Hi, if you're here to challenge Chappell \n"
	.string "Roan, I'm afraid she's unavailable at \l"
	.string "the moment. \p"
	.string "I'm sure why, she said something about\n"
	.string "investigating the Crystal Stream issue. \p"
	.string "She was headed to the Sunday Cave, to \n"
	.string "the north of Route 6 if you want to \l"
	.string "find her.$"

PortraitTown_ConcertHall_Lobby_MapScripts::
	.byte 0


MarinaHall_Ann::
# 6 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	lock
# 7 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	faceplayer
# 8 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	checktrainerflag TRAINER_MARINA
	goto_if 1, MarinaHall_Ann_2
# 12 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	msgbox MarinaHall_Ann_Text_1, MSGBOX_AUTOCLOSE
# 13 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	trainerbattle_no_intro TRAINER_ANN, MarinaHall_Ann_Text_2
# 14 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	msgbox MarinaHall_Ann_Text_3, MSGBOX_AUTOCLOSE
MarinaHall_Ann_1:
# 16 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	releaseall
	end

MarinaHall_Ann_2:
# 9 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	msgbox MarinaHall_Ann_Text_0, MSGBOX_AUTOCLOSE
	goto MarinaHall_Ann_1


MarinaHall_Abi::
# 21 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	lock
# 22 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	applymovement 2, MarinaHall_AbiWalkToPlayer
# 23 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	waitmovement 0
# 24 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	msgbox MarinaHall_AbiTalkToPlayer, MSGBOX_AUTOCLOSE
# 25 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarinaHall_PlayerMoveAside
# 26 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	waitmovement 0
# 27 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	applymovement 2, MarinaHall_AbiLeaves
# 28 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	waitmovement 0
# 29 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	removeobject 2
# 30 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	setflag FLAG_MARINAHALL_ABI
# 31 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	setvar VAR_MARINAHALL_ABI, 1
# 32 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	release
	end


# 36 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
MarinaHall_AbiWalkToPlayer:
# 37 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	walk_down
# 37 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	walk_down
# 37 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	walk_down
# 37 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	walk_down
# 37 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	walk_down
# 38 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	step_end

# 41 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
MarinaHall_AbiLeaves:
# 42 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	walk_down
# 42 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	walk_down
# 43 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	step_end

# 46 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
MarinaHall_PlayerMoveAside:
# 47 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	walk_right
# 48 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	face_left
# 49 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	step_end

MarinaHall_Ann_Text_0:
# 9 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	.string "ANN: You won against Marina?\p"
	.string "No way!$"

MarinaHall_Ann_Text_1:
# 12 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	.string "ANN: I'll win this for Cowboy Lizzie!$"

MarinaHall_Ann_Text_2:
# 13 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	.string "Cowboy Lizzie lives on… even without\n"
	.string "me.$"

MarinaHall_Ann_Text_3:
# 14 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	.string "ANN: I thought you couldn't break a\n"
	.string "diamond… but you've done it!$"

MarinaHall_AbiTalkToPlayer::
# 52 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	.string "ABIGAIL: {PLAYER}! \p"
	.string "What are you doing here? \p"
	.string "… … … \p"
	.string "Challenging Marina? \p"
	.string "Wow, you've really come a long way! \p"
	.string "I knew you'd do great things with that \n"
	.string "POKéMON I gave you. \p"
	.string "Me? Oh, I was just visiting. \p"
	.string "Marina was a huge influence when I was \n"
	.string "learning to sing. \p"
	.string "Well, I'm gonna go now. \p"
	.string "It was nice running into you, see you \n"
	.string "later!$"

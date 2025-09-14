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
	trainerbattle_no_intro TRAINER_ANN_2, MarinaHall_Ann_Text_2
# 14 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	msgbox MarinaHall_Ann_Text_0, MSGBOX_AUTOCLOSE
MarinaHall_Ann_1:
# 16 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	releaseall
	end

MarinaHall_Ann_2:
# 9 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	msgbox MarinaHall_Ann_Text_0, MSGBOX_AUTOCLOSE
	goto MarinaHall_Ann_1


MarinaHall_Brenae::
# 21 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	lock
# 22 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	faceplayer
# 23 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	checktrainerflag TRAINER_MARINA
	goto_if 1, MarinaHall_Brenae_2
# 27 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	msgbox MarinaHall_Brenae_Text_1, MSGBOX_AUTOCLOSE
# 28 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENAE, MarinaHall_Brenae_Text_2
# 29 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	msgbox MarinaHall_Brenae_Text_3, MSGBOX_AUTOCLOSE
MarinaHall_Brenae_1:
# 31 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	releaseall
	end

MarinaHall_Brenae_2:
# 24 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	msgbox MarinaHall_Brenae_Text_0, MSGBOX_AUTOCLOSE
	goto MarinaHall_Brenae_1


MarinaHall_Gosia::
# 36 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	lock
# 37 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	faceplayer
# 38 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	checktrainerflag TRAINER_MARINA
	goto_if 1, MarinaHall_Gosia_2
# 42 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	msgbox MarinaHall_Gosia_Text_1, MSGBOX_AUTOCLOSE
# 43 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	trainerbattle_no_intro TRAINER_GOSIA, MarinaHall_Gosia_Text_2
# 44 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	msgbox MarinaHall_Gosia_Text_3, MSGBOX_AUTOCLOSE
MarinaHall_Gosia_1:
# 46 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	releaseall
	end

MarinaHall_Gosia_2:
# 39 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	msgbox MarinaHall_Gosia_Text_0, MSGBOX_AUTOCLOSE
	goto MarinaHall_Gosia_1


MarinaHall_Abi::
# 51 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	lock
# 52 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	applymovement 2, MarinaHall_AbiWalkToPlayer
# 53 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	waitmovement 0
# 54 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	msgbox MarinaHall_AbiTalkToPlayer, MSGBOX_AUTOCLOSE
# 55 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarinaHall_PlayerMoveAside
# 56 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	waitmovement 0
# 57 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	applymovement 2, MarinaHall_AbiLeaves
# 58 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	waitmovement 0
# 59 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	removeobject 2
# 60 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	setflag FLAG_MARINAHALL_ABI
# 61 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	setvar VAR_MARINAHALL_ABI, 1
# 62 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	release
	end


# 66 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
MarinaHall_AbiWalkToPlayer:
# 67 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	walk_down
# 67 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	walk_down
# 67 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	walk_down
# 67 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	walk_down
# 67 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	walk_down
# 68 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	step_end

# 71 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
MarinaHall_AbiLeaves:
# 72 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	walk_down
# 72 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	walk_down
# 73 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	step_end

# 76 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
MarinaHall_PlayerMoveAside:
# 77 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	walk_right
# 78 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	face_left
# 79 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	step_end

MarinaHall_Ann_Text_0:
# 9 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	.string "ANN: I thought you couldn't break a\n"
	.string "diamond… but you've done it!$"

MarinaHall_Ann_Text_1:
# 12 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	.string "ANN: I'll win this for Cowboy Lizzie!$"

MarinaHall_Ann_Text_2:
# 13 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	.string "Cowboy Lizzie lives on… even without\n"
	.string "me.$"

MarinaHall_Brenae_Text_0:
# 24 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	.string "BRENAE: So, how was Marina?\p"
	.string "I bet she was amazing!$"

MarinaHall_Brenae_Text_1:
# 27 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	.string "BRENAE: I get nervous before concerts,\n"
	.string "and I'm challenging Marina so it's even\l"
	.string "worse this time!$"

MarinaHall_Brenae_Text_2:
# 28 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	.string "Mmh, I'm still nervous…$"

MarinaHall_Brenae_Text_3:
# 29 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	.string "BRENAE: I can't wait to see Marina, I\n"
	.string "hope I don't liquefy when I face her…$"

MarinaHall_Gosia_Text_0:
# 39 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	.string "GOSIA: You won against Marina?\p"
	.string "No way!$"

MarinaHall_Gosia_Text_1:
# 42 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	.string "GOSIA: I'm one of Marina's biggest fans,\n"
	.string "ask me anything about her!$"

MarinaHall_Gosia_Text_2:
# 43 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	.string "I'm so excited to see Marina I wasn't\n"
	.string "completely focused.$"

MarinaHall_Gosia_Text_3:
# 44 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
	.string "GOSIA: Come to me if you have any\n"
	.string "question about Marina!$"

MarinaHall_AbiTalkToPlayer::
# 82 "data/maps/PortraitTown_ConcertHall_Lobby/scripts.pory"
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

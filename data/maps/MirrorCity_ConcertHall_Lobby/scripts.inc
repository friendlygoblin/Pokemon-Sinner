MirrorCity_ConcertHall_Lobby_MapScripts::
	.byte 0


MCCH_LobbyMan::
# 4 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	lock
# 5 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	faceplayer
# 6 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	msgbox MCCH_ReadyForChallenge, MSGBOX_YESNO
# 7 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCCH_LobbyMan_2
# 14 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	msgbox MCCH_LobbyMan_Text_1, MSGBOX_AUTOCLOSE
# 15 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
MCCH_LobbyMan_1:
# 17 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	release
	end

MCCH_LobbyMan_2:
# 8 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	setflag FLAG_MCCH_GOBLIN
# 9 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	msgbox MCCH_LobbyMan_Text_0, MSGBOX_AUTOCLOSE
# 10 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	warp MAP_MIRROR_CITY_CONCERT_HALL, 3, 8
# 11 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	waitstate
	goto MCCH_LobbyMan_1


	.align 2
# 31 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
MCCH_MerchStand_Items:
# 32 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 33 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	.2byte ITEM_MAX_POTION
# 34 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 35 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 36 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 37 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	.2byte ITEM_ELIXIR
	.2byte ITEM_NONE

MCCH_MerchStand::
# 41 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	lock
# 42 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	faceplayer
# 43 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	message MCCH_MerchStand_Text_0
# 44 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	waitmessage
# 45 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	pokemart MCCH_MerchStand_Items
# 46 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	msgbox MCCH_MerchStand_Text_1
# 47 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	release
	end


MCCH_Sign::
# 52 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	lock
# 53 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	msgbox MCCH_Sign_Text_0
# 54 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	release
	end


MCCH_LobbyMan_Text_0:
# 9 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	.string "Very well, good luck!$"

MCCH_LobbyMan_Text_1:
# 14 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	.string "Of course, take your time.\p"
	.string "Come back here when you're ready.$"

MCCH_MerchStand_Text_0:
# 43 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	.string "Welcome to the Merch Stand, what can I\n"
	.string "get for you?$"

MCCH_MerchStand_Text_1:
# 46 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	.string "Good luck!$"

MCCH_Sign_Text_0:
# 53 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	.string "MIRROR CITY CONCERT HALL\p"
	.string "{LEFT_ARROW}{RIGHT_ARROW}: VIP Lounges\p"
	.string "{UP_ARROW}: Concert Hall$"

MCCH_ReadyForChallenge::
# 21 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	.string "The Last Dinner Party are waiting for \n"
	.string "you in the concert hall. \p"
	.string "You will be facing every band member \n"
	.string "one after the other. \p"
	.string "If you go in now, you won't be able \n"
	.string "come back here until you win or lose. \p"
	.string "Are you ready? $"

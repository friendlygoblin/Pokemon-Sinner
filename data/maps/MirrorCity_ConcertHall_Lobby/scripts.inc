MirrorCity_ConcertHall_Lobby_MapScripts::
# 2 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ResetBattles
	.byte 0


MCCH_LobbyMan::
# 6 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	lock
# 7 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	faceplayer
# 8 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	msgbox MCCH_ReadyForChallenge, MSGBOX_YESNO
# 9 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCCH_LobbyMan_2
# 16 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	msgbox MCCH_LobbyMan_Text_1, MSGBOX_AUTOCLOSE
# 17 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
MCCH_LobbyMan_1:
# 19 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	release
	end

MCCH_LobbyMan_2:
# 10 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	setflag FLAG_MCCH_GOBLIN
# 11 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	msgbox MCCH_LobbyMan_Text_0, MSGBOX_AUTOCLOSE
# 12 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	warp MAP_MIRROR_CITY_CONCERT_HALL, 3, 8
# 13 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	waitstate
	goto MCCH_LobbyMan_1


	.align 2
# 33 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
MCCH_MerchStand_Items:
# 34 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 35 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	.2byte ITEM_MAX_POTION
# 36 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 37 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 38 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 39 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	.2byte ITEM_ELIXIR
	.2byte ITEM_NONE

MCCH_MerchStand::
# 43 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	lock
# 44 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	faceplayer
# 45 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	message MCCH_MerchStand_Text_0
# 46 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	waitmessage
# 47 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	pokemart MCCH_MerchStand_Items
# 48 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	msgbox MCCH_MerchStand_Text_1
# 49 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	release
	end


MCCH_Sign::
# 54 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	lock
# 55 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	msgbox MCCH_Sign_Text_0
# 56 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	release
	end


MCCH_LobbyMan_Text_0:
# 11 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	.string "Very well, good luck!$"

MCCH_LobbyMan_Text_1:
# 16 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	.string "Of course, take your time.\p"
	.string "Come back here when you're ready.$"

MCCH_MerchStand_Text_0:
# 45 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	.string "Welcome to the Merch Stand, what can I\n"
	.string "get for you?$"

MCCH_MerchStand_Text_1:
# 48 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	.string "Good luck!$"

MCCH_Sign_Text_0:
# 55 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	.string "MIRROR CITY CONCERT HALL\p"
	.string "{LEFT_ARROW}{RIGHT_ARROW}: VIP Lounges\p"
	.string "{UP_ARROW}: Concert Hall$"

MCCH_ReadyForChallenge::
# 23 "data/maps/MirrorCity_ConcertHall_Lobby/scripts.pory"
	.string "The Last Dinner Party are waiting for \n"
	.string "you in the concert hall. \p"
	.string "You will be facing every band member \n"
	.string "one after the other. \p"
	.string "If you go in now, you won't be able \n"
	.string "come back here until you win or lose. \p"
	.string "Are you ready? $"

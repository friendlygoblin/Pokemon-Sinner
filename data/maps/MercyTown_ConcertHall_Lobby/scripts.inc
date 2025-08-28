MercyTown_ConcertHall_Lobby_MapScripts::
# 2 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HideCMATInterview
	.byte 0


HideCMATInterview::
# 6 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	setflag FLAG_CMATHALL_INTERVIEW
# 7 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	compare VAR_CMATHALL_INTERVIEW, 0
	goto_if_eq HideCMATInterview_1
	return

HideCMATInterview_1:
# 8 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	clearflag FLAG_CMATHALL_AMY
	return


CMATHall_Spraggy::
# 13 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	lock
# 14 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	faceplayer
# 15 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	checktrainerflag TRAINER_CMAT
	goto_if 1, CMATHall_Spraggy_2
# 19 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	msgbox SpraggyIntro_CMAT, MSGBOX_AUTOCLOSE
# 20 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	trainerbattle_no_intro TRAINER_SPRAGGY, CMATHall_Spraggy_Text_0
# 21 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	msgbox SpraggyPostBattle_CMAT, MSGBOX_AUTOCLOSE
CMATHall_Spraggy_1:
# 23 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	releaseall
	end

CMATHall_Spraggy_2:
# 16 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	msgbox SpraggyPostBattle_CMAT, MSGBOX_AUTOCLOSE
	goto CMATHall_Spraggy_1


CMATHall_Spraggy_Text_0:
# 20 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	.string "We look alike, don't we?$"

SpraggyIntro_CMAT::
# 27 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	.string "SPRAGGY: CMAT?\p"
	.string "No, that's not me, I'm just dressed \n"
	.string "up as her! \p"
	.string "Let me show you my costume! $"

SpraggyPostBattle_CMAT::
# 34 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	.string "SPRAGGY: I'm flattered that you think \n"
	.string "I look like CMAT! \p"
	.string "I'm a huge fan of hers so I'm really \n"
	.string "happy to be here!$"

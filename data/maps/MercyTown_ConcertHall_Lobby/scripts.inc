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


CMATHall_Talia::
# 42 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	lock
# 43 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	faceplayer
# 44 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	checktrainerflag TRAINER_CMAT
	goto_if 1, CMATHall_Talia_2
# 48 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	msgbox TaliaIntro_CMAT, MSGBOX_AUTOCLOSE
# 49 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	trainerbattle_no_intro TRAINER_TALIA_2, CMATHall_Talia_Text_0
# 50 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	msgbox TaliaPostBattle_CMAT, MSGBOX_AUTOCLOSE
CMATHall_Talia_1:
# 52 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	releaseall
	end

CMATHall_Talia_2:
# 45 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	msgbox TaliaPostBattle_CMAT, MSGBOX_AUTOCLOSE
	goto CMATHall_Talia_1


CMATHall_Bear::
# 69 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	lock
# 70 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	faceplayer
# 71 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	checktrainerflag TRAINER_CMAT
	goto_if 1, CMATHall_Bear_2
# 75 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	msgbox BearIntro_CMAT, MSGBOX_AUTOCLOSE
# 76 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	trainerbattle_no_intro TRAINER_BEAR, CMATHall_Bear_Text_0
# 77 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	msgbox BearPostBattle_CMAT, MSGBOX_AUTOCLOSE
CMATHall_Bear_1:
# 79 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	releaseall
	end

CMATHall_Bear_2:
# 72 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	msgbox BearPostBattle_CMAT, MSGBOX_AUTOCLOSE
	goto CMATHall_Bear_1


CMATHall_Spraggy_Text_0:
# 20 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	.string "We look alike, don't we?$"

CMATHall_Talia_Text_0:
# 49 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	.string "I did the home and the family maker…$"

CMATHall_Bear_Text_0:
# 76 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	.string "Do you think she'll get the reference?$"

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

TaliaIntro_CMAT::
# 56 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	.string "TALIA: Can't wait to see CMAT!\p"
	.string "Why don't you help me review lyrics? \p"
	.string "I did the butcher, I did the baker… $"

TaliaPostBattle_CMAT::
# 62 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	.string "TALIA: I'm more than ready for the \n"
	.string "show! \p"
	.string "I'm really hoping I'll get barricade… $"

BearIntro_CMAT::
# 83 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	.string "BEAR: I'm gonna challenge CMAT!\p"
	.string "I need to come up with a good \n"
	.string "catchphrase…  \p"
	.string "How about: 'Do you wanna be a \n"
	.string "cowboy baby? Then saddle up!' $"

BearPostBattle_CMAT::
# 91 "data/maps/MercyTown_ConcertHall_Lobby/scripts.pory"
	.string "BEAR: CMAT's gonna be tough to beat \n"
	.string "but I've been training! \p"
	.string "I'm still a bit nervous… $"

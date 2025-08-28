PortraitTown_ConcertHall_MapScripts::
	.byte 0


MarinaHall_MarinaBattle::
# 4 "data/maps/PortraitTown_ConcertHall/scripts.pory"
	lock
# 5 "data/maps/PortraitTown_ConcertHall/scripts.pory"
	faceplayer
# 7 "data/maps/PortraitTown_ConcertHall/scripts.pory"
	checktrainerflag TRAINER_MARINA
	goto_if 1, MarinaHall_MarinaBattle_2
# 11 "data/maps/PortraitTown_ConcertHall/scripts.pory"
	trainerbattle_single TRAINER_MARINA, MarinaHall_MarinaBattleIntro, MarinaHall_MarinaLostBattle, MarinaGiveBadge, NO_MUSIC
MarinaHall_MarinaBattle_1:
# 13 "data/maps/PortraitTown_ConcertHall/scripts.pory"
	releaseall
	end

MarinaHall_MarinaBattle_2:
# 8 "data/maps/PortraitTown_ConcertHall/scripts.pory"
	msgbox Marina_WordAboutTLDP, MSGBOX_AUTOCLOSE
	goto MarinaHall_MarinaBattle_1


MarinaGiveBadge::
# 18 "data/maps/PortraitTown_ConcertHall/scripts.pory"
	msgbox MarinaHall_MarinaGiveBadge, MSGBOX_AUTOCLOSE
# 19 "data/maps/PortraitTown_ConcertHall/scripts.pory"
	message MarinaGiveBadge_Text_0
# 20 "data/maps/PortraitTown_ConcertHall/scripts.pory"
	waitmessage
# 21 "data/maps/PortraitTown_ConcertHall/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 22 "data/maps/PortraitTown_ConcertHall/scripts.pory"
	setflag FLAG_BADGE06_GET
# 23 "data/maps/PortraitTown_ConcertHall/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 24 "data/maps/PortraitTown_ConcertHall/scripts.pory"
	msgbox MarinaBadgePerks, MSGBOX_AUTOCLOSE
# 25 "data/maps/PortraitTown_ConcertHall/scripts.pory"
	releaseall
	end


MarinaGiveBadge_Text_0:
# 19 "data/maps/PortraitTown_ConcertHall/scripts.pory"
	.string "Received the BUBBLEGUM BADGE from\n"
	.string "MARINA!$"

MarinaHall_MarinaBattleIntro::
# 29 "data/maps/PortraitTown_ConcertHall/scripts.pory"
	.string "MARINA: I'll chew you up and spit you \n"
	.string "out!$"

MarinaHall_MarinaLostBattle::
# 34 "data/maps/PortraitTown_ConcertHall/scripts.pory"
	.string "Are you satisfied?$"

Marina_WordAboutTLDP::
# 38 "data/maps/PortraitTown_ConcertHall/scripts.pory"
	.string "MARINA: It's really an honour inspire \n"
	.string "young talented artists like The Last \l"
	.string "Dinner Party. \p"
	.string "They're real icons!$"

MarinaHall_MarinaGiveBadge::
# 45 "data/maps/PortraitTown_ConcertHall/scripts.pory"
	.string "MARINA: That was super impressive!\p"
	.string "Here, let me give you this as a reward.$"

MarinaBadgePerks::
# 50 "data/maps/PortraitTown_ConcertHall/scripts.pory"
	.string "You're now on my guest list forever!\p"
	.string "Also, it will make your POKéMON listen \n"
	.string "to you until the level 70 because \l"
	.string "they'll know you're cuntissimo.$"

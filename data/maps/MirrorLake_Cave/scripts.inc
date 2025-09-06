MirrorLake_Cave_MapScripts::
	.byte 0


BowieHall_BowieBattle::
# 4 "data/maps/MirrorLake_Cave/scripts.pory"
	lock
# 5 "data/maps/MirrorLake_Cave/scripts.pory"
	faceplayer
# 6 "data/maps/MirrorLake_Cave/scripts.pory"
	trainerbattle_single TRAINER_BOWIE, BowieHall_BowieBattleIntro, BowieHall_BowieLostBattle, BowieGiveBadge
# 7 "data/maps/MirrorLake_Cave/scripts.pory"
	releaseall
	end


BowieGiveBadge::
# 12 "data/maps/MirrorLake_Cave/scripts.pory"
	removeobject 1
# 13 "data/maps/MirrorLake_Cave/scripts.pory"
	msgbox BowieGiveBadge_Text_0, MSGBOX_AUTOCLOSE
# 14 "data/maps/MirrorLake_Cave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 15 "data/maps/MirrorLake_Cave/scripts.pory"
	waitmovement 0
# 16 "data/maps/MirrorLake_Cave/scripts.pory"
	msgbox BowieGiveBadge_Text_1
# 17 "data/maps/MirrorLake_Cave/scripts.pory"
	message BowieGiveBadge_Text_2
# 18 "data/maps/MirrorLake_Cave/scripts.pory"
	waitmessage
# 19 "data/maps/MirrorLake_Cave/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 20 "data/maps/MirrorLake_Cave/scripts.pory"
	setflag FLAG_BADGE08_GET
# 21 "data/maps/MirrorLake_Cave/scripts.pory"
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
# 22 "data/maps/MirrorLake_Cave/scripts.pory"
	msgbox BowieBadgePerks, MSGBOX_AUTOCLOSE
# 23 "data/maps/MirrorLake_Cave/scripts.pory"
	setvar VAR_MIRRORLAKE_ABIEXIT, 0
# 24 "data/maps/MirrorLake_Cave/scripts.pory"
	releaseall
	end


BowieGiveBadge_Text_0:
# 13 "data/maps/MirrorLake_Cave/scripts.pory"
	.string "The mysterious musician disappeared…$"

BowieGiveBadge_Text_1:
# 16 "data/maps/MirrorLake_Cave/scripts.pory"
	.string "It looks like he left something behind…\p"
	.string "It's a badge!$"

BowieGiveBadge_Text_2:
# 17 "data/maps/MirrorLake_Cave/scripts.pory"
	.string "Received the STARMAN BADGE from DAVID\n"
	.string "BOWIE!$"

BowieHall_BowieBattleIntro::
# 28 "data/maps/MirrorLake_Cave/scripts.pory"
	.string "???: … … … \p"
	.string "Who are you, and why are you here? \p"
	.string "… … … \p"
	.string "I see… \p"
	.string "You can tell the worried folks around \n"
	.string "here that it's only me, enjoying the \l"
	.string "acoustics of this cave. \p"
	.string "Why don't you let me show you what I \n"
	.string "mean? $"

BowieHall_BowieLostBattle::
# 40 "data/maps/MirrorLake_Cave/scripts.pory"
	.string "It ain't easy to get to heaven… $"

BowieBadgePerks::
# 44 "data/maps/MirrorLake_Cave/scripts.pory"
	.string "This badge makes you feel stronger \n"
	.string "somehow. \p"
	.string "You feel like any POKéMON could listen \n"
	.string "to you. \p"
	.string "Perhaps part of David Bowie's energy is \n"
	.string "doing that through the badge… $"

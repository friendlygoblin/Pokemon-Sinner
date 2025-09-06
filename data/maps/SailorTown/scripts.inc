SailorTown_MapScripts::
	.byte 0


SailorTown_SwimmerF::
# 4 "data/maps/SailorTown/scripts.pory"
	trainerbattle_single TRAINER_LUIS, SailorTown_SwimmerF_Text_0, SailorTown_SwimmerF_Text_1
# 5 "data/maps/SailorTown/scripts.pory"
	msgbox SailorTown_SwimmerF_Text_2, MSGBOX_AUTOCLOSE
	return


SailorTown_Nora::
# 9 "data/maps/SailorTown/scripts.pory"
	lockall
# 10 "data/maps/SailorTown/scripts.pory"
	faceplayer
# 11 "data/maps/SailorTown/scripts.pory"
	switch VAR_SAILORTOWN_NORA
# 12 "data/maps/SailorTown/scripts.pory"
	case 0, SailorTown_Nora_3
# 14 "data/maps/SailorTown/scripts.pory"
	case 1, SailorTown_Nora_4
# 16 "data/maps/SailorTown/scripts.pory"
	case 2, SailorTown_Nora_5
SailorTown_Nora_1:
# 19 "data/maps/SailorTown/scripts.pory"
	releaseall
	end

SailorTown_Nora_3:
# 13 "data/maps/SailorTown/scripts.pory"
	call NoraAskForHelp
	goto SailorTown_Nora_1

SailorTown_Nora_4:
# 15 "data/maps/SailorTown/scripts.pory"
	call NoraMegaRing
	goto SailorTown_Nora_1

SailorTown_Nora_5:
# 17 "data/maps/SailorTown/scripts.pory"
	msgbox SailorTown_Nora_Text_0
	goto SailorTown_Nora_1


NoraAskForHelp::
# 24 "data/maps/SailorTown/scripts.pory"
	lock
# 25 "data/maps/SailorTown/scripts.pory"
	msgbox SailorTown_NoraHi, MSGBOX_AUTOCLOSE
# 27 "data/maps/SailorTown/scripts.pory"
	special SpawnCameraObject
# 28 "data/maps/SailorTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SailorTown_CameraToLens
# 29 "data/maps/SailorTown/scripts.pory"
	waitmovement 0
# 30 "data/maps/SailorTown/scripts.pory"
	special RemoveCameraObject
# 32 "data/maps/SailorTown/scripts.pory"
	msgbox SailorTown_NoraLookOverThere, MSGBOX_AUTOCLOSE
# 34 "data/maps/SailorTown/scripts.pory"
	special SpawnCameraObject
# 35 "data/maps/SailorTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SailorTown_CameraBack
# 36 "data/maps/SailorTown/scripts.pory"
	waitmovement 0
# 37 "data/maps/SailorTown/scripts.pory"
	special RemoveCameraObject
# 39 "data/maps/SailorTown/scripts.pory"
	msgbox SailorTown_NoraHelp, MSGBOX_AUTOCLOSE
	return


NoraMegaRing::
# 43 "data/maps/SailorTown/scripts.pory"
	lock
# 44 "data/maps/SailorTown/scripts.pory"
	msgbox SailorTown_NoraThankyou
# 45 "data/maps/SailorTown/scripts.pory"
	giveitem ITEM_MEGA_RING
# 46 "data/maps/SailorTown/scripts.pory"
	msgbox SailorTown_NoraThisIsMegaRing, MSGBOX_AUTOCLOSE
# 47 "data/maps/SailorTown/scripts.pory"
	setvar VAR_SAILORTOWN_NORA, 2
# 48 "data/maps/SailorTown/scripts.pory"
	setflag FLAG_RECEIVED_MEGARING
	return


SailorTown_Lens::
# 52 "data/maps/SailorTown/scripts.pory"
	lock
# 53 "data/maps/SailorTown/scripts.pory"
	msgbox SailorTown_Lens_Text_0
# 54 "data/maps/SailorTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 55 "data/maps/SailorTown/scripts.pory"
	waitfanfare
# 56 "data/maps/SailorTown/scripts.pory"
	setflag FLAG_SAILORTOWN_LENS
# 57 "data/maps/SailorTown/scripts.pory"
	removeobject 1
# 58 "data/maps/SailorTown/scripts.pory"
	setvar VAR_SAILORTOWN_NORA, 1
# 59 "data/maps/SailorTown/scripts.pory"
	release
	end


# 111 "data/maps/SailorTown/scripts.pory"
SailorTown_CameraToLens:
# 112 "data/maps/SailorTown/scripts.pory"
	walk_fast_left
# 112 "data/maps/SailorTown/scripts.pory"
	walk_fast_left
# 112 "data/maps/SailorTown/scripts.pory"
	walk_fast_left
# 112 "data/maps/SailorTown/scripts.pory"
	walk_fast_left
# 112 "data/maps/SailorTown/scripts.pory"
	walk_fast_left
# 112 "data/maps/SailorTown/scripts.pory"
	walk_fast_left
# 112 "data/maps/SailorTown/scripts.pory"
	walk_fast_left
# 112 "data/maps/SailorTown/scripts.pory"
	walk_fast_left
# 112 "data/maps/SailorTown/scripts.pory"
	walk_fast_left
# 113 "data/maps/SailorTown/scripts.pory"
	walk_diag_southwest
# 113 "data/maps/SailorTown/scripts.pory"
	walk_diag_southwest
# 113 "data/maps/SailorTown/scripts.pory"
	walk_diag_southwest
# 113 "data/maps/SailorTown/scripts.pory"
	walk_diag_southwest
# 113 "data/maps/SailorTown/scripts.pory"
	walk_diag_southwest
# 113 "data/maps/SailorTown/scripts.pory"
	walk_diag_southwest
# 113 "data/maps/SailorTown/scripts.pory"
	walk_diag_southwest
# 114 "data/maps/SailorTown/scripts.pory"
	step_end

# 117 "data/maps/SailorTown/scripts.pory"
SailorTown_CameraBack:
# 118 "data/maps/SailorTown/scripts.pory"
	walk_diag_northeast
# 118 "data/maps/SailorTown/scripts.pory"
	walk_diag_northeast
# 118 "data/maps/SailorTown/scripts.pory"
	walk_diag_northeast
# 118 "data/maps/SailorTown/scripts.pory"
	walk_diag_northeast
# 118 "data/maps/SailorTown/scripts.pory"
	walk_diag_northeast
# 118 "data/maps/SailorTown/scripts.pory"
	walk_diag_northeast
# 118 "data/maps/SailorTown/scripts.pory"
	walk_diag_northeast
# 119 "data/maps/SailorTown/scripts.pory"
	walk_fast_right
# 119 "data/maps/SailorTown/scripts.pory"
	walk_fast_right
# 119 "data/maps/SailorTown/scripts.pory"
	walk_fast_right
# 119 "data/maps/SailorTown/scripts.pory"
	walk_fast_right
# 119 "data/maps/SailorTown/scripts.pory"
	walk_fast_right
# 119 "data/maps/SailorTown/scripts.pory"
	walk_fast_right
# 119 "data/maps/SailorTown/scripts.pory"
	walk_fast_right
# 119 "data/maps/SailorTown/scripts.pory"
	walk_fast_right
# 119 "data/maps/SailorTown/scripts.pory"
	walk_fast_right
# 120 "data/maps/SailorTown/scripts.pory"
	step_end

SailorTown_SwimmerF_Text_0:
# 4 "data/maps/SailorTown/scripts.pory"
	.string "I can hold my breath for a minute!$"

SailorTown_SwimmerF_Text_1:
# 4 "data/maps/SailorTown/scripts.pory"
	.string "Gasp!$"

SailorTown_SwimmerF_Text_2:
# 5 "data/maps/SailorTown/scripts.pory"
	.string "The longest I've held my breath is a\n"
	.string "minute and six seconds!$"

SailorTown_Nora_Text_0:
# 17 "data/maps/SailorTown/scripts.pory"
	.string "NORA: Thank you so much for getting my\n"
	.string "lens back!\p"
	.string "Have fun with the Mega-Ring!$"

SailorTown_Lens_Text_0:
# 53 "data/maps/SailorTown/scripts.pory"
	.string "That looks like Nora's camera lens!\p"
	.string "She'll be happy to have it back.$"

SailorTown_NoraHi::
# 63 "data/maps/SailorTown/scripts.pory"
	.string "NORA: Oh, {PLAYER}!\p"
	.string "I wasn't expecting to see you here, \n"
	.string "what have you been up to? \p"
	.string "… … … \p"
	.string "Oh wow, you've really been challenging\n"
	.string "artists? And winning? \p"
	.string "Me? Oh, well actually I'm in a bit of \n"
	.string "a tricky situation. $"

SailorTown_NoraLookOverThere::
# 74 "data/maps/SailorTown/scripts.pory"
	.string "See over there? \n"
	.string "That's one of my camera lenses. \p"
	.string "I accidentally dropped it in the water \n"
	.string "and the currents carried it away. \p$"

SailorTown_NoraHelp::
# 81 "data/maps/SailorTown/scripts.pory"
	.string "I can't figure out how to get to it, I \n"
	.string "keep getting washed away. \p"
	.string "Do you think you could help me? \n"
	.string "I'll uh… give you something cool in \l"
	.string "exchange.$"

SailorTown_NoraThankyou::
# 89 "data/maps/SailorTown/scripts.pory"
	.string "NORA: My lens! You got it! \p"
	.string "Thank you so much !\p"
	.string "Here, something super cool for you! \n"
	.string "I insist!$"

SailorTown_NoraThisIsMegaRing::
# 96 "data/maps/SailorTown/scripts.pory"
	.string "This is a Mega-Ring, it allows you to \n"
	.string "Mega-Evolve your POKéMON. \p"
	.string "Basically they'll take a new temporary \n"
	.string "form that makes them stronger.\p"
	.string "They need to hold a Mega-Stone that's \n"
	.string "specific to their species, though. \p"
	.string "The stones are pretty rare, you kind \n"
	.string "of have to look around to find them. \p"
	.string "I heard of a guy who sells rocks in \n"
	.string "Mercy Town, maybe he'll know something.\p"
	.string "Thanks again for your help, have fun with \n"
	.string "the Mega-Ring!$"

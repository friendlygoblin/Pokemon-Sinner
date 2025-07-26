Route5_MapScripts::
	.byte 0


GiveSurf::
# 4 "data/maps/Route5/scripts.pory"
	lock
# 5 "data/maps/Route5/scripts.pory"
	faceplayer
# 6 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, GiveSurf_2
# 18 "data/maps/Route5/scripts.pory"
	msgbox SurfStory_CantSurfYet, MSGBOX_AUTOCLOSE
GiveSurf_1:
# 20 "data/maps/Route5/scripts.pory"
	releaseall
	end

GiveSurf_2:
# 7 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_SURF, GiveSurf_5
# 14 "data/maps/Route5/scripts.pory"
	msgbox ExplainSurf, MSGBOX_AUTOCLOSE
	goto GiveSurf_1

GiveSurf_5:
# 8 "data/maps/Route5/scripts.pory"
	msgbox SurfStory_GiveSurf, MSGBOX_AUTOCLOSE
# 9 "data/maps/Route5/scripts.pory"
	giveitem ITEM_HM03
# 10 "data/maps/Route5/scripts.pory"
	setflag FLAG_RECEIVED_HM_SURF
# 11 "data/maps/Route5/scripts.pory"
	msgbox ExplainSurf, MSGBOX_AUTOCLOSE
	goto GiveSurf_1


SurfStory_GiveSurf::
# 24 "data/maps/Route5/scripts.pory"
	.string "Have you ever been on a sinking \n"
	.string "ship? \p"
	.string "I have, and let me tell you, I wouldn't \n"
	.string "be here if it weren't for my POKéMON. \p"
	.string "I'd recently taught it the move Surf and \n"
	.string "it saved my life! \p"
	.string "So here, take this! I'll help you I'm sure!$"

SurfStory_CantSurfYet::
# 34 "data/maps/Route5/scripts.pory"
	.string "Have you ever been on a sinking \n"
	.string "ship? \p"
	.string "I have, and let me tell you, I wouldn't \n"
	.string "be here if it weren't for my POKéMON. \p"
	.string "I'd recently taught it the move Surf \n"
	.string "and it saved my life! \p"
	.string "Hmm, you need a certain level of skill \n"
	.string "to be able to use this move. \p"
	.string "Come back when you have a third artist \n"
	.string "badge! $"

ExplainSurf::
# 47 "data/maps/Route5/scripts.pory"
	.string "The move Surf will allow one of your \n"
	.string "POKéMON to carry you across water. \p"
	.string "It's really useful to travel without a \n"
	.string "boat, just watch out for wild POKéMON! $"

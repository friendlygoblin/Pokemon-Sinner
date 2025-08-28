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


Route5_SwimmerF::
# 55 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_KYLA, Route5_SwimmerF_Text_0, Route5_SwimmerF_Text_1
# 56 "data/maps/Route5/scripts.pory"
	msgbox Route5_SwimmerF_Text_2, MSGBOX_AUTOCLOSE
	return


Route5_SwimmerM::
# 60 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_DECLAN, Route5_SwimmerM_Text_0, Route5_SwimmerM_Text_1
# 61 "data/maps/Route5/scripts.pory"
	msgbox Route5_SwimmerM_Text_2, MSGBOX_AUTOCLOSE
	return


Route5_Runner::
# 65 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_MARIA_1, Route5_Runner_Text_0, Route5_Runner_Text_1
# 66 "data/maps/Route5/scripts.pory"
	msgbox Route5_Runner_Text_2, MSGBOX_AUTOCLOSE
	return


Route5_SwimmerF_Text_0:
# 55 "data/maps/Route5/scripts.pory"
	.string "The sea is so refreshing!$"

Route5_SwimmerF_Text_1:
# 55 "data/maps/Route5/scripts.pory"
	.string "I'm getting a bit chilly…$"

Route5_SwimmerF_Text_2:
# 56 "data/maps/Route5/scripts.pory"
	.string "The water isn't that cold if you keep\n"
	.string "moving…$"

Route5_SwimmerM_Text_0:
# 60 "data/maps/Route5/scripts.pory"
	.string "I'm the fastest in the water!$"

Route5_SwimmerM_Text_1:
# 60 "data/maps/Route5/scripts.pory"
	.string "I didn't say I was the strongest…$"

Route5_SwimmerM_Text_2:
# 61 "data/maps/Route5/scripts.pory"
	.string "You must be travelling so fast on your\n"
	.string "POKéMON's back!$"

Route5_Runner_Text_0:
# 65 "data/maps/Route5/scripts.pory"
	.string "Hey, you're in my way!$"

Route5_Runner_Text_1:
# 65 "data/maps/Route5/scripts.pory"
	.string "Ugh, just move aside please…$"

Route5_Runner_Text_2:
# 66 "data/maps/Route5/scripts.pory"
	.string "I'm training for a marathon, I can't be\n"
	.string "interrupted.$"

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

Route5_MapScripts::
	.byte 0


GiveSurf::
# 4 "data/maps/Route5/scripts.pory"
	lock
# 5 "data/maps/Route5/scripts.pory"
	faceplayer
# 6 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, GiveSurf_2
# 19 "data/maps/Route5/scripts.pory"
	msgbox SurfStory_CantSurfYet, MSGBOX_AUTOCLOSE
GiveSurf_1:
# 21 "data/maps/Route5/scripts.pory"
	releaseall
	end

GiveSurf_2:
# 7 "data/maps/Route5/scripts.pory"
	msgbox SurfStory_GiveSurf, MSGBOX_AUTOCLOSE
# 8 "data/maps/Route5/scripts.pory"
	giveitem ITEM_HM03
# 9 "data/maps/Route5/scripts.pory"
	msgbox ExplainSurf, MSGBOX_AUTOCLOSE
# 10 "data/maps/Route5/scripts.pory"
	fadescreen FADE_TO_BLACK
# 11 "data/maps/Route5/scripts.pory"
	removeobject 1
# 12 "data/maps/Route5/scripts.pory"
	setflag FLAG_RECEIVED_HM_SURF
# 13 "data/maps/Route5/scripts.pory"
	playse SE_EXIT
# 14 "data/maps/Route5/scripts.pory"
	waitse
# 15 "data/maps/Route5/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto GiveSurf_1


Route5_SwimmerF::
# 59 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_KYLA, Route5_SwimmerF_Text_0, Route5_SwimmerF_Text_1
# 60 "data/maps/Route5/scripts.pory"
	msgbox Route5_SwimmerF_Text_2, MSGBOX_AUTOCLOSE
	return


Route5_SwimmerM::
# 64 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_DECLAN, Route5_SwimmerM_Text_0, Route5_SwimmerM_Text_1
# 65 "data/maps/Route5/scripts.pory"
	msgbox Route5_SwimmerM_Text_2, MSGBOX_AUTOCLOSE
	return


Route5_Runner::
# 69 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_MARIA_1, Route5_Runner_Text_0, Route5_Runner_Text_1
# 70 "data/maps/Route5/scripts.pory"
	msgbox Route5_Runner_Text_2, MSGBOX_AUTOCLOSE
	return


Route5_SwimmerF_Text_0:
# 59 "data/maps/Route5/scripts.pory"
	.string "The sea is so refreshing!$"

Route5_SwimmerF_Text_1:
# 59 "data/maps/Route5/scripts.pory"
	.string "I'm getting a bit chilly…$"

Route5_SwimmerF_Text_2:
# 60 "data/maps/Route5/scripts.pory"
	.string "The water isn't that cold if you keep\n"
	.string "moving…$"

Route5_SwimmerM_Text_0:
# 64 "data/maps/Route5/scripts.pory"
	.string "I'm the fastest in the water!$"

Route5_SwimmerM_Text_1:
# 64 "data/maps/Route5/scripts.pory"
	.string "I didn't say I was the strongest…$"

Route5_SwimmerM_Text_2:
# 65 "data/maps/Route5/scripts.pory"
	.string "You must be travelling so fast on your\n"
	.string "POKéMON's back!$"

Route5_Runner_Text_0:
# 69 "data/maps/Route5/scripts.pory"
	.string "Hey, you're in my way!$"

Route5_Runner_Text_1:
# 69 "data/maps/Route5/scripts.pory"
	.string "Ugh, just move aside please…$"

Route5_Runner_Text_2:
# 70 "data/maps/Route5/scripts.pory"
	.string "I'm training for a marathon, I can't be\n"
	.string "interrupted.$"

SurfStory_GiveSurf::
# 25 "data/maps/Route5/scripts.pory"
	.string "GEORGIA: Hello, {PLAYER}! \p"
	.string "Are you enjoying Godzilland? \n"
	.string "I'm just visiting before we have our\l"
	.string "first show in Mirror City.\p"
	.string "I basically grew up in the sea, you \n"
	.string "know. \p"
	.string "Next step for you should be Crystal \n"
	.string "Stream City, right? \p"
	.string "Here, take this! It'll help you I'm \n"
	.string "sure!$"

SurfStory_CantSurfYet::
# 38 "data/maps/Route5/scripts.pory"
	.string "GEORGIA: Hello, {PLAYER}! \p"
	.string "Have you visited the Godzilland concert \n"
	.string "Hall? \p"
	.string "St.Vincent has a challenge much like  \n"
	.string "ours, I'm sure you'd have fun there! \p"
	.string "We're huge fans of hers, Emily was very \n"
	.string "inspired by her when writing Sinner.$"

ExplainSurf::
# 48 "data/maps/Route5/scripts.pory"
	.string "The move Surf will allow one of your \n"
	.string "POKéMON to carry you across water. \p"
	.string "It's really useful to travel without a \n"
	.string "boat, just watch out for wild POKéMON! \p"
	.string "Well, I'm gonna go now.\n"
	.string "Rehearsals and everything… See you in \l"
	.string "Mirror City!$"

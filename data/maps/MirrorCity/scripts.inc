MirrorCity_MapScripts::
	.byte 0


MirrorCity_CitySign::
# 6 "data/maps/MirrorCity/scripts.pory"
	lock
# 7 "data/maps/MirrorCity/scripts.pory"
	msgbox MirrorCity_CitySign_Text_0
# 8 "data/maps/MirrorCity/scripts.pory"
	release
	end


MirrorCity_ConcertHallSign::
# 13 "data/maps/MirrorCity/scripts.pory"
	lock
# 14 "data/maps/MirrorCity/scripts.pory"
	msgbox MirrorCity_ConcertHallSign_Text_0
# 15 "data/maps/MirrorCity/scripts.pory"
	release
	end


MirrorCity_PlaceGoblin1::
# 20 "data/maps/MirrorCity/scripts.pory"
	lock
# 21 "data/maps/MirrorCity/scripts.pory"
	applymovement 1, MirrorCity_Movement_PlaceGoblin1
# 22 "data/maps/MirrorCity/scripts.pory"
	waitmovement 0
# 23 "data/maps/MirrorCity/scripts.pory"
	goto MirrorCity_Goblin
	return


MirrorCity_PlaceGoblin2::
# 27 "data/maps/MirrorCity/scripts.pory"
	lock
# 28 "data/maps/MirrorCity/scripts.pory"
	applymovement 1, MirrorCity_Movement_PlaceGoblin2
# 29 "data/maps/MirrorCity/scripts.pory"
	waitmovement 0
# 30 "data/maps/MirrorCity/scripts.pory"
	goto MirrorCity_Goblin
	return


MirrorCity_Goblin::
# 34 "data/maps/MirrorCity/scripts.pory"
	msgbox MirrorCity_GoblinThisIsIt, MSGBOX_AUTOCLOSE
# 35 "data/maps/MirrorCity/scripts.pory"
	trainerbattle_no_intro TRAINER_GOBLIN_MIRROR_CITY, MirrorCity_GoblinDefeat
# 36 "data/maps/MirrorCity/scripts.pory"
	msgbox MirrorCity_GoblinConcertHallLobby, MSGBOX_AUTOCLOSE
# 37 "data/maps/MirrorCity/scripts.pory"
	applymovement 1, MirrorCity_GoblinLeave
# 38 "data/maps/MirrorCity/scripts.pory"
	waitmovement 0
# 39 "data/maps/MirrorCity/scripts.pory"
	removeobject 1
# 40 "data/maps/MirrorCity/scripts.pory"
	setflag FLAG_MIRRORCITY_GOBLIN
# 41 "data/maps/MirrorCity/scripts.pory"
	setvar VAR_MIRROR_CITY_GOBLIN, 1
# 42 "data/maps/MirrorCity/scripts.pory"
	release
	end


# 46 "data/maps/MirrorCity/scripts.pory"
MirrorCity_Movement_PlaceGoblin1:
# 47 "data/maps/MirrorCity/scripts.pory"
	walk_down
# 47 "data/maps/MirrorCity/scripts.pory"
	walk_down
# 47 "data/maps/MirrorCity/scripts.pory"
	walk_down
# 47 "data/maps/MirrorCity/scripts.pory"
	walk_down
# 47 "data/maps/MirrorCity/scripts.pory"
	walk_down
# 48 "data/maps/MirrorCity/scripts.pory"
	step_end

# 51 "data/maps/MirrorCity/scripts.pory"
MirrorCity_Movement_PlaceGoblin2:
# 52 "data/maps/MirrorCity/scripts.pory"
	walk_right
# 53 "data/maps/MirrorCity/scripts.pory"
	walk_down
# 53 "data/maps/MirrorCity/scripts.pory"
	walk_down
# 53 "data/maps/MirrorCity/scripts.pory"
	walk_down
# 53 "data/maps/MirrorCity/scripts.pory"
	walk_down
# 53 "data/maps/MirrorCity/scripts.pory"
	walk_down
# 54 "data/maps/MirrorCity/scripts.pory"
	step_end

# 57 "data/maps/MirrorCity/scripts.pory"
MirrorCity_GoblinLeave:
# 58 "data/maps/MirrorCity/scripts.pory"
	walk_up
# 58 "data/maps/MirrorCity/scripts.pory"
	walk_up
# 58 "data/maps/MirrorCity/scripts.pory"
	walk_up
# 58 "data/maps/MirrorCity/scripts.pory"
	walk_up
# 58 "data/maps/MirrorCity/scripts.pory"
	walk_up
# 59 "data/maps/MirrorCity/scripts.pory"
	step_end

MirrorCity_CitySign_Text_0:
# 7 "data/maps/MirrorCity/scripts.pory"
	.string "Welcome to Mirror City!\p"
	.string "The city worth climbing a mountain for!$"

MirrorCity_ConcertHallSign_Text_0:
# 14 "data/maps/MirrorCity/scripts.pory"
	.string "MIRROR CITY CONCERT HALL\p"
	.string "CURRENT RESIDENT: THE LAST DINNER\n"
	.string "PARTY$"

MirrorCity_GoblinThisIsIt::
# 62 "data/maps/MirrorCity/scripts.pory"
	.string "GOBLIN: Hi, {PLAYER}.\p"
	.string "So this is it, huh? \p"
	.string "We're about to challenge The Last \n"
	.string "Dinner Party! \p"
	.string "So many other fans are here, did you \n"
	.string "see them on Victory Road? \p"
	.string "I also saw a bunch of other artists \n"
	.string "walk in! \p"
	.string "{PLAYER}… \p"
	.string "You've come such a long way, and I know \n"
	.string "you're probably ready but… \p"
	.string "Spar with me before you go in! $"

MirrorCity_GoblinConcertHallLobby::
# 77 "data/maps/MirrorCity/scripts.pory"
	.string "GOBLIN: I knew it! \p"
	.string "If anyone can win this, it's you! \p"
	.string "I'll be preparing my strategy in the \n"
	.string "Concert Hall lobby if you need me. $"

MirrorCity_GoblinDefeat::
# 84 "data/maps/MirrorCity/scripts.pory"
	.string "Yup, you're ready! \n"
	.string "Go show'em who's the real gunslinger!$"

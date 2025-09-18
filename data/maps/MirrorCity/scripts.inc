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
	special HealPlayerParty
# 36 "data/maps/MirrorCity/scripts.pory"
	trainerbattle_no_intro TRAINER_GOBLIN_MIRROR_CITY, MirrorCity_GoblinDefeat
# 37 "data/maps/MirrorCity/scripts.pory"
	msgbox MirrorCity_GoblinConcertHallLobby, MSGBOX_AUTOCLOSE
# 38 "data/maps/MirrorCity/scripts.pory"
	applymovement 1, MirrorCity_GoblinLeave
# 39 "data/maps/MirrorCity/scripts.pory"
	waitmovement 0
# 40 "data/maps/MirrorCity/scripts.pory"
	removeobject 1
# 41 "data/maps/MirrorCity/scripts.pory"
	setflag FLAG_MIRRORCITY_GOBLIN
# 42 "data/maps/MirrorCity/scripts.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 43 "data/maps/MirrorCity/scripts.pory"
	setvar VAR_MIRROR_CITY_GOBLIN, 1
# 44 "data/maps/MirrorCity/scripts.pory"
	release
	end


# 48 "data/maps/MirrorCity/scripts.pory"
MirrorCity_Movement_PlaceGoblin1:
# 49 "data/maps/MirrorCity/scripts.pory"
	walk_down
# 49 "data/maps/MirrorCity/scripts.pory"
	walk_down
# 49 "data/maps/MirrorCity/scripts.pory"
	walk_down
# 49 "data/maps/MirrorCity/scripts.pory"
	walk_down
# 49 "data/maps/MirrorCity/scripts.pory"
	walk_down
# 50 "data/maps/MirrorCity/scripts.pory"
	step_end

# 53 "data/maps/MirrorCity/scripts.pory"
MirrorCity_Movement_PlaceGoblin2:
# 54 "data/maps/MirrorCity/scripts.pory"
	walk_right
# 55 "data/maps/MirrorCity/scripts.pory"
	walk_down
# 55 "data/maps/MirrorCity/scripts.pory"
	walk_down
# 55 "data/maps/MirrorCity/scripts.pory"
	walk_down
# 55 "data/maps/MirrorCity/scripts.pory"
	walk_down
# 55 "data/maps/MirrorCity/scripts.pory"
	walk_down
# 56 "data/maps/MirrorCity/scripts.pory"
	step_end

# 59 "data/maps/MirrorCity/scripts.pory"
MirrorCity_GoblinLeave:
# 60 "data/maps/MirrorCity/scripts.pory"
	walk_up
# 60 "data/maps/MirrorCity/scripts.pory"
	walk_up
# 60 "data/maps/MirrorCity/scripts.pory"
	walk_up
# 60 "data/maps/MirrorCity/scripts.pory"
	walk_up
# 60 "data/maps/MirrorCity/scripts.pory"
	walk_up
# 61 "data/maps/MirrorCity/scripts.pory"
	step_end

MirrorCity_Ness::
# 94 "data/maps/MirrorCity/scripts.pory"
	lock
# 95 "data/maps/MirrorCity/scripts.pory"
	faceplayer
# 96 "data/maps/MirrorCity/scripts.pory"
	msgbox MirrorCity_NessText, MSGBOX_AUTOCLOSE
# 97 "data/maps/MirrorCity/scripts.pory"
	release
	end


MirrorCity_Nat::
# 110 "data/maps/MirrorCity/scripts.pory"
	lock
# 111 "data/maps/MirrorCity/scripts.pory"
	faceplayer
# 112 "data/maps/MirrorCity/scripts.pory"
	msgbox MirrorCity_Nat_Text_0, MSGBOX_AUTOCLOSE
# 113 "data/maps/MirrorCity/scripts.pory"
	release
	end


MirrorCity_CitySign_Text_0:
# 7 "data/maps/MirrorCity/scripts.pory"
	.string "Welcome to Mirror City!\p"
	.string "The city worth climbing a mountain for!$"

MirrorCity_ConcertHallSign_Text_0:
# 14 "data/maps/MirrorCity/scripts.pory"
	.string "MIRROR CITY CONCERT HALL\p"
	.string "CURRENT RESIDENT: THE LAST DINNER\n"
	.string "PARTY$"

MirrorCity_Nat_Text_0:
# 112 "data/maps/MirrorCity/scripts.pory"
	.string "NATALIE: Everyone I saw on the way\n"
	.string "here is so well dressed!$"

MirrorCity_GoblinThisIsIt::
# 64 "data/maps/MirrorCity/scripts.pory"
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
	.string "Spar with me before you go in! \p"
	.string "I'll fix your team up to keep things \n"
	.string "fair!$"

MirrorCity_GoblinConcertHallLobby::
# 81 "data/maps/MirrorCity/scripts.pory"
	.string "GOBLIN: I knew it! \p"
	.string "If anyone can win this, it's you! \p"
	.string "I'll be preparing my strategy in the \n"
	.string "Concert Hall lobby if you need me. $"

MirrorCity_GoblinDefeat::
# 88 "data/maps/MirrorCity/scripts.pory"
	.string "Yup, you're ready! \n"
	.string "Go show'em who's the real gunslinger!$"

MirrorCity_NessText::
# 101 "data/maps/MirrorCity/scripts.pory"
	.string "NESS: You're here to take on the band \n"
	.string "too? \p"
	.string "I made it all the way to Lizzie but \n"
	.string "then they stomped me! \p"
	.string "I gotta rethink my strategy…$"

PortraitTown_MapScripts::
# 2 "data/maps/PortraitTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PortraitTown_Visited
	.byte 0


PortraitTown_Visited::
# 6 "data/maps/PortraitTown/scripts.pory"
	setflag FLAG_VISITED_FORTREE_CITY
	return


PortraitTown_ConcertHallSign::
# 10 "data/maps/PortraitTown/scripts.pory"
	lock
# 11 "data/maps/PortraitTown/scripts.pory"
	msgbox PortraitTown_ConcertHallSign_Text_0
# 12 "data/maps/PortraitTown/scripts.pory"
	release
	end


PortraitTown_CitySign::
# 17 "data/maps/PortraitTown/scripts.pory"
	lock
# 18 "data/maps/PortraitTown/scripts.pory"
	msgbox PortraitTown_CitySign_Text_0
# 19 "data/maps/PortraitTown/scripts.pory"
	release
	end


PortraitTown_CableCarSign::
# 24 "data/maps/PortraitTown/scripts.pory"
	lock
# 25 "data/maps/PortraitTown/scripts.pory"
	msgbox PortraitTown_CableCarSign_Text_0
# 26 "data/maps/PortraitTown/scripts.pory"
	release
	end


PortraitTown_Route8Sign::
# 31 "data/maps/PortraitTown/scripts.pory"
	lock
# 32 "data/maps/PortraitTown/scripts.pory"
	msgbox PortraitTown_Route8Sign_Text_0
# 33 "data/maps/PortraitTown/scripts.pory"
	release
	end


PortraitTown_Girl::
# 38 "data/maps/PortraitTown/scripts.pory"
	lock
# 39 "data/maps/PortraitTown/scripts.pory"
	faceplayer
# 40 "data/maps/PortraitTown/scripts.pory"
	msgbox PortraitTown_Girl_Text_0
# 41 "data/maps/PortraitTown/scripts.pory"
	release
	end


PortraitTown_Man::
# 46 "data/maps/PortraitTown/scripts.pory"
	lock
# 47 "data/maps/PortraitTown/scripts.pory"
	faceplayer
# 48 "data/maps/PortraitTown/scripts.pory"
	msgbox PortraitTown_Man_Text_0
# 49 "data/maps/PortraitTown/scripts.pory"
	release
	end


PortraitTown_ConcertHallSign_Text_0:
# 11 "data/maps/PortraitTown/scripts.pory"
	.string "PORTRAIT TOWN CONCERT HALL\p"
	.string "MARINA IS WAITING FOR YOU$"

PortraitTown_CitySign_Text_0:
# 18 "data/maps/PortraitTown/scripts.pory"
	.string "Welcome to Portrait Town!\p"
	.string "So lovely you'll want to visit over and\n"
	.string "over again!$"

PortraitTown_CableCarSign_Text_0:
# 25 "data/maps/PortraitTown/scripts.pory"
	.string "{UP_ARROW}: Cable Car station\p"
	.string "Ride the Cable Car down to Route 9!$"

PortraitTown_Route8Sign_Text_0:
# 32 "data/maps/PortraitTown/scripts.pory"
	.string "{DOWN_ARROW}: Route 8, to Mercy Town.$"

PortraitTown_Girl_Text_0:
# 40 "data/maps/PortraitTown/scripts.pory"
	.string "It's pretty cold in this town.\p"
	.string "That's why Ice Type POKéMON thrive\n"
	.string "here!$"

PortraitTown_Man_Text_0:
# 48 "data/maps/PortraitTown/scripts.pory"
	.string "Marina? Oh no, I'm too old to attend her\n"
	.string "shows…\p"
	.string "But my kids aren't, so I go with them!$"

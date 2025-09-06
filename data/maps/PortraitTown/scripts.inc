PortraitTown_MapScripts::
	.byte 0


PortraitTown_ConcertHallSign::
# 4 "data/maps/PortraitTown/scripts.pory"
	lock
# 5 "data/maps/PortraitTown/scripts.pory"
	msgbox PortraitTown_ConcertHallSign_Text_0
# 6 "data/maps/PortraitTown/scripts.pory"
	release
	end


PortraitTown_CitySign::
# 11 "data/maps/PortraitTown/scripts.pory"
	lock
# 12 "data/maps/PortraitTown/scripts.pory"
	msgbox PortraitTown_CitySign_Text_0
# 13 "data/maps/PortraitTown/scripts.pory"
	release
	end


PortraitTown_CableCarSign::
# 18 "data/maps/PortraitTown/scripts.pory"
	lock
# 19 "data/maps/PortraitTown/scripts.pory"
	msgbox PortraitTown_CableCarSign_Text_0
# 20 "data/maps/PortraitTown/scripts.pory"
	release
	end


PortraitTown_Route8Sign::
# 25 "data/maps/PortraitTown/scripts.pory"
	lock
# 26 "data/maps/PortraitTown/scripts.pory"
	msgbox PortraitTown_Route8Sign_Text_0
# 27 "data/maps/PortraitTown/scripts.pory"
	release
	end


PortraitTown_Girl::
# 32 "data/maps/PortraitTown/scripts.pory"
	lock
# 33 "data/maps/PortraitTown/scripts.pory"
	faceplayer
# 34 "data/maps/PortraitTown/scripts.pory"
	msgbox PortraitTown_Girl_Text_0
# 35 "data/maps/PortraitTown/scripts.pory"
	release
	end


PortraitTown_Man::
# 40 "data/maps/PortraitTown/scripts.pory"
	lock
# 41 "data/maps/PortraitTown/scripts.pory"
	faceplayer
# 42 "data/maps/PortraitTown/scripts.pory"
	msgbox PortraitTown_Man_Text_0
# 43 "data/maps/PortraitTown/scripts.pory"
	release
	end


PortraitTown_ConcertHallSign_Text_0:
# 5 "data/maps/PortraitTown/scripts.pory"
	.string "PORTRAIT TOWN CONCERT HALL\p"
	.string "MARINA IS WAITING FOR YOU$"

PortraitTown_CitySign_Text_0:
# 12 "data/maps/PortraitTown/scripts.pory"
	.string "Welcome to Portrait Town!\p"
	.string "So lovely you'll want to visit over and\n"
	.string "over again!$"

PortraitTown_CableCarSign_Text_0:
# 19 "data/maps/PortraitTown/scripts.pory"
	.string "{UP_ARROW}: Cable Car station\p"
	.string "Ride the Cable Car down to Route 9!$"

PortraitTown_Route8Sign_Text_0:
# 26 "data/maps/PortraitTown/scripts.pory"
	.string "{DOWN_ARROW}: Route 8, to Mercy Town.$"

PortraitTown_Girl_Text_0:
# 34 "data/maps/PortraitTown/scripts.pory"
	.string "It's pretty cold in this town.\p"
	.string "That's why Ice Type POKéMON thrive\n"
	.string "here!$"

PortraitTown_Man_Text_0:
# 42 "data/maps/PortraitTown/scripts.pory"
	.string "Marina? Oh no, I'm too old to attend her\n"
	.string "shows…\p"
	.string "But my kids aren't, so I go with them!$"

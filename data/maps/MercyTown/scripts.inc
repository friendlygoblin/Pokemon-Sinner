MercyTown_MapScripts::
# 2 "data/maps/MercyTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MercyTown_Visited
	.byte 0


MercyTown_Visited::
# 6 "data/maps/MercyTown/scripts.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
	return


MercyTown_Route7Sign::
# 10 "data/maps/MercyTown/scripts.pory"
	lock
# 11 "data/maps/MercyTown/scripts.pory"
	msgbox MercyTown_Route7Sign_Text_0, MSGBOX_AUTOCLOSE
# 12 "data/maps/MercyTown/scripts.pory"
	release
	end


MercyTown_Route8Sign::
# 17 "data/maps/MercyTown/scripts.pory"
	lock
# 18 "data/maps/MercyTown/scripts.pory"
	msgbox MercyTown_Route8Sign_Text_0, MSGBOX_AUTOCLOSE
# 19 "data/maps/MercyTown/scripts.pory"
	release
	end


MercyTown_ConcertHallSign::
# 24 "data/maps/MercyTown/scripts.pory"
	lock
# 25 "data/maps/MercyTown/scripts.pory"
	msgbox MercyTown_ConcertHallSign_Text_0, MSGBOX_AUTOCLOSE
# 26 "data/maps/MercyTown/scripts.pory"
	release
	end


MercyTown_WelcomeToMercyTownSign::
# 31 "data/maps/MercyTown/scripts.pory"
	lock
# 32 "data/maps/MercyTown/scripts.pory"
	msgbox MercyTown_WelcomeToMercyTownSign_Text_0, MSGBOX_AUTOCLOSE
# 33 "data/maps/MercyTown/scripts.pory"
	release
	end


MercyTown_Route7Sign_Text_0:
# 11 "data/maps/MercyTown/scripts.pory"
	.string "{DOWN_ARROW}: Route 7\p"
	.string "To Sunday Cave and Crystal Stream City.$"

MercyTown_Route8Sign_Text_0:
# 18 "data/maps/MercyTown/scripts.pory"
	.string "{RIGHT_ARROW}: Route 8\p"
	.string "To Portrait Town.$"

MercyTown_ConcertHallSign_Text_0:
# 25 "data/maps/MercyTown/scripts.pory"
	.string "MERCY TOWN CONCERT HALL\p"
	.string "CMAT IS WAITING FOR YOU!$"

MercyTown_WelcomeToMercyTownSign_Text_0:
# 32 "data/maps/MercyTown/scripts.pory"
	.string "Welcome to Mercy Town!\p"
	.string "A stop on the road, take a break and\n"
	.string "rest your feet.$"

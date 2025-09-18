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


MercyTown_Girl::
# 38 "data/maps/MercyTown/scripts.pory"
	lock
# 39 "data/maps/MercyTown/scripts.pory"
	faceplayer
# 40 "data/maps/MercyTown/scripts.pory"
	msgbox MercyTown_Girl_Text_0
# 41 "data/maps/MercyTown/scripts.pory"
	release
	end


MercyTown_Boy::
# 46 "data/maps/MercyTown/scripts.pory"
	lock
# 47 "data/maps/MercyTown/scripts.pory"
	faceplayer
# 48 "data/maps/MercyTown/scripts.pory"
	msgbox MercyTown_Boy_Text_0
# 49 "data/maps/MercyTown/scripts.pory"
	release
	end


MercyTown_Worker::
# 54 "data/maps/MercyTown/scripts.pory"
	lock
# 55 "data/maps/MercyTown/scripts.pory"
	faceplayer
# 56 "data/maps/MercyTown/scripts.pory"
	msgbox MercyTown_Worker_Text_0
# 57 "data/maps/MercyTown/scripts.pory"
	release
	end


MercyTown_Primeape::
# 62 "data/maps/MercyTown/scripts.pory"
	lock
# 63 "data/maps/MercyTown/scripts.pory"
	faceplayer
# 64 "data/maps/MercyTown/scripts.pory"
	playmoncry SPECIES_PRIMEAPE, CRY_MODE_NORMAL
# 65 "data/maps/MercyTown/scripts.pory"
	msgbox MercyTown_Primeape_Text_0
# 66 "data/maps/MercyTown/scripts.pory"
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

MercyTown_Girl_Text_0:
# 40 "data/maps/MercyTown/scripts.pory"
	.string "You know that song 'My Lady Of Mercy'?\p"
	.string "It came out shortly after the band\n"
	.string "that wrote it stopped by our town.\p"
	.string "I wonder if it's referring to someone\n"
	.string "from here…$"

MercyTown_Boy_Text_0:
# 48 "data/maps/MercyTown/scripts.pory"
	.string "People actually stop here now that\n"
	.string "CMAT is in town!\p"
	.string "People just used to cross the town but\n"
	.string "never took the time to stop.\p"
	.string "It wasn't great for business.$"

MercyTown_Worker_Text_0:
# 56 "data/maps/MercyTown/scripts.pory"
	.string "CMAT liked it so much here that she had\n"
	.string "the Concert Hall built so she could\l"
	.string "stay!\p"
	.string "Primeape and I helped build it!$"

MercyTown_Primeape_Text_0:
# 65 "data/maps/MercyTown/scripts.pory"
	.string "PRIMEAPE: rraah!$"

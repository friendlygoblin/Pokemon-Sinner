EcstasyTown_MapScripts::
# 2 "data/maps/EcstasyTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EcstasyTown_Visited
	.byte 0


EcstasyTown_Visited::
# 6 "data/maps/EcstasyTown/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
	return


EcstasyRoute1Sign::
# 10 "data/maps/EcstasyTown/scripts.pory"
	lock
# 11 "data/maps/EcstasyTown/scripts.pory"
	msgbox EcstasyRoute1Sign_Text_0
# 12 "data/maps/EcstasyTown/scripts.pory"
	releaseall
	end


EcstasyTownSign::
# 17 "data/maps/EcstasyTown/scripts.pory"
	lock
# 18 "data/maps/EcstasyTown/scripts.pory"
	msgbox EcstasyTownSign_Text_0
# 19 "data/maps/EcstasyTown/scripts.pory"
	releaseall
	end


PokecentreBoy::
# 24 "data/maps/EcstasyTown/scripts.pory"
	lock
# 25 "data/maps/EcstasyTown/scripts.pory"
	faceplayer
# 26 "data/maps/EcstasyTown/scripts.pory"
	msgbox PokecenterBoy_Text
# 27 "data/maps/EcstasyTown/scripts.pory"
	releaseall
	end


ClosedHouseSign::
# 32 "data/maps/EcstasyTown/scripts.pory"
	lock
# 33 "data/maps/EcstasyTown/scripts.pory"
	msgbox ClosedHouseSign_Text_0
# 34 "data/maps/EcstasyTown/scripts.pory"
	releaseall
	end


MartGirl::
# 45 "data/maps/EcstasyTown/scripts.pory"
	lock
# 46 "data/maps/EcstasyTown/scripts.pory"
	faceplayer
# 47 "data/maps/EcstasyTown/scripts.pory"
	msgbox MartGirl_Text
# 48 "data/maps/EcstasyTown/scripts.pory"
	releaseall
	end


George::
# 57 "data/maps/EcstasyTown/scripts.pory"
	lock
# 58 "data/maps/EcstasyTown/scripts.pory"
	faceplayer
# 59 "data/maps/EcstasyTown/scripts.pory"
	msgbox George_Text
# 60 "data/maps/EcstasyTown/scripts.pory"
	releaseall
	end


EcstasyRoute1Sign_Text_0:
# 11 "data/maps/EcstasyTown/scripts.pory"
	.string "{RIGHT_ARROW} : Route 1$"

EcstasyTownSign_Text_0:
# 18 "data/maps/EcstasyTown/scripts.pory"
	.string "Welcome to Ecstasy Town!\p"
	.string "A quiet town with friendly neighbours!$"

ClosedHouseSign_Text_0:
# 33 "data/maps/EcstasyTown/scripts.pory"
	.string "It's closed.\p"
	.string "It seems that the person who lived\n"
	.string "there moved away.$"

PokecenterBoy_Text::
# 38 "data/maps/EcstasyTown/scripts.pory"
	.string "Our town is pretty small, but we\n"
	.string "have everything we need!\p"
	.string "The POKéMON Center is the best part!$"

MartGirl_Text::
# 52 "data/maps/EcstasyTown/scripts.pory"
	.string "I'm so glad we have a shop here.$"

George_Text::
# 64 "data/maps/EcstasyTown/scripts.pory"
	.string "GEORGE: My neighbour moved away…\p"
	.string "I miss annoying her by pretending \n"
	.string "to throw bricks at her house.\p"
	.string "I never actually did it!\p"
	.string "I hope she didn't move because of me…$"

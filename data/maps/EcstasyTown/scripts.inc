EcstasyTown_MapScripts::
	.byte 0


EcstasyRoute1Sign::
# 4 "data/maps/EcstasyTown/scripts.pory"
	lock
# 5 "data/maps/EcstasyTown/scripts.pory"
	msgbox EcstasyRoute1Sign_Text_0
# 6 "data/maps/EcstasyTown/scripts.pory"
	releaseall
	end


EcstasyTownSign::
# 11 "data/maps/EcstasyTown/scripts.pory"
	lock
# 12 "data/maps/EcstasyTown/scripts.pory"
	msgbox EcstasyTownSign_Text_0
# 13 "data/maps/EcstasyTown/scripts.pory"
	releaseall
	end


PokecentreBoy::
# 18 "data/maps/EcstasyTown/scripts.pory"
	lock
# 19 "data/maps/EcstasyTown/scripts.pory"
	faceplayer
# 20 "data/maps/EcstasyTown/scripts.pory"
	msgbox PokecenterBoy_Text
# 21 "data/maps/EcstasyTown/scripts.pory"
	releaseall
	end


ClosedHouseSign::
# 26 "data/maps/EcstasyTown/scripts.pory"
	lock
# 27 "data/maps/EcstasyTown/scripts.pory"
	msgbox ClosedHouseSign_Text_0
# 28 "data/maps/EcstasyTown/scripts.pory"
	releaseall
	end


MartGirl::
# 39 "data/maps/EcstasyTown/scripts.pory"
	lock
# 40 "data/maps/EcstasyTown/scripts.pory"
	faceplayer
# 41 "data/maps/EcstasyTown/scripts.pory"
	msgbox MartGirl_Text
# 42 "data/maps/EcstasyTown/scripts.pory"
	releaseall
	end


George::
# 51 "data/maps/EcstasyTown/scripts.pory"
	lock
# 52 "data/maps/EcstasyTown/scripts.pory"
	faceplayer
# 53 "data/maps/EcstasyTown/scripts.pory"
	msgbox George_Text
# 54 "data/maps/EcstasyTown/scripts.pory"
	releaseall
	end


EcstasyRoute1Sign_Text_0:
# 5 "data/maps/EcstasyTown/scripts.pory"
	.string "{RIGHT_ARROW} : Route 1$"

EcstasyTownSign_Text_0:
# 12 "data/maps/EcstasyTown/scripts.pory"
	.string "Welcome to Ecstasy Town!\p"
	.string "A quiet town with friendly neighbours!$"

ClosedHouseSign_Text_0:
# 27 "data/maps/EcstasyTown/scripts.pory"
	.string "It's closed.\p"
	.string "It seems that the person who lived\n"
	.string "there moved away.$"

PokecenterBoy_Text::
# 32 "data/maps/EcstasyTown/scripts.pory"
	.string "Our town is pretty small, but we\n"
	.string "have everything we need!\p"
	.string "The POKéMON Center is the best part!$"

MartGirl_Text::
# 46 "data/maps/EcstasyTown/scripts.pory"
	.string "I'm so glad we have a shop here.$"

George_Text::
# 58 "data/maps/EcstasyTown/scripts.pory"
	.string "GEORGE: My neighbour moved away…\p"
	.string "I miss annoying her by pretending \n"
	.string "to throw bricks at her house.\p"
	.string "I never actually did it!\p"
	.string "I hope she didn't move because of me…$"

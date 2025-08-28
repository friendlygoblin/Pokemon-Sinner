MirrorCity_MapScripts::
	.byte 0


MirrorCity_CitySign::
# 4 "data/maps/MirrorCity/scripts.pory"
	lock
# 5 "data/maps/MirrorCity/scripts.pory"
	msgbox MirrorCity_CitySign_Text_0
# 6 "data/maps/MirrorCity/scripts.pory"
	release
	end


MirrorCity_ConcertHallSign::
# 11 "data/maps/MirrorCity/scripts.pory"
	lock
# 12 "data/maps/MirrorCity/scripts.pory"
	msgbox MirrorCity_ConcertHallSign_Text_0
# 13 "data/maps/MirrorCity/scripts.pory"
	release
	end


MirrorCity_CitySign_Text_0:
# 5 "data/maps/MirrorCity/scripts.pory"
	.string "Welcome to Mirror City!\p"
	.string "The city worth climbing a mountain for!$"

MirrorCity_ConcertHallSign_Text_0:
# 12 "data/maps/MirrorCity/scripts.pory"
	.string "MIRROR CITY CONCERT HALL\p"
	.string "CURRENT RESIDENT: THE LAST DINNER\n"
	.string "PARTY$"

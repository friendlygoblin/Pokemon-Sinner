NightingaleCity_MapScripts::
	.byte 0


NightingaleCity_PubSign::
# 4 "data/maps/NightingaleCity/scripts.pory"
	lock
# 5 "data/maps/NightingaleCity/scripts.pory"
	msgbox NightingaleCity_PubSign_Text_0
# 6 "data/maps/NightingaleCity/scripts.pory"
	release
	end


NightingaleCity_CitySign::
# 11 "data/maps/NightingaleCity/scripts.pory"
	lock
# 12 "data/maps/NightingaleCity/scripts.pory"
	msgbox NightingaleCity_CitySign_Text_0
# 13 "data/maps/NightingaleCity/scripts.pory"
	release
	end


NightingaleCity_Route10Sign::
# 18 "data/maps/NightingaleCity/scripts.pory"
	lock
# 19 "data/maps/NightingaleCity/scripts.pory"
	msgbox NightingaleCity_Route10Sign_Text_0
# 20 "data/maps/NightingaleCity/scripts.pory"
	release
	end


NightingaleCity_Route11Sign::
# 25 "data/maps/NightingaleCity/scripts.pory"
	lock
# 26 "data/maps/NightingaleCity/scripts.pory"
	msgbox NightingaleCity_Route11Sign_Text_0
# 27 "data/maps/NightingaleCity/scripts.pory"
	release
	end


NightingaleCity_BugCatcher::
# 32 "data/maps/NightingaleCity/scripts.pory"
	lock
# 33 "data/maps/NightingaleCity/scripts.pory"
	faceplayer
# 34 "data/maps/NightingaleCity/scripts.pory"
	msgbox NightingaleCity_BugCatcher_Text_0
# 35 "data/maps/NightingaleCity/scripts.pory"
	release
	end


NightingaleCity_Elle::
# 40 "data/maps/NightingaleCity/scripts.pory"
	lock
# 41 "data/maps/NightingaleCity/scripts.pory"
	faceplayer
# 42 "data/maps/NightingaleCity/scripts.pory"
	msgbox NightingaleCity_ElleMoved
# 43 "data/maps/NightingaleCity/scripts.pory"
	release
	end


NightingaleCity_PubSign_Text_0:
# 5 "data/maps/NightingaleCity/scripts.pory"
	.string "The Nightingale Pub\p"
	.string "Fresh drinks and good vibes!$"

NightingaleCity_CitySign_Text_0:
# 12 "data/maps/NightingaleCity/scripts.pory"
	.string "Welcome to Nightingale City!\p"
	.string "Dance to the sound of the waves!$"

NightingaleCity_Route10Sign_Text_0:
# 19 "data/maps/NightingaleCity/scripts.pory"
	.string "{DOWN_ARROW}: Route 10\p"
	.string "To Sailor Town.$"

NightingaleCity_Route11Sign_Text_0:
# 26 "data/maps/NightingaleCity/scripts.pory"
	.string "{UP_ARROW}: Route 11\p"
	.string "To Mirror Lake.$"

NightingaleCity_BugCatcher_Text_0:
# 34 "data/maps/NightingaleCity/scripts.pory"
	.string "We don't have a Concert Hall here, but\n"
	.string "artists sometimes stop by the\l"
	.string "Nightingale Pub.\p"
	.string "I think I just spotted a famous\n"
	.string "guitarist in there!$"

NightingaleCity_ElleMoved::
# 47 "data/maps/NightingaleCity/scripts.pory"
	.string "ELLE: I used to live in Ecstasy Town. \p"
	.string "My old neighbour used to pretend to \n"
	.string "throw bricks at my house. \p"
	.string "I'm still getting used to him not being \n"
	.string "here!$"

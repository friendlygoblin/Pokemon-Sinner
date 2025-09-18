NightingaleCity_MapScripts::
# 2 "data/maps/NightingaleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NightingaleCity_Visited
	.byte 0


NightingaleCity_Visited::
# 6 "data/maps/NightingaleCity/scripts.pory"
	setflag FLAG_VISITED_LILYCOVE_CITY
	return


NightingaleCity_PubSign::
# 10 "data/maps/NightingaleCity/scripts.pory"
	lock
# 11 "data/maps/NightingaleCity/scripts.pory"
	msgbox NightingaleCity_PubSign_Text_0
# 12 "data/maps/NightingaleCity/scripts.pory"
	release
	end


NightingaleCity_CitySign::
# 17 "data/maps/NightingaleCity/scripts.pory"
	lock
# 18 "data/maps/NightingaleCity/scripts.pory"
	msgbox NightingaleCity_CitySign_Text_0
# 19 "data/maps/NightingaleCity/scripts.pory"
	release
	end


NightingaleCity_FlowerShopSign::
# 24 "data/maps/NightingaleCity/scripts.pory"
	lock
# 25 "data/maps/NightingaleCity/scripts.pory"
	msgbox NightingaleCity_FlowerShopSign_Text_0
# 26 "data/maps/NightingaleCity/scripts.pory"
	release
	end


NightingaleCity_Route10Sign::
# 31 "data/maps/NightingaleCity/scripts.pory"
	lock
# 32 "data/maps/NightingaleCity/scripts.pory"
	msgbox NightingaleCity_Route10Sign_Text_0
# 33 "data/maps/NightingaleCity/scripts.pory"
	release
	end


NightingaleCity_Route11Sign::
# 38 "data/maps/NightingaleCity/scripts.pory"
	lock
# 39 "data/maps/NightingaleCity/scripts.pory"
	msgbox NightingaleCity_Route11Sign_Text_0
# 40 "data/maps/NightingaleCity/scripts.pory"
	release
	end


NightingaleCity_BugCatcher::
# 45 "data/maps/NightingaleCity/scripts.pory"
	lock
# 46 "data/maps/NightingaleCity/scripts.pory"
	faceplayer
# 47 "data/maps/NightingaleCity/scripts.pory"
	msgbox NightingaleCity_BugCatcher_Text_0
# 48 "data/maps/NightingaleCity/scripts.pory"
	release
	end


NightingaleCity_Elle::
# 53 "data/maps/NightingaleCity/scripts.pory"
	lock
# 54 "data/maps/NightingaleCity/scripts.pory"
	faceplayer
# 55 "data/maps/NightingaleCity/scripts.pory"
	msgbox NightingaleCity_ElleMoved
# 56 "data/maps/NightingaleCity/scripts.pory"
	release
	end


NightingaleCity_Sailor::
# 69 "data/maps/NightingaleCity/scripts.pory"
	lock
# 70 "data/maps/NightingaleCity/scripts.pory"
	faceplayer
# 71 "data/maps/NightingaleCity/scripts.pory"
	msgbox NightingaleCity_Sailor_Text_0
# 72 "data/maps/NightingaleCity/scripts.pory"
	release
	end


NightingaleCity_Nighty::
# 77 "data/maps/NightingaleCity/scripts.pory"
	lock
# 78 "data/maps/NightingaleCity/scripts.pory"
	faceplayer
# 79 "data/maps/NightingaleCity/scripts.pory"
	playmoncry SPECIES_CORVISQUIRE, CRY_MODE_NORMAL
# 80 "data/maps/NightingaleCity/scripts.pory"
	msgbox NightingaleCity_Nighty_Text_0
# 81 "data/maps/NightingaleCity/scripts.pory"
	waitmoncry
# 82 "data/maps/NightingaleCity/scripts.pory"
	release
	end


NightingaleCity_PubSign_Text_0:
# 11 "data/maps/NightingaleCity/scripts.pory"
	.string "The Nightingale Pub\p"
	.string "Fresh drinks and good vibes!$"

NightingaleCity_CitySign_Text_0:
# 18 "data/maps/NightingaleCity/scripts.pory"
	.string "Welcome to Nightingale City!\p"
	.string "Dance to the sound of the waves!$"

NightingaleCity_FlowerShopSign_Text_0:
# 25 "data/maps/NightingaleCity/scripts.pory"
	.string "Nightingale City Flower Shop\p"
	.string "Nothing matters but flowers!$"

NightingaleCity_Route10Sign_Text_0:
# 32 "data/maps/NightingaleCity/scripts.pory"
	.string "{DOWN_ARROW}: Route 10\p"
	.string "To Sailor Town.$"

NightingaleCity_Route11Sign_Text_0:
# 39 "data/maps/NightingaleCity/scripts.pory"
	.string "{UP_ARROW}: Route 11\p"
	.string "To Mirror Lake.$"

NightingaleCity_BugCatcher_Text_0:
# 47 "data/maps/NightingaleCity/scripts.pory"
	.string "We don't have a Concert Hall here,\n"
	.string "but artists sometimes stop by the\l"
	.string "Nightingale Pub.\p"
	.string "I think I just spotted a famous\n"
	.string "guitarist in there!$"

NightingaleCity_Sailor_Text_0:
# 71 "data/maps/NightingaleCity/scripts.pory"
	.string "The other day I heard a song on the\n"
	.string "radio that went 'A sailor and a\l"
	.string "nightingale'.\p"
	.string "I do remember some band stopped by\n"
	.string "this town a while ago, I wonder if Nighty\l"
	.string "and I inspired them somehow…$"

NightingaleCity_Nighty_Text_0:
# 80 "data/maps/NightingaleCity/scripts.pory"
	.string "Nighty: eek eeek!$"

NightingaleCity_ElleMoved::
# 60 "data/maps/NightingaleCity/scripts.pory"
	.string "ELLE: I used to live in Ecstasy Town. \p"
	.string "My old neighbour used to pretend to \n"
	.string "throw bricks at my house. \p"
	.string "I'm still getting used to him not being \n"
	.string "here!$"

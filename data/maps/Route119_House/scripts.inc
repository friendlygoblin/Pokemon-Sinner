# 1 "data/maps/Route119_House/scripts.pory"

# 2 "data/maps/Route119_House/scripts.pory"
Route119_House_MapScripts::
# 3 "data/maps/Route119_House/scripts.pory"
	.byte 0
# 4 "data/maps/Route119_House/scripts.pory"

# 5 "data/maps/Route119_House/scripts.pory"
Route119_House_EventScript_Woman::
# 6 "data/maps/Route119_House/scripts.pory"
	msgbox Route119_House_Text_RumorAboutCaveOfOrigin, MSGBOX_NPC
# 7 "data/maps/Route119_House/scripts.pory"
	end
# 8 "data/maps/Route119_House/scripts.pory"

# 9 "data/maps/Route119_House/scripts.pory"
Route119_House_EventScript_Lillipup::
# 10 "data/maps/Route119_House/scripts.pory"
	lock
# 11 "data/maps/Route119_House/scripts.pory"
	faceplayer
# 12 "data/maps/Route119_House/scripts.pory"
	waitse
# 13 "data/maps/Route119_House/scripts.pory"
	playmoncry SPECIES_LILLIPUP, CRY_MODE_NORMAL
# 14 "data/maps/Route119_House/scripts.pory"
	msgbox Route119_House_Text_Lillipup, MSGBOX_DEFAULT
# 15 "data/maps/Route119_House/scripts.pory"
	waitmoncry
# 16 "data/maps/Route119_House/scripts.pory"
	release
# 17 "data/maps/Route119_House/scripts.pory"
	end
# 18 "data/maps/Route119_House/scripts.pory"

# 19 "data/maps/Route119_House/scripts.pory"
Route119_House_Text_RumorAboutCaveOfOrigin:
# 20 "data/maps/Route119_House/scripts.pory"
	.string "I used to live in Crystal Stream \n"
# 21 "data/maps/Route119_House/scripts.pory"
	.string "City.\p"
# 22 "data/maps/Route119_House/scripts.pory"
	.string "It was getting too busy because of\n"
# 23 "data/maps/Route119_House/scripts.pory"
	.string "the artist challenge. \p"
# 24 "data/maps/Route119_House/scripts.pory"
	.string "It's nice that musicians do this \n"
# 25 "data/maps/Route119_House/scripts.pory"
	.string "kind of thing, but I like a calm \l"
# 26 "data/maps/Route119_House/scripts.pory"
	.string "environment better.$"
# 27 "data/maps/Route119_House/scripts.pory"

# 28 "data/maps/Route119_House/scripts.pory"
Route119_House_Text_Lillipup:
# 29 "data/maps/Route119_House/scripts.pory"
	.string "LILLIPUP: Yip!$"

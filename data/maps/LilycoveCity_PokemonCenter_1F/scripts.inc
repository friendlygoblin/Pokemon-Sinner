# 1 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_MapScripts::
# 5 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_PokemonCenter_1F_OnTransition
# 6 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_OnTransition:
# 10 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_CRYSTAL_STREAM_CITY
# 11 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 12 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 13 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_Nurse::
# 14 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 15 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 16 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 17 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 18 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	release
# 19 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 20 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 21 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_Boy::
# 22 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_Text_HowManyKindsOfPokemon, MSGBOX_NPC
# 23 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 24 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 25 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_Maniac::
# 26 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	lock
# 27 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 28 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_Text_HeardAboutRottenScoundrels, MSGBOX_DEFAULT
# 29 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	release
# 30 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 31 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 32 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_Text_HowManyKindsOfPokemon:
# 33 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "I wonder how many kinds of POKéMON\n"
# 34 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "there are in the world.\p"
# 35 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "It'd be great to cross seas and\n"
# 36 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "trade POKéMON with people far away.$"
# 37 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 38 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_Text_HeardAboutRottenScoundrels:
# 39 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "There are so many things to do in\n"
# 40 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "Crystal Stream City, you just can't\l"
# 41 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "get bored!$"

BugBuzzGirl::
# 46 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	lock
# 47 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 48 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BUG_BUZZ, BugBuzzGirl_2
# 52 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	msgbox BugBuzzGirl_Text_1
# 53 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_TM65
# 54 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	msgbox BugBuzzGirl_Text_2
# 55 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_BUG_BUZZ
BugBuzzGirl_1:
# 57 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	release
	end

BugBuzzGirl_2:
# 49 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	msgbox BugBuzzGirl_Text_0, MSGBOX_AUTOCLOSE
	goto BugBuzzGirl_1


BugBuzzGirl_Text_0:
# 49 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "Bug POKéMON are just as good as the\n"
	.string "other types!$"

BugBuzzGirl_Text_1:
# 52 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "People think Bug POKéMON are weak, but\n"
	.string "that's just not true.\p"
	.string "They have strong moves too, like this\n"
	.string "one!$"

BugBuzzGirl_Text_2:
# 54 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "Bug POKéMON are just as good as the other types!$"

# 1 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_MapScripts::
# 5 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_PokemonCenter_1F_OnTransition
# 6 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_OnTransition:
# 10 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_ECSTASY_TOWN
# 11 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 12 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 13 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Nurse::
# 14 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 15 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 16 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 17 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 18 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 19 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 20 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 21 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Gentleman::
# 22 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC, MSGBOX_NPC
# 23 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 24 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 25 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Boy::
# 26 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat, MSGBOX_NPC
# 27 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 28 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 29 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC:
# 31 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "If you catch a POKéMON but don't have \n"
# 32 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "any more room in your party, it will \l"
# 33 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "be sent to the PC.\p"
# 34 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The one in the corner there is for \n"
# 35 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "any POKéMON Trainer to use.\p"
# 36 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Naturally, that means you're welcome\n"
# 37 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "to use it, too.$"
# 38 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 39 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat:
# 40 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "POKéMON CENTERS are great!\p"
# 41 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You can use their services as much\n"
# 42 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "as you like, and it's all for free.\l"
# 43 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You never have to worry!$"

RestMan::
# 47 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 48 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 49 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_REST, RestMan_2
# 53 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox RestMan_Text_1
# 54 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_TM44
# 55 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox RestMan_Text_0
# 56 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_REST
RestMan_1:
# 58 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

RestMan_2:
# 50 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox RestMan_Text_0, MSGBOX_AUTOCLOSE
	goto RestMan_1


RestMan_Text_0:
# 50 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "So important… to get some Rest…$"

RestMan_Text_1:
# 53 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "POKéMON need rest just like us. Here,\n"
	.string "this may help.$"

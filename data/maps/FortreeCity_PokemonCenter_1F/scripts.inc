# 1 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_MapScripts::
# 5 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_PokemonCenter_1F_OnTransition
# 6 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_OnTransition:
# 10 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_MERCY_TOWN
# 11 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 12 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 13 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_Nurse::
# 14 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 15 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 16 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 17 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 18 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	release
# 19 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 20 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 21 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_Boy::
# 22 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav, MSGBOX_NPC
# 23 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 24 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 25 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav:
# 26 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "GEORGE: I still haven't found my\n"
# 27 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "neighbour…\p"
# 28 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "She really moved far from Ecstasy\n"
# 29 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Town. \p"
# 30 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "It can't be just because of the bricks \n"
# 31 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "I've never actually thrown, right? $"

# 1 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_SCOTT, 4
# 4 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 5 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_MapScripts::
# 6 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_PokemonCenter_1F_OnTransition
# 7 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 8 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 9 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_OnTransition:
# 11 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_MIRROR_CITY
# 12 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 16 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	release
# 20 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_Woman::
# 23 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_LeagueAfterVictoryRoad, MSGBOX_NPC
# 24 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 25 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM::
# 27 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_BelieveInYourPokemon, MSGBOX_NPC
# 28 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 29 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_Scott::
# 31 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	lock
# 32 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 33 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_ScottHappyForYou, MSGBOX_AUTOCLOSE
# 34 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	release
# 35 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 36 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 37 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Text_LeagueAfterVictoryRoad:
# 38 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "If you've come this far, what choice\n"
# 39 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "do you have but to keep going?$"
# 40 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 41 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Text_BelieveInYourPokemon:
# 42 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "The long and harrowing VICTORY ROAD…\p"
# 43 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "It's like reliving the path one has\n"
# 44 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "traveled in life…\p"
# 45 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Believe in your POKéMON and give it\n"
# 46 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "your very best!$"
# 47 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 48 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Text_ScottHappyForYou:
# 49 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Wow, you've clawed your way up to face \n"
# 50 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "The Last Dinner Party!\p"
# 51 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "I'm happy for you!\n"
# 52 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Go for greatness!$"

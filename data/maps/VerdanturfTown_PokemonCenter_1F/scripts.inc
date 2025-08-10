# 1 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_MapScripts::
# 5 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_PokemonCenter_1F_OnTransition
# 6 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_OnTransition:
# 10 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PORTRAIT_TOWN
# 11 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	end
# 12 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 13 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_EventScript_Nurse::
# 14 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 15 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 16 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 17 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 18 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	release
# 19 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	end
# 20 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 21 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_EventScript_Gentleman::
# 22 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	msgbox VerdanturfTown_PokemonCenter_1F_Text_FaithInYourPokemon, MSGBOX_NPC
# 23 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	end
# 24 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 25 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_EventScript_ExpertM::
# 26 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	msgbox VerdanturfTown_PokemonCenter_1F_Text_VisitForBattleTent, MSGBOX_NPC
# 27 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	end
# 28 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 29 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_Text_FaithInYourPokemon:
# 30 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "You can't consider yourself a real\n"
# 31 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "TRAINER if you don't have faith\l"
# 32 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "in your POKéMON.\p"
# 33 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "Only those people who can believe\n"
# 34 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "in their battling POKéMON can win\l"
# 35 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "through to the very end.$"
# 36 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 37 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_Text_VisitForBattleTent:
# 38 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "The reason why anyone would visit\n"
# 39 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "Portrait Town…\p"
# 40 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "It's the Concert Hall. It goes without\n"
# 41 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "saying!\p"
# 42 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "Everyone comes here to see Marina!$"

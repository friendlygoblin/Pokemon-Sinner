# 1 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_MapScripts::
# 5 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_PokemonCenter_1F_OnTransition
# 6 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_OnTransition:
# 10 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_GODZILLAND
# 11 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 12 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 13 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_Nurse::
# 14 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 15 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 16 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 17 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 18 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	release
# 19 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 20 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 21 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_Girl::
# 22 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_Text_FossilManiacEdgeOfTown, MSGBOX_NPC
# 23 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 24 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 25 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_ExpertM::
# 26 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_Text_PlantHardyTrees, MSGBOX_NPC
# 27 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 28 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 29 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Text_FossilManiacEdgeOfTown:
# 30 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "I wonder what POKéMON looked like\n"
# 31 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "long, long ago… \p"
# 32 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "There's a museum dedicated to fossils\n"
# 33 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "in Crystal Stream City.$"
# 34 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 35 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Text_PlantHardyTrees:
# 36 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Sometimes, tourists think big scary\n"
# 37 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "POKéMON live here.\p"
# 38 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "They don't come close to this town, \n"
# 39 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "they live on the smaller islands.$"

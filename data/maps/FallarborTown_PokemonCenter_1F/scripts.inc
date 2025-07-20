# 1 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_MapScripts::
# 5 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_Nurse::
# 8 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 9 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 10 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 11 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 12 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	release
# 13 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 14 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 15 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_Girl::
# 16 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_Text_FossilManiacEdgeOfTown, MSGBOX_NPC
# 17 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 18 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_ExpertM::
# 20 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_Text_PlantHardyTrees, MSGBOX_NPC
# 21 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 22 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 23 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Text_FossilManiacEdgeOfTown:
# 24 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "I wonder what POKéMON looked like\n"
# 25 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "long, long ago?\p"
# 26 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Maybe the Fossil Guy at the edge\n"
# 27 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "of town will know.$"
# 28 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 29 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Text_PlantHardyTrees:
# 30 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Sometimes, tourists think big scary\n"
# 31 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "POKéMON live here.\p"
# 32 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "They don't come close to this town, \n"
# 33 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "they live on the smaller islands.$"

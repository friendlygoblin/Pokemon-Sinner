Godzilland_ConcertHall_Lobby_MapScripts::
# 2 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Godzilland_SetEmilyFlag
	.byte 0


Godzilland_SetEmilyFlag::
# 7 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	setflag FLAG_GODZILLANDHALL_EMILY
	return


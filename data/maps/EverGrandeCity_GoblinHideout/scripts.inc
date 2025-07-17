EverGrandeCity_GoblinHideout_MapScripts::
# 3 "data/maps/EverGrandeCity_GoblinHideout/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HideGob
	.byte 0


EventScript_GoblinHideout_GoblinEncounter::
# 11 "data/maps/EverGrandeCity_GoblinHideout/scripts.pory"
	lock
# 12 "data/maps/EverGrandeCity_GoblinHideout/scripts.pory"
	clearflag FLAG_GOBLINCAVE
# 13 "data/maps/EverGrandeCity_GoblinHideout/scripts.pory"
	addobject 1
# 14 "data/maps/EverGrandeCity_GoblinHideout/scripts.pory"
	playse SE_DOOR
# 15 "data/maps/EverGrandeCity_GoblinHideout/scripts.pory"
	waitse
# 16 "data/maps/EverGrandeCity_GoblinHideout/scripts.pory"
	applymovement 1, gobemote
# 17 "data/maps/EverGrandeCity_GoblinHideout/scripts.pory"
	playse SE_PIN
# 18 "data/maps/EverGrandeCity_GoblinHideout/scripts.pory"
	waitse
# 19 "data/maps/EverGrandeCity_GoblinHideout/scripts.pory"
	applymovement 1, GoblinArrive
# 20 "data/maps/EverGrandeCity_GoblinHideout/scripts.pory"
	waitmovement 0
# 21 "data/maps/EverGrandeCity_GoblinHideout/scripts.pory"
	release
	end


HideGob::
# 26 "data/maps/EverGrandeCity_GoblinHideout/scripts.pory"
	removeobject 1
# 27 "data/maps/EverGrandeCity_GoblinHideout/scripts.pory"
	setflag FLAG_GOBLINCAVE
	end


# 31 "data/maps/EverGrandeCity_GoblinHideout/scripts.pory"
GoblinArrive:
# 32 "data/maps/EverGrandeCity_GoblinHideout/scripts.pory"
	walk_up
# 32 "data/maps/EverGrandeCity_GoblinHideout/scripts.pory"
	walk_up
	step_end

# 36 "data/maps/EverGrandeCity_GoblinHideout/scripts.pory"
gobemote:
# 37 "data/maps/EverGrandeCity_GoblinHideout/scripts.pory"
	emote_exclamation_mark
	step_end

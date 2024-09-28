EverGrandeCity_GoblinHideout_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, HideGob
	.byte 0


EventScript_GoblinHideout_GoblinEncounter::
	lock
	clearflag FLAG_GOBLINCAVE
	addobject 1
	playse SE_DOOR
	waitse
	applymovement 1, gobemote
	playse SE_PIN
	waitse
	applymovement 1, GoblinArrive
	waitmovement 0
	release
	end


HideGob::
	removeobject 1
	setflag FLAG_GOBLINCAVE
	end


GoblinArrive:
	walk_up
	walk_up
	step_end

gobemote:
	emote_exclamation_mark
	step_end

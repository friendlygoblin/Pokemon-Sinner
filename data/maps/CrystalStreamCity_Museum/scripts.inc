CrystalStreamCity_Museum_MapScripts::
# 2 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CSCM_BringBackScientist
	.byte 0


CSCM_BringBackScientist::
# 6 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	clearflag FLAG_UNUSED_0x0E9
	return


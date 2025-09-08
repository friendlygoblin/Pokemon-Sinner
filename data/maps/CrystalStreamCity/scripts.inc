CrystalStreamCity_MapScripts::
# 2 "data/maps/CrystalStreamCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CSCCH_FlagStuff
	.byte 0


CSCCH_FlagStuff::
# 6 "data/maps/CrystalStreamCity/scripts.pory"
	setflag FLAG_LIZZIE_ROUTE6
# 7 "data/maps/CrystalStreamCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 8 "data/maps/CrystalStreamCity/scripts.pory"
	compare VAR_SUNDAYCAVE_STATE, 4
	goto_if_eq CSCCH_FlagStuff_1
	return

CSCCH_FlagStuff_1:
# 9 "data/maps/CrystalStreamCity/scripts.pory"
	setflag FLAG_CSCCH_CHAPPELLDOOR
	return


CrystalStreamCity_Sign::
# 14 "data/maps/CrystalStreamCity/scripts.pory"
	lock
# 15 "data/maps/CrystalStreamCity/scripts.pory"
	msgbox CrystalStreamCity_Sign_Text_0
# 16 "data/maps/CrystalStreamCity/scripts.pory"
	releaseall
	end


CSCCH_Sign::
# 21 "data/maps/CrystalStreamCity/scripts.pory"
	lock
# 22 "data/maps/CrystalStreamCity/scripts.pory"
	msgbox CSCCH_Sign_Text_0
# 23 "data/maps/CrystalStreamCity/scripts.pory"
	releaseall
	end


MuseumSign::
# 28 "data/maps/CrystalStreamCity/scripts.pory"
	lock
# 29 "data/maps/CrystalStreamCity/scripts.pory"
	msgbox MuseumSign_Text_0
# 30 "data/maps/CrystalStreamCity/scripts.pory"
	releaseall
	end


CSC_Swimmer::
# 35 "data/maps/CrystalStreamCity/scripts.pory"
	trainerbattle_single TRAINER_DAVID, CSC_Swimmer_BattleIntro, CSC_Swimmer_Defeated
# 36 "data/maps/CrystalStreamCity/scripts.pory"
	msgbox CSC_Swimmer_PostBattle, MSGBOX_AUTOCLOSE
	return


CrystalStreamCity_Sign_Text_0:
# 15 "data/maps/CrystalStreamCity/scripts.pory"
	.string "Welcome to Crystal Stream City!\p"
	.string "Refresh yourself in the stream and\n"
	.string "enjoy the Museum!$"

CSCCH_Sign_Text_0:
# 22 "data/maps/CrystalStreamCity/scripts.pory"
	.string "CRYSTAL STREAM CITY CONCERT HALL\p"
	.string "COME CHALLENGE CHAPPELL ROAN$"

MuseumSign_Text_0:
# 29 "data/maps/CrystalStreamCity/scripts.pory"
	.string "Sinner Museum\p"
	.string "Art and history all in one place!$"

CSC_Swimmer_BattleIntro::
# 39 "data/maps/CrystalStreamCity/scripts.pory"
	.string "Ahoy, there! Did you visit Big\n"
	.string "Dog Island, too?$"

CSC_Swimmer_Defeated::
# 44 "data/maps/CrystalStreamCity/scripts.pory"
	.string "I'm sinking!\n"
	.string "Glub… Glub…$"

CSC_Swimmer_PostBattle::
# 49 "data/maps/CrystalStreamCity/scripts.pory"
	.string "Some people even go inside that\n"
	.string "cave on Big Dog Island.$"

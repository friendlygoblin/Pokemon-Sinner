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
	goto_if_eq CSCCH_FlagStuff_2
CSCCH_FlagStuff_1:
# 11 "data/maps/CrystalStreamCity/scripts.pory"
	goto_if_set FLAG_CHAPPELLHALL_LIZZIE, CSCCH_FlagStuff_6
CSCCH_FlagStuff_5:
# 15 "data/maps/CrystalStreamCity/scripts.pory"
	setflag FLAG_PARLOURZINE_LIZZIE
	return

CSCCH_FlagStuff_2:
# 9 "data/maps/CrystalStreamCity/scripts.pory"
	setflag FLAG_CSCCH_CHAPPELLDOOR
	goto CSCCH_FlagStuff_1

CSCCH_FlagStuff_4:
# 12 "data/maps/CrystalStreamCity/scripts.pory"
	clearflag FLAG_PARLOURZINE_LIZZIE
	return

CSCCH_FlagStuff_6:
# 11 "data/maps/CrystalStreamCity/scripts.pory"
	goto_if_unset FLAG_LIZZIE_INTERVIEW_COMPLETED, CSCCH_FlagStuff_4
	goto CSCCH_FlagStuff_5


CrystalStreamCity_Sign::
# 20 "data/maps/CrystalStreamCity/scripts.pory"
	lock
# 21 "data/maps/CrystalStreamCity/scripts.pory"
	msgbox CrystalStreamCity_Sign_Text_0
# 22 "data/maps/CrystalStreamCity/scripts.pory"
	releaseall
	end


CSCCH_Sign::
# 27 "data/maps/CrystalStreamCity/scripts.pory"
	lock
# 28 "data/maps/CrystalStreamCity/scripts.pory"
	msgbox CSCCH_Sign_Text_0
# 29 "data/maps/CrystalStreamCity/scripts.pory"
	releaseall
	end


MuseumSign::
# 34 "data/maps/CrystalStreamCity/scripts.pory"
	lock
# 35 "data/maps/CrystalStreamCity/scripts.pory"
	msgbox MuseumSign_Text_0
# 36 "data/maps/CrystalStreamCity/scripts.pory"
	releaseall
	end


ParlourZineSign::
# 41 "data/maps/CrystalStreamCity/scripts.pory"
	lock
# 42 "data/maps/CrystalStreamCity/scripts.pory"
	msgbox ParlourZineSign_Text_0
# 43 "data/maps/CrystalStreamCity/scripts.pory"
	releaseall
	end


BikeSign::
# 48 "data/maps/CrystalStreamCity/scripts.pory"
	lock
# 49 "data/maps/CrystalStreamCity/scripts.pory"
	msgbox BikeSign_Text_0
# 50 "data/maps/CrystalStreamCity/scripts.pory"
	releaseall
	end


CSC_OldLady::
# 55 "data/maps/CrystalStreamCity/scripts.pory"
	lock
# 56 "data/maps/CrystalStreamCity/scripts.pory"
	faceplayer
# 57 "data/maps/CrystalStreamCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_AERIAL_ACE, CSC_OldLady_2
# 61 "data/maps/CrystalStreamCity/scripts.pory"
	msgbox CSC_OldLady_Text_1
# 62 "data/maps/CrystalStreamCity/scripts.pory"
	giveitem ITEM_TM40
# 63 "data/maps/CrystalStreamCity/scripts.pory"
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
# 64 "data/maps/CrystalStreamCity/scripts.pory"
	msgbox CSC_OldLady_Text_0
CSC_OldLady_1:
# 66 "data/maps/CrystalStreamCity/scripts.pory"
	releaseall
	end

CSC_OldLady_2:
# 58 "data/maps/CrystalStreamCity/scripts.pory"
	msgbox CSC_OldLady_Text_0
	goto CSC_OldLady_1


CSC_ParlourZineGirl::
# 71 "data/maps/CrystalStreamCity/scripts.pory"
	lock
# 72 "data/maps/CrystalStreamCity/scripts.pory"
	faceplayer
# 73 "data/maps/CrystalStreamCity/scripts.pory"
	msgbox CSC_ParlourZineGirl_Text_0
# 74 "data/maps/CrystalStreamCity/scripts.pory"
	releaseall
	end


CSC_OceanGirl::
# 79 "data/maps/CrystalStreamCity/scripts.pory"
	lock
# 80 "data/maps/CrystalStreamCity/scripts.pory"
	faceplayer
# 81 "data/maps/CrystalStreamCity/scripts.pory"
	msgbox CSC_OceanGirl_Text_0
# 82 "data/maps/CrystalStreamCity/scripts.pory"
	releaseall
	end


CSC_MuseumBoy::
# 87 "data/maps/CrystalStreamCity/scripts.pory"
	lock
# 88 "data/maps/CrystalStreamCity/scripts.pory"
	faceplayer
# 89 "data/maps/CrystalStreamCity/scripts.pory"
	msgbox CSC_MuseumBoy_Text_0
# 90 "data/maps/CrystalStreamCity/scripts.pory"
	releaseall
	end


CSC_ChappellGirl::
# 95 "data/maps/CrystalStreamCity/scripts.pory"
	lock
# 96 "data/maps/CrystalStreamCity/scripts.pory"
	faceplayer
# 97 "data/maps/CrystalStreamCity/scripts.pory"
	msgbox CSC_ChappellGirl_Text_0
# 98 "data/maps/CrystalStreamCity/scripts.pory"
	releaseall
	end


CSC_Azurill::
# 103 "data/maps/CrystalStreamCity/scripts.pory"
	lock
# 104 "data/maps/CrystalStreamCity/scripts.pory"
	faceplayer
# 105 "data/maps/CrystalStreamCity/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 106 "data/maps/CrystalStreamCity/scripts.pory"
	waitmoncry
# 107 "data/maps/CrystalStreamCity/scripts.pory"
	msgbox CSC_Azurill_Text_0
# 108 "data/maps/CrystalStreamCity/scripts.pory"
	releaseall
	end


CSC_Swimmer::
# 113 "data/maps/CrystalStreamCity/scripts.pory"
	trainerbattle_single TRAINER_DAVID, CSC_Swimmer_BattleIntro, CSC_Swimmer_Defeated
# 114 "data/maps/CrystalStreamCity/scripts.pory"
	msgbox CSC_Swimmer_PostBattle, MSGBOX_AUTOCLOSE
	return


CrystalStreamCity_Sign_Text_0:
# 21 "data/maps/CrystalStreamCity/scripts.pory"
	.string "Welcome to Crystal Stream City!\p"
	.string "Refresh yourself in the stream and\n"
	.string "enjoy the Museum!$"

CSCCH_Sign_Text_0:
# 28 "data/maps/CrystalStreamCity/scripts.pory"
	.string "CRYSTAL STREAM CITY CONCERT HALL\p"
	.string "COME CHALLENGE CHAPPELL ROAN$"

MuseumSign_Text_0:
# 35 "data/maps/CrystalStreamCity/scripts.pory"
	.string "Sinner Museum\p"
	.string "Art and history all in one place!$"

ParlourZineSign_Text_0:
# 42 "data/maps/CrystalStreamCity/scripts.pory"
	.string "ParlourZine HQ\p"
	.string "Exclusive interview with very special\n"
	.string "guest in next issue!$"

BikeSign_Text_0:
# 49 "data/maps/CrystalStreamCity/scripts.pory"
	.string "Crystal Stream City Bike Shop\p"
	.string "Just ride!$"

CSC_OldLady_Text_0:
# 58 "data/maps/CrystalStreamCity/scripts.pory"
	.string "That move, Aerial Ace, got me many\n"
	.string "victories back in my prime.\p"
	.string "I know it'll be useful to you too!$"

CSC_OldLady_Text_1:
# 61 "data/maps/CrystalStreamCity/scripts.pory"
	.string "You know, I was a great POKéMON trainer\n"
	.string "back in the day.\p"
	.string "I won many battles thanks to a strong\n"
	.string "move!\p"
	.string "Here, you're a POKéMON Trainer so you'll\n"
	.string "know how to use this!$"

CSC_ParlourZineGirl_Text_0:
# 73 "data/maps/CrystalStreamCity/scripts.pory"
	.string "The editors of ParlourZine work here!\p"
	.string "They're planning an interview with\n"
	.string "someone very special, but they made me\l"
	.string "promise not to tell who it is.\p"
	.string "I can just say they're suuuuper cool!$"

CSC_OceanGirl_Text_0:
# 81 "data/maps/CrystalStreamCity/scripts.pory"
	.string "Oh, you come from the sea?\p"
	.string "I wish I could swim or had a POKéMON\n"
	.string "that knows Surf, I'd love to visit the\l"
	.string "islands over there.$"

CSC_MuseumBoy_Text_0:
# 89 "data/maps/CrystalStreamCity/scripts.pory"
	.string "The Museum has a special program where\n"
	.string "they turn your fossils into POKéMON!\p"
	.string "It's not magic, it's science!$"

CSC_ChappellGirl_Text_0:
# 97 "data/maps/CrystalStreamCity/scripts.pory"
	.string "When I grow up, I wanna be just like\n"
	.string "Chappell Roan!$"

CSC_Azurill_Text_0:
# 107 "data/maps/CrystalStreamCity/scripts.pory"
	.string "AZURILL: Riiii!$"

CSC_Swimmer_BattleIntro::
# 117 "data/maps/CrystalStreamCity/scripts.pory"
	.string "Ahoy, there! Did you visit Big\n"
	.string "Dog Island, too?$"

CSC_Swimmer_Defeated::
# 122 "data/maps/CrystalStreamCity/scripts.pory"
	.string "I'm sinking!\n"
	.string "Glub… Glub…$"

CSC_Swimmer_PostBattle::
# 127 "data/maps/CrystalStreamCity/scripts.pory"
	.string "Some people even go inside that\n"
	.string "cave on Big Dog Island.$"

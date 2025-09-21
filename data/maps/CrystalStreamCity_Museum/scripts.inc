CrystalStreamCity_Museum_MapScripts::
# 2 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CSCM_BringBackScientist
	.byte 0


CSCM_BringBackScientist::
# 6 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	clearflag FLAG_CSC_MUSEUM_SCIENTIST
	return


CSCM_Abi::
# 10 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	lock
# 11 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	faceplayer
# 12 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	msgbox Museum_AbiWereVisiting, MSGBOX_AUTOCLOSE
# 13 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	fadescreen FADE_TO_BLACK
# 14 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	removeobject 1
# 15 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	setflag FLAG_CSCM_ABI
# 16 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	playse SE_EXIT
# 17 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	waitse
# 18 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 19 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	release
	end


Museum_Girl::
# 40 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	lock
# 41 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	faceplayer
# 42 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	msgbox Museum_Girl_Text_0
# 43 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	release
	end


Museum_OldLady::
# 48 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	lock
# 49 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	faceplayer
# 50 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	msgbox Museum_OldLady_Text_0
# 51 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	release
	end


Museum_Starly::
# 56 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	lock
# 57 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	faceplayer
# 58 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	playmoncry SPECIES_STARLY, CRY_MODE_NORMAL
# 59 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	msgbox Museum_Starly_Text_0
# 60 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	release
	end


Museum_Boy::
# 65 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	lock
# 66 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	faceplayer
# 67 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	msgbox Museum_Boy_Text_0
# 68 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	release
	end


Museum_Statue::
# 73 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	lock
# 74 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	msgbox Museum_Statue_Text_0
# 75 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	release
	end


Museum_StoneTable::
# 80 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	lock
# 81 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	msgbox Museum_StoneTable_Text_0
# 82 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	release
	end


Museum_Girl_Text_0:
# 42 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	.string "I love this Museum, and I'm so happy it's\n"
	.string "free because that means I can visit\l"
	.string "every day!$"

Museum_OldLady_Text_0:
# 50 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	.string "Those statues are beautiful, I'd love\n"
	.string "to see the POKéMON they're based on.$"

Museum_Starly_Text_0:
# 59 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	.string "STARLY: Piiip!$"

Museum_Boy_Text_0:
# 67 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	.string "My ultimate life goal is to discover\n"
	.string "something and have it exposed here!$"

Museum_Statue_Text_0:
# 74 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	.string "It's a statue of an ancient POKéMON$"

Museum_StoneTable_Text_0:
# 81 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	.string "It's stone slab with texts in an ancient\n"
	.string "language on it.$"

Museum_AbiWereVisiting::
# 23 "data/maps/CrystalStreamCity_Museum/scripts.pory"
	.string "ABIGAIL: {PLAYER}, hi!\n"
	.string "What are you up to? \p"
	.string "Me? Oh, I'm just visiting the Museum, \n"
	.string "we have a bit of time off before our \l"
	.string "first Mirror City show.\p"
	.string "I really like Crystal Stream City, we \n"
	.string "all do. \p"
	.string "We wrote Sinner around the time we \n"
	.string "first visited it, you know!\p"
	.string "Well, I think I'm done here, I'll see  \n"
	.string "if Lizzie is done with whatever they're\l"
	.string "doing.\p"
	.string "It was nice seeing you, bye!$"

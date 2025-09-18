# 1 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_MapScripts::
# 5 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_PokemonCenter_1F_OnTransition
# 6 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_OnTransition:
# 10 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_NIGHTINGALE_CITY
# 11 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_GODZILLAND_PORYGON, 0
# 12 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 16 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 20 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end

PetalburgCity_PokemonCenter_1F_EventScript_FatMan::
# 26 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 27 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 28 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_EventScript_FatMan_Text_0, MSGBOX_NPC
	end


PetalburgCity_PokemonCenter_1F_EventScript_Youngster::
# 33 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 34 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 35 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_EventScript_Youngster_Text_0, MSGBOX_NPC
	end


IcePunchWoman::
# 40 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 41 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 42 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ICE_PUNCH, IcePunchWoman_2
# 46 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox IcePunchWoman_Text_1
# 47 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_TM52
# 48 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox IcePunchWoman_Text_2
# 49 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_ICE_PUNCH
IcePunchWoman_1:
# 51 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
	end

IcePunchWoman_2:
# 43 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox IcePunchWoman_Text_0, MSGBOX_AUTOCLOSE
	goto IcePunchWoman_1


PetalburgCity_PokemonCenter_1F_EventScript_FatMan_Text_0:
# 28 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "I find music stars so impressive.\p"
	.string "They're good at music AND at POKéMON\n"
	.string "battles, how do they find the time to\l"
	.string "practice both?$"

PetalburgCity_PokemonCenter_1F_EventScript_Youngster_Text_0:
# 35 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "We all have a favourite POKéMON!\p"
	.string "Who's yours?\n"
	.string "Mine is Shroomish$"

IcePunchWoman_Text_0:
# 43 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "I like POKéMON Centers, even if I don't\n"
	.string "battle.\p"
	.string "You still meet a variety of people!$"

IcePunchWoman_Text_1:
# 46 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "My sister is a Battle Girl.\p"
	.string "She gave me this but I don't do POKéMON\n"
	.string "battles, so I'll never use it.\p"
	.string "Take it, I insist!$"

IcePunchWoman_Text_2:
# 48 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "I think it's Fire Punch.\nPretty self explanatory, but I'm not an expert.$"

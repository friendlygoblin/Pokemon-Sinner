CrystalStreamCity_Museum_2F_MapScripts::
# 2 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CSCM_MakeFossilReady
	.byte 0


CSCM_MakeFossilReady::
# 6 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	goto_if_eq CSCM_MakeFossilReady_2
CSCM_MakeFossilReady_1:
	end

CSCM_MakeFossilReady_2:
# 7 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 2
	goto CSCM_MakeFossilReady_1


CSCM_ChooseFossil::
	checkitem ITEM_ROOT_FOSSIL
# 0 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CSCM_ChooseFossil_1
	checkitem ITEM_CLAW_FOSSIL
# 0 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CSCM_ChooseFossil_1
	checkitem ITEM_SKULL_FOSSIL
# 0 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CSCM_ChooseFossil_1
	checkitem ITEM_ARMOR_FOSSIL
# 0 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CSCM_ChooseFossil_1
	checkitem ITEM_COVER_FOSSIL
# 0 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CSCM_ChooseFossil_1
	checkitem ITEM_PLUME_FOSSIL
# 0 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CSCM_ChooseFossil_1
	checkitem ITEM_JAW_FOSSIL
# 0 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CSCM_ChooseFossil_1
	checkitem ITEM_SAIL_FOSSIL
# 0 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CSCM_ChooseFossil_1
	checkitem ITEM_OLD_AMBER
# 0 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CSCM_ChooseFossil_1
# 83 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	msgbox CSCM_NoFossils
	return

CSCM_ChooseFossil_1:
	checkitem ITEM_ROOT_FOSSIL
# 0 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CSCM_ChooseFossil_21
CSCM_ChooseFossil_20:
	checkitem ITEM_CLAW_FOSSIL
# 0 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CSCM_ChooseFossil_24
CSCM_ChooseFossil_23:
	checkitem ITEM_SKULL_FOSSIL
# 0 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CSCM_ChooseFossil_27
CSCM_ChooseFossil_26:
	checkitem ITEM_ARMOR_FOSSIL
# 0 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CSCM_ChooseFossil_30
CSCM_ChooseFossil_29:
	checkitem ITEM_COVER_FOSSIL
# 0 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CSCM_ChooseFossil_33
CSCM_ChooseFossil_32:
	checkitem ITEM_PLUME_FOSSIL
# 0 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CSCM_ChooseFossil_36
CSCM_ChooseFossil_35:
	checkitem ITEM_JAW_FOSSIL
# 0 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CSCM_ChooseFossil_39
CSCM_ChooseFossil_38:
	checkitem ITEM_SAIL_FOSSIL
# 0 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CSCM_ChooseFossil_42
CSCM_ChooseFossil_41:
	checkitem ITEM_OLD_AMBER
# 0 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CSCM_ChooseFossil_45
CSCM_ChooseFossil_44:
# 42 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	dynmultipush CSCM_ChooseFossil_Text_9, ITEM_NONE
# 43 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 3, DYN_MULTICHOICE_CB_NONE
# 45 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	switch VAR_RESULT
# 46 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	case ITEM_ROOT_FOSSIL, CSCM_ChooseFossil_49
# 48 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	case ITEM_CLAW_FOSSIL, CSCM_ChooseFossil_50
# 50 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	case ITEM_SKULL_FOSSIL, CSCM_ChooseFossil_51
# 52 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	case ITEM_ARMOR_FOSSIL, CSCM_ChooseFossil_52
# 54 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	case ITEM_COVER_FOSSIL, CSCM_ChooseFossil_53
# 56 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	case ITEM_PLUME_FOSSIL, CSCM_ChooseFossil_54
# 58 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	case ITEM_JAW_FOSSIL, CSCM_ChooseFossil_55
# 60 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	case ITEM_SAIL_FOSSIL, CSCM_ChooseFossil_56
# 62 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	case ITEM_OLD_AMBER, CSCM_ChooseFossil_57
# 64 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	case ITEM_NONE, CSCM_ChooseFossil_58
# 69 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	msgbox CSCM_NoFossilGiven, MSGBOX_AUTOCLOSE
# 70 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	releaseall
	end

CSCM_ChooseFossil_21:
# 16 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	dynmultipush CSCM_ChooseFossil_Text_0, ITEM_ROOT_FOSSIL
	goto CSCM_ChooseFossil_20

CSCM_ChooseFossil_24:
# 19 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	dynmultipush CSCM_ChooseFossil_Text_1, ITEM_CLAW_FOSSIL
	goto CSCM_ChooseFossil_23

CSCM_ChooseFossil_27:
# 22 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	dynmultipush CSCM_ChooseFossil_Text_2, ITEM_SKULL_FOSSIL
	goto CSCM_ChooseFossil_26

CSCM_ChooseFossil_30:
# 25 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	dynmultipush CSCM_ChooseFossil_Text_3, ITEM_ARMOR_FOSSIL
	goto CSCM_ChooseFossil_29

CSCM_ChooseFossil_33:
# 28 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	dynmultipush CSCM_ChooseFossil_Text_4, ITEM_COVER_FOSSIL
	goto CSCM_ChooseFossil_32

CSCM_ChooseFossil_36:
# 31 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	dynmultipush CSCM_ChooseFossil_Text_5, ITEM_PLUME_FOSSIL
	goto CSCM_ChooseFossil_35

CSCM_ChooseFossil_39:
# 34 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	dynmultipush CSCM_ChooseFossil_Text_6, ITEM_JAW_FOSSIL
	goto CSCM_ChooseFossil_38

CSCM_ChooseFossil_42:
# 37 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	dynmultipush CSCM_ChooseFossil_Text_7, ITEM_SAIL_FOSSIL
	goto CSCM_ChooseFossil_41

CSCM_ChooseFossil_45:
# 40 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	dynmultipush CSCM_ChooseFossil_Text_8, ITEM_OLD_AMBER
	goto CSCM_ChooseFossil_44

CSCM_ChooseFossil_47:
# 74 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
# 75 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	msgbox CSCM_JustGaveFossil, MSGBOX_AUTOCLOSE
# 76 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	applymovement 1, CSCM_ScientistLeaves
# 77 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	waitmovement 0
# 78 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	removeobject 1
# 79 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	setflag FLAG_UNUSED_0x0E9
	return

CSCM_ChooseFossil_49:
# 47 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 1
	goto CSCM_ChooseFossil_47

CSCM_ChooseFossil_50:
# 49 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 2
	goto CSCM_ChooseFossil_47

CSCM_ChooseFossil_51:
# 51 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 3
	goto CSCM_ChooseFossil_47

CSCM_ChooseFossil_52:
# 53 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 4
	goto CSCM_ChooseFossil_47

CSCM_ChooseFossil_53:
# 55 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 5
	goto CSCM_ChooseFossil_47

CSCM_ChooseFossil_54:
# 57 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 6
	goto CSCM_ChooseFossil_47

CSCM_ChooseFossil_55:
# 59 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 7
	goto CSCM_ChooseFossil_47

CSCM_ChooseFossil_56:
# 61 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 8
	goto CSCM_ChooseFossil_47

CSCM_ChooseFossil_57:
# 63 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 9
	goto CSCM_ChooseFossil_47

CSCM_ChooseFossil_58:
# 65 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	msgbox CSCM_NoFossilGiven, MSGBOX_AUTOCLOSE
# 66 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	releaseall
	end


CSCM_GiveFossil::
# 88 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	msgbox CSCM_FinishedYourFossil
# 89 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 90 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq CSCM_GiveFossil_1
# 94 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	switch VAR_WHICH_FOSSIL_REVIVED
# 95 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	case 1, CSCM_GiveFossil_6
# 102 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	case 2, CSCM_GiveFossil_7
# 109 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	case 3, CSCM_GiveFossil_8
# 116 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	case 4, CSCM_GiveFossil_9
# 123 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	case 5, CSCM_GiveFossil_10
# 130 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	case 6, CSCM_GiveFossil_11
# 137 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	case 7, CSCM_GiveFossil_12
# 144 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	case 8, CSCM_GiveFossil_13
# 151 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	case 9, CSCM_GiveFossil_14
CSCM_GiveFossil_4:
# 159 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	hidemonpic
# 160 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	call NicknamePartyMon
# 161 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	msgbox CSCM_GiveFossil_Text_10
# 162 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 0
# 163 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 0
	return

CSCM_GiveFossil_1:
# 91 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	msgbox CSCM_GiveFossil_Text_0
	return

CSCM_GiveFossil_6:
# 96 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	playmoncry SPECIES_LILEEP, CRY_MODE_NORMAL
# 97 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	showmonpic SPECIES_LILEEP, 10, 3
# 98 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	waitmoncry
# 99 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	givemon SPECIES_LILEEP, 20
# 100 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	msgbox CSCM_GiveFossil_Text_1
# 101 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	removeitem ITEM_ROOT_FOSSIL
	goto CSCM_GiveFossil_4

CSCM_GiveFossil_7:
# 103 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	playmoncry SPECIES_ANORITH, CRY_MODE_NORMAL
# 104 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	showmonpic SPECIES_ANORITH, 10, 3
# 105 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	waitmoncry
# 106 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	givemon SPECIES_ANORITH, 20
# 107 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	msgbox CSCM_GiveFossil_Text_2
# 108 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	removeitem ITEM_CLAW_FOSSIL
	goto CSCM_GiveFossil_4

CSCM_GiveFossil_8:
# 110 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	playmoncry SPECIES_CRANIDOS, CRY_MODE_NORMAL
# 111 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	showmonpic SPECIES_CRANIDOS, 10, 3
# 112 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	waitmoncry
# 113 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	givemon SPECIES_CRANIDOS, 20
# 114 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	msgbox CSCM_GiveFossil_Text_3
# 115 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	removeitem ITEM_SKULL_FOSSIL
	goto CSCM_GiveFossil_4

CSCM_GiveFossil_9:
# 117 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	playmoncry SPECIES_SHIELDON, CRY_MODE_NORMAL
# 118 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	showmonpic SPECIES_SHIELDON, 10, 3
# 119 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	waitmoncry
# 120 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	givemon SPECIES_SHIELDON, 20
# 121 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	msgbox CSCM_GiveFossil_Text_4
# 122 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	removeitem ITEM_ARMOR_FOSSIL
	goto CSCM_GiveFossil_4

CSCM_GiveFossil_10:
# 124 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	playmoncry SPECIES_TIRTOUGA, CRY_MODE_NORMAL
# 125 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	showmonpic SPECIES_TIRTOUGA, 10, 3
# 126 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	waitmoncry
# 127 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	givemon SPECIES_TIRTOUGA, 20
# 128 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	msgbox CSCM_GiveFossil_Text_5
# 129 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	removeitem ITEM_COVER_FOSSIL
	goto CSCM_GiveFossil_4

CSCM_GiveFossil_11:
# 131 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	playmoncry SPECIES_ARCHEN, CRY_MODE_NORMAL
# 132 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	showmonpic SPECIES_ARCHEN, 10, 3
# 133 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	waitmoncry
# 134 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	givemon SPECIES_ARCHEN, 20
# 135 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	msgbox CSCM_GiveFossil_Text_6
# 136 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	removeitem ITEM_PLUME_FOSSIL
	goto CSCM_GiveFossil_4

CSCM_GiveFossil_12:
# 138 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	playmoncry SPECIES_TYRUNT, CRY_MODE_NORMAL
# 139 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	showmonpic SPECIES_TYRUNT, 10, 3
# 140 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	waitmoncry
# 141 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	givemon SPECIES_TYRUNT, 20
# 142 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	msgbox CSCM_GiveFossil_Text_7
# 143 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	removeitem ITEM_JAW_FOSSIL
	goto CSCM_GiveFossil_4

CSCM_GiveFossil_13:
# 145 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	playmoncry SPECIES_AMAURA, CRY_MODE_NORMAL
# 146 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	showmonpic SPECIES_AMAURA, 10, 3
# 147 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	waitmoncry
# 148 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	givemon SPECIES_AMAURA, 20
# 149 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	msgbox CSCM_GiveFossil_Text_8
# 150 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	removeitem ITEM_SAIL_FOSSIL
	goto CSCM_GiveFossil_4

CSCM_GiveFossil_14:
# 152 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	playmoncry SPECIES_AERODACTYL, CRY_MODE_NORMAL
# 153 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	showmonpic SPECIES_AERODACTYL, 10, 3
# 154 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	waitmoncry
# 155 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	givemon SPECIES_AERODACTYL, 20
# 156 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	msgbox CSCM_GiveFossil_Text_9
# 157 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	removeitem ITEM_OLD_AMBER
	goto CSCM_GiveFossil_4


CSCM_FossilScientist::
# 168 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	lock
# 169 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	faceplayer
# 170 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	switch VAR_FOSSIL_RESURRECTION_STATE
# 171 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	case 0, CSCM_FossilScientist_3
# 174 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	case 1, CSCM_FossilScientist_4
# 176 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	case 2, CSCM_FossilScientist_5
CSCM_FossilScientist_1:
# 179 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	release
	end

CSCM_FossilScientist_3:
# 172 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	msgbox CSCM_WelcomeToHistoryFloor
# 173 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	call CSCM_ChooseFossil
	goto CSCM_FossilScientist_1

CSCM_FossilScientist_4:
# 175 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	msgbox CSCM_AlreadyWorkingOnFossil, MSGBOX_AUTOCLOSE
	goto CSCM_FossilScientist_1

CSCM_FossilScientist_5:
# 177 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	call CSCM_GiveFossil
	goto CSCM_FossilScientist_1


# 222 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
CSCM_ScientistLeaves:
# 223 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	walk_up
# 223 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	walk_up
# 224 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	step_end

DebugFossils::
# 228 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	lock
# 229 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	giveitem ITEM_ROOT_FOSSIL
# 230 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	giveitem ITEM_CLAW_FOSSIL
# 231 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	giveitem ITEM_SKULL_FOSSIL
# 232 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	giveitem ITEM_ARMOR_FOSSIL
# 233 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	giveitem ITEM_COVER_FOSSIL
# 234 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	giveitem ITEM_PLUME_FOSSIL
# 235 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	giveitem ITEM_JAW_FOSSIL
# 236 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	giveitem ITEM_SAIL_FOSSIL
# 237 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	giveitem ITEM_OLD_AMBER
# 238 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	setflag FLAG_UNUSED_0x96
# 239 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	release
	end


CSCM_ChooseFossil_Text_0:
# 16 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	.string "Root Fossil$"

CSCM_ChooseFossil_Text_1:
# 19 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	.string "Claw Fossil$"

CSCM_ChooseFossil_Text_2:
# 22 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	.string "Skull Fossil$"

CSCM_ChooseFossil_Text_3:
# 25 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	.string "Armor Fossil$"

CSCM_ChooseFossil_Text_4:
# 28 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	.string "Cover Fossil$"

CSCM_ChooseFossil_Text_5:
# 31 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	.string "Plume Fossil$"

CSCM_ChooseFossil_Text_6:
# 34 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	.string "Jaw Fossil$"

CSCM_ChooseFossil_Text_7:
# 37 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	.string "Sail Fossil$"

CSCM_ChooseFossil_Text_8:
# 40 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	.string "Old Amber$"

CSCM_ChooseFossil_Text_9:
# 42 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	.string "Cancel$"

CSCM_GiveFossil_Text_0:
# 91 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	.string "Ah, you don't have enough space!\p"
	.string "I'll keep the POKéMON here for you while\n"
	.string "you make space.$"

CSCM_GiveFossil_Text_1:
# 100 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	.string "Received Lileep!$"

CSCM_GiveFossil_Text_2:
# 107 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	.string "Received Anorith!$"

CSCM_GiveFossil_Text_3:
# 114 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	.string "Received Cranidos!$"

CSCM_GiveFossil_Text_4:
# 121 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	.string "Received Shieldon!$"

CSCM_GiveFossil_Text_5:
# 128 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	.string "Received Tirtouga!$"

CSCM_GiveFossil_Text_6:
# 135 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	.string "Received Archen!$"

CSCM_GiveFossil_Text_7:
# 142 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	.string "Received Tyrunt!$"

CSCM_GiveFossil_Text_8:
# 149 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	.string "Received Amaura!$"

CSCM_GiveFossil_Text_9:
# 156 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	.string "Received Aerodactyl!$"

CSCM_GiveFossil_Text_10:
# 161 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	.string "Come back if you find more fossils!$"

CSCM_WelcomeToHistoryFloor::
# 183 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	.string "Hi, welcome to the second floor of \n"
	.string "the Crystal Stream City Museum! \p"
	.string "This floor is dedicated to history. \p"
	.string "And I am in charge of our very special \n"
	.string "fossil resurection program! \p"
	.string "If you a fossil, I can study it and \n"
	.string "turn it back into a POKéMON for you!$"

CSCM_NoFossils::
# 193 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	.string "Oh, it doesn't look like you have any \n"
	.string "fossils. \p"
	.string "Come back another time!$"

CSCM_JustGaveFossil::
# 199 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	.string "Oooh what a pretty fossil! \p"
	.string "I'll go take care of it right away! \p"
	.string "Come back later! $"

CSCM_NoFossilGiven::
# 205 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	.string "Oh, okay, no fossil for today then. \p"
	.string "Come back when you change your mind!$"

CSCM_AlreadyWorkingOnFossil::
# 210 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	.string "I'm working on your fossil! \p"
	.string "I'll be done soon but not yet. \p"
	.string "Come back later!$"

CSCM_FinishedYourFossil::
# 216 "data/maps/CrystalStreamCity_Museum_2F/scripts.pory"
	.string "I finished restoring your fossil! \p"
	.string "Here, a beautiful and healthy POKéMON \n"
	.string "for you! $"

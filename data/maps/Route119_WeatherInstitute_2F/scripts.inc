# 1 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 2 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_GRUNT_1, 1
# 3 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_GRUNT_2, 2
# 4 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_SHELLY, 3
# 5 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_SCIENTIST, 5
# 6 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_GRUNT_3, 7
# 7 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_GRUNT_4, 8
# 8 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 9 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_MapScripts::
# 10 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_2F_OnTransition
# 11 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.byte 0
# 12 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 13 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_OnTransition:
# 14 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 0, Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaHere
# 15 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 1, Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaGone
# 16 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_SetScientistPosGameClear
# 17 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 18 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 19 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaHere::
# 20 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 1, 6
# 21 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
# 22 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 23 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 24 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaGone::
# 25 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 4, 6
# 26 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
# 27 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 28 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 29 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SetScientistPosGameClear::
# 30 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 2, 2
# 31 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_FACE_UP
# 32 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 33 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 34 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Grunt5::
# 35 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_5, Route119_WeatherInstitute_2F_Text_Grunt5Intro, Route119_WeatherInstitute_2F_Text_Grunt5Defeat
# 36 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
# 37 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 38 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 39 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Grunt2::
# 40 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_2, Route119_WeatherInstitute_2F_Text_Grunt2Intro, Route119_WeatherInstitute_2F_Text_Grunt2Defeat
# 41 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 42 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 43 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 44 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Grunt3::
# 45 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_3, Route119_WeatherInstitute_2F_Text_Grunt3Intro, Route119_WeatherInstitute_2F_Text_Grunt3Defeat
# 46 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 48 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 49 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly::
# 50 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ShellyPostBattle, MSGBOX_AUTOCLOSE
# 51 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 52 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 53 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ShellyDefeated::
# 54 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ShellyPostBattle, MSGBOX_DEFAULT
# 55 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 56 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addobject LOCALID_GRUNT_3
# 57 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_GRUNT_3, Route119_WeatherInstitute_2F_Movement_GruntApproachShelly
# 58 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_WeatherInstitute_2F_Movement_ShovePlayerOutOfWay
# 59 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_TeamMagmaJustPassedBy, MSGBOX_DEFAULT
# 61 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 62 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_PIN
# 63 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_ExclamationMark
# 64 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_Delay48
# 66 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_WeHaveToHurryToMtPyre, MSGBOX_DEFAULT
# 68 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 69 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_WEATHER_INSTITUTE_STATE, 1
# 70 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
# 71 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadedefaultbgm
# 72 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 73 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_119_TEAM_AQUA
# 74 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_AQUA_GRUNT_M
# 75 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 76 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 77 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_SHELLY
# 78 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_GRUNT_4
# 79 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 80 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_WeatherInstitute_2F_Movement_PlayerReturnToPosition
# 81 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 82 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 83 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_SCIENTIST, Route119_WeatherInstitute_2F_Movement_ScientistApproachPlayer
# 84 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 85 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	copyobjectxytoperm LOCALID_SCIENTIST
# 86 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform
# 87 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 88 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 89 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastform::
# 90 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon, MSGBOX_DEFAULT
# 91 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CASTFORM_NORMAL
# 92 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	givemon SPECIES_CASTFORM_NORMAL, 25, ITEM_MYSTIC_WATER
# 93 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty
# 94 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC
# 95 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 96 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 97 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 98 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty::
# 99 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
# 100 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 101 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 102 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 103 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 104 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 105 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 106 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 107 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC::
# 108 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
# 109 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 110 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route119_WeatherInstitute_2F_EventScript_SendCastformToPC
# 111 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 112 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_SendCastformToPC
# 113 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 114 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 115 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SendCastformToPC::
# 116 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 117 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 118 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 119 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 120 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare::
# 121 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 122 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	message Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform
# 123 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmessage
# 124 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitfanfare
# 125 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CASTFORM_NORMAL
# 126 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 127 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 128 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ExplainCastform::
# 129 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather, MSGBOX_DEFAULT
# 130 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_RECEIVED_CASTFORM
# 131 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 132 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 133 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 134 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather::
# 135 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather
# 136 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous, MSGBOX_DEFAULT
# 137 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 138 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 139 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 140 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather::
# 141 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_0x8004, 0
# 142 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated
# 143 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated
# 144 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_0x8004, 2, Route119_WeatherInstitute_2F_EventScript_NoAbnormalWeather  @ Both defeated
# 145 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_unset FLAG_TEMP_2, Route119_WeatherInstitute_2F_EventScript_CreateAbnormalWeather
# 146 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	specialvar VAR_RESULT, GetAbnormalWeatherMapNameAndType
# 147 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route119_WeatherInstitute_2F_EventScript_KyogreWeather
# 148 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_GroudonWeather, MSGBOX_DEFAULT
# 149 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 150 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 151 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 152 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_KyogreWeather::
# 153 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_KyogreWeather, MSGBOX_DEFAULT
# 154 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 155 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 156 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 157 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_CreateAbnormalWeather::
# 158 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	special CreateAbnormalWeatherEvent
# 159 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 160 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 161 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 162 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated::
# 163 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addvar VAR_0x8004, 1
# 164 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 165 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 166 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_NoAbnormalWeather::
# 167 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_NoAbnormalWeather, MSGBOX_DEFAULT
# 168 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 169 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 170 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 171 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_GruntApproachShelly:
# 172 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 173 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 174 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 175 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 176 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 177 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 178 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 179 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 180 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 181 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 182 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 183 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 184 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 185 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_ShovePlayerOutOfWay:
# 186 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 187 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 188 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 189 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 190 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 191 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	ride_water_current_up
# 192 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_in_place_faster_down
# 193 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 194 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 195 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_PlayerReturnToPosition:
# 196 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	slide_down
# 197 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_in_place_faster_left
# 198 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 199 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 200 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_ScientistApproachPlayer:
# 201 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 202 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 203 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 204 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 205 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 206 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_WeatherScientist::
# 207 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	lock
# 208 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	faceplayer
# 209 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_CASTFORM, Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather
# 210 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform
# 211 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 212 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 213 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt2Intro:
# 214 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "The INSTITUTE created a type of\n"
# 215 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "POKéMON that has something to do with\l"
# 216 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the weather. We're here to take them!$"
# 217 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 218 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt2Defeat:
# 219 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Our plan's being spoiled by a kid?$"
# 220 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 221 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt2PostBattle:
# 222 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "If the POKéMON they made here can\n"
# 223 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "control the weather freely, then we of\l"
# 224 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "TEAM AQUA definitely need it!$"
# 225 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 226 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3Intro:
# 227 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We're TEAM AQUA!\n"
# 228 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We appear wherever anything rare is\l"
# 229 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "found!$"
# 230 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 231 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3Defeat:
# 232 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You got me!$"
# 233 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 234 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3PostBattle:
# 235 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You don't have any idea what we of\n"
# 236 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "TEAM AQUA are working towards!\l"
# 237 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You stay out of our way!$"
# 238 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 239 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5Intro:
# 240 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Don't tell me you're looking for that\n"
# 241 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "weather POKéMON, too?\p"
# 242 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "That's a no-no!\n"
# 243 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We were here to get it first!$"
# 244 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 245 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5Defeat:
# 246 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Oh, will you look at my POKéMON?$"
# 247 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 248 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5PostBattle:
# 249 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Humph, so what?\n"
# 250 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What we want…\p"
# 251 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What we really want isn't here…\n"
# 252 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ihihihihi…$"
# 253 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 254 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ShellyIntro:
# 255 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ahahahaha!\p"
# 256 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You're going to meddle in TEAM AQUA's\n"
# 257 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "affairs?\p"
# 258 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You're either absolutely fearless,\n"
# 259 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "simply ignorant, or both!\p"
# 260 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You're so cute, you're disgusting!\n"
# 261 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I'll put you down, kiddy!$"
# 262 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 263 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ShellyDefeat:
# 264 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ahahahaha!\n"
# 265 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You're disgustingly strong!$"
# 266 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 267 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ShellyPostBattle:
# 268 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "It's bad enough to have TEAM MAGMA\n"
# 269 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "blunder about, but now there's you!\p"
# 270 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What makes you want to sniff around\n"
# 271 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "in our business, anyway?$"
# 272 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 273 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_TeamMagmaJustPassedBy:
# 274 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We have a situation here!\p"
# 275 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "A TEAM MAGMA mob just passed\n"
# 276 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the WEATHER INSTITUTE.\p"
# 277 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "They appear to be headed for\n"
# 278 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "MT. PYRE!$"
# 279 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 280 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_WeHaveToHurryToMtPyre:
# 281 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What?!\p"
# 282 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We can't waste any more time here!\n"
# 283 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We have to hurry to MT. PYRE, too!\p"
# 284 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ahahahaha!\n"
# 285 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "TEAM MAGMA, just you wait!$"
# 286 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 287 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon:
# 288 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Thanks!\n"
# 289 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Thanks to you, we're safe!\p"
# 290 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "It might be an odd way of thanking you,\n"
# 291 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "but take this POKéMON.$"
# 292 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 293 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
@ Unused
# 294 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_NoRoomForPokemon:
# 295 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hm? You don't seem to have any room\n"
# 296 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "for this POKéMON.$"
# 297 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 298 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform:
# 299 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{PLAYER} received CASTFORM!$"
# 300 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 301 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather:
# 302 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "That POKéMON changes shape according\n"
# 303 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "to the weather conditions.\p"
# 304 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "There're plenty of them in the\n"
# 305 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "INSTITUTE--go ahead and take it.$"
# 306 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 307 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous:
# 308 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I've been researching rain for many\n"
# 309 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "years, but it's ridiculous to think that\l"
# 310 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "humans can freely change the weather.$"
# 311 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 312 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_GroudonWeather:
# 313 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I track weather patterns over\n"
# 314 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the HOENN region.\p"
# 315 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Presently, a drought has been recorded\n"
# 316 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "in {STR_VAR_1}.\p"
# 317 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Could that mean, somewhere near\n"
# 318 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{STR_VAR_1}…$"
# 319 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 320 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_KyogreWeather:
# 321 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I track weather patterns over\n"
# 322 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the HOENN region.\p"
# 323 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Presently, heavy rainfall has been\n"
# 324 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "recorded over {STR_VAR_1}.\p"
# 325 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Could that mean, somewhere near\n"
# 326 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{STR_VAR_1}…$"
# 327 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 328 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_NoAbnormalWeather:
# 329 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Abnormal weather conditions are\n"
# 330 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "no longer being reported.\p"
# 331 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "The occasional rainfall is a blessing,\n"
# 332 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "really.$"

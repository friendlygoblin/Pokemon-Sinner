# 1 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
.set LOCALID_WALLACE, 1
# 3 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
.set LOCALID_RIVAL, 2
# 4 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
.set LOCALID_BIRCH, 3
# 5 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 6 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_MapScripts::
# 7 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_ChampionsRoom_OnTransition
# 8 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_ChampionsRoom_OnWarp
# 9 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_ChampionsRoom_OnFrame
# 10 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.byte 0
# 11 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 12 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnTransition:
# 13 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 14 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 15 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 16 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnWarp:
# 17 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth
# 18 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.2byte 0
# 19 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 20 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth::
# 21 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 22 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 23 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 24 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnFrame:
# 25 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_EnterRoom
# 26 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.2byte 0

EverGrandeCity_ChampionsRoom_EventScript_EnterRoom::
# 31 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	lockall
# 32 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp4
# 33 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 34 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 35 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace
# 36 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 37 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 38 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Wallace
# 39 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
	end


# 43 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace:
# 44 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 45 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 46 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end

EverGrandeCity_ChampionsRoom_EventScript_Wallace::
# 50 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 51 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 52 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLACE, EverGrandeCity_ChampionsRoom_Text_Defeat
# 53 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated
	end


EverGrandeCity_ChampionsRoom_EventScript_Defeated::
# 58 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 59 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 1, METATILE_EliteFour_OpenDoorChampion_Frame, FALSE
# 60 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 2, METATILE_EliteFour_OpenDoorChampion_Opening, FALSE
# 61 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	special DrawWholeMapView
# 62 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 63 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 64 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 65 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 66 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_Defeated_2
# 70 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic
EverGrandeCity_ChampionsRoom_EventScript_Defeated_1:
# 72 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_RIVAL
# 73 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer
# 74 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 75 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_Defeated_6
# 79 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice
EverGrandeCity_ChampionsRoom_EventScript_Defeated_5:
	end

EverGrandeCity_ChampionsRoom_EventScript_Defeated_2:
# 67 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated_1

EverGrandeCity_ChampionsRoom_EventScript_Defeated_6:
# 76 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_MayAdvice
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated_5


EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic::
# 85 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
	return


EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic::
# 90 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
	return


EverGrandeCity_ChampionsRoom_EventScript_MayAdvice::
# 95 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayAdvice, MSGBOX_DEFAULT
# 96 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 97 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 98 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 99 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 100 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 101 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 102 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
# 103 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver, MSGBOX_DEFAULT
# 104 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
	end


EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice::
# 109 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanAdvice, MSGBOX_DEFAULT
# 110 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 111 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 112 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 113 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 114 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 115 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 116 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
# 117 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon, MSGBOX_DEFAULT
# 118 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
	end


EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF::
# 123 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 124 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_BIRCH
# 125 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_BIRCH, EverGrandeCity_ChampionsRoom_Movement_BirchArrives
# 126 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 127 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 128 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 129 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex, MSGBOX_DEFAULT
# 130 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchCongratulations, MSGBOX_DEFAULT
# 131 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterUp
# 132 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 133 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 134 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterDown
# 135 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 136 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe, MSGBOX_DEFAULT
# 137 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 138 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 30
# 139 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_WALLACE, EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart
# 140 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart
# 141 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterUp
# 142 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalFollows
# 143 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 144 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 145 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 146 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 147 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside, MSGBOX_DEFAULT
# 148 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 149 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_2
# 153 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations
EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_1:
# 155 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 156 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_WALLACE, EverGrandeCity_ChampionsRoom_Movement_WallaceExit
# 157 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExit
# 158 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 159 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
# 160 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	warp MAP_EVER_GRANDE_CITY_HALL_OF_FAME, 7, 16
# 161 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitstate
# 162 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
	end

EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_2:
# 150 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_1


EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations::
# 167 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayCongratulations, MSGBOX_DEFAULT
	return


EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations::
# 172 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations, MSGBOX_DEFAULT
	return


EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer::
# 177 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer
# 178 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 179 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 180 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
	return


EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth::
# 185 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth
# 186 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
	return


# 190 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart:
# 191 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 192 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 193 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end

# 196 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExit:
# 197 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 198 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 199 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 200 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 201 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
# 202 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end

# 205 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer:
# 206 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 207 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 208 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 209 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 210 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 211 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_left
# 212 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 213 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 214 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end

# 217 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth:
# 218 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_up
# 219 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 220 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 221 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 222 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_up
# 223 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 224 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 225 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 226 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end

# 229 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalFollows:
# 230 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 231 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 232 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end

# 235 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart:
# 236 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 237 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 238 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_down
# 239 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end

# 242 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_WallaceExit:
# 243 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 244 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 245 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
# 246 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end

# 249 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_BirchArrives:
# 250 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 251 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 252 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 253 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 254 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 255 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 256 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 257 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_left
# 258 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end

EverGrandeCity_ChampionsRoom_Text_IntroSpeech::
# 261 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "ABIGAIL: Oh hi angel!\p"
	.string "You've made it this far,\n"
	.string "that's so cool!\p"
	.string "I guess we'll be seeing you\n"
	.string "at the show later.\p"
	.string "I'm Abigail by the way, I'll be the\n"
	.string "songbird screaming in your face.\p"
	.string "Sorry, maybe I should have started\n"
	.string "with that.\p"
	.string "Anyway, I'm sure you slay but you\n"
	.string "know, I have to make sure that you're\l"
	.string "not just here for entertainment.\p"
	.string "So pull your boots up,\n"
	.string "and commit to the role,\l"
	.string "fight for that ticket!$"

EverGrandeCity_ChampionsRoom_Text_Defeat::
# 279 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I can't win them all…\p"
	.string "…\p"
	.string "Period! You've just earned\n"
	.string "yourself a Last Dinner Party\l"
	.string "ticket, {PLAYER}{KUN}!$"

EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech::
# 287 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "ABIGAIL: Wow that was amazing!\p"
	.string "I had a feeling you'd be a fucking\n"
	.string "icon.\p"
	.string "You've totally earned your spot at\n"
	.string "the show, I can't wait to see you\l"
	.string "on the front row!\p"
	.string "Now all we need to do is add you\n"
	.string "to the…$"

EverGrandeCity_ChampionsRoom_Text_MayAdvice::
# 298 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "GOBLIN: {PLAYER}{KUN}!\p"
	.string "Here's some advice before you challenge\n"
	.string "Abi…$"

EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver::
# 304 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "GOBLIN: Huh?\n"
	.string "What, what, what?\p"
	.string "{PLAYER}{KUN}…\n"
	.string "Could it be that…\l"
	.string "It's already over?$"

EverGrandeCity_ChampionsRoom_Text_BrendanAdvice::
# 312 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "GOBLIN: {PLAYER}!\p"
	.string "How would you like some advice before\n"
	.string "you challenge Abi?…$"

EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon::
# 318 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "GOBLIN: {PLAYER}…\p"
	.string "Are you trying to tell me…\n"
	.string "You've won already?$"

EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex::
# 324 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "AMY: See?\n"
	.string "What did I tell you, Goblin?\p"
	.string "Didn't I tell you that you don't need\n"
	.string "to worry about {PLAYER}{KUN}?\p"
	.string "… … … … … … … …\n"
	.string "{PLAYER}{KUN}, you've really done it!\p"
	.string "You're seeing The Last Dinner Party!$"

EverGrandeCity_ChampionsRoom_Text_BirchCongratulations::
# 334 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "AMY: Anyways,\n"
	.string "congratulations!\p"
	.string "Now, go proudly into the final room!$"

EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe::
# 340 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "ABIGAIL: {PLAYER}{KUN}…\p"
	.string "No, let me rephrase that properly.\p"
	.string "Our new SPECIAL DINNER GUEST!\p"
	.string "Come with me.$"

EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside::
# 347 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "ABIGAIL: I'm sorry, but…\p"
	.string "From here on, only those who have\n"
	.string "won the challenge may enter.\p"
	.string "You'll have to wait outside with\n"
	.string "Amy.$"

EverGrandeCity_ChampionsRoom_Text_MayCongratulations::
# 355 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "GOBLIN: Awh…\p"
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "Maybe I should have tried to win\n"
	.string "my ticket that way, then…\p"
	.string "I'm just joking! That's okay!\n"
	.string "That's the rule!\p"
	.string "{PLAYER}{KUN}!\n"
	.string "Honestly, congratulations!\p"
	.string "See you at the barricade!$"

EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations::
# 368 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "GOBLIN: Whaaaat?! \p"
	.string "… … … … …\n"
	.string "… … … … … … … …\p"
	.string "But I was dying to know what\n"
	.string "was in there…\p"
	.string "It's okay, that's the rule.\p"
	.string "{PLAYER}, way to go!\n"
	.string "Congratulations! See you at\n"
	.string "the barricade!$"

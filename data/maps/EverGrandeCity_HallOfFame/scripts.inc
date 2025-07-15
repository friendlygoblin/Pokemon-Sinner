# 1 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 2 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
.set LOCALID_WALLACE, 1
# 3 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 4 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_MapScripts::
# 5 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_HallOfFame_OnFrame
# 6 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_HallOfFame_OnWarp
# 7 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.byte 0
# 8 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 9 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_OnWarp:
# 10 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_HallOfFame_EventScript_TurnPlayerNorth
# 11 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.2byte 0
# 12 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 13 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_TurnPlayerNorth::
# 14 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 15 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	end
# 16 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 17 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_OnFrame:
# 18 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame
# 19 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.2byte 0

EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame::
# 23 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	lockall
# 24 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_WALLACE, EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame1
# 25 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame1
# 26 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 27 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterRight
# 28 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 29 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 30 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	msgbox EverGrandeCity_HallOfFame_Text_HereWeHonorLeagueChampions, MSGBOX_DEFAULT
# 31 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	closemessage
# 32 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_WALLACE, EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame2
# 33 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame2
# 34 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 35 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	delay 20
# 36 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterRight
# 37 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 38 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 39 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement 3, Turn_Alter_Left
# 40 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement 4, Turn_Alter_Left
# 41 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement 2, Turn_Alter_Right
# 42 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement 5, Turn_Alter_Right
# 43 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 44 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	msgbox EverGrandeCity_HallOfFame_Text_LetsRecordYouAndYourPartnersNames, MSGBOX_DEFAULT
# 45 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	closemessage
# 46 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterUp
# 47 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 48 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 49 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	delay 20
# 50 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	dofieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 51 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 52 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	delay 40
# 53 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	setvar VAR_TEMP_1, 1
# 54 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags
# 55 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	checkplayergender
# 56 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame_2
# 60 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	goto EverGrandeCity_HallOfFame_EventScript_GameClearFemale
EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame_1:
	end

EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame_2:
# 57 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	goto EverGrandeCity_HallOfFame_EventScript_GameClearMale
	goto EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame_1


EverGrandeCity_HallOfFame_EventScript_GameClearMale::
# 66 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	setrespawn HEAL_LOCATION_EVERGRANDECITY_DEMOSTARTER
# 67 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 68 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	special GameClear
# 69 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitstate
# 70 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	releaseall
	end


EverGrandeCity_HallOfFame_EventScript_GameClearFemale::
# 75 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	setrespawn HEAL_LOCATION_EVERGRANDECITY_DEMOSTARTER
# 76 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 77 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	special GameClear
# 78 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitstate
# 79 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	releaseall
	end


# 83 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
Turn_Alter_Left:
# 84 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	face_left
	step_end

# 86 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
Turn_Alter_Right:
# 87 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	face_right
	step_end

# 90 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame1:
# 91 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 92 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 93 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 94 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 95 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 96 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 97 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	step_end

# 100 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame2:
# 101 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 102 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 103 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 104 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 105 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 106 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	step_end

EverGrandeCity_HallOfFame_Text_HereWeHonorLeagueChampions::
# 109 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "ABIGAIL: Now…\p"
	.string "It is here that our SPECIAL GUESTS\n"
	.string "are recorded.\p"
	.string "{PLAYER}{KUN}! You've made it!\p"
	.string "You had the guts to put up a \n"
	.string "fight!\p"
	.string "And you believe in justice for\n"
	.string "fat riffs!\p"
	.string "You're a sinner just like us!\p"
	.string "It's time to make it official\n"
	.string "by adding you to our special\l"
	.string "DINNER GUEST LIST!$"

EverGrandeCity_HallOfFame_Text_LetsRecordYouAndYourPartnersNames::
# 124 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "ABIGAIL: Come on, let's record your\n"
	.string "name as a fan who triumphed over us,\l"
	.string "The Last Dinner Party themselves,\l"
	.string "as well as the names of the partners\l"
	.string "who were on your side.$"

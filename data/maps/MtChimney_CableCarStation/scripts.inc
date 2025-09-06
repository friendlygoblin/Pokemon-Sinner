# 1 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 2 "data/maps/MtChimney_CableCarStation/scripts.pory"
.set LOCALID_ATTENDANT, 1
# 3 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 4 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_MapScripts::
# 5 "data/maps/MtChimney_CableCarStation/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_CableCarStation_OnTransition
# 6 "data/maps/MtChimney_CableCarStation/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MtChimney_CableCarStation_OnFrame
# 7 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.byte 0
# 8 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 9 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_OnTransition:
# 10 "data/maps/MtChimney_CableCarStation/scripts.pory"
	call_if_eq VAR_CABLE_CAR_STATION_STATE, 1, MtChimney_CableCarStation_EventScript_MoveAttendantAside
# 11 "data/maps/MtChimney_CableCarStation/scripts.pory"
	end
# 12 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 13 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_EventScript_MoveAttendantAside::
# 14 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setobjectxyperm LOCALID_ATTENDANT, 5, 4
# 15 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setobjectmovementtype LOCALID_ATTENDANT, MOVEMENT_TYPE_FACE_RIGHT
# 16 "data/maps/MtChimney_CableCarStation/scripts.pory"
	return
# 17 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 18 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_OnFrame:
# 19 "data/maps/MtChimney_CableCarStation/scripts.pory"
	map_script_2 VAR_CABLE_CAR_STATION_STATE, 1, MtChimney_CableCarStation_EventScript_ExitCableCar
# 20 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.2byte 0
# 21 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 22 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_EventScript_ExitCableCar::
# 23 "data/maps/MtChimney_CableCarStation/scripts.pory"
	lockall
# 24 "data/maps/MtChimney_CableCarStation/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtChimney_CableCarStation_Movement_ExitCableCar
# 25 "data/maps/MtChimney_CableCarStation/scripts.pory"
	applymovement LOCALID_ATTENDANT, MtChimney_CableCarStation_Movement_FollowPlayerOutFromCableCar
# 26 "data/maps/MtChimney_CableCarStation/scripts.pory"
	waitmovement 0
# 27 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setvar VAR_CABLE_CAR_STATION_STATE, 0
# 28 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setobjectxyperm LOCALID_ATTENDANT, 6, 7
# 29 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setobjectmovementtype LOCALID_ATTENDANT, MOVEMENT_TYPE_FACE_DOWN
# 30 "data/maps/MtChimney_CableCarStation/scripts.pory"
	releaseall
# 31 "data/maps/MtChimney_CableCarStation/scripts.pory"
	end

MtChimney_CableCarStation_EventScript_Attendant::
# 34 "data/maps/MtChimney_CableCarStation/scripts.pory"
	lock
# 35 "data/maps/MtChimney_CableCarStation/scripts.pory"
	faceplayer
# 36 "data/maps/MtChimney_CableCarStation/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, MtChimney_CableCarStation_EventScript_Attendant_2
# 46 "data/maps/MtChimney_CableCarStation/scripts.pory"
	goto MtChimney_CableCarStation_NotReadyYet
MtChimney_CableCarStation_EventScript_Attendant_1:
	end

MtChimney_CableCarStation_EventScript_Attendant_2:
# 37 "data/maps/MtChimney_CableCarStation/scripts.pory"
	msgbox MtChimney_CableCarStation_Text_CableCarReadyGetOn, MSGBOX_YESNO
# 38 "data/maps/MtChimney_CableCarStation/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MtChimney_CableCarStation_EventScript_Attendant_5
# 42 "data/maps/MtChimney_CableCarStation/scripts.pory"
	goto MtChimney_CableCarStation_EventScript_DeclineRide
	goto MtChimney_CableCarStation_EventScript_Attendant_1

MtChimney_CableCarStation_EventScript_Attendant_5:
# 39 "data/maps/MtChimney_CableCarStation/scripts.pory"
	goto MtChimney_CableCarStation_EventScript_RideCableCar
	goto MtChimney_CableCarStation_EventScript_Attendant_1


MtChimney_CableCarStation_EventScript_RideCableCar::
# 52 "data/maps/MtChimney_CableCarStation/scripts.pory"
	msgbox MtChimney_CableCarStation_Text_StepThisWay, MSGBOX_AUTOCLOSE
# 53 "data/maps/MtChimney_CableCarStation/scripts.pory"
	applymovement LOCALID_ATTENDANT, MtChimney_CableCarStation_Movement_LeadPlayerToCableCar
# 54 "data/maps/MtChimney_CableCarStation/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtChimney_CableCarStation_Movement_BoardCableCar
# 55 "data/maps/MtChimney_CableCarStation/scripts.pory"
	waitmovement 0
# 56 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setvar VAR_0x8004, TRUE
# 57 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setvar VAR_CABLE_CAR_STATION_STATE, 2
# 58 "data/maps/MtChimney_CableCarStation/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 59 "data/maps/MtChimney_CableCarStation/scripts.pory"
	special CableCarWarp
# 60 "data/maps/MtChimney_CableCarStation/scripts.pory"
	special CableCar
# 61 "data/maps/MtChimney_CableCarStation/scripts.pory"
	waitstate
# 62 "data/maps/MtChimney_CableCarStation/scripts.pory"
	release
	end


MtChimney_CableCarStation_NotReadyYet::
# 67 "data/maps/MtChimney_CableCarStation/scripts.pory"
	msgbox MtChimney_CableCarStation_Text_NotReadyYet, MSGBOX_AUTOCLOSE
# 68 "data/maps/MtChimney_CableCarStation/scripts.pory"
	release
	end


MtChimney_CableCarStation_EventScript_DeclineRide::
# 73 "data/maps/MtChimney_CableCarStation/scripts.pory"
	msgbox MtChimney_CableCarStation_Text_RideAnotherTime, MSGBOX_AUTOCLOSE
# 74 "data/maps/MtChimney_CableCarStation/scripts.pory"
	release
	end


# 78 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Movement_LeadPlayerToCableCar:
# 79 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_up
# 80 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_up
# 81 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_left
# 82 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_in_place_faster_right
# 83 "data/maps/MtChimney_CableCarStation/scripts.pory"
	step_end

# 86 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Movement_FollowPlayerOutFromCableCar:
# 87 "data/maps/MtChimney_CableCarStation/scripts.pory"
	delay_16
# 88 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_right
# 89 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 90 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 91 "data/maps/MtChimney_CableCarStation/scripts.pory"
	step_end

# 94 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Movement_BoardCableCar:
# 95 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_up
# 96 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_up
# 97 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_up
# 98 "data/maps/MtChimney_CableCarStation/scripts.pory"
	delay_16
# 99 "data/maps/MtChimney_CableCarStation/scripts.pory"
	step_end

# 102 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Movement_ExitCableCar:
# 103 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 104 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 105 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 106 "data/maps/MtChimney_CableCarStation/scripts.pory"
	delay_16
# 107 "data/maps/MtChimney_CableCarStation/scripts.pory"
	step_end

MtChimney_CableCarStation_Text_CableCarReadyGetOn::
# 110 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.string "The CABLE CAR is ready to go down.\n"
	.string "Would you like to be on it?$"

MtChimney_CableCarStation_Text_StepThisWay::
# 115 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.string "Please step this way.$"

MtChimney_CableCarStation_Text_RideAnotherTime::
# 119 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.string "Please ride with us another time.$"

MtChimney_CableCarStation_Text_NotReadyYet::
# 123 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.string "The CABLE CAR isn't ready to go \n"
	.string "down yet, please come back later.$"

StartTown_PlayerHouse_MapScripts::
	.byte 0


Bed::
# 4 "data/maps/StartTown_PlayerHouse/scripts.pory"
	lock
# 5 "data/maps/StartTown_PlayerHouse/scripts.pory"
	msgbox Bed_Text_0, MSGBOX_YESNO
# 6 "data/maps/StartTown_PlayerHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Bed_2
# 21 "data/maps/StartTown_PlayerHouse/scripts.pory"
	release
	end

Bed_1:
# 24 "data/maps/StartTown_PlayerHouse/scripts.pory"
	release
	end

Bed_2:
# 7 "data/maps/StartTown_PlayerHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GetIntoBed
# 8 "data/maps/StartTown_PlayerHouse/scripts.pory"
	waitmovement 0
# 9 "data/maps/StartTown_PlayerHouse/scripts.pory"
	msgbox Bed_Text_1
# 10 "data/maps/StartTown_PlayerHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 11 "data/maps/StartTown_PlayerHouse/scripts.pory"
	playfanfare MUS_HEAL
# 12 "data/maps/StartTown_PlayerHouse/scripts.pory"
	waitfanfare
# 13 "data/maps/StartTown_PlayerHouse/scripts.pory"
	special HealPlayerParty
# 14 "data/maps/StartTown_PlayerHouse/scripts.pory"
	setrespawn HEAL_LOCATION_START_TOWN
# 15 "data/maps/StartTown_PlayerHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 16 "data/maps/StartTown_PlayerHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GetOutOfBed
# 17 "data/maps/StartTown_PlayerHouse/scripts.pory"
	waitmovement 0
# 18 "data/maps/StartTown_PlayerHouse/scripts.pory"
	msgbox Bed_Text_2
	goto Bed_1


# 28 "data/maps/StartTown_PlayerHouse/scripts.pory"
GetIntoBed:
# 29 "data/maps/StartTown_PlayerHouse/scripts.pory"
	walk_right
# 30 "data/maps/StartTown_PlayerHouse/scripts.pory"
	face_down
# 31 "data/maps/StartTown_PlayerHouse/scripts.pory"
	step_end

# 34 "data/maps/StartTown_PlayerHouse/scripts.pory"
GetOutOfBed:
# 35 "data/maps/StartTown_PlayerHouse/scripts.pory"
	walk_left
# 36 "data/maps/StartTown_PlayerHouse/scripts.pory"
	step_end

Bed_Text_0:
# 5 "data/maps/StartTown_PlayerHouse/scripts.pory"
	.string "This is your bed.\pDo you want to take a nap?$"

Bed_Text_1:
# 9 "data/maps/StartTown_PlayerHouse/scripts.pory"
	.string "It's comfy! Your eyes are closing\n"
	.string "themselves…$"

Bed_Text_2:
# 18 "data/maps/StartTown_PlayerHouse/scripts.pory"
	.string "You and your POKéMON wake up well\n"
	.string "rested!$"

Route11_MapScripts::
# 2 "data/maps/Route11/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route11_HideGoblin
	.byte 0


Route11_HideGoblin::
# 9 "data/maps/Route11/scripts.pory"
	setflag FLAG_ROUTE11_GOBLIN
	return


Route11_Snorlax::
# 13 "data/maps/Route11/scripts.pory"
	lock
# 14 "data/maps/Route11/scripts.pory"
	msgbox Route11_Snorlax_Text_0, MSGBOX_YESNO
# 15 "data/maps/Route11/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route11_Snorlax_2
Route11_Snorlax_1:
# 27 "data/maps/Route11/scripts.pory"
	release
	end

Route11_Snorlax_2:
# 16 "data/maps/Route11/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkInPlaceUp
# 17 "data/maps/Route11/scripts.pory"
	waitmovement 0
# 18 "data/maps/Route11/scripts.pory"
	msgbox Route11_Snorlax_Text_1, MSGBOX_AUTOCLOSE
# 19 "data/maps/Route11/scripts.pory"
	playmoncry SPECIES_SNORLAX, CRY_MODE_NORMAL
# 20 "data/maps/Route11/scripts.pory"
	waitmoncry
# 21 "data/maps/Route11/scripts.pory"
	msgbox Route11_Snorlax_Text_2, MSGBOX_AUTOCLOSE
# 22 "data/maps/Route11/scripts.pory"
	setwildbattle SPECIES_SNORLAX, 30
# 23 "data/maps/Route11/scripts.pory"
	dowildbattle
# 24 "data/maps/Route11/scripts.pory"
	removeobject 2
# 25 "data/maps/Route11/scripts.pory"
	setflag FLAG_ROUTE11_SNORLAX
	goto Route11_Snorlax_1


Route11_Goblin::
# 32 "data/maps/Route11/scripts.pory"
	lock
# 33 "data/maps/Route11/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 34 "data/maps/Route11/scripts.pory"
	waitmovement 0
# 35 "data/maps/Route11/scripts.pory"
	addobject 1
# 36 "data/maps/Route11/scripts.pory"
	applymovement 1, Route11_GobWalksToPlayer
# 37 "data/maps/Route11/scripts.pory"
	msgbox Route11_GoblinInvestigating
# 38 "data/maps/Route11/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route11_PlayerMoveAside
# 39 "data/maps/Route11/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route11/scripts.pory"
	applymovement 1, Route11_GoblinLeaves
# 41 "data/maps/Route11/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route11/scripts.pory"
	removeobject 1
# 43 "data/maps/Route11/scripts.pory"
	setvar VAR_ROUTE11_GOBLIN, 1
# 44 "data/maps/Route11/scripts.pory"
	release
	end


# 48 "data/maps/Route11/scripts.pory"
Route11_GobWalksToPlayer:
# 49 "data/maps/Route11/scripts.pory"
	walk_up
# 49 "data/maps/Route11/scripts.pory"
	walk_up
# 49 "data/maps/Route11/scripts.pory"
	walk_up
# 49 "data/maps/Route11/scripts.pory"
	walk_up
# 50 "data/maps/Route11/scripts.pory"
	walk_left
# 51 "data/maps/Route11/scripts.pory"
	walk_up
# 51 "data/maps/Route11/scripts.pory"
	walk_up
# 52 "data/maps/Route11/scripts.pory"
	step_end

# 55 "data/maps/Route11/scripts.pory"
Route11_PlayerMoveAside:
# 56 "data/maps/Route11/scripts.pory"
	walk_up
# 57 "data/maps/Route11/scripts.pory"
	walk_left
# 58 "data/maps/Route11/scripts.pory"
	face_right
# 59 "data/maps/Route11/scripts.pory"
	step_end

# 62 "data/maps/Route11/scripts.pory"
Route11_GoblinLeaves:
# 63 "data/maps/Route11/scripts.pory"
	walk_up
# 63 "data/maps/Route11/scripts.pory"
	walk_up
# 63 "data/maps/Route11/scripts.pory"
	walk_up
# 63 "data/maps/Route11/scripts.pory"
	walk_up
# 63 "data/maps/Route11/scripts.pory"
	walk_up
# 63 "data/maps/Route11/scripts.pory"
	walk_up
# 63 "data/maps/Route11/scripts.pory"
	walk_up
# 64 "data/maps/Route11/scripts.pory"
	step_end

Route11_Snorlax_Text_0:
# 14 "data/maps/Route11/scripts.pory"
	.string "There is a big sleeping POKéMON\n"
	.string "blocking the way.\p"
	.string "Do you want to wake it up?$"

Route11_Snorlax_Text_1:
# 18 "data/maps/Route11/scripts.pory"
	.string "You poke at the POKéMON's belly.$"

Route11_Snorlax_Text_2:
# 21 "data/maps/Route11/scripts.pory"
	.string "The POKéMON woke up!$"

Route11_GoblinInvestigating::
# 67 "data/maps/Route11/scripts.pory"
	.string "GOBLIN: Oh, {PLAYER}! \p"
	.string "Are you here to investigate Mirror \n"
	.string "Lake? \p"
	.string "… … … \p"
	.string "Oh, basically people have been talking \n"
	.string "about hearing strange noises coming \l"
	.string "from the lake area. \p"
	.string "I thought I'd look around, maybe it's \n"
	.string "a rare POKéMON acting up… \p"
	.string "I'd love to stay and spar, but I'm \n"
	.string "really excited about this mystery. \p"
	.string "Another time, for sure! $"

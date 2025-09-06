StartTown_Pub_MapScripts::
	.byte 0


# 3 "data/maps/StartTown_Pub/scripts.pory"

# 4 "data/maps/StartTown_Pub/scripts.pory"
.set Pokeball1, 8
# 5 "data/maps/StartTown_Pub/scripts.pory"
.set Pokeball2, 9
# 6 "data/maps/StartTown_Pub/scripts.pory"
.set Pokeball3, 10

GoToStage_1::
# 17 "data/maps/StartTown_Pub/scripts.pory"
	lock
# 18 "data/maps/StartTown_Pub/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerWalkToStage1
# 19 "data/maps/StartTown_Pub/scripts.pory"
	waitmovement 0
# 20 "data/maps/StartTown_Pub/scripts.pory"
	goto MissedTheGig
	return


GoToStage_2::
# 24 "data/maps/StartTown_Pub/scripts.pory"
	lock
# 25 "data/maps/StartTown_Pub/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerWalkToStage2
# 26 "data/maps/StartTown_Pub/scripts.pory"
	waitmovement 0
# 27 "data/maps/StartTown_Pub/scripts.pory"
	goto MissedTheGig
	return


MissedTheGig::
# 32 "data/maps/StartTown_Pub/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 33 "data/maps/StartTown_Pub/scripts.pory"
	waitmovement 0
# 34 "data/maps/StartTown_Pub/scripts.pory"
	msgbox MissedTheGig_Text_0
# 35 "data/maps/StartTown_Pub/scripts.pory"
	closemessage
# 38 "data/maps/StartTown_Pub/scripts.pory"
	applymovement 4, AuroraLeaves
# 39 "data/maps/StartTown_Pub/scripts.pory"
	waitmovement 0
# 40 "data/maps/StartTown_Pub/scripts.pory"
	setflag FLAG_INTRO_RORA
# 41 "data/maps/StartTown_Pub/scripts.pory"
	removeobject 4
# 42 "data/maps/StartTown_Pub/scripts.pory"
	applymovement 3, EmilyLeaves
# 43 "data/maps/StartTown_Pub/scripts.pory"
	waitmovement 0
# 44 "data/maps/StartTown_Pub/scripts.pory"
	removeobject 3
# 45 "data/maps/StartTown_Pub/scripts.pory"
	setflag FLAG_INTRO_EMILY
# 46 "data/maps/StartTown_Pub/scripts.pory"
	applymovement 6, LizzieLeaves
# 47 "data/maps/StartTown_Pub/scripts.pory"
	waitmovement 0
# 48 "data/maps/StartTown_Pub/scripts.pory"
	removeobject 6
# 49 "data/maps/StartTown_Pub/scripts.pory"
	setflag FLAG_INTRO_LIZZIE
# 50 "data/maps/StartTown_Pub/scripts.pory"
	applymovement 5, GeorgiaLeaves
# 51 "data/maps/StartTown_Pub/scripts.pory"
	waitmovement 0
# 52 "data/maps/StartTown_Pub/scripts.pory"
	removeobject 5
# 53 "data/maps/StartTown_Pub/scripts.pory"
	setflag FLAG_INTRO_GEORGIA
# 54 "data/maps/StartTown_Pub/scripts.pory"
	applymovement 7, NoraStartsToLeave
# 55 "data/maps/StartTown_Pub/scripts.pory"
	waitmovement 0
# 56 "data/maps/StartTown_Pub/scripts.pory"
	setobjectxy 7, 12, 12
# 57 "data/maps/StartTown_Pub/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 61 "data/maps/StartTown_Pub/scripts.pory"
	applymovement 2, AbiStartsToLeave
# 62 "data/maps/StartTown_Pub/scripts.pory"
	waitmovement 0
# 63 "data/maps/StartTown_Pub/scripts.pory"
	delay 20
# 64 "data/maps/StartTown_Pub/scripts.pory"
	applymovement 2, AbiGoesToPlayer
# 65 "data/maps/StartTown_Pub/scripts.pory"
	waitmovement 0
# 66 "data/maps/StartTown_Pub/scripts.pory"
	msgbox YouJustGotHere
# 67 "data/maps/StartTown_Pub/scripts.pory"
	closemessage
# 68 "data/maps/StartTown_Pub/scripts.pory"
	delay 20
# 69 "data/maps/StartTown_Pub/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 70 "data/maps/StartTown_Pub/scripts.pory"
	waitmovement 0
# 71 "data/maps/StartTown_Pub/scripts.pory"
	delay 20
# 72 "data/maps/StartTown_Pub/scripts.pory"
	msgbox OhYouKnew
# 73 "data/maps/StartTown_Pub/scripts.pory"
	closemessage
# 74 "data/maps/StartTown_Pub/scripts.pory"
	applymovement 2, Thinks
# 75 "data/maps/StartTown_Pub/scripts.pory"
	waitmovement 0
# 76 "data/maps/StartTown_Pub/scripts.pory"
	msgbox WeAreOnTour
# 77 "data/maps/StartTown_Pub/scripts.pory"
	closemessage
# 78 "data/maps/StartTown_Pub/scripts.pory"
	delay 20
# 79 "data/maps/StartTown_Pub/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 80 "data/maps/StartTown_Pub/scripts.pory"
	waitmovement 0
# 81 "data/maps/StartTown_Pub/scripts.pory"
	delay 20
# 82 "data/maps/StartTown_Pub/scripts.pory"
	msgbox NoPokemon
# 83 "data/maps/StartTown_Pub/scripts.pory"
	closemessage
# 86 "data/maps/StartTown_Pub/scripts.pory"
	applymovement 2, AbiPokeball1
# 87 "data/maps/StartTown_Pub/scripts.pory"
	waitmovement 0
# 88 "data/maps/StartTown_Pub/scripts.pory"
	addobject Pokeball3
# 89 "data/maps/StartTown_Pub/scripts.pory"
	clearflag FLAG_POKEBALL_3
# 90 "data/maps/StartTown_Pub/scripts.pory"
	delay 20
# 91 "data/maps/StartTown_Pub/scripts.pory"
	applymovement 2, AbiNextPokeball
# 92 "data/maps/StartTown_Pub/scripts.pory"
	waitmovement 0
# 93 "data/maps/StartTown_Pub/scripts.pory"
	addobject Pokeball2
# 94 "data/maps/StartTown_Pub/scripts.pory"
	clearflag FLAG_POKEBALL_2
# 95 "data/maps/StartTown_Pub/scripts.pory"
	delay 20
# 96 "data/maps/StartTown_Pub/scripts.pory"
	applymovement 2, AbiNextPokeball
# 97 "data/maps/StartTown_Pub/scripts.pory"
	waitmovement 0
# 98 "data/maps/StartTown_Pub/scripts.pory"
	addobject Pokeball1
# 99 "data/maps/StartTown_Pub/scripts.pory"
	clearflag FLAG_POKEBALL_1
# 100 "data/maps/StartTown_Pub/scripts.pory"
	delay 20
# 101 "data/maps/StartTown_Pub/scripts.pory"
	applymovement 2, AbiBackToPlayer
# 102 "data/maps/StartTown_Pub/scripts.pory"
	waitmovement 0
# 103 "data/maps/StartTown_Pub/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 104 "data/maps/StartTown_Pub/scripts.pory"
	msgbox ChooseOne
# 105 "data/maps/StartTown_Pub/scripts.pory"
	closemessage
# 106 "data/maps/StartTown_Pub/scripts.pory"
	delay 20
# 109 "data/maps/StartTown_Pub/scripts.pory"
	applymovement 2, AbiLeaves
# 110 "data/maps/StartTown_Pub/scripts.pory"
	waitmovement 0
# 111 "data/maps/StartTown_Pub/scripts.pory"
	removeobject 2
# 112 "data/maps/StartTown_Pub/scripts.pory"
	setflag FLAG_INTRO_ABI
# 114 "data/maps/StartTown_Pub/scripts.pory"
	release
	end


DontLeaveYet1::
# 119 "data/maps/StartTown_Pub/scripts.pory"
	lock
# 120 "data/maps/StartTown_Pub/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 1
	goto_if_eq DontLeaveYet1_2
# 130 "data/maps/StartTown_Pub/scripts.pory"
	msgbox DontLeaveYet1_Text_1
# 131 "data/maps/StartTown_Pub/scripts.pory"
	closemessage
# 132 "data/maps/StartTown_Pub/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 133 "data/maps/StartTown_Pub/scripts.pory"
	waitmovement 0
# 134 "data/maps/StartTown_Pub/scripts.pory"
	release
	end

DontLeaveYet1_1:
	end

DontLeaveYet1_2:
# 121 "data/maps/StartTown_Pub/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 122 "data/maps/StartTown_Pub/scripts.pory"
	waitmovement 0
# 123 "data/maps/StartTown_Pub/scripts.pory"
	msgbox DontLeaveYet1_Text_0
# 124 "data/maps/StartTown_Pub/scripts.pory"
	applymovement 7, NoraGivePokedex
# 125 "data/maps/StartTown_Pub/scripts.pory"
	waitmovement 0
# 126 "data/maps/StartTown_Pub/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 127 "data/maps/StartTown_Pub/scripts.pory"
	waitmovement 0
# 128 "data/maps/StartTown_Pub/scripts.pory"
	goto NoraGiveDex
	goto DontLeaveYet1_1


DontLeaveYet2::
# 141 "data/maps/StartTown_Pub/scripts.pory"
	lock
# 142 "data/maps/StartTown_Pub/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 1
	goto_if_eq DontLeaveYet2_2
# 155 "data/maps/StartTown_Pub/scripts.pory"
	msgbox DontLeaveYet1_Text_1
# 156 "data/maps/StartTown_Pub/scripts.pory"
	closemessage
# 157 "data/maps/StartTown_Pub/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 158 "data/maps/StartTown_Pub/scripts.pory"
	waitmovement 0
# 159 "data/maps/StartTown_Pub/scripts.pory"
	release
	end

DontLeaveYet2_1:
	end

DontLeaveYet2_2:
# 143 "data/maps/StartTown_Pub/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 144 "data/maps/StartTown_Pub/scripts.pory"
	waitmovement 0
# 145 "data/maps/StartTown_Pub/scripts.pory"
	msgbox DontLeaveYet1_Text_0
# 146 "data/maps/StartTown_Pub/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerStepBack
# 147 "data/maps/StartTown_Pub/scripts.pory"
	waitmovement 0
# 148 "data/maps/StartTown_Pub/scripts.pory"
	applymovement 7, NoraGivePokedex
# 149 "data/maps/StartTown_Pub/scripts.pory"
	waitmovement 0
# 150 "data/maps/StartTown_Pub/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 151 "data/maps/StartTown_Pub/scripts.pory"
	waitmovement 0
# 152 "data/maps/StartTown_Pub/scripts.pory"
	goto NoraGiveDex
	goto DontLeaveYet2_1


NoraBusy::
# 166 "data/maps/StartTown_Pub/scripts.pory"
	lock
# 167 "data/maps/StartTown_Pub/scripts.pory"
	msgbox NoraBusy_Text_0
# 168 "data/maps/StartTown_Pub/scripts.pory"
	releaseall
	end


# 172 "data/maps/StartTown_Pub/scripts.pory"
PlayerStepBack:
# 173 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 174 "data/maps/StartTown_Pub/scripts.pory"
	face_right
	step_end

NoraGiveDex::
# 178 "data/maps/StartTown_Pub/scripts.pory"
	msgbox NoraDex
# 179 "data/maps/StartTown_Pub/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 180 "data/maps/StartTown_Pub/scripts.pory"
	msgbox NoraGiveDex_Text_0
# 181 "data/maps/StartTown_Pub/scripts.pory"
	waitfanfare
# 182 "data/maps/StartTown_Pub/scripts.pory"
	closemessage
# 183 "data/maps/StartTown_Pub/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 184 "data/maps/StartTown_Pub/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 185 "data/maps/StartTown_Pub/scripts.pory"
	special SetUnlockedPokedexFlags
# 186 "data/maps/StartTown_Pub/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 187 "data/maps/StartTown_Pub/scripts.pory"
	setflag FLAG_INTRO_NORA
# 188 "data/maps/StartTown_Pub/scripts.pory"
	setvar VAR_OK_TO_LEAVE_PUB, 1
# 189 "data/maps/StartTown_Pub/scripts.pory"
	setvar VAR_CATCHING_TUTORIAL, 0
# 190 "data/maps/StartTown_Pub/scripts.pory"
	applymovement 7, NoraLeaves
# 191 "data/maps/StartTown_Pub/scripts.pory"
	waitmovement 0
# 192 "data/maps/StartTown_Pub/scripts.pory"
	removeobject 7
# 193 "data/maps/StartTown_Pub/scripts.pory"
	setrespawn HEAL_LOCATION_START_TOWN_PUB
# 194 "data/maps/StartTown_Pub/scripts.pory"
	release
	end


# 198 "data/maps/StartTown_Pub/scripts.pory"
NoraGivePokedex:
# 199 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 199 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 199 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 200 "data/maps/StartTown_Pub/scripts.pory"
	step_end

# 203 "data/maps/StartTown_Pub/scripts.pory"
NoraLeaves:
# 204 "data/maps/StartTown_Pub/scripts.pory"
	walk_down
# 204 "data/maps/StartTown_Pub/scripts.pory"
	walk_down
# 205 "data/maps/StartTown_Pub/scripts.pory"
	step_end

# 208 "data/maps/StartTown_Pub/scripts.pory"
PlayerWalkToStage1:
# 209 "data/maps/StartTown_Pub/scripts.pory"
	walk_up
# 209 "data/maps/StartTown_Pub/scripts.pory"
	walk_up
# 209 "data/maps/StartTown_Pub/scripts.pory"
	walk_up
# 209 "data/maps/StartTown_Pub/scripts.pory"
	walk_up
# 210 "data/maps/StartTown_Pub/scripts.pory"
	walk_right
# 210 "data/maps/StartTown_Pub/scripts.pory"
	walk_right
# 210 "data/maps/StartTown_Pub/scripts.pory"
	walk_right
# 210 "data/maps/StartTown_Pub/scripts.pory"
	walk_right
# 210 "data/maps/StartTown_Pub/scripts.pory"
	walk_right
# 210 "data/maps/StartTown_Pub/scripts.pory"
	walk_right
# 211 "data/maps/StartTown_Pub/scripts.pory"
	walk_up
# 211 "data/maps/StartTown_Pub/scripts.pory"
	walk_up
# 211 "data/maps/StartTown_Pub/scripts.pory"
	walk_up
# 212 "data/maps/StartTown_Pub/scripts.pory"
	step_end

# 215 "data/maps/StartTown_Pub/scripts.pory"
PlayerWalkToStage2:
# 216 "data/maps/StartTown_Pub/scripts.pory"
	walk_up
# 216 "data/maps/StartTown_Pub/scripts.pory"
	walk_up
# 216 "data/maps/StartTown_Pub/scripts.pory"
	walk_up
# 216 "data/maps/StartTown_Pub/scripts.pory"
	walk_up
# 217 "data/maps/StartTown_Pub/scripts.pory"
	walk_right
# 217 "data/maps/StartTown_Pub/scripts.pory"
	walk_right
# 217 "data/maps/StartTown_Pub/scripts.pory"
	walk_right
# 217 "data/maps/StartTown_Pub/scripts.pory"
	walk_right
# 217 "data/maps/StartTown_Pub/scripts.pory"
	walk_right
# 218 "data/maps/StartTown_Pub/scripts.pory"
	walk_up
# 218 "data/maps/StartTown_Pub/scripts.pory"
	walk_up
# 218 "data/maps/StartTown_Pub/scripts.pory"
	walk_up
# 219 "data/maps/StartTown_Pub/scripts.pory"
	step_end

# 222 "data/maps/StartTown_Pub/scripts.pory"
AuroraLeaves:
# 223 "data/maps/StartTown_Pub/scripts.pory"
	walk_in_place_fast_down
# 224 "data/maps/StartTown_Pub/scripts.pory"
	walk_down
# 225 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 225 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 226 "data/maps/StartTown_Pub/scripts.pory"
	walk_down
# 227 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 227 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 228 "data/maps/StartTown_Pub/scripts.pory"
	step_end

# 231 "data/maps/StartTown_Pub/scripts.pory"
EmilyLeaves:
# 232 "data/maps/StartTown_Pub/scripts.pory"
	walk_in_place_fast_down
# 233 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 233 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 233 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 234 "data/maps/StartTown_Pub/scripts.pory"
	walk_down
# 235 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 235 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 236 "data/maps/StartTown_Pub/scripts.pory"
	step_end

# 239 "data/maps/StartTown_Pub/scripts.pory"
LizzieLeaves:
# 240 "data/maps/StartTown_Pub/scripts.pory"
	walk_in_place_fast_down
# 241 "data/maps/StartTown_Pub/scripts.pory"
	walk_up
# 242 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 242 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 242 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 242 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 242 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 243 "data/maps/StartTown_Pub/scripts.pory"
	walk_down
# 244 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 244 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 245 "data/maps/StartTown_Pub/scripts.pory"
	walk_down
# 246 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 246 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 246 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 247 "data/maps/StartTown_Pub/scripts.pory"
	step_end

# 250 "data/maps/StartTown_Pub/scripts.pory"
GeorgiaLeaves:
# 251 "data/maps/StartTown_Pub/scripts.pory"
	walk_in_place_fast_down
# 252 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 252 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 252 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 252 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 252 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 252 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 253 "data/maps/StartTown_Pub/scripts.pory"
	walk_down
# 254 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 254 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 255 "data/maps/StartTown_Pub/scripts.pory"
	walk_down
# 256 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 256 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 256 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 257 "data/maps/StartTown_Pub/scripts.pory"
	step_end

# 260 "data/maps/StartTown_Pub/scripts.pory"
NoraStartsToLeave:
# 261 "data/maps/StartTown_Pub/scripts.pory"
	walk_down
# 261 "data/maps/StartTown_Pub/scripts.pory"
	walk_down
# 261 "data/maps/StartTown_Pub/scripts.pory"
	walk_down
# 261 "data/maps/StartTown_Pub/scripts.pory"
	walk_down
# 261 "data/maps/StartTown_Pub/scripts.pory"
	walk_down
# 261 "data/maps/StartTown_Pub/scripts.pory"
	walk_down
# 262 "data/maps/StartTown_Pub/scripts.pory"
	face_left
# 263 "data/maps/StartTown_Pub/scripts.pory"
	step_end

# 266 "data/maps/StartTown_Pub/scripts.pory"
AbiStartsToLeave:
# 267 "data/maps/StartTown_Pub/scripts.pory"
	walk_in_place_fast_down
# 268 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 268 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 269 "data/maps/StartTown_Pub/scripts.pory"
	delay_16
# 270 "data/maps/StartTown_Pub/scripts.pory"
	emote_exclamation_mark
# 271 "data/maps/StartTown_Pub/scripts.pory"
	delay_16
# 272 "data/maps/StartTown_Pub/scripts.pory"
	step_end

# 275 "data/maps/StartTown_Pub/scripts.pory"
AbiGoesToPlayer:
# 276 "data/maps/StartTown_Pub/scripts.pory"
	walk_in_place_down
# 277 "data/maps/StartTown_Pub/scripts.pory"
	walk_right
# 277 "data/maps/StartTown_Pub/scripts.pory"
	walk_right
# 277 "data/maps/StartTown_Pub/scripts.pory"
	walk_right
# 278 "data/maps/StartTown_Pub/scripts.pory"
	walk_down
# 278 "data/maps/StartTown_Pub/scripts.pory"
	walk_down
# 279 "data/maps/StartTown_Pub/scripts.pory"
	delay_16
# 280 "data/maps/StartTown_Pub/scripts.pory"
	walk_in_place_down
# 281 "data/maps/StartTown_Pub/scripts.pory"
	step_end

# 284 "data/maps/StartTown_Pub/scripts.pory"
AbiPokeball1:
# 285 "data/maps/StartTown_Pub/scripts.pory"
	walk_up
# 286 "data/maps/StartTown_Pub/scripts.pory"
	delay_16
# 287 "data/maps/StartTown_Pub/scripts.pory"
	walk_in_place_up
# 288 "data/maps/StartTown_Pub/scripts.pory"
	step_end

# 291 "data/maps/StartTown_Pub/scripts.pory"
AbiNextPokeball:
# 292 "data/maps/StartTown_Pub/scripts.pory"
	walk_left
# 293 "data/maps/StartTown_Pub/scripts.pory"
	face_up
# 294 "data/maps/StartTown_Pub/scripts.pory"
	delay_16
# 295 "data/maps/StartTown_Pub/scripts.pory"
	walk_in_place_up
# 296 "data/maps/StartTown_Pub/scripts.pory"
	step_end

# 299 "data/maps/StartTown_Pub/scripts.pory"
AbiBackToPlayer:
# 300 "data/maps/StartTown_Pub/scripts.pory"
	walk_down
# 300 "data/maps/StartTown_Pub/scripts.pory"
	walk_down
# 301 "data/maps/StartTown_Pub/scripts.pory"
	walk_right
# 302 "data/maps/StartTown_Pub/scripts.pory"
	face_right
# 303 "data/maps/StartTown_Pub/scripts.pory"
	step_end

# 306 "data/maps/StartTown_Pub/scripts.pory"
AbiLeaves:
# 307 "data/maps/StartTown_Pub/scripts.pory"
	walk_down
# 307 "data/maps/StartTown_Pub/scripts.pory"
	walk_down
# 307 "data/maps/StartTown_Pub/scripts.pory"
	walk_down
# 307 "data/maps/StartTown_Pub/scripts.pory"
	walk_down
# 307 "data/maps/StartTown_Pub/scripts.pory"
	walk_down
# 307 "data/maps/StartTown_Pub/scripts.pory"
	walk_down
# 307 "data/maps/StartTown_Pub/scripts.pory"
	walk_down
# 307 "data/maps/StartTown_Pub/scripts.pory"
	walk_down
# 308 "data/maps/StartTown_Pub/scripts.pory"
	step_end

# 311 "data/maps/StartTown_Pub/scripts.pory"
Thinks:
# 312 "data/maps/StartTown_Pub/scripts.pory"
	emote_question_mark
	step_end

PickStarter_2::
# 393 "data/maps/StartTown_Pub/scripts.pory"
	lockall
# 394 "data/maps/StartTown_Pub/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 0
	goto_if_eq PickStarter_2_2
# 419 "data/maps/StartTown_Pub/scripts.pory"
	msgbox PickStarter_2_Text_2
PickStarter_2_1:
# 421 "data/maps/StartTown_Pub/scripts.pory"
	releaseall
	end

PickStarter_2_2:
# 395 "data/maps/StartTown_Pub/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 396 "data/maps/StartTown_Pub/scripts.pory"
	playmoncry SPECIES_TORCHIC, CRY_MODE_NORMAL
# 397 "data/maps/StartTown_Pub/scripts.pory"
	msgbox PickStarter_2_Text_0, MSGBOX_YESNO
# 398 "data/maps/StartTown_Pub/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PickStarter_2_5
# 415 "data/maps/StartTown_Pub/scripts.pory"
	hidemonpic
	goto PickStarter_2_1

PickStarter_2_5:
# 399 "data/maps/StartTown_Pub/scripts.pory"
	givemon SPECIES_TORCHIC, 5, item = ITEM_NONE, ball = ITEM_POKE_BALL, move1 = MOVE_TACKLE, move2 = MOVE_LEER
# 401 "data/maps/StartTown_Pub/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 402 "data/maps/StartTown_Pub/scripts.pory"
	msgbox PickStarter_2_Text_1
# 403 "data/maps/StartTown_Pub/scripts.pory"
	call NicknamePartyMon
# 404 "data/maps/StartTown_Pub/scripts.pory"
	removeobject Pokeball2
# 405 "data/maps/StartTown_Pub/scripts.pory"
	setflag FLAG_POKEBALL_1
# 406 "data/maps/StartTown_Pub/scripts.pory"
	setflag FLAG_POKEBALL_2
# 407 "data/maps/StartTown_Pub/scripts.pory"
	setflag FLAG_POKEBALL_3
# 408 "data/maps/StartTown_Pub/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 409 "data/maps/StartTown_Pub/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 410 "data/maps/StartTown_Pub/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto PickStarter_2_1


PickStarter_3::
# 426 "data/maps/StartTown_Pub/scripts.pory"
	lockall
# 427 "data/maps/StartTown_Pub/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 0
	goto_if_eq PickStarter_3_2
# 451 "data/maps/StartTown_Pub/scripts.pory"
	msgbox PickStarter_2_Text_2
PickStarter_3_1:
# 453 "data/maps/StartTown_Pub/scripts.pory"
	releaseall
	end

PickStarter_3_2:
# 428 "data/maps/StartTown_Pub/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 429 "data/maps/StartTown_Pub/scripts.pory"
	playmoncry SPECIES_MUDKIP, CRY_MODE_NORMAL
# 430 "data/maps/StartTown_Pub/scripts.pory"
	msgbox PickStarter_3_Text_0, MSGBOX_YESNO
# 431 "data/maps/StartTown_Pub/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PickStarter_3_5
# 447 "data/maps/StartTown_Pub/scripts.pory"
	hidemonpic
	goto PickStarter_3_1

PickStarter_3_5:
# 432 "data/maps/StartTown_Pub/scripts.pory"
	givemon SPECIES_MUDKIP, 5, item = ITEM_NONE, ball = ITEM_POKE_BALL, move1 = MOVE_TACKLE, move2 = MOVE_GROWL
# 434 "data/maps/StartTown_Pub/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 435 "data/maps/StartTown_Pub/scripts.pory"
	msgbox PickStarter_3_Text_1
# 436 "data/maps/StartTown_Pub/scripts.pory"
	call NicknamePartyMon
# 437 "data/maps/StartTown_Pub/scripts.pory"
	removeobject Pokeball3
# 438 "data/maps/StartTown_Pub/scripts.pory"
	setflag FLAG_POKEBALL_1
# 439 "data/maps/StartTown_Pub/scripts.pory"
	setflag FLAG_POKEBALL_2
# 440 "data/maps/StartTown_Pub/scripts.pory"
	setflag FLAG_POKEBALL_3
# 441 "data/maps/StartTown_Pub/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 442 "data/maps/StartTown_Pub/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 443 "data/maps/StartTown_Pub/scripts.pory"
	setvar VAR_STARTER_MON, 2
	goto PickStarter_3_1


PickStarter_1::
# 458 "data/maps/StartTown_Pub/scripts.pory"
	lockall
# 459 "data/maps/StartTown_Pub/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 0
	goto_if_eq PickStarter_1_2
# 484 "data/maps/StartTown_Pub/scripts.pory"
	msgbox PickStarter_2_Text_2
PickStarter_1_1:
# 486 "data/maps/StartTown_Pub/scripts.pory"
	releaseall
	end

PickStarter_1_2:
# 460 "data/maps/StartTown_Pub/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 461 "data/maps/StartTown_Pub/scripts.pory"
	playmoncry SPECIES_BULBASAUR, CRY_MODE_NORMAL
# 462 "data/maps/StartTown_Pub/scripts.pory"
	msgbox PickStarter_1_Text_0, MSGBOX_YESNO
# 463 "data/maps/StartTown_Pub/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PickStarter_1_5
# 480 "data/maps/StartTown_Pub/scripts.pory"
	hidemonpic
	goto PickStarter_1_1

PickStarter_1_5:
# 464 "data/maps/StartTown_Pub/scripts.pory"
	givemon SPECIES_BULBASAUR, 5, item = ITEM_NONE, ball = ITEM_POKE_BALL, move1 = MOVE_VINE_WHIP, move2 = MOVE_GROWL
# 466 "data/maps/StartTown_Pub/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 467 "data/maps/StartTown_Pub/scripts.pory"
	msgbox PickStarter_1_Text_1
# 468 "data/maps/StartTown_Pub/scripts.pory"
	call NicknamePartyMon
# 469 "data/maps/StartTown_Pub/scripts.pory"
	removeobject Pokeball1
# 470 "data/maps/StartTown_Pub/scripts.pory"
	setflag FLAG_POKEBALL_1
# 471 "data/maps/StartTown_Pub/scripts.pory"
	setflag FLAG_POKEBALL_2
# 472 "data/maps/StartTown_Pub/scripts.pory"
	setflag FLAG_POKEBALL_3
# 473 "data/maps/StartTown_Pub/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 474 "data/maps/StartTown_Pub/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 475 "data/maps/StartTown_Pub/scripts.pory"
	setvar VAR_STARTER_MON, 1
	goto PickStarter_1_1


Barista::
# 491 "data/maps/StartTown_Pub/scripts.pory"
	lock
# 492 "data/maps/StartTown_Pub/scripts.pory"
	message Barista_Text_0
# 493 "data/maps/StartTown_Pub/scripts.pory"
	waitmessage
# 494 "data/maps/StartTown_Pub/scripts.pory"
	pokemart MartBar
# 495 "data/maps/StartTown_Pub/scripts.pory"
	msgbox BaristaThanks
# 496 "data/maps/StartTown_Pub/scripts.pory"
	release
	end


	.align 2
# 500 "data/maps/StartTown_Pub/scripts.pory"
MartBar:
# 501 "data/maps/StartTown_Pub/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 502 "data/maps/StartTown_Pub/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 503 "data/maps/StartTown_Pub/scripts.pory"
	.2byte ITEM_SODA_POP
# 504 "data/maps/StartTown_Pub/scripts.pory"
	.2byte ITEM_LEMONADE
	.2byte ITEM_NONE

MissedTheGig_Text_0:
# 34 "data/maps/StartTown_Pub/scripts.pory"
	.string "???: And thank you for coming!$"

DontLeaveYet1_Text_0:
# 123 "data/maps/StartTown_Pub/scripts.pory"
	.string "???: Wait!$"

DontLeaveYet1_Text_1:
# 130 "data/maps/StartTown_Pub/scripts.pory"
	.string "Abigail is counting on you to take care\n"
	.string "of a POKéMON!$"

NoraBusy_Text_0:
# 167 "data/maps/StartTown_Pub/scripts.pory"
	.string "She's busy sorting photos on her\n"
	.string "camera…$"

NoraGiveDex_Text_0:
# 180 "data/maps/StartTown_Pub/scripts.pory"
	.string "Obtained POKéDEX from Nora!$"

PickStarter_2_Text_0:
# 397 "data/maps/StartTown_Pub/scripts.pory"
	.string "Do you want to choose \nFire type Torchic?$"

PickStarter_2_Text_1:
# 402 "data/maps/StartTown_Pub/scripts.pory"
	.string "Received Torchic!$"

PickStarter_2_Text_2:
# 419 "data/maps/StartTown_Pub/scripts.pory"
	.string "Abigail said to pick one POKéMON.\p"
	.string "Let's not be greedy.$"

PickStarter_3_Text_0:
# 430 "data/maps/StartTown_Pub/scripts.pory"
	.string "Do you want to choose \nWater type Mudkip?$"

PickStarter_3_Text_1:
# 435 "data/maps/StartTown_Pub/scripts.pory"
	.string "Received Mudkip!$"

PickStarter_1_Text_0:
# 462 "data/maps/StartTown_Pub/scripts.pory"
	.string "Do you want to choose \nGrass type Bulbasaur?$"

PickStarter_1_Text_1:
# 467 "data/maps/StartTown_Pub/scripts.pory"
	.string "Received Bulbasaur!$"

Barista_Text_0:
# 492 "data/maps/StartTown_Pub/scripts.pory"
	.string "Welcome to the Two-Legged Dog, what \ncan I get for you?$"

YouJustGotHere::
# 315 "data/maps/StartTown_Pub/scripts.pory"
	.string "???: You just got here, didn't you?\p"
	.string "… \p"
	.string "???: We were just rehearsing, don't \n"
	.string "worry you didn't miss anything.\p"
	.string "ABIGAIL: I'm Abigail by the way, but \n"
	.string "my friends call me Abi.\p"
	.string "I'm The Last Dinner Party's lead singer!$"

OhYouKnew::
# 325 "data/maps/StartTown_Pub/scripts.pory"
	.string "You knew?\p"
	.string "Oh you're a fan!\p"
	.string "What's your name?\p"
	.string "…\p"
	.string "Well nice to meet you, {PLAYER}{KUN}!\p"
	.string "Will we be seeing you in Mirror City? $"

WeAreOnTour::
# 334 "data/maps/StartTown_Pub/scripts.pory"
	.string "What do you mean you didn't know about\n"
	.string "our residency?\p"
	.string "Well, we scored a permanent spot at the\n"
	.string "Mirror City concert hall!\p"
	.string "We even have a special challenge: \n"
	.string "if you can beat all five of us in \l"
	.string "POKéMON battle, we're adding you \l"
	.string "to the guest list!\p"
	.string "Forever! \p"
	.string "Maybe you should try it!$"

NoPokemon::
# 347 "data/maps/StartTown_Pub/scripts.pory"
	.string "You… don't have any POKéMON?\p"
	.string "At all??\p"
	.string "Oh…\p"
	.string "Hum…\p"
	.string "Okay, I'm not supposed to do that but…$"

ChooseOne::
# 355 "data/maps/StartTown_Pub/scripts.pory"
	.string "I've been trying to find a home for\n"
	.string "these little ones for ages.\p"
	.string "Grace and the shelter staff agreed\n"
	.string "to take care of them here, but I \l"
	.string "don't see why you couldn't take \l"
	.string "one under your wing…\p"
	.string "Well, I love chatting but I don't want \n"
	.string "the others to leave without me.\p"
	.string "We have a show in Candlewax City, we're\n"
	.string "opening for someone very special \l"
	.string "before settling down at our new spot. \p"
	.string "See you there!$"

NoraDex::
# 370 "data/maps/StartTown_Pub/scripts.pory"
	.string "NORA: Hey! I'm Nora, the band's\n"
	.string "photographer.\p"
	.string "I see that you're giving Abi a \n"
	.string "hand with those POKéMON, that's \l"
	.string "really nice of you! \p"
	.string "Look, I'm working on a project, aside\n"
	.string "from concert photography. \p"
	.string "Well, I was… but being on tour takes\n"
	.string "lots of time and effort.\p"
	.string "I like to take pictures of POKéMON\n"
	.string "when I catch them.\p"
	.string "I don't know if that's something \n"
	.string "you'd like to do, but I don't have \l"
	.string "time to use my special POKéMON \l"
	.string "camera anymore.\p"
	.string "If Abi trusts you with a POKéMON, I \n"
	.string "trust you with my precious POKéDEX! \p"
	.string "You don't have to use it if you don't \n"
	.string "want to, but here, take good care of it!$"

BaristaThanks::
# 507 "data/maps/StartTown_Pub/scripts.pory"
	.string "Alright!\p"
	.string "Oh, and thanks for taking care of\n"
	.string "one of the POKéMON, it makes it \l"
	.string "easier for the shelter's staff!$"

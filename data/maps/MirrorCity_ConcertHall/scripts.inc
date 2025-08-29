MirrorCity_ConcertHall_MapScripts::
	.byte 0


ResetBattles::
# 13 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	setobjectxy 1, 12, 8
# 14 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	setobjectxy 2, 7, 4
# 15 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	setobjectxy 5, 8, 4
# 16 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	setobjectxy 3, 9, 4
# 17 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	setobjectxy 4, 10, 4
# 19 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
# 20 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 21 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 22 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 23 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 25 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	setvar VAR_MIRROR_CITY_TLDP_PROGRESS, 0
	return


MCCH_TLDPTriggerBattles::
# 29 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	lock
# 30 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerGetIntoPosition
# 31 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	waitmovement 0
# 32 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	call MCCH_TLDPBattles
# 33 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	release
	end


MCCH_TLDPBattles::
# 38 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	switch VAR_MIRROR_CITY_TLDP_PROGRESS
# 39 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	case 0, MCCH_TLDPBattles_2
# 60 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	case 1, MCCH_TLDPBattles_3
# 81 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	case 2, MCCH_TLDPBattles_4
# 102 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	case 3, MCCH_TLDPBattles_5
# 123 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	case 4, MCCH_TLDPBattles_6
	return

MCCH_TLDPBattles_2:
# 40 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 41 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	applymovement 1, BandMemberGetIntoPosition
# 42 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	waitmovement 0
# 43 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	msgbox MCCH_Aurora_IntroSpeech, MSGBOX_DEFAULT
# 44 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	trainerbattle_no_intro TRAINER_SIDNEY, MCCH_Aurora_Defeat
# 45 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	msgbox MCCH_Aurora_PostBattleSpeech, MSGBOX_AUTOCLOSE
# 47 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerGoBackToSide
# 48 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	waitmovement 0
# 49 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	fadescreen FADE_TO_BLACK
# 50 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	setobjectxy 1, 6, 4
# 51 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 52 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	waitmovement 0
# 53 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 54 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	setobjectxy 2, 12, 8
# 55 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 56 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	waitmovement 0
# 57 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	setvar VAR_MIRROR_CITY_TLDP_PROGRESS, 1
# 58 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return

MCCH_TLDPBattles_3:
# 61 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 62 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	applymovement 2, BandMemberGetIntoPosition
# 63 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	waitmovement 0
# 64 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	msgbox MCCH_Emily_IntroSpeech, MSGBOX_DEFAULT
# 65 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	trainerbattle_no_intro TRAINER_PHOEBE, MCCH_Emily_Defeat
# 66 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	msgbox MCCH_Emily_PostBattleSpeech, MSGBOX_AUTOCLOSE
# 68 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerGoBackToSide
# 69 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	waitmovement 0
# 70 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	fadescreen FADE_TO_BLACK
# 71 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	setobjectxy 2, 7, 4
# 72 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 73 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	waitmovement 0
# 74 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 75 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	setobjectxy 3, 12, 8
# 76 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 77 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	waitmovement 0
# 78 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	setvar VAR_MIRROR_CITY_TLDP_PROGRESS, 2
# 79 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return

MCCH_TLDPBattles_4:
# 82 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 83 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	applymovement 3, BandMemberGetIntoPosition
# 84 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	waitmovement 0
# 85 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	msgbox MCCH_Lizzie_IntroSpeech, MSGBOX_DEFAULT
# 86 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	trainerbattle_no_intro TRAINER_GLACIA, MCCH_Lizzie_Defeat
# 87 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	msgbox MCCH_Lizzie_PostBattleSpeech, MSGBOX_AUTOCLOSE
# 89 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerGoBackToSide
# 90 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	waitmovement 0
# 91 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	fadescreen FADE_TO_BLACK
# 92 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	setobjectxy 3, 9, 4
# 93 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 94 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	waitmovement 0
# 95 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 96 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	setobjectxy 4, 12, 8
# 97 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 98 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	waitmovement 0
# 99 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	setvar VAR_MIRROR_CITY_TLDP_PROGRESS, 3
# 100 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return

MCCH_TLDPBattles_5:
# 103 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 104 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	applymovement 4, BandMemberGetIntoPosition
# 105 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	waitmovement 0
# 106 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	msgbox MCCH_Georgia_IntroSpeech, MSGBOX_DEFAULT
# 107 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLACE, MCCH_Georgia_Defeat
# 108 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	msgbox MCCH_Georgia_PostBattleSpeech, MSGBOX_AUTOCLOSE
# 110 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerGoBackToSide
# 111 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	waitmovement 0
# 112 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	fadescreen FADE_TO_BLACK
# 113 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	setobjectxy 4, 10, 4
# 114 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 115 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	waitmovement 0
# 116 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 117 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	setobjectxy 5, 12, 8
# 118 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 119 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	waitmovement 0
# 120 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	setvar VAR_MIRROR_CITY_TLDP_PROGRESS, 4
# 121 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return

MCCH_TLDPBattles_6:
# 124 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 125 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	applymovement 5, BandMemberGetIntoPosition
# 126 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	waitmovement 0
# 127 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	msgbox MCCH_Abi_IntroSpeech, MSGBOX_DEFAULT
# 128 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	trainerbattle_no_intro TRAINER_DRAKE, MCCH_Abi_Defeat
# 129 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	msgbox MCCH_Abi_PostBattleSpeech, MSGBOX_AUTOCLOSE
# 131 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	call MCCH_GoblinShowsUp
# 132 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	call MCCH_MoveOnToHOF
	return


# 275 "data/maps/MirrorCity_ConcertHall/scripts.pory"
PlayerGetIntoPosition:
# 276 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	walk_right
# 276 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	walk_right
# 277 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	step_end

# 280 "data/maps/MirrorCity_ConcertHall/scripts.pory"
PlayerGoBackToSide:
# 281 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	walk_left
# 281 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	walk_left
# 281 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	walk_left
# 281 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	walk_left
# 282 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	face_right
# 283 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	step_end

# 286 "data/maps/MirrorCity_ConcertHall/scripts.pory"
BandMemberGetIntoPosition:
# 287 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	walk_left
# 287 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	walk_left
# 287 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	walk_left
# 287 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	walk_left
# 288 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	step_end

MCCH_GoblinShowsUp::
# 292 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	addobject 6
# 293 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	playse SE_EXIT
# 294 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	waitse
# 295 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	applymovement 6, GoblinInterruptsAbi
# 296 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	waitmovement 0
# 297 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 298 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 299 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	waitmovement 0
# 300 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	delay 20
# 301 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	applymovement 6, ExcitedGoblin
# 302 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	waitmovement 0
# 303 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	msgbox Goblin_SomeAdvice, MSGBOX_AUTOCLOSE
# 304 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 305 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	waitmovement 0
# 306 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	applymovement 6, ExcitedGoblin
# 307 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	waitmovement 0
# 308 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	msgbox Goblin_ItsAlreadyOver, MSGBOX_AUTOCLOSE
	return


# 312 "data/maps/MirrorCity_ConcertHall/scripts.pory"
GoblinInterruptsAbi:
# 313 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	walk_fast_right
# 313 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	walk_fast_right
# 313 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	walk_fast_right
# 313 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	walk_fast_right
# 313 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	walk_fast_right
# 313 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	walk_fast_right
# 313 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	walk_fast_right
# 314 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	face_down
# 315 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	step_end

# 318 "data/maps/MirrorCity_ConcertHall/scripts.pory"
ExcitedGoblin:
# 319 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	walk_in_place_fast_down
# 319 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	walk_in_place_fast_down
# 319 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	walk_in_place_fast_down
# 320 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	step_end

MCCH_MoveOnToHOF::
# 342 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	applymovement 5, WalkInPlaceUp
# 343 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	waitmovement 0
# 344 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	msgbox MCCH_MoveOnToHOF_Text_0, MSGBOX_AUTOCLOSE
# 345 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 346 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	waitmovement 0
# 347 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	msgbox MCCH_MoveOnToHOF_Text_1, MSGBOX_AUTOCLOSE
# 348 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 349 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	waitmovement 0
# 350 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	delay 20
# 351 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	msgbox Abi_LetsMoveOn, MSGBOX_AUTOCLOSE
# 352 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	applymovement 5, MCCH_StartToLeave
# 353 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCCH_StartToLeave
# 354 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	delay 40
# 355 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	warp MAP_EVER_GRANDE_CITY_HALL_OF_FAME, 7, 16
	return


# 360 "data/maps/MirrorCity_ConcertHall/scripts.pory"
MCCH_StartToLeave:
# 361 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	walk_right
# 361 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	walk_right
# 361 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	walk_right
# 361 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	walk_right
# 362 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	walk_down
# 362 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	walk_down
# 362 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	walk_down
# 363 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	walk_right
# 363 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	walk_right
# 363 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	walk_right
# 364 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	step_end

MCCH_MoveOnToHOF_Text_0:
# 344 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	.string "ABIGAIL: Aw, that's sweet, Goblin.\p"
	.string "Start warming up!$"

MCCH_MoveOnToHOF_Text_1:
# 347 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	.string "ABIGAIL: {PLAYER}…$"

MCCH_Aurora_IntroSpeech::
# 139 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	.string "AURORA: Hey! So you finally made it \n"
	.string "here!\p"
	.string "The challenge starts with me! \p"
	.string "Also, I'll be on vocals and keys \n"
	.string "tonight. \p"
	.string "You look like you really want that\n"
	.string "lifetime guestlist spot!\p"
	.string "Well, you'll have to show us that you \n"
	.string "have the guts to handle our show!\p"
	.string "So put up a fight!$"

MCCH_Aurora_Defeat::
# 152 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	.string "Give me the strength…$"

MCCH_Aurora_PostBattleSpeech::
# 156 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	.string "AURORA: That was something!\p"
	.string "If anyone could win this thing, it \n"
	.string "probably would be you!\p"
	.string "Go ahead, face the others, though \n"
	.string "I have to warn you.\p"
	.string "One wrong move and they'll tear \n"
	.string "you apart.\p"
	.string "Good luck!$"

MCCH_Emily_IntroSpeech::
# 167 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	.string "EMILY: Hi, {PLAYER}. \p"
	.string "It's my turn! \p"
	.string "I'll be the one shredding on\n"
	.string "guitar, mandolin and flute.\p"
	.string "… \p"
	.string "Don't waste my time! \p"
	.string "Justice for fat riffs!$"

MCCH_Emily_Defeat::
# 177 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	.string "Second best…$"

MCCH_Emily_PostBattleSpeech::
# 181 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	.string "EMILY: You know, I hate to lose \n"
	.string "but that was fun!\p"
	.string "You definitely get the importance of \n"
	.string "fat riffs.\p"
	.string "With that energy you'll have the \n"
	.string "world at your feet.\p"
	.string "Go on, I'll see you soon.\p"
	.string "You better sing along with every \n"
	.string "guitar solo!$"

MCCH_Lizzie_IntroSpeech::
# 193 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	.string "LIZZIE: {PLAYER}, hi!\p"
	.string "I knew we'd be seeing you here \n"
	.string "eventually! \p"
	.string "Running and spinning on stage is\n"
	.string "fun but you know what, I'd leave it\l"
	.string "all for a good battle.\p"
	.string "Let's dance, shall we?\n"
	.string "Turn and face me!$"

MCCH_Lizzie_Defeat::
# 204 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	.string "Washed the sin from my back…$"

MCCH_Lizzie_PostBattleSpeech::
# 208 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	.string "LIZZIE: Hey you're pretty good \n"
	.string "at this!\p"
	.string "Something tells me your face won't\n"
	.string "be forgotten.\p"
	.string "We'll be seeing you around, won't \n"
	.string "we? \p"
	.string "Keep it up, see you at the show!$"

MCCH_Georgia_IntroSpeech::
# 218 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	.string "GEORGIA: Hey love, good to see you \n"
	.string "again! \p"
	.string "I'll be playing killer basslines later.\p"
	.string "But you knew that already, didn't\n"
	.string "you?\p"
	.string "Now show me, are you more of a sailor\n"
	.string "or a nightingale?\p"
	.string "Let's find out!$"

MCCH_Georgia_Defeat::
# 229 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	.string "Nothing matters…$"

MCCH_Georgia_PostBattleSpeech::
# 233 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	.string "GEORGIA: Oh my god that was so good!\n"
	.string "You sure seem to understand us.\p"
	.string "One more and we're away, Abi is \n"
	.string "waiting!$"

MCCH_Abi_IntroSpeech::
# 240 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	.string "ABIGAIL: Hi angel!\p"
	.string "You've made it this far, that's so \n"
	.string "cool!\p"
	.string "I guess we'll be seeing you at the \n"
	.string "show later.\p"
	.string "Well, I'm sure you slay but you know, \n"
	.string "I have to make sure that you're\l"
	.string "not just here for entertainment.\p"
	.string "So pull your boots up,\n"
	.string "and commit to the role,\l"
	.string "fight for that guestlist!$"

MCCH_Abi_Defeat::
# 254 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	.string "I can't win them all…\p"
	.string "…\p"
	.string "Period! You've just earned yourself a \n"
	.string "permanent spot on The Last Dinner \l"
	.string "Party's guest list, {PLAYER}!$"

MCCH_Abi_PostBattleSpeech::
# 262 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	.string "ABIGAIL: Wow that was amazing!\p"
	.string "I had a feeling you'd be a fucking\n"
	.string "icon.\p"
	.string "I knew when we first met in Prelude \n"
	.string "Town that you'd be one of the greats! \p"
	.string "You've totally earned your spot on our \n"
	.string "guestlist, I can't wait to see you on \l"
	.string "the front row!\p"
	.string "Now all we need to do is add you\n"
	.string "to the… $"

Goblin_SomeAdvice::
# 323 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	.string "GOBLIN: {PLAYER}!\p"
	.string "Here's some advice before you challenge\n"
	.string "the band…$"

Goblin_ItsAlreadyOver::
# 329 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	.string "GOBLIN: Huh?\n"
	.string "What, what, what?\p"
	.string "What do you mean it's over? \p"
	.string "You've already won ?! \p"
	.string "{PLAYER}, that's amazing! \p"
	.string "I knew you could do it, I'm so happy \n"
	.string "for you! \p"
	.string "I'm right behind you though, I'll win \n"
	.string "the challenge too!$"

Abi_LetsMoveOn::
# 367 "data/maps/MirrorCity_ConcertHall/scripts.pory"
	.string "ABIGAIL: You've officially won the \n"
	.string "TLDP challenge! \p"
	.string "Follow me… $"

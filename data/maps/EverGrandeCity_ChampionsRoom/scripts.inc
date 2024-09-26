.set LOCALID_WALLACE, 1
.set LOCALID_RIVAL, 2
.set LOCALID_BIRCH, 3

EverGrandeCity_ChampionsRoom_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_ChampionsRoom_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_ChampionsRoom_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_ChampionsRoom_OnFrame
	.byte 0

EverGrandeCity_ChampionsRoom_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	end

EverGrandeCity_ChampionsRoom_OnWarp:
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth
	.2byte 0

EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

EverGrandeCity_ChampionsRoom_OnFrame:
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_EnterRoom
	.2byte 0

EverGrandeCity_ChampionsRoom_EventScript_EnterRoom::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp4
	waitmovement 0
	delay 40
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace
	waitmovement 0
	setvar VAR_TEMP_1, 1
	goto EverGrandeCity_ChampionsRoom_EventScript_Wallace
	releaseall
	end


EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace:
	walk_up
	walk_up
	step_end

EverGrandeCity_ChampionsRoom_EventScript_Wallace::
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
	msgbox EverGrandeCity_ChampionsRoom_Text_IntroSpeech, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_WALLACE, EverGrandeCity_ChampionsRoom_Text_Defeat
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated
	end


EverGrandeCity_ChampionsRoom_EventScript_Defeated::
	playse SE_DOOR
	setmetatile 6, 1, METATILE_EliteFour_OpenDoorChampion_Frame, FALSE
	setmetatile 6, 2, METATILE_EliteFour_OpenDoorChampion_Opening, FALSE
	special DrawWholeMapView
	msgbox EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	closemessage
	playse SE_DOOR
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_Defeated_2
	call EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic
EverGrandeCity_ChampionsRoom_EventScript_Defeated_1:
	addobject LOCALID_RIVAL
	call EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_Defeated_6
	goto EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice
EverGrandeCity_ChampionsRoom_EventScript_Defeated_5:
	end

EverGrandeCity_ChampionsRoom_EventScript_Defeated_2:
	call EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated_1

EverGrandeCity_ChampionsRoom_EventScript_Defeated_6:
	goto EverGrandeCity_ChampionsRoom_EventScript_MayAdvice
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated_5


EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic::
	playbgm MUS_ENCOUNTER_MAY, FALSE
	return


EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic::
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
	return


EverGrandeCity_ChampionsRoom_EventScript_MayAdvice::
	msgbox EverGrandeCity_ChampionsRoom_Text_MayAdvice, MSGBOX_DEFAULT
	delay 40
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
	msgbox EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver, MSGBOX_DEFAULT
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
	end


EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice::
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanAdvice, MSGBOX_DEFAULT
	delay 40
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon, MSGBOX_DEFAULT
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
	end


EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF::
	closemessage
	addobject LOCALID_BIRCH
	applymovement LOCALID_BIRCH, EverGrandeCity_ChampionsRoom_Movement_BirchArrives
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex, MSGBOX_DEFAULT
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchCongratulations, MSGBOX_DEFAULT
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	delay 20
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe, MSGBOX_DEFAULT
	closemessage
	delay 30
	applymovement LOCALID_WALLACE, EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterUp
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalFollows
	waitmovement 0
	delay 20
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside, MSGBOX_DEFAULT
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_2
	call EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations
EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_1:
	closemessage
	applymovement LOCALID_WALLACE, EverGrandeCity_ChampionsRoom_Movement_WallaceExit
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExit
	waitmovement 0
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
	warp MAP_EVER_GRANDE_CITY_HALL_OF_FAME, 7, 16
	waitstate
	releaseall
	end

EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_2:
	call EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_1


EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations::
	msgbox EverGrandeCity_ChampionsRoom_Text_MayCongratulations, MSGBOX_DEFAULT
	return


EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations::
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations, MSGBOX_DEFAULT
	return


EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer::
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return


EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth::
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth
	waitmovement 0
	return


EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart:
	walk_up
	walk_up
	step_end

EverGrandeCity_ChampionsRoom_Movement_PlayerExit:
	walk_up
	delay_16
	walk_up
	delay_8
	set_invisible
	step_end

EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_up
	walk_in_place_faster_right
	step_end

EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth:
	walk_in_place_faster_up
	delay_16
	walk_in_place_faster_right
	delay_16
	walk_in_place_faster_up
	delay_8
	walk_in_place_faster_right
	delay_16
	step_end

EverGrandeCity_ChampionsRoom_Movement_RivalFollows:
	walk_right
	walk_up
	step_end

EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart:
	walk_up
	walk_up
	walk_in_place_faster_down
	step_end

EverGrandeCity_ChampionsRoom_Movement_WallaceExit:
	walk_up
	delay_8
	set_invisible
	step_end

EverGrandeCity_ChampionsRoom_Movement_BirchArrives:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_up
	walk_in_place_faster_left
	step_end

EverGrandeCity_ChampionsRoom_Text_IntroSpeech::
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
	.string "I can't win them all…\p"
	.string "…\p"
	.string "Period! You've just earned\n"
	.string "yourself a Last Dinner Party\l"
	.string "ticket, {PLAYER}{KUN}!$"

EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech::
	.string "ABIGAIL: Wow that was amazing!\p"
	.string "I had a feeling you'd be a fucking\n"
	.string "icon.\p"
	.string "You've totally earned your spot at\n"
	.string "the show, I can't wait to see you\l"
	.string "on the front row!\p"
	.string "Now all we need to do is add you\n"
	.string "to the…$"

EverGrandeCity_ChampionsRoom_Text_MayAdvice::
	.string "GOBLIN: {PLAYER}{KUN}!\p"
	.string "Here's some advice before you challenge\n"
	.string "Abi…$"

EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver::
	.string "GOBLIN: Huh?\n"
	.string "What, what, what?\p"
	.string "{PLAYER}{KUN}…\n"
	.string "Could it be that…\l"
	.string "It's already over?$"

EverGrandeCity_ChampionsRoom_Text_BrendanAdvice::
	.string "GOBLIN: {PLAYER}!\p"
	.string "How would you like some advice before\n"
	.string "you challenge Abi?…$"

EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon::
	.string "GOBLIN: {PLAYER}…\p"
	.string "Are you trying to tell me…\n"
	.string "You've won already?$"

EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex::
	.string "AMY: See?\n"
	.string "What did I tell you, Goblin?\p"
	.string "Didn't I tell you that you don't need\n"
	.string "to worry about {PLAYER}{KUN}?\p"
	.string "… … … … … … … …\n"
	.string "{PLAYER}{KUN}, you've really done it!\p"
	.string "You're seeing The Last Dinner Party!$"

EverGrandeCity_ChampionsRoom_Text_BirchCongratulations::
	.string "AMY: Anyways,\n"
	.string "congratulations!\p"
	.string "Now, go proudly into the final room!$"

EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe::
	.string "ABIGAIL: {PLAYER}{KUN}…\p"
	.string "No, let me rephrase that properly.\p"
	.string "Our new SPECIAL DINNER GUEST!\p"
	.string "Come with me.$"

EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside::
	.string "ABIGAIL: I'm sorry, but…\p"
	.string "From here on, only those who have\n"
	.string "won the challenge may enter.\p"
	.string "You'll have to wait outside with\n"
	.string "Amy.$"

EverGrandeCity_ChampionsRoom_Text_MayCongratulations::
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
	.string "GOBLIN: Whaaaat?! \p"
	.string "… … … … …\n"
	.string "… … … … … … … …\p"
	.string "But I was dying to know what\n"
	.string "was in there…\p"
	.string "It's okay, that's the rule.\p"
	.string "{PLAYER}, way to go!\n"
	.string "Congratulations! See you at\n"
	.string "the barricade!$"

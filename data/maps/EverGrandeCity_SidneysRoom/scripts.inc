# 1 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_MapScripts::
# 3 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_SidneysRoom_OnLoad
# 4 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_SidneysRoom_OnWarp
# 5 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_SidneysRoom_OnTransition
# 6 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_SidneysRoom_OnFrame
# 7 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.byte 0
# 8 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 9 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_OnTransition:
# 10 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setflag FLAG_MET_SCOTT_IN_EVERGRANDE
# 11 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
# 12 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 13 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 14 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_OnLoad:
# 15 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_ELITE_4_SIDNEY, EverGrandeCity_SidneysRoom_EventScript_ResetAdvanceToNextRoom
# 16 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call_if_eq VAR_ELITE_4_STATE, 1, EverGrandeCity_SidneysRoom_EventScript_CloseDoor
# 17 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 18 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 19 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_ResetAdvanceToNextRoom::
# 20 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
# 21 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	return
# 22 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 23 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_CloseDoor::
# 24 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_CloseDoor
# 25 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	return
# 26 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 27 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_OnWarp:
# 28 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_SidneysRoom_EventScript_PlayerTurnNorth
# 29 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.2byte 0
# 30 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 31 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_PlayerTurnNorth::
# 32 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 33 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 34 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 35 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_OnFrame:
# 36 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script_2 VAR_ELITE_4_STATE, 0, EverGrandeCity_SidneysRoom_EventScript_WalkInCloseDoor
# 37 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.2byte 0
# 38 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 39 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_WalkInCloseDoor::
# 40 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	lockall
# 41 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
# 42 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setvar VAR_ELITE_4_STATE, 1
# 43 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	releaseall
# 44 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end

EverGrandeCity_SidneysRoom_EventScript_Sidney::
# 49 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	lock
# 50 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	faceplayer
# 52 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_SIDNEY, EverGrandeCity_SidneysRoom_EventScript_Sidney_2
EverGrandeCity_SidneysRoom_EventScript_Sidney_1:
# 56 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 57 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox Aurora_Text_IntroSpeech, MSGBOX_DEFAULT
# 58 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_SIDNEY, Aurora_Text_Defeat
# 60 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto EverGrandeCity_SidneysRoom_EventScript_Defeated
	end

EverGrandeCity_SidneysRoom_EventScript_Sidney_2:
# 53 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto EverGrandeCity_SidneysRoom_EventScript_PostBattleSpeech
	goto EverGrandeCity_SidneysRoom_EventScript_Sidney_1


EverGrandeCity_SidneysRoom_EventScript_PostBattleSpeech::
# 65 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox Aurora_Text_PostBattleSpeech
# 66 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	releaseall
	end


EverGrandeCity_SidneysRoom_EventScript_Defeated::
# 71 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_SIDNEY
# 72 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 73 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox Aurora_Text_PostBattleSpeech
# 74 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	addmoney 100000
# 75 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 76 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_EventScript_Defeated_Text_0
# 77 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	waitmessage
# 78 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	releaseall
	end


EverGrandeCity_SidneysRoom_EventScript_Defeated_Text_0:
# 76 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Player received 100,000$"

Aurora_Text_IntroSpeech::
# 82 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "AURORA: Hey! So you finally made it \n"
	.string "here!\p"
	.string "You already know that but I'm Aurora \n"
	.string "of The Last Dinner Party!\p"
	.string "I'll be on vocals and keys tonight. \p"
	.string "You look like you really want that\n"
	.string "lifetime guestlist spot!\p"
	.string "Well, you'll have to show us that you \n"
	.string "have the guts to handle our show!\p"
	.string "So put up a fight!$"

Aurora_Text_Defeat::
# 95 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Give me the strength…$"

Aurora_Text_PostBattleSpeech::
# 99 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "AURORA: That was something!\p"
	.string "If anyone could win this thing, it \n"
	.string "probably would be you!\p"
	.string "Go ahead, face the others, though \n"
	.string "I have to warn you.\p"
	.string "One wrong move and they'll tear \n"
	.string "you apart.\p"
	.string "Good luck!$"

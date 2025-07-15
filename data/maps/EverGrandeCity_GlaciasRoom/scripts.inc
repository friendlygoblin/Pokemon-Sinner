# 1 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_MapScripts::
# 3 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_GlaciasRoom_OnFrame
# 4 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_GlaciasRoom_OnLoad
# 5 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_GlaciasRoom_OnWarp
# 6 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.byte 0
# 7 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 8 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_OnWarp:
# 9 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_GlaciasRoom_EventScript_PlayerTurnNorth
# 10 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.2byte 0
# 11 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 12 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_PlayerTurnNorth::
# 13 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 14 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 15 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 16 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_OnFrame:
# 17 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script_2 VAR_ELITE_4_STATE, 2, EverGrandeCity_GlaciasRoom_EventScript_WalkInCloseDoor
# 18 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.2byte 0
# 19 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 20 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_WalkInCloseDoor::
# 21 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	lockall
# 22 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
# 23 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	setvar VAR_ELITE_4_STATE, 3
# 24 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	releaseall
# 25 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 26 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 27 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_OnLoad:
# 28 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_EventScript_ResetAdvanceToNextRoom
# 29 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call_if_eq VAR_ELITE_4_STATE, 3, EverGrandeCity_GlaciasRoom_EventScript_CloseDoor
# 30 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 31 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 32 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_ResetAdvanceToNextRoom::
# 33 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
# 34 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	return
# 35 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 36 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_CloseDoor::
# 37 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_CloseDoor
# 38 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	return

EverGrandeCity_GlaciasRoom_EventScript_Glacia::
# 43 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	lock
# 44 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	faceplayer
# 46 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_EventScript_Glacia_2
EverGrandeCity_GlaciasRoom_EventScript_Glacia_1:
# 50 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 51 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	msgbox EverGrandeCity_GlaciasRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 52 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_GLACIA, EverGrandeCity_GlaciasRoom_Text_Defeat
# 53 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto EverGrandeCity_GlaciasRoom_EventScript_Defeated
	end

EverGrandeCity_GlaciasRoom_EventScript_Glacia_2:
# 47 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech
	goto EverGrandeCity_GlaciasRoom_EventScript_Glacia_1


EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech::
# 58 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	msgbox EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 59 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	addmoney 150000
# 60 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 61 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	msgbox EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech_Text_0
# 62 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	waitmessage
# 63 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	releaseall
	end


EverGrandeCity_GlaciasRoom_EventScript_Defeated::
# 68 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_GLACIA
# 69 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 70 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	msgbox EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 71 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	releaseall
	end


EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech_Text_0:
# 61 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Player received 150,000$"

EverGrandeCity_GlaciasRoom_Text_IntroSpeech::
# 75 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "LIZZIE: Hey I'm Lizzie, rhythm \n"
	.string "guitarist, singer, dancer and sinner.\p"
	.string "Running and spinning on stage is\n"
	.string "fun but you know what, I'd leave it\l"
	.string "all for a good battle.\p"
	.string "You look like a sinner too, in a\n"
	.string "good way of course.\p"
	.string "Let's dance, shall we?\n"
	.string "Turn and face me!$"

EverGrandeCity_GlaciasRoom_Text_Defeat::
# 87 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Washed the sin from my back…$"

EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech::
# 91 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "LIZZIE: Hey you're pretty good \n"
	.string "at this!\p"
	.string "Something tells me your face won't\n"
	.string "be forgotten.\p"
	.string "We'll be seeing you around, won't \n"
	.string "we? \p"
	.string "Keep it up, see you at the show!$"

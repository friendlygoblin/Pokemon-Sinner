Godzilland_ConcertHall_Lobby_MapScripts::
# 2 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Godzilland_SetEmilyFlag
	.byte 0


Godzilland_SetEmilyFlag::
# 7 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	setflag FLAG_GODZILLANDHALL_EMILY
	return


StVincentHall_Wren::
# 11 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	lock
# 12 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	faceplayer
# 13 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	checktrainerflag TRAINER_STVINCENT
	goto_if 1, StVincentHall_Wren_2
# 17 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	trainerbattle_single TRAINER_WREN_2, WrenIntro_StVincent, WrenDefeated_StVincent
# 18 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	msgbox WrenPostBattle_StVincent, MSGBOX_AUTOCLOSE
StVincentHall_Wren_1:
# 20 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	releaseall
	end

StVincentHall_Wren_2:
# 14 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	msgbox WrenPostBattle_StVincent, MSGBOX_AUTOCLOSE
	goto StVincentHall_Wren_1


StVincentHall_Receptionist::
# 44 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	lock
# 45 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	msgbox StVincentHall_Receptionist_Text_0
# 46 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	release
	end


StVincentHall_Natalie::
# 51 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	lock
# 52 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	faceplayer
# 53 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	msgbox StVincentHall_Natalie_Text_0
# 54 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	release
	end


StVincentHall_Receptionist_Text_0:
# 45 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	.string "Hi, there's no show planned for today.\p"
	.string "St.Vincent is accepting challenges\n"
	.string "though, good luck!$"

StVincentHall_Natalie_Text_0:
# 53 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	.string "NATALIE: I'm not a trainer, but I still\n"
	.string "hang out here to encourage\l"
	.string "challengers!$"

WrenIntro_StVincent::
# 24 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	.string "WREN: {PLAYER}!\p"
	.string "Are you here to challenge St.Vincent? \p"
	.string "I'm sure you got this, but I gotta \n"
	.string "you, she's super strong! \p"
	.string "How about you warm up with me? $"

WrenDefeated_StVincent::
# 32 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	.string "There's no going back… $"

WrenPostBattle_StVincent::
# 36 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	.string "WREN: I was so happy to find out \n"
	.string "St.Vincent had a challenge! \p"
	.string "I'll definitely come see you battle \n"
	.string "with her!$"

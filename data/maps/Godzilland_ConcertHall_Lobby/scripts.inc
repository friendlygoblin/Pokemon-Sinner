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
	msgbox WrenIntro_StVincent, MSGBOX_AUTOCLOSE
# 18 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	trainerbattle_no_intro TRAINER_WREN_2, WrenDefeated_StVincent
# 19 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	msgbox WrenPostBattle_StVincent, MSGBOX_AUTOCLOSE
StVincentHall_Wren_1:
# 21 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	releaseall
	end

StVincentHall_Wren_2:
# 14 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	msgbox StVincentHall_Wren_Text_0, MSGBOX_AUTOCLOSE
	goto StVincentHall_Wren_1


StVincentHall_Ann::
# 45 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	lock
# 46 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	faceplayer
# 47 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	checktrainerflag TRAINER_STVINCENT
	goto_if 1, StVincentHall_Ann_2
# 51 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	msgbox AnnIntro_StVincent, MSGBOX_AUTOCLOSE
# 52 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	trainerbattle_no_intro TRAINER_ANN, AnnDefeated_StVincent
# 53 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	msgbox AnnPostBattle_StVincent, MSGBOX_AUTOCLOSE
StVincentHall_Ann_1:
# 55 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	releaseall
	end

StVincentHall_Ann_2:
# 48 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	msgbox StVincentHall_Ann_Text_0, MSGBOX_AUTOCLOSE
	goto StVincentHall_Ann_1


StVincentHall_Receptionist::
# 78 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	lock
# 79 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	msgbox StVincentHall_Receptionist_Text_0
# 80 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	release
	end


StVincentHall_Natalie::
# 85 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	lock
# 86 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	faceplayer
# 87 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	msgbox StVincentHall_Natalie_Text_0
# 88 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	release
	end


StVincentHall_Wren_Text_0:
# 14 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	.string "WREN: That was such a great battle!\p"
	.string "St.Vincent was amazing of course, but\n"
	.string "you were really cool too!$"

StVincentHall_Ann_Text_0:
# 48 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	.string "ANN: Wow, what a show!\p"
	.string "Almost as good as an actual concert!$"

StVincentHall_Receptionist_Text_0:
# 79 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	.string "Hi, there's no show planned for today.\p"
	.string "St.Vincent is accepting challenges\n"
	.string "though, good luck!$"

StVincentHall_Natalie_Text_0:
# 87 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	.string "NATALIE: I'm not a trainer, but I still\n"
	.string "hang out here to encourage\l"
	.string "challengers!$"

WrenIntro_StVincent::
# 25 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	.string "WREN: {PLAYER}!\p"
	.string "Are you here to challenge St.Vincent? \p"
	.string "I'm sure you got this, but I gotta tell\n"
	.string "you, she's super strong! \p"
	.string "How about you warm up with me? $"

WrenDefeated_StVincent::
# 33 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	.string "There's no going back… $"

WrenPostBattle_StVincent::
# 37 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	.string "WREN: I was so happy to find out \n"
	.string "St.Vincent had a challenge! \p"
	.string "I'll definitely come see you battle \n"
	.string "with her!$"

AnnIntro_StVincent::
# 59 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	.string "ANN: Hi, I'm Ann!\p"
	.string "I wanted to see St.Vincent play, but \n"
	.string "she's only taking challenges at the \l"
	.string "moment. \p"
	.string "That's okay, I'll just watch her \n"
	.string "battle! $"

AnnDefeated_StVincent::
# 68 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	.string "I still wish I could see her play… $"

AnnPostBattle_StVincent::
# 72 "data/maps/Godzilland_ConcertHall_Lobby/scripts.pory"
	.string "ANN: So you're challenging St.Vincent? \p"
	.string "Then I'll be seeing you battling too! $"

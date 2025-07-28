BigDogIsland_HiddenHouse_MapScripts::
	.byte 0


BDI_Katie::
# 7 "data/maps/BigDogIsland_HiddenHouse/scripts.pory"
	lock
# 8 "data/maps/BigDogIsland_HiddenHouse/scripts.pory"
	faceplayer
# 9 "data/maps/BigDogIsland_HiddenHouse/scripts.pory"
	goto_if_set FLAG_BDI_KATIE, BDI_Katie_2
# 13 "data/maps/BigDogIsland_HiddenHouse/scripts.pory"
	msgbox BDI_KatieBattleIntro, MSGBOX_AUTOCLOSE
# 14 "data/maps/BigDogIsland_HiddenHouse/scripts.pory"
	applymovement 2, ExcitedMillyJump
# 15 "data/maps/BigDogIsland_HiddenHouse/scripts.pory"
	waitmovement 0
# 16 "data/maps/BigDogIsland_HiddenHouse/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
# 17 "data/maps/BigDogIsland_HiddenHouse/scripts.pory"
	msgbox BDI_Katie_Text_0, MSGBOX_AUTOCLOSE
# 18 "data/maps/BigDogIsland_HiddenHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_KATIE, BDI_Katie_Text_1
# 19 "data/maps/BigDogIsland_HiddenHouse/scripts.pory"
	msgbox BDI_KatiePostBattle, MSGBOX_AUTOCLOSE
# 20 "data/maps/BigDogIsland_HiddenHouse/scripts.pory"
	setflag FLAG_BDI_KATIE
BDI_Katie_1:
# 22 "data/maps/BigDogIsland_HiddenHouse/scripts.pory"
	release
	end

BDI_Katie_2:
# 10 "data/maps/BigDogIsland_HiddenHouse/scripts.pory"
	msgbox BDI_KatiePostBattle, MSGBOX_AUTOCLOSE
	goto BDI_Katie_1


# 26 "data/maps/BigDogIsland_HiddenHouse/scripts.pory"
ExcitedMillyJump:
# 27 "data/maps/BigDogIsland_HiddenHouse/scripts.pory"
	jump_in_place_left
# 27 "data/maps/BigDogIsland_HiddenHouse/scripts.pory"
	jump_in_place_left
# 28 "data/maps/BigDogIsland_HiddenHouse/scripts.pory"
	step_end

BDI_Milly::
# 47 "data/maps/BigDogIsland_HiddenHouse/scripts.pory"
	lock
# 48 "data/maps/BigDogIsland_HiddenHouse/scripts.pory"
	faceplayer
# 49 "data/maps/BigDogIsland_HiddenHouse/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
# 50 "data/maps/BigDogIsland_HiddenHouse/scripts.pory"
	msgbox BDI_Katie_Text_0, MSGBOX_AUTOCLOSE
# 51 "data/maps/BigDogIsland_HiddenHouse/scripts.pory"
	waitmoncry
# 52 "data/maps/BigDogIsland_HiddenHouse/scripts.pory"
	release
	end


BDI_Katie_Text_0:
# 17 "data/maps/BigDogIsland_HiddenHouse/scripts.pory"
	.string "MILLY: Bark!$"

BDI_Katie_Text_1:
# 18 "data/maps/BigDogIsland_HiddenHouse/scripts.pory"
	.string "That will do!$"

BDI_KatiePostBattle::
# 31 "data/maps/BigDogIsland_HiddenHouse/scripts.pory"
	.string "KATIE: Thanks for playing with Milly! \p"
	.string "I like how quiet it is here, but it's \n"
	.string "still nice to have visitors from time to \l"
	.string "time.$"

BDI_KatieBattleIntro::
# 38 "data/maps/BigDogIsland_HiddenHouse/scripts.pory"
	.string "KATIE: Oh, a visitor! \p"
	.string "Hi, I'm Katie and this is Milly. \p"
	.string "We don't see many people on our side \n"
	.string "of the island. \p"
	.string "Wanna play with us? $"

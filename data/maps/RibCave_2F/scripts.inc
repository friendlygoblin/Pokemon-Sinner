RibCave_2F_MapScripts::
	.byte 0


RibCave2F_Hiker::
# 4 "data/maps/RibCave_2F/scripts.pory"
	trainerbattle_single TRAINER_MARC, RibCave2F_Hiker_BattleIntro, RibCave2F_Hiker_Defeated
# 5 "data/maps/RibCave_2F/scripts.pory"
	msgbox RibCave2F_Hiker_PostBattle, MSGBOX_AUTOCLOSE
	return


RibCave2F_SchoolKid::
# 23 "data/maps/RibCave_2F/scripts.pory"
	trainerbattle_single TRAINER_JERRY_1, RibCave2F_SchoolKid_BattleIntro, RibCave2F_SchoolKid_Defeated
# 24 "data/maps/RibCave_2F/scripts.pory"
	msgbox RibCave2F_SchoolKid_PostBattle, MSGBOX_AUTOCLOSE
	return


RibCave2F_Hiker_BattleIntro::
# 8 "data/maps/RibCave_2F/scripts.pory"
	.string "It's dark in here…\p"
	.string "I thought you were a wild POKéMON!$"

RibCave2F_Hiker_Defeated::
# 13 "data/maps/RibCave_2F/scripts.pory"
	.string "Damn…$"

RibCave2F_Hiker_PostBattle::
# 17 "data/maps/RibCave_2F/scripts.pory"
	.string "I like caves more than cities.\p"
	.string "People rarely hang out there.$"

RibCave2F_SchoolKid_BattleIntro::
# 27 "data/maps/RibCave_2F/scripts.pory"
	.string "I'm here for a school project!\p"
	.string "I'll take notes during our battle!$"

RibCave2F_SchoolKid_Defeated::
# 32 "data/maps/RibCave_2F/scripts.pory"
	.string "Maybe I was too focused on my notes…$"

RibCave2F_SchoolKid_PostBattle::
# 36 "data/maps/RibCave_2F/scripts.pory"
	.string "I'm studying the POKéMON in this cave.\p"
	.string "It's still nice to see other trainers \n"
	.string "from time to time.$"

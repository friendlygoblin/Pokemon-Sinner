Route6_MapScripts::
	.byte 0


Route6_LizzieCatchUp::
# 6 "data/maps/Route6/scripts.pory"
	lock
# 7 "data/maps/Route6/scripts.pory"
	clearflag FLAG_LIZZIE_ROUTE6
# 8 "data/maps/Route6/scripts.pory"
	addobject 1
# 9 "data/maps/Route6/scripts.pory"
	applymovement 1, Route6_LizzieCatchUpToPlayer
# 10 "data/maps/Route6/scripts.pory"
	waitmovement 0
# 11 "data/maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 12 "data/maps/Route6/scripts.pory"
	msgbox Route6_LizzieExplainWhyTheyreHere, MSGBOX_AUTOCLOSE
# 13 "data/maps/Route6/scripts.pory"
	setvar VAR_SUNDAYCAVE_STATE, 1
# 14 "data/maps/Route6/scripts.pory"
	releaseall
	end


Route6_Lizzie::
# 19 "data/maps/Route6/scripts.pory"
	lock
# 20 "data/maps/Route6/scripts.pory"
	faceplayer
# 21 "data/maps/Route6/scripts.pory"
	msgbox Route6_LizzieBlockWayBack, MSGBOX_AUTOCLOSE
# 22 "data/maps/Route6/scripts.pory"
	releaseall
	end


# 43 "data/maps/Route6/scripts.pory"
Route6_LizzieCatchUpToPlayer:
# 44 "data/maps/Route6/scripts.pory"
	walk_up
# 44 "data/maps/Route6/scripts.pory"
	walk_up
# 44 "data/maps/Route6/scripts.pory"
	walk_up
# 44 "data/maps/Route6/scripts.pory"
	walk_up
# 45 "data/maps/Route6/scripts.pory"
	walk_right
# 45 "data/maps/Route6/scripts.pory"
	walk_right
# 46 "data/maps/Route6/scripts.pory"
	walk_up
# 47 "data/maps/Route6/scripts.pory"
	step_end

Route6_Picnicker::
# 51 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_CAROL, Route6_Picnicker_BattleIntro, Route6_Picnicker_Defeated
# 52 "data/maps/Route6/scripts.pory"
	msgbox Route6_Picnicker_PostBattle, MSGBOX_AUTOCLOSE
	return


Route6_BugCatcher::
# 71 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_LYLE, Route6_BugCatcher_BattleIntro, Route6_BugCatcher_Defeated
# 72 "data/maps/Route6/scripts.pory"
	msgbox Route6_BugCatcher_PostBattle, MSGBOX_AUTOCLOSE
	return


Route6_Youngster::
# 90 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route6_Youngster_BattleIntro, Route6_Youngster_Defeated
# 91 "data/maps/Route6/scripts.pory"
	msgbox Route6_Youngster_PostBattle, MSGBOX_AUTOCLOSE
	return


PoolSign::
# 111 "data/maps/Route6/scripts.pory"
	lock
# 112 "data/maps/Route6/scripts.pory"
	msgbox PoolSign_Text_0
# 113 "data/maps/Route6/scripts.pory"
	releaseall
	end


PoolSign_Text_0:
# 112 "data/maps/Route6/scripts.pory"
	.string "Public Pools\p"
	.string "Soak in the Crystal Stream!$"

Route6_LizzieExplainWhyTheyreHere::
# 26 "data/maps/Route6/scripts.pory"
	.string "???: Hey! \p"
	.string "LIZZIE: I'm Lizzie, I'm looking for \n"
	.string "Chappell Roan. \p"
	.string "You too? \p"
	.string "Great, let's look for her together! \p"
	.string "Oh, I'm not here to challenge her, \n"
	.string "I'm just here for a friendly visit. \p"
	.string "Anyway, how about you go first, I'll \n"
	.string "wait a bit in case she comes back. $"

Route6_LizzieBlockWayBack::
# 38 "data/maps/Route6/scripts.pory"
	.string "LIZZIE: How about you go first, I'll \n"
	.string "wait a bit in case she comes back. $"

Route6_Picnicker_BattleIntro::
# 55 "data/maps/Route6/scripts.pory"
	.string "The Crystal Stream is so relaxing to \n"
	.string "look at! \p"
	.string "I'm in the mood for a POKéMON battle!$"

Route6_Picnicker_Defeated::
# 61 "data/maps/Route6/scripts.pory"
	.string "I'll go back to relaxing… $"

Route6_Picnicker_PostBattle::
# 65 "data/maps/Route6/scripts.pory"
	.string "I don't like swimmming but a lot of \n"
	.string "people and POKéMON enjoy the pools. $"

Route6_BugCatcher_BattleIntro::
# 75 "data/maps/Route6/scripts.pory"
	.string "There are so many species of bugs, \n"
	.string "it's fascinating! $"

Route6_BugCatcher_Defeated::
# 80 "data/maps/Route6/scripts.pory"
	.string "So many bugs I don't know…$"

Route6_BugCatcher_PostBattle::
# 84 "data/maps/Route6/scripts.pory"
	.string "There are bugs of so many types, in \n"
	.string "so many different places… $"

Route6_Youngster_BattleIntro::
# 94 "data/maps/Route6/scripts.pory"
	.string "I live in Crystal Stream City but I, \n"
	.string "come here to pretend I'm a traveller. \p"
	.string "Let me show you how strong my POKéMON \n"
	.string "is! $"

Route6_Youngster_Defeated::
# 101 "data/maps/Route6/scripts.pory"
	.string "I guess you're even stronger…$"

Route6_Youngster_PostBattle::
# 105 "data/maps/Route6/scripts.pory"
	.string "When I'm older I'll travel the world \n"
	.string "like you! $"

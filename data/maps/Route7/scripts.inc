Route7_MapScripts::
	.byte 0


Route7_Goblin::
# 4 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_GOBLIN_ROUTE_6, Route7_Goblin_BattleIntro, Route7_Goblin_Defeated
# 5 "data/maps/Route7/scripts.pory"
	msgbox Route7_Goblin_PostBattle, MSGBOX_AUTOCLOSE
	return


Route7_Goblin_BattleIntro::
# 8 "data/maps/Route7/scripts.pory"
	.string "GOBLIN: {PLAYER}, wait! \p"
	.string "What are you doing here? We're super \n"
	.string "far from Prelude Town! \p"
	.string "… … … \p"
	.string "Defeated Chappell Roan?? \p"
	.string "No way! \p"
	.string "You gotta show me how you did that! $"

Route7_Goblin_Defeated::
# 18 "data/maps/Route7/scripts.pory"
	.string "Woah I see! $"

Route7_Goblin_PostBattle::
# 22 "data/maps/Route7/scripts.pory"
	.string "GOBLIN: That's crazy, {PLAYER}! \p"
	.string "You've come such a long way in such \n"
	.string "a short amount of time! \p"
	.string "I'm still searching for new POKéMON, \n"
	.string "it's so cool to see how different \l"
	.string "species live in different places. \p"
	.string "Well I'm gonna go now, I'll see you \n"
	.string "later! $"

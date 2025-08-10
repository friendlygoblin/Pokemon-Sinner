Route7_MapScripts::
	.byte 0


Route7_Goblin::
# 6 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_GOBLIN_ROUTE_7, Route7_Goblin_BattleIntro, Route7_Goblin_Defeated, Route7_GoblinLeaves
	return


Route7_GoblinLeaves::
# 10 "data/maps/Route7/scripts.pory"
	lock
# 11 "data/maps/Route7/scripts.pory"
	msgbox Route7_Goblin_PostBattle, MSGBOX_AUTOCLOSE
# 12 "data/maps/Route7/scripts.pory"
	applymovement 1, Route7_GobLeaves
# 13 "data/maps/Route7/scripts.pory"
	waitmovement 0
# 14 "data/maps/Route7/scripts.pory"
	removeobject 1
# 15 "data/maps/Route7/scripts.pory"
	setflag FLAG_ROUTE7_GOBLIN
# 16 "data/maps/Route7/scripts.pory"
	releaseall
	end


# 50 "data/maps/Route7/scripts.pory"
Route7_GobLeaves:
# 51 "data/maps/Route7/scripts.pory"
	walk_right
# 51 "data/maps/Route7/scripts.pory"
	walk_right
# 51 "data/maps/Route7/scripts.pory"
	walk_right
# 51 "data/maps/Route7/scripts.pory"
	walk_right
# 52 "data/maps/Route7/scripts.pory"
	walk_up
# 52 "data/maps/Route7/scripts.pory"
	walk_up
# 52 "data/maps/Route7/scripts.pory"
	walk_up
# 52 "data/maps/Route7/scripts.pory"
	walk_up
# 52 "data/maps/Route7/scripts.pory"
	walk_up
# 52 "data/maps/Route7/scripts.pory"
	walk_up
# 52 "data/maps/Route7/scripts.pory"
	walk_up
# 53 "data/maps/Route7/scripts.pory"
	step_end

Route7_Cooltrainer1::
# 57 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, Route7_Cooltrainer1_Text_0, Route7_Cooltrainer1_Text_1
# 58 "data/maps/Route7/scripts.pory"
	msgbox Route7_Cooltrainer1_Text_2, MSGBOX_AUTOCLOSE
	return


Route7_Cooltrainer2::
# 62 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_JODY, Route7_Cooltrainer2_Text_0, Route7_Cooltrainer2_Text_1
# 63 "data/maps/Route7/scripts.pory"
	msgbox Route7_Cooltrainer2_Text_2, MSGBOX_AUTOCLOSE
	return


Route7_Hiker::
# 67 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_1, Route7_Hiker_Text_0, Route7_Hiker_Text_1
# 68 "data/maps/Route7/scripts.pory"
	msgbox Route7_Hiker_Text_2, MSGBOX_AUTOCLOSE
	return


Route7_Cyclist::
# 72 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_JULIO, Route7_Cyclist_Text_0, Route7_Cyclist_Text_1
# 73 "data/maps/Route7/scripts.pory"
	msgbox Route7_Cyclist_Text_2, MSGBOX_AUTOCLOSE
	return


Route7_BlackBelt::
# 77 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_KOJI_1, Route7_BlackBelt_Text_0, Route7_BlackBelt_Text_1
# 78 "data/maps/Route7/scripts.pory"
	msgbox Route7_BlackBelt_Text_2, MSGBOX_AUTOCLOSE
	return


Route7_Picnicker::
# 82 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_MARTHA, Route7_Picnicker_Text_0, Route7_Picnicker_Text_1
# 83 "data/maps/Route7/scripts.pory"
	msgbox Route7_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	return


Route7_Cooltrainer1_Text_0:
# 57 "data/maps/Route7/scripts.pory"
	.string "We should have a slow and methodical\n"
	.string "match.$"

Route7_Cooltrainer1_Text_1:
# 57 "data/maps/Route7/scripts.pory"
	.string "You didn't give me the chance to do any\n"
	.string "strategising.$"

Route7_Cooltrainer1_Text_2:
# 58 "data/maps/Route7/scripts.pory"
	.string "Sometimes, it's better to take your time\n"
	.string "and prepare a strategy than to start\l"
	.string "attacking right away…$"

Route7_Cooltrainer2_Text_0:
# 62 "data/maps/Route7/scripts.pory"
	.string "It's so sunny and dry here… It forges\n"
	.string "character!$"

Route7_Cooltrainer2_Text_1:
# 62 "data/maps/Route7/scripts.pory"
	.string "I feel dehydrated…$"

Route7_Cooltrainer2_Text_2:
# 63 "data/maps/Route7/scripts.pory"
	.string "Weather affects battles, you know.\p"
	.string "For example, Fire POKéMON like this\n"
	.string "sunny weather because it makes them\l"
	.string "stronger!$"

Route7_Hiker_Text_0:
# 67 "data/maps/Route7/scripts.pory"
	.string "I travel a lot!\p"
	.string "I've seen a lot of different places!$"

Route7_Hiker_Text_1:
# 67 "data/maps/Route7/scripts.pory"
	.string "And I've met a lot of people too…$"

Route7_Hiker_Text_2:
# 68 "data/maps/Route7/scripts.pory"
	.string "I like discovering new places and\n"
	.string "making new friends.\p"
	.string "It helps you grow as a person!$"

Route7_Cyclist_Text_0:
# 72 "data/maps/Route7/scripts.pory"
	.string "Sports help me let my energy out!\p"
	.string "But so do POKéMON battles!$"

Route7_Cyclist_Text_1:
# 72 "data/maps/Route7/scripts.pory"
	.string "Maybe I pushed too hard…$"

Route7_Cyclist_Text_2:
# 73 "data/maps/Route7/scripts.pory"
	.string "I have a pretty boring job, so cycling\n"
	.string "helps keeping my life exciting.$"

Route7_BlackBelt_Text_0:
# 77 "data/maps/Route7/scripts.pory"
	.string "Patience, focus, discipline…\p"
	.string "I can't lose!$"

Route7_BlackBelt_Text_1:
# 77 "data/maps/Route7/scripts.pory"
	.string "Huh?$"

Route7_BlackBelt_Text_2:
# 78 "data/maps/Route7/scripts.pory"
	.string "Training against different opponents\n"
	.string "makes you stronger!$"

Route7_Picnicker_Text_0:
# 82 "data/maps/Route7/scripts.pory"
	.string "My favourite thing about travelling is\n"
	.string "seeing all the pretty POKéMON\l"
	.string "everywhere!$"

Route7_Picnicker_Text_1:
# 82 "data/maps/Route7/scripts.pory"
	.string "Ohh your POKéMON are so pretty!$"

Route7_Picnicker_Text_2:
# 83 "data/maps/Route7/scripts.pory"
	.string "My POKéMON are the prettiest, but I\n"
	.string "love discovering new ones.$"

Route7_Goblin_BattleIntro::
# 20 "data/maps/Route7/scripts.pory"
	.string "GOBLIN: {PLAYER}, wait! \p"
	.string "What are you doing here? We're super \n"
	.string "far from Prelude Town! \p"
	.string "… … … \p"
	.string "Defeated Chappell Roan?? \p"
	.string "No way! \p"
	.string "You gotta show me how you did that! $"

Route7_Goblin_Defeated::
# 30 "data/maps/Route7/scripts.pory"
	.string "Woah I see! $"

Route7_Goblin_PostBattle::
# 34 "data/maps/Route7/scripts.pory"
	.string "GOBLIN: That's crazy, {PLAYER}! \p"
	.string "You've come such a long way in such \n"
	.string "a short amount of time. \p"
	.string "The Last Dinner Party better get ready \n"
	.string "for you! \p"
	.string "I'm still searching for new POKéMON, \n"
	.string "it's so cool to see how different \l"
	.string "species live in different places. \p"
	.string "Some are rarer than others too so\n"
	.string "take your time if you don't wanna \l"
	.string "miss any!\p"
	.string "Well I'm gonna go now, I'll see you \n"
	.string "later! $"

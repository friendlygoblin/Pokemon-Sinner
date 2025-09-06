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
	msgbox Route7_Goblin_PostBattle
# 12 "data/maps/Route7/scripts.pory"
	giveitem ITEM_TM28
# 13 "data/maps/Route7/scripts.pory"
	msgbox Route7_GoblinLeaves_Text_0, MSGBOX_AUTOCLOSE
# 14 "data/maps/Route7/scripts.pory"
	applymovement 1, Route7_GobLeaves
# 15 "data/maps/Route7/scripts.pory"
	waitmovement 0
# 16 "data/maps/Route7/scripts.pory"
	removeobject 1
# 17 "data/maps/Route7/scripts.pory"
	setflag FLAG_ROUTE7_GOBLIN
# 18 "data/maps/Route7/scripts.pory"
	releaseall
	end


# 52 "data/maps/Route7/scripts.pory"
Route7_GobLeaves:
# 53 "data/maps/Route7/scripts.pory"
	walk_right
# 53 "data/maps/Route7/scripts.pory"
	walk_right
# 53 "data/maps/Route7/scripts.pory"
	walk_right
# 53 "data/maps/Route7/scripts.pory"
	walk_right
# 54 "data/maps/Route7/scripts.pory"
	walk_up
# 54 "data/maps/Route7/scripts.pory"
	walk_up
# 54 "data/maps/Route7/scripts.pory"
	walk_up
# 54 "data/maps/Route7/scripts.pory"
	walk_up
# 54 "data/maps/Route7/scripts.pory"
	walk_up
# 54 "data/maps/Route7/scripts.pory"
	walk_up
# 54 "data/maps/Route7/scripts.pory"
	walk_up
# 55 "data/maps/Route7/scripts.pory"
	step_end

Route7_Cooltrainer1::
# 59 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, Route7_Cooltrainer1_Text_0, Route7_Cooltrainer1_Text_1
# 60 "data/maps/Route7/scripts.pory"
	msgbox Route7_Cooltrainer1_Text_2, MSGBOX_AUTOCLOSE
	return


Route7_Cooltrainer2::
# 64 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_JODY, Route7_Cooltrainer2_Text_0, Route7_Cooltrainer2_Text_1
# 65 "data/maps/Route7/scripts.pory"
	msgbox Route7_Cooltrainer2_Text_2, MSGBOX_AUTOCLOSE
	return


Route7_Hiker::
# 69 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_1, Route7_Hiker_Text_0, Route7_Hiker_Text_1
# 70 "data/maps/Route7/scripts.pory"
	msgbox Route7_Hiker_Text_2, MSGBOX_AUTOCLOSE
	return


Route7_Cyclist::
# 74 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_JULIO, Route7_Cyclist_Text_0, Route7_Cyclist_Text_1
# 75 "data/maps/Route7/scripts.pory"
	msgbox Route7_Cyclist_Text_2, MSGBOX_AUTOCLOSE
	return


Route7_BlackBelt::
# 79 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_KOJI_1, Route7_BlackBelt_Text_0, Route7_BlackBelt_Text_1
# 80 "data/maps/Route7/scripts.pory"
	msgbox Route7_BlackBelt_Text_2, MSGBOX_AUTOCLOSE
	return


Route7_Picnicker::
# 84 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_MARTHA, Route7_Picnicker_Text_0, Route7_Picnicker_Text_1
# 85 "data/maps/Route7/scripts.pory"
	msgbox Route7_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	return


Route7_GoblinLeaves_Text_0:
# 13 "data/maps/Route7/scripts.pory"
	.string "Well I'm gonna go now, I'll see you later!\n"
	.string "$"

Route7_Cooltrainer1_Text_0:
# 59 "data/maps/Route7/scripts.pory"
	.string "We should have a slow and methodical\n"
	.string "match.$"

Route7_Cooltrainer1_Text_1:
# 59 "data/maps/Route7/scripts.pory"
	.string "You didn't give me the chance to do any\n"
	.string "strategising.$"

Route7_Cooltrainer1_Text_2:
# 60 "data/maps/Route7/scripts.pory"
	.string "Sometimes, it's better to take your time\n"
	.string "and prepare a strategy than to start\l"
	.string "attacking right away…$"

Route7_Cooltrainer2_Text_0:
# 64 "data/maps/Route7/scripts.pory"
	.string "It's so sunny and dry here… It forges\n"
	.string "character!$"

Route7_Cooltrainer2_Text_1:
# 64 "data/maps/Route7/scripts.pory"
	.string "I feel dehydrated…$"

Route7_Cooltrainer2_Text_2:
# 65 "data/maps/Route7/scripts.pory"
	.string "Weather affects battles, you know.\p"
	.string "For example, Fire POKéMON like this\n"
	.string "sunny weather because it makes them\l"
	.string "stronger!$"

Route7_Hiker_Text_0:
# 69 "data/maps/Route7/scripts.pory"
	.string "I travel a lot!\p"
	.string "I've seen a lot of different places!$"

Route7_Hiker_Text_1:
# 69 "data/maps/Route7/scripts.pory"
	.string "And I've met a lot of people too…$"

Route7_Hiker_Text_2:
# 70 "data/maps/Route7/scripts.pory"
	.string "I like discovering new places and\n"
	.string "making new friends.\p"
	.string "It helps you grow as a person!$"

Route7_Cyclist_Text_0:
# 74 "data/maps/Route7/scripts.pory"
	.string "Sports help me let my energy out!\p"
	.string "But so do POKéMON battles!$"

Route7_Cyclist_Text_1:
# 74 "data/maps/Route7/scripts.pory"
	.string "Maybe I pushed too hard…$"

Route7_Cyclist_Text_2:
# 75 "data/maps/Route7/scripts.pory"
	.string "I have a pretty boring job, so cycling\n"
	.string "helps keeping my life exciting.$"

Route7_BlackBelt_Text_0:
# 79 "data/maps/Route7/scripts.pory"
	.string "Patience, focus, discipline…\p"
	.string "I can't lose!$"

Route7_BlackBelt_Text_1:
# 79 "data/maps/Route7/scripts.pory"
	.string "Huh?$"

Route7_BlackBelt_Text_2:
# 80 "data/maps/Route7/scripts.pory"
	.string "Training against different opponents\n"
	.string "makes you stronger!$"

Route7_Picnicker_Text_0:
# 84 "data/maps/Route7/scripts.pory"
	.string "My favourite thing about travelling is\n"
	.string "seeing all the pretty POKéMON\l"
	.string "everywhere!$"

Route7_Picnicker_Text_1:
# 84 "data/maps/Route7/scripts.pory"
	.string "Ohh your POKéMON are so pretty!$"

Route7_Picnicker_Text_2:
# 85 "data/maps/Route7/scripts.pory"
	.string "My POKéMON are the prettiest, but I\n"
	.string "love discovering new ones.$"

Route7_Goblin_BattleIntro::
# 22 "data/maps/Route7/scripts.pory"
	.string "GOBLIN: {PLAYER}, wait! \p"
	.string "How have you been? It's been a \n"
	.string "while! \p"
	.string "… … … \p"
	.string "Defeated Chappell Roan?? \p"
	.string "No way! \p"
	.string "You gotta show me how you did that! $"

Route7_Goblin_Defeated::
# 32 "data/maps/Route7/scripts.pory"
	.string "Woah, I see! $"

Route7_Goblin_PostBattle::
# 36 "data/maps/Route7/scripts.pory"
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
	.string "Here, I have something cool for you.$"

Route7_MapScripts::
	.byte 0


Route7_Goblin::
# 8 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_GOBLIN_ROUTE_7, Route7_Goblin_BattleIntro, Route7_Goblin_Defeated, Route7_GoblinLeaves
	return


Route7_GoblinLeaves::
# 12 "data/maps/Route7/scripts.pory"
	lock
# 13 "data/maps/Route7/scripts.pory"
	msgbox Route7_Goblin_PostBattle
# 14 "data/maps/Route7/scripts.pory"
	giveitem ITEM_TM28
# 15 "data/maps/Route7/scripts.pory"
	msgbox Route7_GoblinLeaves_Text_0, MSGBOX_AUTOCLOSE
# 16 "data/maps/Route7/scripts.pory"
	applymovement 1, Route7_GobLeaves
# 17 "data/maps/Route7/scripts.pory"
	waitmovement 0
# 18 "data/maps/Route7/scripts.pory"
	removeobject 1
# 19 "data/maps/Route7/scripts.pory"
	setflag FLAG_ROUTE7_GOBLIN
# 20 "data/maps/Route7/scripts.pory"
	releaseall
	end


# 54 "data/maps/Route7/scripts.pory"
Route7_GobLeaves:
# 55 "data/maps/Route7/scripts.pory"
	walk_right
# 55 "data/maps/Route7/scripts.pory"
	walk_right
# 55 "data/maps/Route7/scripts.pory"
	walk_right
# 55 "data/maps/Route7/scripts.pory"
	walk_right
# 56 "data/maps/Route7/scripts.pory"
	walk_up
# 56 "data/maps/Route7/scripts.pory"
	walk_up
# 56 "data/maps/Route7/scripts.pory"
	walk_up
# 56 "data/maps/Route7/scripts.pory"
	walk_up
# 56 "data/maps/Route7/scripts.pory"
	walk_up
# 56 "data/maps/Route7/scripts.pory"
	walk_up
# 56 "data/maps/Route7/scripts.pory"
	walk_up
# 57 "data/maps/Route7/scripts.pory"
	step_end

Route7_Cooltrainer1::
# 61 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, Route7_Cooltrainer1_Text_0, Route7_Cooltrainer1_Text_1
# 62 "data/maps/Route7/scripts.pory"
	msgbox Route7_Cooltrainer1_Text_2, MSGBOX_AUTOCLOSE
	return


Route7_Cooltrainer2::
# 66 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_JODY, Route7_Cooltrainer2_Text_0, Route7_Cooltrainer2_Text_1
# 67 "data/maps/Route7/scripts.pory"
	msgbox Route7_Cooltrainer2_Text_2, MSGBOX_AUTOCLOSE
	return


Route7_Hiker::
# 71 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_1, Route7_Hiker_Text_0, Route7_Hiker_Text_1
# 72 "data/maps/Route7/scripts.pory"
	msgbox Route7_Hiker_Text_2, MSGBOX_AUTOCLOSE
	return


Route7_Cyclist::
# 76 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_JULIO, Route7_Cyclist_Text_0, Route7_Cyclist_Text_1
# 77 "data/maps/Route7/scripts.pory"
	msgbox Route7_Cyclist_Text_2, MSGBOX_AUTOCLOSE
	return


Route7_BlackBelt::
# 81 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_KOJI_1, Route7_BlackBelt_Text_0, Route7_BlackBelt_Text_1
# 82 "data/maps/Route7/scripts.pory"
	msgbox Route7_BlackBelt_Text_2, MSGBOX_AUTOCLOSE
	return


Route7_Picnicker::
# 86 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_MARTHA, Route7_Picnicker_Text_0, Route7_Picnicker_Text_1
# 87 "data/maps/Route7/scripts.pory"
	msgbox Route7_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	return


Route7_Rora::
# 91 "data/maps/Route7/scripts.pory"
	lock
# 92 "data/maps/Route7/scripts.pory"
	faceplayer
# 93 "data/maps/Route7/scripts.pory"
	msgbox Rora_SomethingMissing
# 94 "data/maps/Route7/scripts.pory"
	applymovement 8, WalkInPlaceDown
# 95 "data/maps/Route7/scripts.pory"
	waitmovement 0
# 96 "data/maps/Route7/scripts.pory"
	release
	end


Route7_Cal::
# 101 "data/maps/Route7/scripts.pory"
	lock
# 102 "data/maps/Route7/scripts.pory"
	faceplayer
# 103 "data/maps/Route7/scripts.pory"
	msgbox Cal_NeedAProp
	checkitem ITEM_SILK_SCARF
# 0 "data/maps/Route7/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Route7_Cal_2
# 134 "data/maps/Route7/scripts.pory"
	msgbox Route7_Cal_Text_1, MSGBOX_AUTOCLOSE
Route7_Cal_1:
# 136 "data/maps/Route7/scripts.pory"
	release
	end

Route7_Cal_2:
# 105 "data/maps/Route7/scripts.pory"
	msgbox Cal_YouHaveProp, MSGBOX_YESNO
# 106 "data/maps/Route7/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route7_Cal_5
# 130 "data/maps/Route7/scripts.pory"
	msgbox Route7_Cal_Text_0
	goto Route7_Cal_1

Route7_Cal_5:
# 107 "data/maps/Route7/scripts.pory"
	msgbox Cal_LetsTry, MSGBOX_AUTOCLOSE
# 108 "data/maps/Route7/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 109 "data/maps/Route7/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_DOWN
# 110 "data/maps/Route7/scripts.pory"
	applymovement 9, Cal_GiveScarfToRora
# 111 "data/maps/Route7/scripts.pory"
	waitmovement 0
# 112 "data/maps/Route7/scripts.pory"
	fadescreen FADE_TO_BLACK
# 113 "data/maps/Route7/scripts.pory"
	delay 20
# 114 "data/maps/Route7/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 115 "data/maps/Route7/scripts.pory"
	msgbox Cal_LastOne, MSGBOX_AUTOCLOSE
# 116 "data/maps/Route7/scripts.pory"
	faceplayer
# 117 "data/maps/Route7/scripts.pory"
	msgbox Cal_Thanks
# 118 "data/maps/Route7/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 119 "data/maps/Route7/scripts.pory"
	applymovement 8, WalkInPlaceDown
# 120 "data/maps/Route7/scripts.pory"
	msgbox Rora_Thanks, MSGBOX_AUTOCLOSE
# 121 "data/maps/Route7/scripts.pory"
	fadescreen FADE_TO_BLACK
# 122 "data/maps/Route7/scripts.pory"
	playse SE_EXIT
# 123 "data/maps/Route7/scripts.pory"
	waitse
# 124 "data/maps/Route7/scripts.pory"
	removeobject 8
# 125 "data/maps/Route7/scripts.pory"
	removeobject 9
# 126 "data/maps/Route7/scripts.pory"
	setflag FLAG_ROUTE7_PHOTOSHOOT
# 127 "data/maps/Route7/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto Route7_Cal_1


# 140 "data/maps/Route7/scripts.pory"
Cal_GiveScarfToRora:
# 141 "data/maps/Route7/scripts.pory"
	walk_in_place_up
# 142 "data/maps/Route7/scripts.pory"
	step_end

Route7_GoblinLeaves_Text_0:
# 15 "data/maps/Route7/scripts.pory"
	.string "Well I'm gonna go now, I'll see you later!\n"
	.string "$"

Route7_Cooltrainer1_Text_0:
# 61 "data/maps/Route7/scripts.pory"
	.string "We should have a slow and methodical\n"
	.string "match.$"

Route7_Cooltrainer1_Text_1:
# 61 "data/maps/Route7/scripts.pory"
	.string "You didn't give me the chance to do any\n"
	.string "strategising.$"

Route7_Cooltrainer1_Text_2:
# 62 "data/maps/Route7/scripts.pory"
	.string "Sometimes, it's better to take your time\n"
	.string "and prepare a strategy than to start\l"
	.string "attacking right away…$"

Route7_Cooltrainer2_Text_0:
# 66 "data/maps/Route7/scripts.pory"
	.string "It's so sunny and dry here… It forges\n"
	.string "character!$"

Route7_Cooltrainer2_Text_1:
# 66 "data/maps/Route7/scripts.pory"
	.string "I feel dehydrated…$"

Route7_Cooltrainer2_Text_2:
# 67 "data/maps/Route7/scripts.pory"
	.string "Weather affects battles, you know.\p"
	.string "For example, Fire POKéMON like this\n"
	.string "sunny weather because it makes them\l"
	.string "stronger!$"

Route7_Hiker_Text_0:
# 71 "data/maps/Route7/scripts.pory"
	.string "I travel a lot!\p"
	.string "I've seen a lot of different places!$"

Route7_Hiker_Text_1:
# 71 "data/maps/Route7/scripts.pory"
	.string "And I've met a lot of people too…$"

Route7_Hiker_Text_2:
# 72 "data/maps/Route7/scripts.pory"
	.string "I like discovering new places and\n"
	.string "making new friends.\p"
	.string "It helps you grow as a person!$"

Route7_Cyclist_Text_0:
# 76 "data/maps/Route7/scripts.pory"
	.string "Sports help me let my energy out!\p"
	.string "But so do POKéMON battles!$"

Route7_Cyclist_Text_1:
# 76 "data/maps/Route7/scripts.pory"
	.string "Maybe I pushed too hard…$"

Route7_Cyclist_Text_2:
# 77 "data/maps/Route7/scripts.pory"
	.string "I have a pretty boring job, so cycling\n"
	.string "helps keeping my life exciting.$"

Route7_BlackBelt_Text_0:
# 81 "data/maps/Route7/scripts.pory"
	.string "Patience, focus, discipline…\p"
	.string "I can't lose!$"

Route7_BlackBelt_Text_1:
# 81 "data/maps/Route7/scripts.pory"
	.string "Huh?$"

Route7_BlackBelt_Text_2:
# 82 "data/maps/Route7/scripts.pory"
	.string "Training against different opponents\n"
	.string "makes you stronger!$"

Route7_Picnicker_Text_0:
# 86 "data/maps/Route7/scripts.pory"
	.string "My favourite thing about travelling is\n"
	.string "seeing all the pretty POKéMON\l"
	.string "everywhere!$"

Route7_Picnicker_Text_1:
# 86 "data/maps/Route7/scripts.pory"
	.string "Ohh your POKéMON are so pretty!$"

Route7_Picnicker_Text_2:
# 87 "data/maps/Route7/scripts.pory"
	.string "My POKéMON are the prettiest, but I\n"
	.string "love discovering new ones.$"

Route7_Cal_Text_0:
# 130 "data/maps/Route7/scripts.pory"
	.string "Never mind, then.\n"
	.string "We'll figure it out.$"

Route7_Cal_Text_1:
# 134 "data/maps/Route7/scripts.pory"
	.string "Some kind of scarf? \nI don't know… $"

Route7_Goblin_BattleIntro::
# 24 "data/maps/Route7/scripts.pory"
	.string "GOBLIN: {PLAYER}, wait! \p"
	.string "How have you been? It's been a \n"
	.string "while! \p"
	.string "… … … \p"
	.string "Defeated Chappell Roan?? \p"
	.string "No way! \p"
	.string "You gotta show me how you did that! $"

Route7_Goblin_Defeated::
# 34 "data/maps/Route7/scripts.pory"
	.string "Woah, I see! $"

Route7_Goblin_PostBattle::
# 38 "data/maps/Route7/scripts.pory"
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

Rora_SomethingMissing::
# 145 "data/maps/Route7/scripts.pory"
	.string "AURORA: Hey, {PLAYER}!\p"
	.string "I'm in the middle of a photoshoot with \n"
	.string "Cal, to promote our Mirror City shows. \p"
	.string "We got some good shots but I don't \n"
	.string "know, something's missing… \p"
	.string "Well, I should get back to it. $"

Rora_Thanks::
# 154 "data/maps/Route7/scripts.pory"
	.string "AURORA: Thank you, {PLAYER}! \p"
	.string "Now that we're done with this we should \n"
	.string "go. \p"
	.string "I'll see you in Mirror City! $"

Cal_NeedAProp::
# 161 "data/maps/Route7/scripts.pory"
	.string "CAL: Hi, I'm Cal McIntyre, director \n"
	.string "and photographer. \p"
	.string "I love working with The Last Dinner \n"
	.string "Party but something's off today. \p"
	.string "I think we're missing something, like \n"
	.string "a prop or an accessory that would tie \l"
	.string "everything together. $"

Cal_YouHaveProp::
# 171 "data/maps/Route7/scripts.pory"
	.string "Wait, is that a Silk Scarf? \n"
	.string "Can we use it? We'll give it back!$"

Cal_LetsTry::
# 176 "data/maps/Route7/scripts.pory"
	.string "Thank you! \n"
	.string "Now let's see… $"

Cal_LastOne::
# 181 "data/maps/Route7/scripts.pory"
	.string "CAL: And just a last one… \n"
	.string "Perfect! $"

Cal_Thanks::
# 186 "data/maps/Route7/scripts.pory"
	.string "Thank you so much, here's your scarf \n"
	.string "and here's a thank you gift! $"

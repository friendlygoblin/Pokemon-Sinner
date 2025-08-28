Route2_MapScripts::
	.byte 0


Route2_Jay::
# 6 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, Jay_BattleIntro, Jay_Defeated, Route2_Jay_PostBattle
# 7 "data/maps/Route2/scripts.pory"
	goto Route2_Jay_PostBattle
	return


Route2_Jay_PostBattle::
# 11 "data/maps/Route2/scripts.pory"
	msgbox Jay_PostBattle
# 12 "data/maps/Route2/scripts.pory"
	delay 40
# 13 "data/maps/Route2/scripts.pory"
	applymovement 1, JayLeaves_Route2
# 14 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 15 "data/maps/Route2/scripts.pory"
	removeobject 1
# 16 "data/maps/Route2/scripts.pory"
	setflag FLAG_JAY_ROUTE2
# 17 "data/maps/Route2/scripts.pory"
	release
	end


# 39 "data/maps/Route2/scripts.pory"
JayLeaves_Route2:
# 40 "data/maps/Route2/scripts.pory"
	walk_down
# 40 "data/maps/Route2/scripts.pory"
	walk_down
# 40 "data/maps/Route2/scripts.pory"
	walk_down
# 40 "data/maps/Route2/scripts.pory"
	walk_down
# 40 "data/maps/Route2/scripts.pory"
	walk_down
# 40 "data/maps/Route2/scripts.pory"
	walk_down
# 41 "data/maps/Route2/scripts.pory"
	step_end

Route2_Hiker::
# 45 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, Route2_Hiker_Text_0, Route2_Hiker_Text_1
# 46 "data/maps/Route2/scripts.pory"
	msgbox Route2_Hiker_Text_2, MSGBOX_AUTOCLOSE
	return


Route2_SchoolGirl::
# 50 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_KAREN_1, Route2_SchoolGirl_Text_0, Route2_SchoolGirl_Text_1
# 51 "data/maps/Route2/scripts.pory"
	msgbox Route2_SchoolGirl_Text_2, MSGBOX_AUTOCLOSE
	return


RibCave_Sign::
# 55 "data/maps/Route2/scripts.pory"
	lock
# 56 "data/maps/Route2/scripts.pory"
	msgbox RibCave_Sign_Text_0
# 57 "data/maps/Route2/scripts.pory"
	releaseall
	end


Route2_Hiker_Text_0:
# 45 "data/maps/Route2/scripts.pory"
	.string "I was just taking a break from walking,\n"
	.string "but I always have energy for a POKéMON\l"
	.string "battle!$"

Route2_Hiker_Text_1:
# 45 "data/maps/Route2/scripts.pory"
	.string "I need to sit down again…$"

Route2_Hiker_Text_2:
# 46 "data/maps/Route2/scripts.pory"
	.string "I like to find cosy little spots to take\n"
	.string "naps in.\p"
	.string "Too bad I have to walk so much to get\n"
	.string "there.$"

Route2_SchoolGirl_Text_0:
# 50 "data/maps/Route2/scripts.pory"
	.string "I did my school presentation about my\n"
	.string "POKéMON!$"

Route2_SchoolGirl_Text_1:
# 50 "data/maps/Route2/scripts.pory"
	.string "But I got a good grade…$"

Route2_SchoolGirl_Text_2:
# 51 "data/maps/Route2/scripts.pory"
	.string "Munchlax helped me prepare my\n"
	.string "presentation!\p"
	.string "He's my best friend!$"

RibCave_Sign_Text_0:
# 56 "data/maps/Route2/scripts.pory"
	.string "{UP_ARROW} Rib Cave.\p"
	.string "Gateway to Candlewax City.$"

Jay_BattleIntro::
# 21 "data/maps/Route2/scripts.pory"
	.string "JAY: Hey you!\p"
	.string "I'm training for the TLDP challenge! \p"
	.string "Train with me!$"

Jay_Defeated::
# 27 "data/maps/Route2/scripts.pory"
	.string "Guess I need to train more…$"

Jay_PostBattle::
# 31 "data/maps/Route2/scripts.pory"
	.string "JAY: Well, it looks like you're closer \n"
	.string "to being ready for this than I am.\p"
	.string "I'm gonna train a bit further, I've \n"
	.string "heard there are strong trainers on \l"
	.string "the other side of the Rib Cave.$"

NightingaleCity_Pub_MapScripts::
	.byte 0


NCPub_Emily::
# 6 "data/maps/NightingaleCity_Pub/scripts.pory"
	lock
# 7 "data/maps/NightingaleCity_Pub/scripts.pory"
	faceplayer
# 8 "data/maps/NightingaleCity_Pub/scripts.pory"
	msgbox NCPub_EmilyGreetsPlayer, MSGBOX_AUTOCLOSE
# 9 "data/maps/NightingaleCity_Pub/scripts.pory"
	applymovement 1, NCPub_EmilyGoesToBackRoom
# 10 "data/maps/NightingaleCity_Pub/scripts.pory"
	waitmovement 0
# 11 "data/maps/NightingaleCity_Pub/scripts.pory"
	removeobject 1
# 12 "data/maps/NightingaleCity_Pub/scripts.pory"
	setflag FLAG_NIGHTINGALECITY_PUB_EMILY
# 13 "data/maps/NightingaleCity_Pub/scripts.pory"
	release
	end


# 34 "data/maps/NightingaleCity_Pub/scripts.pory"
NCPub_EmilyGoesToBackRoom:
# 35 "data/maps/NightingaleCity_Pub/scripts.pory"
	walk_up
# 35 "data/maps/NightingaleCity_Pub/scripts.pory"
	walk_up
# 36 "data/maps/NightingaleCity_Pub/scripts.pory"
	step_end

NightingaleCityPub_Barista::
# 40 "data/maps/NightingaleCity_Pub/scripts.pory"
	lock
# 41 "data/maps/NightingaleCity_Pub/scripts.pory"
	faceplayer
# 42 "data/maps/NightingaleCity_Pub/scripts.pory"
	message NightingaleCityPub_Barista_Text_0
# 43 "data/maps/NightingaleCity_Pub/scripts.pory"
	waitmessage
# 44 "data/maps/NightingaleCity_Pub/scripts.pory"
	pokemart MartBar
# 45 "data/maps/NightingaleCity_Pub/scripts.pory"
	msgbox NightingaleCityPub_Barista_Text_1
# 46 "data/maps/NightingaleCity_Pub/scripts.pory"
	release
	end


NightingaleCityPub_Toto::
# 51 "data/maps/NightingaleCity_Pub/scripts.pory"
	lock
# 52 "data/maps/NightingaleCity_Pub/scripts.pory"
	faceplayer
# 53 "data/maps/NightingaleCity_Pub/scripts.pory"
	msgbox NightingaleCityPub_Toto_Text_0
# 54 "data/maps/NightingaleCity_Pub/scripts.pory"
	release
	end


NightingalePub_Tilly::
# 59 "data/maps/NightingaleCity_Pub/scripts.pory"
	lock
# 60 "data/maps/NightingaleCity_Pub/scripts.pory"
	faceplayer
# 61 "data/maps/NightingaleCity_Pub/scripts.pory"
	checktrainerflag TRAINER_BRIANMAY
	goto_if 1, NightingalePub_Tilly_2
# 65 "data/maps/NightingaleCity_Pub/scripts.pory"
	msgbox NightingalePub_Tilly_Text_1, MSGBOX_AUTOCLOSE
# 66 "data/maps/NightingaleCity_Pub/scripts.pory"
	trainerbattle_no_intro TRAINER_TILLY, NightingalePub_Tilly_Text_2
# 67 "data/maps/NightingaleCity_Pub/scripts.pory"
	msgbox NightingalePub_Tilly_Text_3, MSGBOX_AUTOCLOSE
NightingalePub_Tilly_1:
# 69 "data/maps/NightingaleCity_Pub/scripts.pory"
	releaseall
	end

NightingalePub_Tilly_2:
# 62 "data/maps/NightingaleCity_Pub/scripts.pory"
	msgbox NightingalePub_Tilly_Text_0, MSGBOX_AUTOCLOSE
	goto NightingalePub_Tilly_1


NightingaleCityPub_Barista_Text_0:
# 42 "data/maps/NightingaleCity_Pub/scripts.pory"
	.string "Welcome to the Nightingale Pub, what \ncan I get ya?$"

NightingaleCityPub_Barista_Text_1:
# 45 "data/maps/NightingaleCity_Pub/scripts.pory"
	.string "Alright, come back soon!$"

NightingaleCityPub_Toto_Text_0:
# 53 "data/maps/NightingaleCity_Pub/scripts.pory"
	.string "TOTO: Hi, come here often?\p"
	.string "I'm only stopping by on my way to Mirror\n"
	.string "City, I'm gonna see The Last Dinner\l"
	.string "Party.\p"
	.string "Speaking of, is that Emily Roberts I\n"
	.string "just saw?\p"
	.string "How sick!$"

NightingalePub_Tilly_Text_0:
# 62 "data/maps/NightingaleCity_Pub/scripts.pory"
	.string "TILLY: Brian May let you battle with\n"
	.string "him?\p"
	.string "Cool, that's unusual!$"

NightingalePub_Tilly_Text_1:
# 65 "data/maps/NightingaleCity_Pub/scripts.pory"
	.string "TILLY: Brian May comes here so often he\n"
	.string "has his own room at the back.\p"
	.string "He doesn't really do POKéMON battles\n"
	.string "anymore, but I sure do!$"

NightingalePub_Tilly_Text_2:
# 66 "data/maps/NightingaleCity_Pub/scripts.pory"
	.string "Love a fun bar fight!$"

NightingalePub_Tilly_Text_3:
# 67 "data/maps/NightingaleCity_Pub/scripts.pory"
	.string "TILLY: That was fun, and we didn't even\n"
	.string "make a mess!$"

NCPub_EmilyGreetsPlayer::
# 18 "data/maps/NightingaleCity_Pub/scripts.pory"
	.string "EMILY: Hello! \p"
	.string "Have we met before? \p"
	.string "… … … \p"
	.string "Oh I see, we never talked but we did \n"
	.string "cross paths a few times. \p"
	.string "Well I'm Emily, and you are? \p"
	.string "… … … \p"
	.string "Nice to meet you, {PLAYER}. \p"
	.string "I'm here to invite someone very special \n"
	.string "to our first show in Mirror City. \p"
	.string "He's in the other room, I was thinking \n"
	.string "of the best way to invite him. \p"
	.string "I think I'm ready now, wish me luck!$"

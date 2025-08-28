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

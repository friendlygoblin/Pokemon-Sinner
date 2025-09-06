CandlewaxCity_BikeShop_MapScripts::
	.byte 0


CwCBS_Scientist::
# 4 "data/maps/CandlewaxCity_BikeShop/scripts.pory"
	lock
# 5 "data/maps/CandlewaxCity_BikeShop/scripts.pory"
	faceplayer
# 6 "data/maps/CandlewaxCity_BikeShop/scripts.pory"
	switch VAR_BIKESHOPS
# 7 "data/maps/CandlewaxCity_BikeShop/scripts.pory"
	case 0, CwCBS_Scientist_3
# 13 "data/maps/CandlewaxCity_BikeShop/scripts.pory"
	case 1, CwCBS_Scientist_4
# 15 "data/maps/CandlewaxCity_BikeShop/scripts.pory"
	case 2, CwCBS_Scientist_5
CwCBS_Scientist_1:
# 18 "data/maps/CandlewaxCity_BikeShop/scripts.pory"
	release
	end

CwCBS_Scientist_3:
# 8 "data/maps/CandlewaxCity_BikeShop/scripts.pory"
	msgbox CwCBS_ExplainBikeProblem
# 9 "data/maps/CandlewaxCity_BikeShop/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 10 "data/maps/CandlewaxCity_BikeShop/scripts.pory"
	message CwCBS_Scientist_Text_0
# 11 "data/maps/CandlewaxCity_BikeShop/scripts.pory"
	waitfanfare
# 12 "data/maps/CandlewaxCity_BikeShop/scripts.pory"
	setvar VAR_BIKESHOPS, 1
	goto CwCBS_Scientist_1

CwCBS_Scientist_4:
# 14 "data/maps/CandlewaxCity_BikeShop/scripts.pory"
	msgbox CwCBS_Scientist_Text_1, MSGBOX_AUTOCLOSE
	goto CwCBS_Scientist_1

CwCBS_Scientist_5:
# 16 "data/maps/CandlewaxCity_BikeShop/scripts.pory"
	msgbox CwCBS_Scientist_Text_2
	goto CwCBS_Scientist_1


CwCBS_Scientist_Text_0:
# 10 "data/maps/CandlewaxCity_BikeShop/scripts.pory"
	.string "{PLAYER} received the bike part!$"

CwCBS_Scientist_Text_1:
# 14 "data/maps/CandlewaxCity_BikeShop/scripts.pory"
	.string "My friend runs the bike shop in Crystal\n"
	.string "Stream City, thanks for accepting to\l"
	.string "take this bike part to her!$"

CwCBS_Scientist_Text_2:
# 16 "data/maps/CandlewaxCity_BikeShop/scripts.pory"
	.string "Oh, you managed to get the part to my\n"
	.string "friend?\p"
	.string "Wait, that's the bike model she was\n"
	.string "working on!\p"
	.string "It looks great, I hope you like it!$"

CwCBS_ExplainBikeProblem::
# 22 "data/maps/CandlewaxCity_BikeShop/scripts.pory"
	.string "Hello? \p"
	.string "I'm a bit busy right now, I have to \n"
	.string "find a way to get this new bike part \l"
	.string "to my friend in Crystal Stream City. \p"
	.string "She runs the local bike shop, she needs \n"
	.string "this new part for her newest model. \p"
	.string "It's pretty far away, and I can't leave \n"
	.string "the workshop unattended for that long… \p"
	.string "Wait, would you help me? \n"
	.string "I'll write you a note!\p"
	.string "Really? You're such a lifesaver!\p"
	.string "Here you go!$"

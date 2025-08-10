Route4_MapScripts::
	.byte 0


Route4_Picnicker::
# 4 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_NANCY, Route4_Picnicker_Text_0, Route4_Picnicker_Text_1
# 5 "data/maps/Route4/scripts.pory"
	msgbox Route4_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	return


Route4_Youngster::
# 9 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route4_Youngster_Text_0, Route4_Youngster_Text_1
# 10 "data/maps/Route4/scripts.pory"
	msgbox Route4_Youngster_Text_2, MSGBOX_AUTOCLOSE
	return


Route4_Picnicker_Text_0:
# 4 "data/maps/Route4/scripts.pory"
	.string "This route is pretty empty, I can get\n"
	.string "some quality time with my POKéMON!$"

Route4_Picnicker_Text_1:
# 4 "data/maps/Route4/scripts.pory"
	.string "This is why I like empty places…$"

Route4_Picnicker_Text_2:
# 5 "data/maps/Route4/scripts.pory"
	.string "Not many people come around here, I'm\n"
	.string "not sure why but I like that.$"

Route4_Youngster_Text_0:
# 9 "data/maps/Route4/scripts.pory"
	.string "Should I…\n"
	.string "Or shouldn't I?\p"
	.string "Okay, sure, I will battle!$"

Route4_Youngster_Text_1:
# 9 "data/maps/Route4/scripts.pory"
	.string "So I shouldn't have battled…$"

Route4_Youngster_Text_2:
# 10 "data/maps/Route4/scripts.pory"
	.string "You're a lot stronger than you look, you\n"
	.string "know.$"

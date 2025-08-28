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


Route4_Fisherman::
# 14 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_CLAUDE, Route4_Fisherman_Text_0, Route4_Fisherman_Text_1
# 15 "data/maps/Route4/scripts.pory"
	msgbox Route4_Fisherman_Text_2, MSGBOX_AUTOCLOSE
	return


Route4_Collector::
# 19 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ED, Route4_Collector_Text_0, Route4_Collector_Text_1
# 20 "data/maps/Route4/scripts.pory"
	msgbox Route4_Collector_Text_2, MSGBOX_AUTOCLOSE
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

Route4_Fisherman_Text_0:
# 14 "data/maps/Route4/scripts.pory"
	.string "Shhhhh, I'm fishing! $"

Route4_Fisherman_Text_1:
# 14 "data/maps/Route4/scripts.pory"
	.string "My catch got away…$"

Route4_Fisherman_Text_2:
# 15 "data/maps/Route4/scripts.pory"
	.string "You have to be really patient and quiet\n"
	.string "when you're fishing.$"

Route4_Collector_Text_0:
# 19 "data/maps/Route4/scripts.pory"
	.string "I only collect cool POKéMON.$"

Route4_Collector_Text_1:
# 19 "data/maps/Route4/scripts.pory"
	.string "Ah! My precious POKéMON!$"

Route4_Collector_Text_2:
# 20 "data/maps/Route4/scripts.pory"
	.string "You travel a lot, you must see a lot of\n"
	.string "cool POKéMON.\p"
	.string "I'm jealous.$"

BigDogIsland_Cave_MapScripts::
	.byte 0


BDI_Q::
# 4 "data/maps/BigDogIsland_Cave/scripts.pory"
	trainerbattle_single TRAINER_Q, BDI_Q_Text_0, BDI_Q_Text_1
# 5 "data/maps/BigDogIsland_Cave/scripts.pory"
	msgbox BDI_Q_Text_2, MSGBOX_AUTOCLOSE
	return


BDI_Q_Text_0:
# 4 "data/maps/BigDogIsland_Cave/scripts.pory"
	.string "Q: I love Lillipups so much, when I found\n"
	.string "out there was an island with a bunch of\l"
	.string "them on it I had to see it!$"

BDI_Q_Text_1:
# 4 "data/maps/BigDogIsland_Cave/scripts.pory"
	.string "Oh…$"

BDI_Q_Text_2:
# 5 "data/maps/BigDogIsland_Cave/scripts.pory"
	.string "Q: I wonder if there's a link between\n"
	.string "this island and The Last Dinner Party's\l"
	.string "song…$"

MirrorLake_Cave_Entrance_MapScripts::
	.byte 0


BowieHall_Katie::
# 4 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	lock
# 5 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	faceplayer
# 6 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	checktrainerflag TRAINER_BOWIE
	goto_if 1, BowieHall_Katie_2
# 10 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	trainerbattle_single TRAINER_KATIE_2, KatieIntro_Bowie, KatieDefeated_Bowie
# 11 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	msgbox KatiePostBattle_Bowie, MSGBOX_AUTOCLOSE
BowieHall_Katie_1:
# 13 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	releaseall
	end

BowieHall_Katie_2:
# 7 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	msgbox KatiePostBattle_Bowie, MSGBOX_AUTOCLOSE
	goto BowieHall_Katie_1


KatieIntro_Bowie::
# 17 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	.string "KATIE: I was on my way to Mirror City \n"
	.string "when I heard music coming from behind \l"
	.string "the waterfall. \p"
	.string "I had to investigate, is that why \n"
	.string "you're here too? $"

KatieDefeated_Bowie::
# 25 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	.string "Oh… well I hope you have better luck \n"
	.string "in your investigations than me… $"

KatiePostBattle_Bowie::
# 30 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	.string "KATIE: I think it's coming from the other  \n"
	.string "room, but I can't get past that big \l"
	.string "rock blocking the way.$"

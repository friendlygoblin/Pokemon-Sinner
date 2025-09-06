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
	msgbox KatieIntro_Bowie, MSGBOX_AUTOCLOSE
# 11 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	trainerbattle_no_intro TRAINER_KATIE_2, KatieDefeated_Bowie
# 12 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	msgbox KatiePostBattle_Bowie, MSGBOX_AUTOCLOSE
BowieHall_Katie_1:
# 14 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	releaseall
	end

BowieHall_Katie_2:
# 7 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	msgbox KatiePostBattle_Bowie, MSGBOX_AUTOCLOSE
	goto BowieHall_Katie_1


BowieHall_Aux::
# 38 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	lock
# 39 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	faceplayer
# 40 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	checktrainerflag TRAINER_BOWIE
	goto_if 1, BowieHall_Aux_2
# 44 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	msgbox AuxIntro_Bowie, MSGBOX_AUTOCLOSE
# 45 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	trainerbattle_no_intro TRAINER_AUX, AuxDefeated_Bowie
# 46 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	msgbox AuxPostBattle_Bowie, MSGBOX_AUTOCLOSE
BowieHall_Aux_1:
# 48 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	releaseall
	end

BowieHall_Aux_2:
# 41 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	msgbox KatiePostBattle_Bowie, MSGBOX_AUTOCLOSE
	goto BowieHall_Aux_1


MirrorLakeCave_Rock::
# 70 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	lock
# 71 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	msgbox MirrorLakeCave_Rock_Text_0, MSGBOX_YESNO
# 72 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MirrorLakeCave_Rock_2
MirrorLakeCave_Rock_1:
# 81 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	release
	end

MirrorLakeCave_Rock_2:
# 73 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	msgbox MirrorLakeCave_Rock_Text_1
# 74 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	fadescreen FADE_TO_BLACK
# 75 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	removeobject 3
# 76 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	playse SE_EXIT
# 77 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	waitse
# 78 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	setflag FLAG_MIRROR_CAVE_ROCK
# 79 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto MirrorLakeCave_Rock_1


MirrorLakeCave_Rock_Text_0:
# 71 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	.string "A rock is blocking the rest of the cave.\p"
	.string "Do you want to push it?$"

MirrorLakeCave_Rock_Text_1:
# 73 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	.string "{PLAYER} pushed the rock aside.$"

KatieIntro_Bowie::
# 18 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	.string "KATIE: I was on my way to Mirror City \n"
	.string "when I heard music coming from behind \l"
	.string "the waterfall. \p"
	.string "I had to investigate, is that why \n"
	.string "you're here too? $"

KatieDefeated_Bowie::
# 26 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	.string "Oh… well I hope you have better luck \n"
	.string "in your investigations than me… $"

KatiePostBattle_Bowie::
# 31 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	.string "KATIE: I think it's coming from the other  \n"
	.string "room, but I can't get past that big \l"
	.string "rock blocking the way.$"

AuxIntro_Bowie::
# 52 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	.string "AUX: I hear some noise… could it be \n"
	.string "'Godzilla' playing? \p"
	.string "Either way, I’m not letting you get \n"
	.string "there first! $"

AuxDefeated_Bowie::
# 59 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	.string "Ooh… I should've known better… \n"
	.string "I should've done more… $"

AuxPostBattle_Bowie::
# 64 "data/maps/MirrorLake_Cave_Entrance/scripts.pory"
	.string "AUX: Hey… have you already listened \n"
	.string "to 'Godzilla' today? It’s a banger!  $"

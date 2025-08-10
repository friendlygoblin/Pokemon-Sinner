Route8_MapScripts::
	.byte 0


Route8_MusicVideo::
# 11 "data/maps/Route8/scripts.pory"
	lock
# 14 "data/maps/Route8/scripts.pory"
	applymovement 6, Route8_ManRunAway1
# 15 "data/maps/Route8/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 16 "data/maps/Route8/scripts.pory"
	waitmovement 6
# 17 "data/maps/Route8/scripts.pory"
	delay 20
# 18 "data/maps/Route8/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route8_PlayerMoveAside
# 19 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 20 "data/maps/Route8/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 21 "data/maps/Route8/scripts.pory"
	applymovement 6, Route8_ManRunAway2
# 22 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 23 "data/maps/Route8/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 24 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 25 "data/maps/Route8/scripts.pory"
	delay 20
# 26 "data/maps/Route8/scripts.pory"
	removeobject 6
# 27 "data/maps/Route8/scripts.pory"
	setflag FLAG_ROUTE8_ACTOR
# 30 "data/maps/Route8/scripts.pory"
	applymovement 5, Route8_HarvNoticesPlayer
# 31 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 32 "data/maps/Route8/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 33 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvAreYouTrainer, MSGBOX_YESNO
# 35 "data/maps/Route8/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route8_MusicVideo_2
# 48 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvRefusedBattle, MSGBOX_AUTOCLOSE
Route8_MusicVideo_1:
# 50 "data/maps/Route8/scripts.pory"
	setvar VAR_ROUTE8_MUSICVIDEO, 1
# 51 "data/maps/Route8/scripts.pory"
	releaseall
	end

Route8_MusicVideo_2:
# 36 "data/maps/Route8/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 37 "data/maps/Route8/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route8_MusicVideo_5
# 41 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvBattleTest, MSGBOX_AUTOCLOSE
# 42 "data/maps/Route8/scripts.pory"
	trainerbattle_no_intro TRAINER_HARVFROST, Route8_MusicVideo_Text_0
# 43 "data/maps/Route8/scripts.pory"
	special HealPlayerParty
# 44 "data/maps/Route8/scripts.pory"
	call PictureParlourBattle
	goto Route8_MusicVideo_1

Route8_MusicVideo_5:
# 38 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvNotEnoughPkmn, MSGBOX_AUTOCLOSE
	goto Route8_MusicVideo_1


PictureParlourBattle::
# 56 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvAcceptedBattle, MSGBOX_AUTOCLOSE
# 57 "data/maps/Route8/scripts.pory"
	applymovement 5, Route8_HarvGoBackToInitial
# 58 "data/maps/Route8/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route8_PlayerGetIntoPosition
# 59 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvAction, MSGBOX_AUTOCLOSE
# 61 "data/maps/Route8/scripts.pory"
	trainerbattle_double TRAINER_PICTURE_PARLOUR, PictureParlourBattle_Text_0, PictureParlourBattle_Text_1, Route8_HarvNotEnoughPkmn, PostPictureParlourBattle
# 62 "data/maps/Route8/scripts.pory"
	setvar VAR_ROUTE8_MUSICVIDEO, 2
	return


PostPictureParlourBattle::
# 66 "data/maps/Route8/scripts.pory"
	applymovement 4, WalkInPlaceDown
# 67 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route8/scripts.pory"
	msgbox Route8_KatherinePostBattle, MSGBOX_AUTOCLOSE
# 69 "data/maps/Route8/scripts.pory"
	giveitem ITEM_BLACK_GLASSES
# 70 "data/maps/Route8/scripts.pory"
	applymovement 3, WalkInPlaceDown
# 71 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route8/scripts.pory"
	msgbox Route8_EllaPostBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/Route8/scripts.pory"
	giveitem ITEM_METRONOME
	return


Route8_Harv::
# 77 "data/maps/Route8/scripts.pory"
	lock
# 78 "data/maps/Route8/scripts.pory"
	faceplayer
# 79 "data/maps/Route8/scripts.pory"
	compare VAR_ROUTE8_MUSICVIDEO, 2
	goto_if_ne Route8_Harv_2
# 102 "data/maps/Route8/scripts.pory"
	msgbox Route8_Harv_Text_0
Route8_Harv_1:
# 104 "data/maps/Route8/scripts.pory"
	release
	end

Route8_Harv_2:
# 80 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvPlayerCameBack, MSGBOX_YESNO
# 81 "data/maps/Route8/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route8_Harv_5
# 98 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvRefusedBattle, MSGBOX_AUTOCLOSE
	goto Route8_Harv_1

Route8_Harv_5:
# 82 "data/maps/Route8/scripts.pory"
	compare VAR_ROUTE8_MUSICVIDEO, 1
	goto_if_eq Route8_Harv_9
Route8_Harv_8:
# 88 "data/maps/Route8/scripts.pory"
	fadescreen FADE_TO_BLACK
# 89 "data/maps/Route8/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 13, 24
# 90 "data/maps/Route8/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 91 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 92 "data/maps/Route8/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 93 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvAction, MSGBOX_AUTOCLOSE
# 94 "data/maps/Route8/scripts.pory"
	trainerbattle_double TRAINER_PICTURE_PARLOUR, PictureParlourBattle_Text_0, PictureParlourBattle_Text_1, Route8_HarvNotEnoughPkmn, PostPictureParlourBattle
# 95 "data/maps/Route8/scripts.pory"
	setvar VAR_ROUTE8_MUSICVIDEO, 2
	goto Route8_Harv_1

Route8_Harv_9:
# 83 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvBattleTest, MSGBOX_AUTOCLOSE
# 84 "data/maps/Route8/scripts.pory"
	trainerbattle_no_intro TRAINER_HARVFROST, Route8_MusicVideo_Text_0
# 85 "data/maps/Route8/scripts.pory"
	special HealPlayerParty
	goto Route8_Harv_8


Route8_Katherine::
# 109 "data/maps/Route8/scripts.pory"
	lock
# 110 "data/maps/Route8/scripts.pory"
	faceplayer
# 111 "data/maps/Route8/scripts.pory"
	compare VAR_ROUTE8_MUSICVIDEO, 2
	goto_if_ne Route8_Katherine_2
# 115 "data/maps/Route8/scripts.pory"
	msgbox Route8_Katherine_Text_1
Route8_Katherine_1:
# 117 "data/maps/Route8/scripts.pory"
	release
	end

Route8_Katherine_2:
# 112 "data/maps/Route8/scripts.pory"
	msgbox Route8_Katherine_Text_0
	goto Route8_Katherine_1


Route8_Ella::
# 122 "data/maps/Route8/scripts.pory"
	lock
# 123 "data/maps/Route8/scripts.pory"
	faceplayer
# 124 "data/maps/Route8/scripts.pory"
	compare VAR_ROUTE8_MUSICVIDEO, 2
	goto_if_ne Route8_Ella_2
# 128 "data/maps/Route8/scripts.pory"
	msgbox Route8_Ella_Text_1
Route8_Ella_1:
# 130 "data/maps/Route8/scripts.pory"
	release
	end

Route8_Ella_2:
# 125 "data/maps/Route8/scripts.pory"
	msgbox Route8_Ella_Text_0
	goto Route8_Ella_1


# 134 "data/maps/Route8/scripts.pory"
Route8_ManRunAway1:
# 135 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 135 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 135 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 135 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 135 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 135 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 136 "data/maps/Route8/scripts.pory"
	walk_in_place_fast_right
# 136 "data/maps/Route8/scripts.pory"
	walk_in_place_fast_right
# 137 "data/maps/Route8/scripts.pory"
	step_end

# 140 "data/maps/Route8/scripts.pory"
Route8_PlayerMoveAside:
# 141 "data/maps/Route8/scripts.pory"
	face_left
# 142 "data/maps/Route8/scripts.pory"
	delay_8
# 143 "data/maps/Route8/scripts.pory"
	walk_up
# 144 "data/maps/Route8/scripts.pory"
	face_down
# 145 "data/maps/Route8/scripts.pory"
	step_end

# 148 "data/maps/Route8/scripts.pory"
Route8_ManRunAway2:
# 149 "data/maps/Route8/scripts.pory"
	walk_fast_right
# 150 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 150 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 150 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 150 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 150 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 150 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 151 "data/maps/Route8/scripts.pory"
	step_end

# 154 "data/maps/Route8/scripts.pory"
Route8_HarvNoticesPlayer:
# 155 "data/maps/Route8/scripts.pory"
	face_left
# 156 "data/maps/Route8/scripts.pory"
	emote_exclamation_mark
# 157 "data/maps/Route8/scripts.pory"
	delay_16
# 158 "data/maps/Route8/scripts.pory"
	walk_fast_left
# 158 "data/maps/Route8/scripts.pory"
	walk_fast_left
# 158 "data/maps/Route8/scripts.pory"
	walk_fast_left
# 158 "data/maps/Route8/scripts.pory"
	walk_fast_left
# 159 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 159 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 160 "data/maps/Route8/scripts.pory"
	step_end

# 163 "data/maps/Route8/scripts.pory"
Route8_HarvGoBackToInitial:
# 164 "data/maps/Route8/scripts.pory"
	walk_up
# 164 "data/maps/Route8/scripts.pory"
	walk_up
# 165 "data/maps/Route8/scripts.pory"
	walk_right
# 165 "data/maps/Route8/scripts.pory"
	walk_right
# 165 "data/maps/Route8/scripts.pory"
	walk_right
# 166 "data/maps/Route8/scripts.pory"
	face_up
# 167 "data/maps/Route8/scripts.pory"
	step_end

# 170 "data/maps/Route8/scripts.pory"
Route8_PlayerGetIntoPosition:
# 171 "data/maps/Route8/scripts.pory"
	walk_up
# 171 "data/maps/Route8/scripts.pory"
	walk_up
# 171 "data/maps/Route8/scripts.pory"
	walk_up
# 172 "data/maps/Route8/scripts.pory"
	walk_right
# 172 "data/maps/Route8/scripts.pory"
	walk_right
# 172 "data/maps/Route8/scripts.pory"
	walk_right
# 173 "data/maps/Route8/scripts.pory"
	walk_up
# 174 "data/maps/Route8/scripts.pory"
	step_end

Route8_Psychic::
# 246 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_CEDRIC, Route8_Psychic_Text_0, Route8_Psychic_Text_1
# 247 "data/maps/Route8/scripts.pory"
	msgbox Route8_Psychic_Text_2, MSGBOX_AUTOCLOSE
	return


Route8_DragonTamer::
# 251 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_AARON, Route8_DragonTamer_Text_0, Route8_DragonTamer_Text_1
# 252 "data/maps/Route8/scripts.pory"
	msgbox Route8_DragonTamer_Text_2, MSGBOX_AUTOCLOSE
	return


Route8_Camera1::
# 256 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_BECK, Route8_Camera1_Text_0, Route8_Camera1_Text_1
# 257 "data/maps/Route8/scripts.pory"
	msgbox Route8_Camera1_Text_2, MSGBOX_AUTOCLOSE
	return


Route8_Camera2::
# 261 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_LAO_1, Route8_Camera2_Text_0, Route8_Camera2_Text_1
# 262 "data/maps/Route8/scripts.pory"
	msgbox Route8_Camera2_Text_2, MSGBOX_AUTOCLOSE
	return


Route8_BirdKeeper::
# 266 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_ALBERTO, Route8_BirdKeeper_Text_0, Route8_BirdKeeper_Text_1
# 267 "data/maps/Route8/scripts.pory"
	msgbox Route8_BirdKeeper_Text_2, MSGBOX_AUTOCLOSE
	return


Route8_SchoolBoy::
# 271 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_TED, Route8_SchoolBoy_Text_0, Route8_SchoolBoy_Text_1
# 272 "data/maps/Route8/scripts.pory"
	msgbox Route8_SchoolBoy_Text_2, MSGBOX_AUTOCLOSE
	return


Route8_MusicVideo_Text_0:
# 42 "data/maps/Route8/scripts.pory"
	.string "Yes, that'll look great!$"

PictureParlourBattle_Text_0:
# 61 "data/maps/Route8/scripts.pory"
	.string "KATHERINE: Thanks for helping us out!\p"
	.string "ELLA: We'll definitely owe you one!$"

PictureParlourBattle_Text_1:
# 61 "data/maps/Route8/scripts.pory"
	.string "KATHERINE: What Lumiere had in mind was\n"
	.string "you!\p"
	.string "ELLA: Yeah, that was a real motion\n"
	.string "picture!$"

Route8_Harv_Text_0:
# 102 "data/maps/Route8/scripts.pory"
	.string "HARV FROST: Thank you so much for your\n"
	.string "help, you were fantastic!$"

Route8_Katherine_Text_0:
# 112 "data/maps/Route8/scripts.pory"
	.string "KATHERINE: Are you here to help with\n"
	.string "the music video? If yes, you should go\l"
	.string "tell Harv you're ready to shoot.$"

Route8_Katherine_Text_1:
# 115 "data/maps/Route8/scripts.pory"
	.string "KATHERINE: Thanks again for joining us\n"
	.string "on such short notice!\p"
	.string "Maybe you should consider an acting\n"
	.string "career.$"

Route8_Ella_Text_0:
# 125 "data/maps/Route8/scripts.pory"
	.string "ELLA: The actor who was supposed to\n"
	.string "shoot with us isn't available anymore…\p"
	.string "If you wanna help us out, go tell our\n"
	.string "director Harv, she'll tell you what to\l"
	.string "do.$"

Route8_Ella_Text_1:
# 128 "data/maps/Route8/scripts.pory"
	.string "ELLA: This might be our best music\n"
	.string "video yet, thanks to you. Good luck with\l"
	.string "whatever you're planning next!$"

Route8_Psychic_Text_0:
# 246 "data/maps/Route8/scripts.pory"
	.string "I'm gonna read your mind!$"

Route8_Psychic_Text_1:
# 246 "data/maps/Route8/scripts.pory"
	.string "Uh I still need practice…$"

Route8_Psychic_Text_2:
# 247 "data/maps/Route8/scripts.pory"
	.string "One day I'll be strong enough to read\n"
	.string "everyone's minds.$"

Route8_DragonTamer_Text_0:
# 251 "data/maps/Route8/scripts.pory"
	.string "Behold! My mighty dragons!$"

Route8_DragonTamer_Text_1:
# 251 "data/maps/Route8/scripts.pory"
	.string "My dragons!$"

Route8_DragonTamer_Text_2:
# 252 "data/maps/Route8/scripts.pory"
	.string "There are dragons in Portrait Town, I\n"
	.string "love going there.$"

Route8_Camera1_Text_0:
# 256 "data/maps/Route8/scripts.pory"
	.string "That camera is a bit heavy, I could use\n"
	.string "a break.$"

Route8_Camera1_Text_1:
# 256 "data/maps/Route8/scripts.pory"
	.string "Ah, break is over…$"

Route8_Camera1_Text_2:
# 257 "data/maps/Route8/scripts.pory"
	.string "Harv is a great director, I don't mind\n"
	.string "carrying that heavy camera when I'm\l"
	.string "working with her.$"

Route8_Camera2_Text_0:
# 261 "data/maps/Route8/scripts.pory"
	.string "Filming requires patience and precision.$"

Route8_Camera2_Text_1:
# 261 "data/maps/Route8/scripts.pory"
	.string "Mmh we'll need another take…$"

Route8_Camera2_Text_2:
# 262 "data/maps/Route8/scripts.pory"
	.string "I love working on music videos, I get to\n"
	.string "meet cool artists.$"

Route8_BirdKeeper_Text_0:
# 266 "data/maps/Route8/scripts.pory"
	.string "Look at me!\n"
	.string "I can fly like a bird!.$"

Route8_BirdKeeper_Text_1:
# 266 "data/maps/Route8/scripts.pory"
	.string "Ouch, landing is rough…$"

Route8_BirdKeeper_Text_2:
# 267 "data/maps/Route8/scripts.pory"
	.string "What I love most about Flying POKéMON\n"
	.string "is how free they are.\p"
	.string "I wish I could grow wings.$"

Route8_SchoolBoy_Text_0:
# 271 "data/maps/Route8/scripts.pory"
	.string "I'm the best of my class!$"

Route8_SchoolBoy_Text_1:
# 271 "data/maps/Route8/scripts.pory"
	.string "You're even better than me…$"

Route8_SchoolBoy_Text_2:
# 272 "data/maps/Route8/scripts.pory"
	.string "You're even stronger than I am, that\n"
	.string "means if you came to my school I'd be\l"
	.string "second best…$"

Route8_HarvAreYouTrainer::
# 177 "data/maps/Route8/scripts.pory"
	.string "???: You! \p"
	.string "Are you a POKéMON trainer?\p"
	.string "… … … \p"
	.string "HARV FROST: Sorry, my name is Harv \n"
	.string "Frost, I'm a film director. \p"
	.string "The man who just ran away is one of my \n"
	.string "actors, he had a personal emergency. \p"
	.string "He won't be available for a while, but \n"
	.string "I still have a music video to direct! \p"
	.string "I need someone to have a double battle \n"
	.string "with Katherine and Ella from the band \l"
	.string "Picture Parlour, will you help?$"

Route8_HarvBattleTest::
# 192 "data/maps/Route8/scripts.pory"
	.string "Oh perfect, let's do a quick battle \n"
	.string "test so I get an idea of what you \l"
	.string "look like in battle.$"

Route8_HarvNotEnoughPkmn::
# 198 "data/maps/Route8/scripts.pory"
	.string "HARV FROST: Wait, you don't have \n"
	.string "enough POKéMON… \p"
	.string "It's a double battle so you'll need \l"
	.string "at least two. \p"
	.string "Come back when you have more than one \n"
	.string "POKéMON, we'll wait here.$"

Route8_HarvAcceptedBattle::
# 207 "data/maps/Route8/scripts.pory"
	.string "Perfect! \p"
	.string "Oh, what's your name?\p"
	.string "… … … \p"
	.string "Alright, {PLAYER} let's get you into \n"
	.string "position!$"

Route8_HarvRefusedBattle::
# 215 "data/maps/Route8/scripts.pory"
	.string "Oh… \p"
	.string "Hum, I hope I can find someone soon, \n"
	.string "then… \p"
	.string "Come back if you change your mind! $"

Route8_HarvAction::
# 222 "data/maps/Route8/scripts.pory"
	.string "HARV FROST: And… ACTION!$"

Route8_HarvPlayerCameBack::
# 226 "data/maps/Route8/scripts.pory"
	.string "HARV FROST: You came back! \p"
	.string "Are you ready to star in a Picture \n"
	.string "Parlour music video?$"

Route8_KatherinePostBattle::
# 232 "data/maps/Route8/scripts.pory"
	.string "KATHERINE: Woah that was great! \p"
	.string "Thanks for giving us a hand, you're \n"
	.string "really a lifesaver. \p"
	.string "Here's a little something for you, it's \n"
	.string "not much but I want you to have it.$"

Route8_EllaPostBattle::
# 240 "data/maps/Route8/scripts.pory"
	.string "ELLA: I also have a thank you gift. \p"
	.string "Hope we'll see you around!$"

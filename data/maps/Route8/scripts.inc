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
	applymovement OBJ_EVENT_ID_PLAYER, Route8_PlayerMoveAside
# 18 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 19 "data/maps/Route8/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 20 "data/maps/Route8/scripts.pory"
	applymovement 6, Route8_ManRunAway2
# 21 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 22 "data/maps/Route8/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 23 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 24 "data/maps/Route8/scripts.pory"
	delay 20
# 25 "data/maps/Route8/scripts.pory"
	removeobject 6
# 26 "data/maps/Route8/scripts.pory"
	setflag FLAG_ROUTE8_ACTOR
# 29 "data/maps/Route8/scripts.pory"
	applymovement 5, Route8_HarvNoticesPlayer
# 30 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 31 "data/maps/Route8/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 32 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 33 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvAreYouTrainer, MSGBOX_YESNO
# 34 "data/maps/Route8/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route8_MusicVideo_2
# 52 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvRefusedBattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/Route8/scripts.pory"
	applymovement 5, Route8_HarvGoBackToInitial
# 54 "data/maps/Route8/scripts.pory"
	waitmovement 0
Route8_MusicVideo_1:
# 56 "data/maps/Route8/scripts.pory"
	setvar VAR_ROUTE8_MUSICVIDEO, 1
# 57 "data/maps/Route8/scripts.pory"
	releaseall
	end

Route8_MusicVideo_2:
# 35 "data/maps/Route8/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 36 "data/maps/Route8/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route8_MusicVideo_5
# 42 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvBattleTest, MSGBOX_AUTOCLOSE
# 43 "data/maps/Route8/scripts.pory"
	trainerbattle_no_intro TRAINER_HARVFROST, Route8_MusicVideo_Text_0
# 44 "data/maps/Route8/scripts.pory"
	special HealPlayerParty
# 45 "data/maps/Route8/scripts.pory"
	applymovement 5, Route8_HarvGoBackToInitial
# 46 "data/maps/Route8/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route8_PlayerGetIntoPosition
# 47 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 48 "data/maps/Route8/scripts.pory"
	call PictureParlourBattle
	goto Route8_MusicVideo_1

Route8_MusicVideo_5:
# 37 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvNotEnoughPkmn, MSGBOX_AUTOCLOSE
# 38 "data/maps/Route8/scripts.pory"
	applymovement 5, Route8_HarvGoBackToInitial
# 39 "data/maps/Route8/scripts.pory"
	waitmovement 0
	goto Route8_MusicVideo_1


PictureParlourBattle::
# 62 "data/maps/Route8/scripts.pory"
	lockall
# 63 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvAction, MSGBOX_AUTOCLOSE
# 64 "data/maps/Route8/scripts.pory"
	trainerbattle_double TRAINER_PICTURE_PARLOUR, PictureParlourBattle_Text_0, PictureParlourBattle_Text_1, Route8_HarvNotEnoughPkmn, PostPictureParlourBattle
# 65 "data/maps/Route8/scripts.pory"
	setvar VAR_ROUTE8_MUSICVIDEO, 2
	return


PostPictureParlourBattle::
# 69 "data/maps/Route8/scripts.pory"
	applymovement 4, WalkInPlaceDown
# 70 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route8/scripts.pory"
	msgbox Route8_KatherinePostBattle
# 72 "data/maps/Route8/scripts.pory"
	giveitem ITEM_BLACK_GLASSES
# 73 "data/maps/Route8/scripts.pory"
	applymovement 3, WalkInPlaceDown
# 74 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 75 "data/maps/Route8/scripts.pory"
	msgbox Route8_EllaPostBattle
# 76 "data/maps/Route8/scripts.pory"
	giveitem ITEM_METRONOME
	return


Route8_Harv::
# 80 "data/maps/Route8/scripts.pory"
	lock
# 81 "data/maps/Route8/scripts.pory"
	faceplayer
# 82 "data/maps/Route8/scripts.pory"
	compare VAR_ROUTE8_MUSICVIDEO, 2
	goto_if_eq Route8_Harv_2
# 86 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvPlayerCameBack, MSGBOX_YESNO
# 87 "data/maps/Route8/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route8_Harv_5
# 107 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvRefusedBattle, MSGBOX_AUTOCLOSE
Route8_Harv_1:
# 110 "data/maps/Route8/scripts.pory"
	release
	end

Route8_Harv_2:
# 83 "data/maps/Route8/scripts.pory"
	msgbox Route8_Harv_Text_0
	goto Route8_Harv_1

Route8_Harv_5:
# 88 "data/maps/Route8/scripts.pory"
	compare VAR_ROUTE8_MUSICVIDEO, 1
	goto_if_eq Route8_Harv_9
Route8_Harv_8:
# 94 "data/maps/Route8/scripts.pory"
	fadescreen FADE_TO_BLACK
# 95 "data/maps/Route8/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 13, 24
# 96 "data/maps/Route8/scripts.pory"
	setobjectxy OBJ_EVENT_ID_FOLLOWER, 14, 24
# 97 "data/maps/Route8/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 98 "data/maps/Route8/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_FaceUp
# 99 "data/maps/Route8/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 100 "data/maps/Route8/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 101 "data/maps/Route8/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 102 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 103 "data/maps/Route8/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 104 "data/maps/Route8/scripts.pory"
	call PictureParlourBattle
	goto Route8_Harv_1

Route8_Harv_9:
# 89 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvBattleTest, MSGBOX_AUTOCLOSE
# 90 "data/maps/Route8/scripts.pory"
	trainerbattle_no_intro TRAINER_HARVFROST, Route8_MusicVideo_Text_0
# 91 "data/maps/Route8/scripts.pory"
	special HealPlayerParty
# 92 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvAcceptedBattle, MSGBOX_AUTOCLOSE
	goto Route8_Harv_8


Route8_Katherine::
# 115 "data/maps/Route8/scripts.pory"
	lock
# 116 "data/maps/Route8/scripts.pory"
	faceplayer
# 117 "data/maps/Route8/scripts.pory"
	compare VAR_ROUTE8_MUSICVIDEO, 2
	goto_if_eq Route8_Katherine_2
# 121 "data/maps/Route8/scripts.pory"
	msgbox Route8_Katherine_Text_1
Route8_Katherine_1:
# 123 "data/maps/Route8/scripts.pory"
	release
	end

Route8_Katherine_2:
# 118 "data/maps/Route8/scripts.pory"
	msgbox Route8_Katherine_Text_0
	goto Route8_Katherine_1


Route8_Ella::
# 128 "data/maps/Route8/scripts.pory"
	lock
# 129 "data/maps/Route8/scripts.pory"
	faceplayer
# 130 "data/maps/Route8/scripts.pory"
	compare VAR_ROUTE8_MUSICVIDEO, 2
	goto_if_eq Route8_Ella_2
# 134 "data/maps/Route8/scripts.pory"
	msgbox Route8_Ella_Text_1
Route8_Ella_1:
# 136 "data/maps/Route8/scripts.pory"
	release
	end

Route8_Ella_2:
# 131 "data/maps/Route8/scripts.pory"
	msgbox Route8_Ella_Text_0
	goto Route8_Ella_1


# 140 "data/maps/Route8/scripts.pory"
Route8_ManRunAway1:
# 141 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 141 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 141 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 141 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 141 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 141 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 142 "data/maps/Route8/scripts.pory"
	walk_in_place_fast_right
# 142 "data/maps/Route8/scripts.pory"
	walk_in_place_fast_right
# 143 "data/maps/Route8/scripts.pory"
	step_end

# 146 "data/maps/Route8/scripts.pory"
Route8_PlayerMoveAside:
# 147 "data/maps/Route8/scripts.pory"
	face_left
# 148 "data/maps/Route8/scripts.pory"
	delay_16
# 149 "data/maps/Route8/scripts.pory"
	walk_up
# 150 "data/maps/Route8/scripts.pory"
	face_down
# 151 "data/maps/Route8/scripts.pory"
	step_end

# 154 "data/maps/Route8/scripts.pory"
Route8_ManRunAway2:
# 155 "data/maps/Route8/scripts.pory"
	walk_fast_right
# 156 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 156 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 156 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 156 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 156 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 156 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 157 "data/maps/Route8/scripts.pory"
	step_end

# 160 "data/maps/Route8/scripts.pory"
Route8_HarvNoticesPlayer:
# 161 "data/maps/Route8/scripts.pory"
	face_left
# 162 "data/maps/Route8/scripts.pory"
	emote_exclamation_mark
# 163 "data/maps/Route8/scripts.pory"
	delay_16
# 164 "data/maps/Route8/scripts.pory"
	walk_fast_left
# 164 "data/maps/Route8/scripts.pory"
	walk_fast_left
# 164 "data/maps/Route8/scripts.pory"
	walk_fast_left
# 164 "data/maps/Route8/scripts.pory"
	walk_fast_left
# 165 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 165 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 166 "data/maps/Route8/scripts.pory"
	step_end

# 169 "data/maps/Route8/scripts.pory"
Route8_HarvGoBackToInitial:
# 170 "data/maps/Route8/scripts.pory"
	walk_up
# 170 "data/maps/Route8/scripts.pory"
	walk_up
# 171 "data/maps/Route8/scripts.pory"
	walk_right
# 171 "data/maps/Route8/scripts.pory"
	walk_right
# 171 "data/maps/Route8/scripts.pory"
	walk_right
# 171 "data/maps/Route8/scripts.pory"
	walk_right
# 172 "data/maps/Route8/scripts.pory"
	face_up
# 173 "data/maps/Route8/scripts.pory"
	step_end

# 176 "data/maps/Route8/scripts.pory"
Route8_PlayerGetIntoPosition:
# 177 "data/maps/Route8/scripts.pory"
	walk_up
# 177 "data/maps/Route8/scripts.pory"
	walk_up
# 177 "data/maps/Route8/scripts.pory"
	walk_up
# 178 "data/maps/Route8/scripts.pory"
	walk_right
# 178 "data/maps/Route8/scripts.pory"
	walk_right
# 178 "data/maps/Route8/scripts.pory"
	walk_right
# 179 "data/maps/Route8/scripts.pory"
	walk_up
# 180 "data/maps/Route8/scripts.pory"
	step_end

Route8_Psychic::
# 252 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_CEDRIC, Route8_Psychic_Text_0, Route8_Psychic_Text_1
# 253 "data/maps/Route8/scripts.pory"
	msgbox Route8_Psychic_Text_2, MSGBOX_AUTOCLOSE
	return


Route8_DragonTamer::
# 257 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_AARON, Route8_DragonTamer_Text_0, Route8_DragonTamer_Text_1
# 258 "data/maps/Route8/scripts.pory"
	msgbox Route8_DragonTamer_Text_2, MSGBOX_AUTOCLOSE
	return


Route8_Camera1::
# 262 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_BECK, Route8_Camera1_Text_0, Route8_Camera1_Text_1
# 263 "data/maps/Route8/scripts.pory"
	msgbox Route8_Camera1_Text_2, MSGBOX_AUTOCLOSE
	return


Route8_Camera2::
# 267 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_LAO_1, Route8_Camera2_Text_0, Route8_Camera2_Text_1
# 268 "data/maps/Route8/scripts.pory"
	msgbox Route8_Camera2_Text_2, MSGBOX_AUTOCLOSE
	return


Route8_BirdKeeper::
# 272 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_ALBERTO, Route8_BirdKeeper_Text_0, Route8_BirdKeeper_Text_1
# 273 "data/maps/Route8/scripts.pory"
	msgbox Route8_BirdKeeper_Text_2, MSGBOX_AUTOCLOSE
	return


Route8_SchoolBoy::
# 277 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_TED, Route8_SchoolBoy_Text_0, Route8_SchoolBoy_Text_1
# 278 "data/maps/Route8/scripts.pory"
	msgbox Route8_SchoolBoy_Text_2, MSGBOX_AUTOCLOSE
	return


Route8_MusicVideo_Text_0:
# 43 "data/maps/Route8/scripts.pory"
	.string "Yes, that'll look great!$"

PictureParlourBattle_Text_0:
# 64 "data/maps/Route8/scripts.pory"
	.string "KATHERINE: Thanks for helping us out!\p"
	.string "ELLA: We definitely owe you one!$"

PictureParlourBattle_Text_1:
# 64 "data/maps/Route8/scripts.pory"
	.string "KATHERINE: What Lumiere had in mind was\n"
	.string "you!\p"
	.string "ELLA: Yeah, that was a real motion\n"
	.string "picture!$"

Route8_Harv_Text_0:
# 83 "data/maps/Route8/scripts.pory"
	.string "HARV FROST: Thank you so much for your\n"
	.string "help, you were fantastic!$"

Route8_Katherine_Text_0:
# 118 "data/maps/Route8/scripts.pory"
	.string "KATHERINE: Thanks again for joining us\n"
	.string "on such short notice!\p"
	.string "Maybe you should consider an acting\n"
	.string "career.$"

Route8_Katherine_Text_1:
# 121 "data/maps/Route8/scripts.pory"
	.string "KATHERINE: Are you here to help with\n"
	.string "the music video? If yes, you should go\l"
	.string "tell Harv you're ready to shoot.$"

Route8_Ella_Text_0:
# 131 "data/maps/Route8/scripts.pory"
	.string "ELLA: This might be our best music\n"
	.string "video yet, thanks to you. Good luck with\l"
	.string "whatever you're planning next!$"

Route8_Ella_Text_1:
# 134 "data/maps/Route8/scripts.pory"
	.string "ELLA: The actor who was supposed to\n"
	.string "shoot with us isn't available anymore…\p"
	.string "If you wanna help us out, go tell our\n"
	.string "director Harv, she'll tell you what to\l"
	.string "do.$"

Route8_Psychic_Text_0:
# 252 "data/maps/Route8/scripts.pory"
	.string "I'm gonna read your mind!$"

Route8_Psychic_Text_1:
# 252 "data/maps/Route8/scripts.pory"
	.string "Uh I still need practice…$"

Route8_Psychic_Text_2:
# 253 "data/maps/Route8/scripts.pory"
	.string "One day I'll be strong enough to read\n"
	.string "everyone's minds.$"

Route8_DragonTamer_Text_0:
# 257 "data/maps/Route8/scripts.pory"
	.string "Behold! My mighty dragons!$"

Route8_DragonTamer_Text_1:
# 257 "data/maps/Route8/scripts.pory"
	.string "My dragons!$"

Route8_DragonTamer_Text_2:
# 258 "data/maps/Route8/scripts.pory"
	.string "There are dragons in Portrait Town, I\n"
	.string "love going there.$"

Route8_Camera1_Text_0:
# 262 "data/maps/Route8/scripts.pory"
	.string "That camera is a bit heavy, I could use\n"
	.string "a break.$"

Route8_Camera1_Text_1:
# 262 "data/maps/Route8/scripts.pory"
	.string "Ah, break is over…$"

Route8_Camera1_Text_2:
# 263 "data/maps/Route8/scripts.pory"
	.string "Harv is a great director, I don't mind\n"
	.string "carrying that heavy camera when I'm\l"
	.string "working with her.$"

Route8_Camera2_Text_0:
# 267 "data/maps/Route8/scripts.pory"
	.string "Filming requires patience and precision.$"

Route8_Camera2_Text_1:
# 267 "data/maps/Route8/scripts.pory"
	.string "Mmh we'll need another take…$"

Route8_Camera2_Text_2:
# 268 "data/maps/Route8/scripts.pory"
	.string "I love working on music videos, I get to\n"
	.string "meet cool artists.$"

Route8_BirdKeeper_Text_0:
# 272 "data/maps/Route8/scripts.pory"
	.string "Look at me!\n"
	.string "I can fly like a bird!.$"

Route8_BirdKeeper_Text_1:
# 272 "data/maps/Route8/scripts.pory"
	.string "Ouch, landing is rough…$"

Route8_BirdKeeper_Text_2:
# 273 "data/maps/Route8/scripts.pory"
	.string "What I love most about Flying POKéMON\n"
	.string "is how free they are.\p"
	.string "I wish I could grow wings.$"

Route8_SchoolBoy_Text_0:
# 277 "data/maps/Route8/scripts.pory"
	.string "I'm the best of my class!$"

Route8_SchoolBoy_Text_1:
# 277 "data/maps/Route8/scripts.pory"
	.string "You're even better than me…$"

Route8_SchoolBoy_Text_2:
# 278 "data/maps/Route8/scripts.pory"
	.string "You're even stronger than I am, that\n"
	.string "means if you came to my school I'd be\l"
	.string "second best…$"

Route8_HarvAreYouTrainer::
# 183 "data/maps/Route8/scripts.pory"
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
# 198 "data/maps/Route8/scripts.pory"
	.string "Oh perfect, let's do a quick battle \n"
	.string "test so I get an idea of what you \l"
	.string "look like in battle.$"

Route8_HarvNotEnoughPkmn::
# 204 "data/maps/Route8/scripts.pory"
	.string "HARV FROST: Wait, you don't have \n"
	.string "enough POKéMON… \p"
	.string "It's a double battle so you'll need \l"
	.string "at least two. \p"
	.string "Come back when you have more than one \n"
	.string "POKéMON, we'll wait here.$"

Route8_HarvAcceptedBattle::
# 213 "data/maps/Route8/scripts.pory"
	.string "Perfect! \p"
	.string "Oh, what's your name?\p"
	.string "… … … \p"
	.string "Alright, {PLAYER} let's get you into \n"
	.string "position!$"

Route8_HarvRefusedBattle::
# 221 "data/maps/Route8/scripts.pory"
	.string "Oh… \p"
	.string "Hum, I hope I can find someone soon, \n"
	.string "then… \p"
	.string "Come back if you change your mind! $"

Route8_HarvAction::
# 228 "data/maps/Route8/scripts.pory"
	.string "HARV FROST: And… ACTION!$"

Route8_HarvPlayerCameBack::
# 232 "data/maps/Route8/scripts.pory"
	.string "HARV FROST: You came back! \p"
	.string "Are you ready to star in a Picture \n"
	.string "Parlour music video?$"

Route8_KatherinePostBattle::
# 238 "data/maps/Route8/scripts.pory"
	.string "KATHERINE: Woah that was great! \p"
	.string "Thanks for giving us a hand, you're \n"
	.string "really a lifesaver. \p"
	.string "Here's a little something for you, it's \n"
	.string "not much but I want you to have it.$"

Route8_EllaPostBattle::
# 246 "data/maps/Route8/scripts.pory"
	.string "ELLA: I also have a thank you gift. \p"
	.string "Hope we'll see you around!$"

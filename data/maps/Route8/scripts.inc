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
# 54 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvRefusedBattle, MSGBOX_AUTOCLOSE
# 55 "data/maps/Route8/scripts.pory"
	applymovement 5, Route8_HarvGoBackToInitial
# 56 "data/maps/Route8/scripts.pory"
	waitmovement 0
Route8_MusicVideo_1:
# 58 "data/maps/Route8/scripts.pory"
	setvar VAR_ROUTE8_MUSICVIDEO, 1
# 59 "data/maps/Route8/scripts.pory"
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
	applymovement OBJ_EVENT_ID_FOLLOWER, GetFollowerIntoPlace
# 49 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 50 "data/maps/Route8/scripts.pory"
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
# 64 "data/maps/Route8/scripts.pory"
	lockall
# 65 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvAction, MSGBOX_AUTOCLOSE
# 66 "data/maps/Route8/scripts.pory"
	trainerbattle_double TRAINER_PICTURE_PARLOUR, PictureParlourBattle_Text_0, PictureParlourBattle_Text_1, Route8_HarvNotEnoughPkmn, PostPictureParlourBattle
	return


PostPictureParlourBattle::
# 70 "data/maps/Route8/scripts.pory"
	setvar VAR_ROUTE8_MUSICVIDEO, 2
# 71 "data/maps/Route8/scripts.pory"
	applymovement 4, WalkInPlaceDown
# 72 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route8/scripts.pory"
	msgbox Route8_KatherinePostBattle
# 74 "data/maps/Route8/scripts.pory"
	giveitem ITEM_BLACK_GLASSES
# 75 "data/maps/Route8/scripts.pory"
	applymovement 3, WalkInPlaceDown
# 76 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 77 "data/maps/Route8/scripts.pory"
	msgbox Route8_EllaPostBattle
# 78 "data/maps/Route8/scripts.pory"
	giveitem ITEM_METRONOME
	return


Route8_Harv::
# 82 "data/maps/Route8/scripts.pory"
	lock
# 83 "data/maps/Route8/scripts.pory"
	faceplayer
# 84 "data/maps/Route8/scripts.pory"
	compare VAR_ROUTE8_MUSICVIDEO, 2
	goto_if_eq Route8_Harv_2
# 95 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvPlayerCameBack, MSGBOX_YESNO
# 96 "data/maps/Route8/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route8_Harv_8
# 116 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvRefusedBattle, MSGBOX_AUTOCLOSE
Route8_Harv_1:
# 119 "data/maps/Route8/scripts.pory"
	release
	end

Route8_Harv_2:
# 85 "data/maps/Route8/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_FLY, Route8_Harv_5
# 89 "data/maps/Route8/scripts.pory"
	msgbox Route8_Harv_Text_1
# 90 "data/maps/Route8/scripts.pory"
	giveitem ITEM_HM02
# 91 "data/maps/Route8/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLY
	goto Route8_Harv_1

Route8_Harv_5:
# 86 "data/maps/Route8/scripts.pory"
	msgbox Route8_Harv_Text_0
	goto Route8_Harv_1

Route8_Harv_8:
# 97 "data/maps/Route8/scripts.pory"
	compare VAR_ROUTE8_MUSICVIDEO, 1
	goto_if_eq Route8_Harv_12
Route8_Harv_11:
# 103 "data/maps/Route8/scripts.pory"
	fadescreen FADE_TO_BLACK
# 104 "data/maps/Route8/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 13, 24
# 105 "data/maps/Route8/scripts.pory"
	setobjectxy OBJ_EVENT_ID_FOLLOWER, 14, 24
# 106 "data/maps/Route8/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 107 "data/maps/Route8/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_FaceUp
# 108 "data/maps/Route8/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 109 "data/maps/Route8/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 110 "data/maps/Route8/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 111 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 112 "data/maps/Route8/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 113 "data/maps/Route8/scripts.pory"
	call PictureParlourBattle
	goto Route8_Harv_1

Route8_Harv_12:
# 98 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvBattleTest, MSGBOX_AUTOCLOSE
# 99 "data/maps/Route8/scripts.pory"
	trainerbattle_no_intro TRAINER_HARVFROST, Route8_MusicVideo_Text_0
# 100 "data/maps/Route8/scripts.pory"
	special HealPlayerParty
# 101 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvAcceptedBattle, MSGBOX_AUTOCLOSE
	goto Route8_Harv_11


Route8_Katherine::
# 124 "data/maps/Route8/scripts.pory"
	lock
# 125 "data/maps/Route8/scripts.pory"
	faceplayer
# 126 "data/maps/Route8/scripts.pory"
	compare VAR_ROUTE8_MUSICVIDEO, 2
	goto_if_eq Route8_Katherine_2
# 130 "data/maps/Route8/scripts.pory"
	msgbox Route8_Katherine_Text_1
Route8_Katherine_1:
# 132 "data/maps/Route8/scripts.pory"
	release
	end

Route8_Katherine_2:
# 127 "data/maps/Route8/scripts.pory"
	msgbox Route8_Katherine_Text_0
	goto Route8_Katherine_1


Route8_Ella::
# 137 "data/maps/Route8/scripts.pory"
	lock
# 138 "data/maps/Route8/scripts.pory"
	faceplayer
# 139 "data/maps/Route8/scripts.pory"
	compare VAR_ROUTE8_MUSICVIDEO, 2
	goto_if_eq Route8_Ella_2
# 143 "data/maps/Route8/scripts.pory"
	msgbox Route8_Ella_Text_1
Route8_Ella_1:
# 145 "data/maps/Route8/scripts.pory"
	release
	end

Route8_Ella_2:
# 140 "data/maps/Route8/scripts.pory"
	msgbox Route8_Ella_Text_0
	goto Route8_Ella_1


# 149 "data/maps/Route8/scripts.pory"
GetFollowerIntoPlace:
# 150 "data/maps/Route8/scripts.pory"
	walk_up
# 151 "data/maps/Route8/scripts.pory"
	walk_right
# 152 "data/maps/Route8/scripts.pory"
	face_up
# 153 "data/maps/Route8/scripts.pory"
	step_end

# 156 "data/maps/Route8/scripts.pory"
Route8_ManRunAway1:
# 157 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 157 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 157 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 157 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 157 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 157 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 158 "data/maps/Route8/scripts.pory"
	walk_in_place_fast_right
# 158 "data/maps/Route8/scripts.pory"
	walk_in_place_fast_right
# 159 "data/maps/Route8/scripts.pory"
	step_end

# 162 "data/maps/Route8/scripts.pory"
Route8_PlayerMoveAside:
# 163 "data/maps/Route8/scripts.pory"
	face_left
# 164 "data/maps/Route8/scripts.pory"
	delay_16
# 165 "data/maps/Route8/scripts.pory"
	walk_up
# 166 "data/maps/Route8/scripts.pory"
	face_down
# 167 "data/maps/Route8/scripts.pory"
	step_end

# 170 "data/maps/Route8/scripts.pory"
Route8_ManRunAway2:
# 171 "data/maps/Route8/scripts.pory"
	walk_fast_right
# 172 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 172 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 172 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 172 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 172 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 172 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 173 "data/maps/Route8/scripts.pory"
	step_end

# 176 "data/maps/Route8/scripts.pory"
Route8_HarvNoticesPlayer:
# 177 "data/maps/Route8/scripts.pory"
	face_left
# 178 "data/maps/Route8/scripts.pory"
	emote_exclamation_mark
# 179 "data/maps/Route8/scripts.pory"
	delay_16
# 180 "data/maps/Route8/scripts.pory"
	walk_fast_left
# 180 "data/maps/Route8/scripts.pory"
	walk_fast_left
# 180 "data/maps/Route8/scripts.pory"
	walk_fast_left
# 180 "data/maps/Route8/scripts.pory"
	walk_fast_left
# 181 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 181 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 182 "data/maps/Route8/scripts.pory"
	step_end

# 185 "data/maps/Route8/scripts.pory"
Route8_HarvGoBackToInitial:
# 186 "data/maps/Route8/scripts.pory"
	walk_up
# 186 "data/maps/Route8/scripts.pory"
	walk_up
# 187 "data/maps/Route8/scripts.pory"
	walk_right
# 187 "data/maps/Route8/scripts.pory"
	walk_right
# 187 "data/maps/Route8/scripts.pory"
	walk_right
# 187 "data/maps/Route8/scripts.pory"
	walk_right
# 188 "data/maps/Route8/scripts.pory"
	face_up
# 189 "data/maps/Route8/scripts.pory"
	step_end

# 192 "data/maps/Route8/scripts.pory"
Route8_PlayerGetIntoPosition:
# 193 "data/maps/Route8/scripts.pory"
	walk_up
# 193 "data/maps/Route8/scripts.pory"
	walk_up
# 193 "data/maps/Route8/scripts.pory"
	walk_up
# 194 "data/maps/Route8/scripts.pory"
	walk_right
# 194 "data/maps/Route8/scripts.pory"
	walk_right
# 194 "data/maps/Route8/scripts.pory"
	walk_right
# 195 "data/maps/Route8/scripts.pory"
	walk_up
# 196 "data/maps/Route8/scripts.pory"
	step_end

Route8_Psychic::
# 268 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_CEDRIC, Route8_Psychic_Text_0, Route8_Psychic_Text_1
# 269 "data/maps/Route8/scripts.pory"
	msgbox Route8_Psychic_Text_2, MSGBOX_AUTOCLOSE
	return


Route8_DragonTamer::
# 273 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_AARON, Route8_DragonTamer_Text_0, Route8_DragonTamer_Text_1
# 274 "data/maps/Route8/scripts.pory"
	msgbox Route8_DragonTamer_Text_2, MSGBOX_AUTOCLOSE
	return


Route8_Camera1::
# 278 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_BECK, Route8_Camera1_Text_0, Route8_Camera1_Text_1
# 279 "data/maps/Route8/scripts.pory"
	msgbox Route8_Camera1_Text_2, MSGBOX_AUTOCLOSE
	return


Route8_Camera2::
# 283 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_LAO_1, Route8_Camera2_Text_0, Route8_Camera2_Text_1
# 284 "data/maps/Route8/scripts.pory"
	msgbox Route8_Camera2_Text_2, MSGBOX_AUTOCLOSE
	return


Route8_BirdKeeper::
# 288 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_ALBERTO, Route8_BirdKeeper_Text_0, Route8_BirdKeeper_Text_1
# 289 "data/maps/Route8/scripts.pory"
	msgbox Route8_BirdKeeper_Text_2, MSGBOX_AUTOCLOSE
	return


Route8_SchoolBoy::
# 293 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_TED, Route8_SchoolBoy_Text_0, Route8_SchoolBoy_Text_1
# 294 "data/maps/Route8/scripts.pory"
	msgbox Route8_SchoolBoy_Text_2, MSGBOX_AUTOCLOSE
	return


Route8_MusicVideo_Text_0:
# 43 "data/maps/Route8/scripts.pory"
	.string "Yes, that'll look great!$"

PictureParlourBattle_Text_0:
# 66 "data/maps/Route8/scripts.pory"
	.string "KATHERINE: Thanks for helping us out!\p"
	.string "ELLA: We definitely owe you one!$"

PictureParlourBattle_Text_1:
# 66 "data/maps/Route8/scripts.pory"
	.string "KATHERINE: What Lumiere had in mind was\n"
	.string "you!\p"
	.string "ELLA: Yeah, that was a real motion\n"
	.string "picture!$"

Route8_Harv_Text_0:
# 86 "data/maps/Route8/scripts.pory"
	.string "HARV FROST: Thank you so much for your\n"
	.string "help, you were fantastic!$"

Route8_Harv_Text_1:
# 89 "data/maps/Route8/scripts.pory"
	.string "HARV FROST: Thank you so much for your\n"
	.string "help, you were fantastic!\p"
	.string "Here, have this as payment for your\n"
	.string "efforts.$"

Route8_Katherine_Text_0:
# 127 "data/maps/Route8/scripts.pory"
	.string "KATHERINE: Thanks again for joining us\n"
	.string "on such short notice!\p"
	.string "Maybe you should consider an acting\n"
	.string "career.$"

Route8_Katherine_Text_1:
# 130 "data/maps/Route8/scripts.pory"
	.string "KATHERINE: Are you here to help with\n"
	.string "the music video? If yes, you should go\l"
	.string "tell Harv you're ready to shoot.$"

Route8_Ella_Text_0:
# 140 "data/maps/Route8/scripts.pory"
	.string "ELLA: This might be our best music\n"
	.string "video yet, thanks to you. Good luck with\l"
	.string "whatever you're planning next!$"

Route8_Ella_Text_1:
# 143 "data/maps/Route8/scripts.pory"
	.string "ELLA: The actor who was supposed to\n"
	.string "shoot with us isn't available anymore…\p"
	.string "If you wanna help us out, go tell our\n"
	.string "director Harv, she'll tell you what to\l"
	.string "do.$"

Route8_Psychic_Text_0:
# 268 "data/maps/Route8/scripts.pory"
	.string "I'm gonna read your mind!$"

Route8_Psychic_Text_1:
# 268 "data/maps/Route8/scripts.pory"
	.string "Uh I still need practice…$"

Route8_Psychic_Text_2:
# 269 "data/maps/Route8/scripts.pory"
	.string "One day I'll be strong enough to read\n"
	.string "everyone's minds.$"

Route8_DragonTamer_Text_0:
# 273 "data/maps/Route8/scripts.pory"
	.string "Behold! My mighty dragons!$"

Route8_DragonTamer_Text_1:
# 273 "data/maps/Route8/scripts.pory"
	.string "My dragons!$"

Route8_DragonTamer_Text_2:
# 274 "data/maps/Route8/scripts.pory"
	.string "There are dragons in Portrait Town, I\n"
	.string "love going there.$"

Route8_Camera1_Text_0:
# 278 "data/maps/Route8/scripts.pory"
	.string "That camera is a bit heavy, I could use\n"
	.string "a break.$"

Route8_Camera1_Text_1:
# 278 "data/maps/Route8/scripts.pory"
	.string "Ah, break is over…$"

Route8_Camera1_Text_2:
# 279 "data/maps/Route8/scripts.pory"
	.string "Harv is a great director, I don't mind\n"
	.string "carrying that heavy camera when I'm\l"
	.string "working with her.$"

Route8_Camera2_Text_0:
# 283 "data/maps/Route8/scripts.pory"
	.string "Filming requires patience and precision.$"

Route8_Camera2_Text_1:
# 283 "data/maps/Route8/scripts.pory"
	.string "Mmh we'll need another take…$"

Route8_Camera2_Text_2:
# 284 "data/maps/Route8/scripts.pory"
	.string "I love working on music videos, I get to\n"
	.string "meet cool artists.$"

Route8_BirdKeeper_Text_0:
# 288 "data/maps/Route8/scripts.pory"
	.string "Look at me!\n"
	.string "I can fly like a bird!.$"

Route8_BirdKeeper_Text_1:
# 288 "data/maps/Route8/scripts.pory"
	.string "Ouch, landing is rough…$"

Route8_BirdKeeper_Text_2:
# 289 "data/maps/Route8/scripts.pory"
	.string "What I love most about Flying POKéMON\n"
	.string "is how free they are.\p"
	.string "I wish I could grow wings.$"

Route8_SchoolBoy_Text_0:
# 293 "data/maps/Route8/scripts.pory"
	.string "I'm the best of my class!$"

Route8_SchoolBoy_Text_1:
# 293 "data/maps/Route8/scripts.pory"
	.string "You're even better than me…$"

Route8_SchoolBoy_Text_2:
# 294 "data/maps/Route8/scripts.pory"
	.string "You're even stronger than I am, that\n"
	.string "means if you came to my school I'd be\l"
	.string "second best…$"

Route8_HarvAreYouTrainer::
# 199 "data/maps/Route8/scripts.pory"
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
# 214 "data/maps/Route8/scripts.pory"
	.string "Oh perfect, let's do a quick battle \n"
	.string "test so I get an idea of what you \l"
	.string "look like in battle.$"

Route8_HarvNotEnoughPkmn::
# 220 "data/maps/Route8/scripts.pory"
	.string "HARV FROST: Wait, you don't have \n"
	.string "enough POKéMON… \p"
	.string "It's a double battle so you'll need \l"
	.string "at least two. \p"
	.string "Come back when you have more than one \n"
	.string "POKéMON, we'll wait here.$"

Route8_HarvAcceptedBattle::
# 229 "data/maps/Route8/scripts.pory"
	.string "Perfect! \p"
	.string "Oh, what's your name?\p"
	.string "… … … \p"
	.string "Alright, {PLAYER} let's get you into \n"
	.string "position!$"

Route8_HarvRefusedBattle::
# 237 "data/maps/Route8/scripts.pory"
	.string "Oh… \p"
	.string "Hum, I hope I can find someone soon, \n"
	.string "then… \p"
	.string "Come back if you change your mind! $"

Route8_HarvAction::
# 244 "data/maps/Route8/scripts.pory"
	.string "HARV FROST: And… ACTION!$"

Route8_HarvPlayerCameBack::
# 248 "data/maps/Route8/scripts.pory"
	.string "HARV FROST: You came back! \p"
	.string "Are you ready to star in a Picture \n"
	.string "Parlour music video?$"

Route8_KatherinePostBattle::
# 254 "data/maps/Route8/scripts.pory"
	.string "KATHERINE: Woah that was great! \p"
	.string "Thanks for giving us a hand, you're \n"
	.string "really a lifesaver. \p"
	.string "Here's a little something for you, it's \n"
	.string "not much but I want you to have it.$"

Route8_EllaPostBattle::
# 262 "data/maps/Route8/scripts.pory"
	.string "ELLA: I also have a thank you gift. \p"
	.string "Hope we'll see you around!$"

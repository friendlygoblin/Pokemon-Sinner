Route8_MapScripts::
	.byte 0


Route8_Bag::
# 11 "data/maps/Route8/scripts.pory"
	lock
# 12 "data/maps/Route8/scripts.pory"
	msgbox Route8_Bag_Text_0
# 13 "data/maps/Route8/scripts.pory"
	release
	end


Route8_MusicVideo::
# 18 "data/maps/Route8/scripts.pory"
	lock
# 21 "data/maps/Route8/scripts.pory"
	applymovement 6, Route8_ManRunAway1
# 22 "data/maps/Route8/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 23 "data/maps/Route8/scripts.pory"
	waitmovement 6
# 24 "data/maps/Route8/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route8_PlayerMoveAside
# 25 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 26 "data/maps/Route8/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 27 "data/maps/Route8/scripts.pory"
	applymovement 6, Route8_ManRunAway2
# 28 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 29 "data/maps/Route8/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 30 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 31 "data/maps/Route8/scripts.pory"
	delay 20
# 32 "data/maps/Route8/scripts.pory"
	removeobject 6
# 33 "data/maps/Route8/scripts.pory"
	setflag FLAG_ROUTE8_ACTOR
# 36 "data/maps/Route8/scripts.pory"
	applymovement 5, Route8_HarvNoticesPlayer
# 37 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 38 "data/maps/Route8/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 39 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvAreYouTrainer, MSGBOX_YESNO
# 41 "data/maps/Route8/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route8_MusicVideo_2
# 61 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvRefusedBattle, MSGBOX_AUTOCLOSE
# 62 "data/maps/Route8/scripts.pory"
	applymovement 5, Route8_HarvGoBackToInitial
# 63 "data/maps/Route8/scripts.pory"
	waitmovement 0
Route8_MusicVideo_1:
# 65 "data/maps/Route8/scripts.pory"
	setvar VAR_ROUTE8_MUSICVIDEO, 1
# 66 "data/maps/Route8/scripts.pory"
	releaseall
	end

Route8_MusicVideo_2:
# 42 "data/maps/Route8/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 43 "data/maps/Route8/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route8_MusicVideo_5
# 49 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvBattleTest, MSGBOX_AUTOCLOSE
# 50 "data/maps/Route8/scripts.pory"
	trainerbattle_no_intro TRAINER_HARVFROST, Route8_MusicVideo_Text_0
# 51 "data/maps/Route8/scripts.pory"
	special HealPlayerParty
# 52 "data/maps/Route8/scripts.pory"
	applymovement 5, Route8_HarvGoBackToInitial
# 53 "data/maps/Route8/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route8_PlayerGetIntoPosition
# 54 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route8/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, GetFollowerIntoPlace
# 56 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route8/scripts.pory"
	call PictureParlourBattle
	goto Route8_MusicVideo_1

Route8_MusicVideo_5:
# 44 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvNotEnoughPkmn, MSGBOX_AUTOCLOSE
# 45 "data/maps/Route8/scripts.pory"
	applymovement 5, Route8_HarvGoBackToInitial
# 46 "data/maps/Route8/scripts.pory"
	waitmovement 0
	goto Route8_MusicVideo_1


PictureParlourBattle::
# 71 "data/maps/Route8/scripts.pory"
	lockall
# 72 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvAction, MSGBOX_AUTOCLOSE
# 73 "data/maps/Route8/scripts.pory"
	trainerbattle_double TRAINER_PICTURE_PARLOUR, PictureParlourBattle_Text_0, PictureParlourBattle_Text_1, Route8_HarvNotEnoughPkmn, PostPictureParlourBattle
# 74 "data/maps/Route8/scripts.pory"
	removeobject 12
# 75 "data/maps/Route8/scripts.pory"
	setflag FLAG_ROUTE8_BAG
	return


PostPictureParlourBattle::
# 79 "data/maps/Route8/scripts.pory"
	setvar VAR_ROUTE8_MUSICVIDEO, 2
# 80 "data/maps/Route8/scripts.pory"
	applymovement 4, WalkInPlaceDown
# 81 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 82 "data/maps/Route8/scripts.pory"
	msgbox Route8_KatherinePostBattle
# 83 "data/maps/Route8/scripts.pory"
	giveitem ITEM_BLACK_GLASSES
# 84 "data/maps/Route8/scripts.pory"
	applymovement 3, WalkInPlaceDown
# 85 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 86 "data/maps/Route8/scripts.pory"
	msgbox Route8_EllaPostBattle
# 87 "data/maps/Route8/scripts.pory"
	giveitem ITEM_METRONOME
	return


Route8_Harv::
# 91 "data/maps/Route8/scripts.pory"
	lock
# 92 "data/maps/Route8/scripts.pory"
	faceplayer
# 93 "data/maps/Route8/scripts.pory"
	compare VAR_ROUTE8_MUSICVIDEO, 2
	goto_if_eq Route8_Harv_2
# 104 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvPlayerCameBack, MSGBOX_YESNO
# 105 "data/maps/Route8/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route8_Harv_8
# 125 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvRefusedBattle, MSGBOX_AUTOCLOSE
Route8_Harv_1:
# 128 "data/maps/Route8/scripts.pory"
	release
	end

Route8_Harv_2:
# 94 "data/maps/Route8/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_FLY, Route8_Harv_5
# 98 "data/maps/Route8/scripts.pory"
	msgbox Route8_Harv_Text_1
# 99 "data/maps/Route8/scripts.pory"
	giveitem ITEM_HM02
# 100 "data/maps/Route8/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLY
	goto Route8_Harv_1

Route8_Harv_5:
# 95 "data/maps/Route8/scripts.pory"
	msgbox Route8_Harv_Text_0
	goto Route8_Harv_1

Route8_Harv_8:
# 106 "data/maps/Route8/scripts.pory"
	compare VAR_ROUTE8_MUSICVIDEO, 1
	goto_if_eq Route8_Harv_12
Route8_Harv_11:
# 112 "data/maps/Route8/scripts.pory"
	fadescreen FADE_TO_BLACK
# 113 "data/maps/Route8/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 13, 24
# 114 "data/maps/Route8/scripts.pory"
	setobjectxy OBJ_EVENT_ID_FOLLOWER, 14, 24
# 115 "data/maps/Route8/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 116 "data/maps/Route8/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_FaceUp
# 117 "data/maps/Route8/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 118 "data/maps/Route8/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 119 "data/maps/Route8/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 120 "data/maps/Route8/scripts.pory"
	waitmovement 0
# 121 "data/maps/Route8/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 122 "data/maps/Route8/scripts.pory"
	call PictureParlourBattle
	goto Route8_Harv_1

Route8_Harv_12:
# 107 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvBattleTest, MSGBOX_AUTOCLOSE
# 108 "data/maps/Route8/scripts.pory"
	trainerbattle_no_intro TRAINER_HARVFROST, Route8_MusicVideo_Text_0
# 109 "data/maps/Route8/scripts.pory"
	special HealPlayerParty
# 110 "data/maps/Route8/scripts.pory"
	msgbox Route8_HarvAcceptedBattle, MSGBOX_AUTOCLOSE
	goto Route8_Harv_11


Route8_Katherine::
# 133 "data/maps/Route8/scripts.pory"
	lock
# 134 "data/maps/Route8/scripts.pory"
	faceplayer
# 135 "data/maps/Route8/scripts.pory"
	compare VAR_ROUTE8_MUSICVIDEO, 2
	goto_if_eq Route8_Katherine_2
# 139 "data/maps/Route8/scripts.pory"
	msgbox Route8_Katherine_Text_1
Route8_Katherine_1:
# 141 "data/maps/Route8/scripts.pory"
	release
	end

Route8_Katherine_2:
# 136 "data/maps/Route8/scripts.pory"
	msgbox Route8_Katherine_Text_0
	goto Route8_Katherine_1


Route8_Ella::
# 146 "data/maps/Route8/scripts.pory"
	lock
# 147 "data/maps/Route8/scripts.pory"
	faceplayer
# 148 "data/maps/Route8/scripts.pory"
	compare VAR_ROUTE8_MUSICVIDEO, 2
	goto_if_eq Route8_Ella_2
# 152 "data/maps/Route8/scripts.pory"
	msgbox Route8_Ella_Text_1
Route8_Ella_1:
# 154 "data/maps/Route8/scripts.pory"
	release
	end

Route8_Ella_2:
# 149 "data/maps/Route8/scripts.pory"
	msgbox Route8_Ella_Text_0
	goto Route8_Ella_1


# 158 "data/maps/Route8/scripts.pory"
GetFollowerIntoPlace:
# 159 "data/maps/Route8/scripts.pory"
	walk_up
# 160 "data/maps/Route8/scripts.pory"
	walk_right
# 161 "data/maps/Route8/scripts.pory"
	face_up
# 162 "data/maps/Route8/scripts.pory"
	step_end

# 165 "data/maps/Route8/scripts.pory"
Route8_ManRunAway1:
# 166 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 166 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 166 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 166 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 166 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 166 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 167 "data/maps/Route8/scripts.pory"
	walk_in_place_fast_right
# 167 "data/maps/Route8/scripts.pory"
	walk_in_place_fast_right
# 168 "data/maps/Route8/scripts.pory"
	step_end

# 171 "data/maps/Route8/scripts.pory"
Route8_PlayerMoveAside:
# 172 "data/maps/Route8/scripts.pory"
	face_left
# 173 "data/maps/Route8/scripts.pory"
	delay_16
# 174 "data/maps/Route8/scripts.pory"
	walk_up
# 175 "data/maps/Route8/scripts.pory"
	face_down
# 176 "data/maps/Route8/scripts.pory"
	step_end

# 179 "data/maps/Route8/scripts.pory"
Route8_ManRunAway2:
# 180 "data/maps/Route8/scripts.pory"
	walk_fast_right
# 181 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 181 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 181 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 181 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 181 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 181 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 182 "data/maps/Route8/scripts.pory"
	step_end

# 185 "data/maps/Route8/scripts.pory"
Route8_HarvNoticesPlayer:
# 186 "data/maps/Route8/scripts.pory"
	face_left
# 187 "data/maps/Route8/scripts.pory"
	emote_exclamation_mark
# 188 "data/maps/Route8/scripts.pory"
	delay_16
# 189 "data/maps/Route8/scripts.pory"
	walk_fast_left
# 189 "data/maps/Route8/scripts.pory"
	walk_fast_left
# 189 "data/maps/Route8/scripts.pory"
	walk_fast_left
# 189 "data/maps/Route8/scripts.pory"
	walk_fast_left
# 190 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 190 "data/maps/Route8/scripts.pory"
	walk_fast_down
# 191 "data/maps/Route8/scripts.pory"
	step_end

# 194 "data/maps/Route8/scripts.pory"
Route8_HarvGoBackToInitial:
# 195 "data/maps/Route8/scripts.pory"
	walk_up
# 195 "data/maps/Route8/scripts.pory"
	walk_up
# 196 "data/maps/Route8/scripts.pory"
	walk_right
# 196 "data/maps/Route8/scripts.pory"
	walk_right
# 196 "data/maps/Route8/scripts.pory"
	walk_right
# 196 "data/maps/Route8/scripts.pory"
	walk_right
# 197 "data/maps/Route8/scripts.pory"
	face_up
# 198 "data/maps/Route8/scripts.pory"
	step_end

# 201 "data/maps/Route8/scripts.pory"
Route8_PlayerGetIntoPosition:
# 202 "data/maps/Route8/scripts.pory"
	walk_up
# 202 "data/maps/Route8/scripts.pory"
	walk_up
# 202 "data/maps/Route8/scripts.pory"
	walk_up
# 203 "data/maps/Route8/scripts.pory"
	walk_right
# 203 "data/maps/Route8/scripts.pory"
	walk_right
# 203 "data/maps/Route8/scripts.pory"
	walk_right
# 204 "data/maps/Route8/scripts.pory"
	walk_up
# 205 "data/maps/Route8/scripts.pory"
	step_end

Route8_Psychic::
# 277 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_CEDRIC, Route8_Psychic_Text_0, Route8_Psychic_Text_1
# 278 "data/maps/Route8/scripts.pory"
	msgbox Route8_Psychic_Text_2, MSGBOX_AUTOCLOSE
	return


Route8_DragonTamer::
# 282 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_AARON, Route8_DragonTamer_Text_0, Route8_DragonTamer_Text_1
# 283 "data/maps/Route8/scripts.pory"
	msgbox Route8_DragonTamer_Text_2, MSGBOX_AUTOCLOSE
	return


Route8_Camera1::
# 287 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_BECK, Route8_Camera1_Text_0, Route8_Camera1_Text_1
# 288 "data/maps/Route8/scripts.pory"
	msgbox Route8_Camera1_Text_2, MSGBOX_AUTOCLOSE
	return


Route8_Camera2::
# 292 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_LAO_1, Route8_Camera2_Text_0, Route8_Camera2_Text_1
# 293 "data/maps/Route8/scripts.pory"
	msgbox Route8_Camera2_Text_2, MSGBOX_AUTOCLOSE
	return


Route8_BirdKeeper::
# 297 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_ALBERTO, Route8_BirdKeeper_Text_0, Route8_BirdKeeper_Text_1
# 298 "data/maps/Route8/scripts.pory"
	msgbox Route8_BirdKeeper_Text_2, MSGBOX_AUTOCLOSE
	return


Route8_SchoolBoy::
# 302 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_TED, Route8_SchoolBoy_Text_0, Route8_SchoolBoy_Text_1
# 303 "data/maps/Route8/scripts.pory"
	msgbox Route8_SchoolBoy_Text_2, MSGBOX_AUTOCLOSE
	return


Route8_Bag_Text_0:
# 12 "data/maps/Route8/scripts.pory"
	.string "The bag is full of filming supplies.$"

Route8_MusicVideo_Text_0:
# 50 "data/maps/Route8/scripts.pory"
	.string "Yes, that'll look great!$"

PictureParlourBattle_Text_0:
# 73 "data/maps/Route8/scripts.pory"
	.string "KATHERINE: Thanks for helping us out!\p"
	.string "ELLA: We definitely owe you one!$"

PictureParlourBattle_Text_1:
# 73 "data/maps/Route8/scripts.pory"
	.string "KATHERINE: What Lumiere had in mind was\n"
	.string "you!\p"
	.string "ELLA: Yeah, that was a real motion\n"
	.string "picture!$"

Route8_Harv_Text_0:
# 95 "data/maps/Route8/scripts.pory"
	.string "HARV FROST: Thank you so much for your\n"
	.string "help, you were fantastic!$"

Route8_Harv_Text_1:
# 98 "data/maps/Route8/scripts.pory"
	.string "HARV FROST: Thank you so much for your\n"
	.string "help, you were fantastic!\p"
	.string "Here, have this as payment for your\n"
	.string "efforts.$"

Route8_Katherine_Text_0:
# 136 "data/maps/Route8/scripts.pory"
	.string "KATHERINE: Thanks again for joining us\n"
	.string "on such short notice!\p"
	.string "Maybe you should consider an acting\n"
	.string "career.$"

Route8_Katherine_Text_1:
# 139 "data/maps/Route8/scripts.pory"
	.string "KATHERINE: Are you here to help with\n"
	.string "the music video? If yes, you should go\l"
	.string "tell Harv you're ready to shoot.$"

Route8_Ella_Text_0:
# 149 "data/maps/Route8/scripts.pory"
	.string "ELLA: This might be our best music\n"
	.string "video yet, thanks to you. Good luck with\l"
	.string "whatever you're planning next!$"

Route8_Ella_Text_1:
# 152 "data/maps/Route8/scripts.pory"
	.string "ELLA: The actor who was supposed to\n"
	.string "shoot with us isn't available anymore…\p"
	.string "If you wanna help us out, go tell our\n"
	.string "director Harv, she'll tell you what to\l"
	.string "do.$"

Route8_Psychic_Text_0:
# 277 "data/maps/Route8/scripts.pory"
	.string "I'm gonna read your mind!$"

Route8_Psychic_Text_1:
# 277 "data/maps/Route8/scripts.pory"
	.string "Uh I still need practice…$"

Route8_Psychic_Text_2:
# 278 "data/maps/Route8/scripts.pory"
	.string "One day I'll be strong enough to read\n"
	.string "everyone's minds.$"

Route8_DragonTamer_Text_0:
# 282 "data/maps/Route8/scripts.pory"
	.string "Behold! My mighty dragons!$"

Route8_DragonTamer_Text_1:
# 282 "data/maps/Route8/scripts.pory"
	.string "My dragons!$"

Route8_DragonTamer_Text_2:
# 283 "data/maps/Route8/scripts.pory"
	.string "There are dragons in Portrait Town, I\n"
	.string "love going there.$"

Route8_Camera1_Text_0:
# 287 "data/maps/Route8/scripts.pory"
	.string "That camera is a bit heavy, I could use\n"
	.string "a break.$"

Route8_Camera1_Text_1:
# 287 "data/maps/Route8/scripts.pory"
	.string "Ah, break is over…$"

Route8_Camera1_Text_2:
# 288 "data/maps/Route8/scripts.pory"
	.string "Harv is a great director, I don't mind\n"
	.string "carrying that heavy camera when I'm\l"
	.string "working with her.$"

Route8_Camera2_Text_0:
# 292 "data/maps/Route8/scripts.pory"
	.string "Filming requires patience and precision.$"

Route8_Camera2_Text_1:
# 292 "data/maps/Route8/scripts.pory"
	.string "Mmh we'll need another take…$"

Route8_Camera2_Text_2:
# 293 "data/maps/Route8/scripts.pory"
	.string "I love working on music videos, I get to\n"
	.string "meet cool artists.$"

Route8_BirdKeeper_Text_0:
# 297 "data/maps/Route8/scripts.pory"
	.string "Look at me!\n"
	.string "I can fly like a bird!.$"

Route8_BirdKeeper_Text_1:
# 297 "data/maps/Route8/scripts.pory"
	.string "Ouch, landing is rough…$"

Route8_BirdKeeper_Text_2:
# 298 "data/maps/Route8/scripts.pory"
	.string "What I love most about Flying POKéMON\n"
	.string "is how free they are.\p"
	.string "I wish I could grow wings.$"

Route8_SchoolBoy_Text_0:
# 302 "data/maps/Route8/scripts.pory"
	.string "I'm the best of my class!$"

Route8_SchoolBoy_Text_1:
# 302 "data/maps/Route8/scripts.pory"
	.string "You're even better than me…$"

Route8_SchoolBoy_Text_2:
# 303 "data/maps/Route8/scripts.pory"
	.string "You're even stronger than I am, that\n"
	.string "means if you came to my school I'd be\l"
	.string "second best…$"

Route8_HarvAreYouTrainer::
# 208 "data/maps/Route8/scripts.pory"
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
# 223 "data/maps/Route8/scripts.pory"
	.string "Oh perfect, let's do a quick battle \n"
	.string "test so I get an idea of what you \l"
	.string "look like in battle.$"

Route8_HarvNotEnoughPkmn::
# 229 "data/maps/Route8/scripts.pory"
	.string "HARV FROST: Wait, you don't have \n"
	.string "enough POKéMON… \p"
	.string "It's a double battle so you'll need \l"
	.string "at least two. \p"
	.string "Come back when you have more than one \n"
	.string "POKéMON, we'll wait here.$"

Route8_HarvAcceptedBattle::
# 238 "data/maps/Route8/scripts.pory"
	.string "Perfect! \p"
	.string "Oh, what's your name?\p"
	.string "… … … \p"
	.string "Alright, {PLAYER} let's get you into \n"
	.string "position!$"

Route8_HarvRefusedBattle::
# 246 "data/maps/Route8/scripts.pory"
	.string "Oh… \p"
	.string "Hum, I hope I can find someone soon, \n"
	.string "then… \p"
	.string "Come back if you change your mind! $"

Route8_HarvAction::
# 253 "data/maps/Route8/scripts.pory"
	.string "HARV FROST: And… ACTION!$"

Route8_HarvPlayerCameBack::
# 257 "data/maps/Route8/scripts.pory"
	.string "HARV FROST: You came back! \p"
	.string "Are you ready to star in a Picture \n"
	.string "Parlour music video?$"

Route8_KatherinePostBattle::
# 263 "data/maps/Route8/scripts.pory"
	.string "KATHERINE: Woah that was great! \p"
	.string "Thanks for giving us a hand, you're \n"
	.string "really a lifesaver. \p"
	.string "Here's a little something for you, it's \n"
	.string "not much but I want you to have it.$"

Route8_EllaPostBattle::
# 271 "data/maps/Route8/scripts.pory"
	.string "ELLA: I also have a thank you gift. \p"
	.string "Hope we'll see you around!$"

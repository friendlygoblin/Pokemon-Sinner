ConcertHall_MapScripts::
	.byte 0

IntroNPC1_EventScript_ConcertHall::
	lock
	applymovement 3, Common_Movement_FacePlayer
	msgbox Intro
	release
	end


faceup:
	face_up
	step_end

IntroSign_ConcertHall::
	lock
	msgbox IntroSign
	release
	end


IntroNPC2_EventScript_ConcertHall::
	lock
	applymovement 5, Common_Movement_FacePlayer
	msgbox IntroChild
	applymovement 5, lookup
	waitmovement 0
	release
	end


IntroNPC3_EventScript_ConcertHall::
	lock
	applymovement 6, Common_Movement_FacePlayer
	msgbox IntroAdult
	applymovement 6, lookup
	waitmovement 0
	release
	end


IntroNPC4_EventScript_ConcertHall::
	lock
	compare VAR_EVER_GRANDE_CITY_STATE, 0
	goto_if_eq IntroNPC4_EventScript_ConcertHall_2
IntroNPC4_EventScript_ConcertHall_1:
	applymovement 4, Common_Movement_FacePlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, playerFace
	waitmovement 0
	compare VAR_EVER_GRANDE_CITY_STATE, 0
	goto_if_eq IntroNPC4_EventScript_ConcertHall_5
	applymovement 4, Common_Movement_FacePlayer
	waitmovement 0
	msgbox OutroFront
IntroNPC4_EventScript_ConcertHall_4:
	release
	end

IntroNPC4_EventScript_ConcertHall_2:
	applymovement 4, emote
	playse SE_PIN
	waitse
	waitmovement 0
	goto IntroNPC4_EventScript_ConcertHall_1

IntroNPC4_EventScript_ConcertHall_5:
	msgbox IntroFront
	applymovement 4, moveaway
	waitmovement 0
	setvar VAR_EVER_GRANDE_CITY_STATE, 1
	goto IntroNPC4_EventScript_ConcertHall_4


playerFace:
	face_left
	step_end

emote:
	emote_exclamation_mark
	step_end

lookup:
	face_up
	step_end

moveaway:
	walk_left
	face_right
	step_end

IntroChallanger_EventScript_ConcertHall::
	lock
	applymovement 7, Common_Movement_FacePlayer
	msgbox IntroChallanger
	release
	end


Intro::
	.string "Wait..did you just hop off the band\n"
	.string "truck? How did you even get on there!\p"
	.string "What..? You don't even have a ticket!\p"
	.string "Ohh your one of those Pokemon Trainers,\n"
	.string "looking to battle the band for a free\l"
	.string "ticket eh?\p"
	.string "Well good luck to you, I hear their\n"
	.string "ruthless!$"

IntroSign::
	.string "Ever Grande City Concert Hall$"

OutroFront::
	.string "What are you doing out here?\p"
	.string "Show starts soon, get on in!$"

IntroChild::
	.string "I've been here since 10am! I'm finally\n"
	.string "getting barricade!$"

IntroAdult::
	.string "If that little kid trys to push infront\n"
	.string "of me again...$"

IntroFront::
	.string "Hey no cuts!\p"
	.string "Oh you don't have a ticket?\p"
	.string "Well look, my names Steff, word of\n"
	.string "advice..\p"
	.string "You best head inside and try win a\n"
	.string "ticket, here you can cut infront of me!$"

IntroChallanger::
	.string "Your going to try face the band?\p"
	.string "Watch out for Emily...I got shreded$"

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
	release
	end


IntroNPC3_EventScript_ConcertHall::
	lock
	applymovement 6, Common_Movement_FacePlayer
	msgbox IntroAdult
	release
	end


IntroNPC4_EventScript_ConcertHall::
	lock
	applymovement 4, Common_Movement_FacePlayer
	msgbox IntroFront
	release
	end


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

IntroChild::
	.string "I've been here since 10am! I'm finally\n"
	.string "getting barricade!$"

IntroAdult::
	.string "If that little kid trys to push infront\n"
	.string "of me again...$"

IntroFront::
	.string "Hey no cuts!\p"
	.string "Oh you don't have a ticket? Best head\n"
	.string "inside and try win one then!$"

IntroChallanger::
	.string "Your going to try face the band?\p"
	.string "Watch out for Emily...I got shreded$"

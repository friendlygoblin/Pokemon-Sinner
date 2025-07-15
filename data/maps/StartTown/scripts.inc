StartTown_MapScripts::
# 3 "data/maps/StartTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HidePokeballs
	.byte 0


HidePokeballs::
# 12 "data/maps/StartTown/scripts.pory"
	setflag FLAG_POKEBALL_1
# 13 "data/maps/StartTown/scripts.pory"
	setflag FLAG_POKEBALL_2
# 14 "data/maps/StartTown/scripts.pory"
	setflag FLAG_POKEBALL_3
	end


PubSign::
# 19 "data/maps/StartTown/scripts.pory"
	lock
# 20 "data/maps/StartTown/scripts.pory"
	msgbox PubSignText
# 21 "data/maps/StartTown/scripts.pory"
	release
	end


WalkBack::
# 26 "data/maps/StartTown/scripts.pory"
	lock
# 27 "data/maps/StartTown/scripts.pory"
	msgbox WalkBack_Text_0
# 28 "data/maps/StartTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerWalkDown
# 29 "data/maps/StartTown/scripts.pory"
	waitmovement 0
# 30 "data/maps/StartTown/scripts.pory"
	release
	end


GraceScript::
# 35 "data/maps/StartTown/scripts.pory"
	lock
# 36 "data/maps/StartTown/scripts.pory"
	faceplayer
# 37 "data/maps/StartTown/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 0
	goto_if_eq GraceScript_2
# 41 "data/maps/StartTown/scripts.pory"
	msgbox GraceAfterStarter
GraceScript_1:
# 43 "data/maps/StartTown/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 44 "data/maps/StartTown/scripts.pory"
	waitmovement 0
# 45 "data/maps/StartTown/scripts.pory"
	release
	end

GraceScript_2:
# 38 "data/maps/StartTown/scripts.pory"
	msgbox GraceBeforeStarter
	goto GraceScript_1


GraceBattle::
# 50 "data/maps/StartTown/scripts.pory"
	lock
# 51 "data/maps/StartTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 52 "data/maps/StartTown/scripts.pory"
	waitmovement 0
# 53 "data/maps/StartTown/scripts.pory"
	addobject 2
# 54 "data/maps/StartTown/scripts.pory"
	applymovement 2, GraceWalkToPlayer
# 55 "data/maps/StartTown/scripts.pory"
	waitmovement 0
# 56 "data/maps/StartTown/scripts.pory"
	applymovement 1, ZigFollowGraceToPlayer
# 57 "data/maps/StartTown/scripts.pory"
	waitmovement 0
# 58 "data/maps/StartTown/scripts.pory"
	msgbox GraceSeesPokemon
# 59 "data/maps/StartTown/scripts.pory"
	delay 20
# 60 "data/maps/StartTown/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 61 "data/maps/StartTown/scripts.pory"
	waitmovement 0
# 62 "data/maps/StartTown/scripts.pory"
	delay 20
# 63 "data/maps/StartTown/scripts.pory"
	msgbox GraceBeforeBattle, MSGBOX_YESNO
# 64 "data/maps/StartTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GraceBattle_2
# 68 "data/maps/StartTown/scripts.pory"
	msgbox Grace_PlayerNoBattle
GraceBattle_1:
# 70 "data/maps/StartTown/scripts.pory"
	trainerbattle_no_intro TRAINER_GRACE, GraceDefeat
# 71 "data/maps/StartTown/scripts.pory"
	msgbox GraceAfterBattle
# 72 "data/maps/StartTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 73 "data/maps/StartTown/scripts.pory"
	playfanfare MUS_HEAL
# 74 "data/maps/StartTown/scripts.pory"
	waitfanfare
# 75 "data/maps/StartTown/scripts.pory"
	special HealPlayerParty
# 76 "data/maps/StartTown/scripts.pory"
	setrespawn HEAL_LOCATION_START_TOWN
# 77 "data/maps/StartTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 78 "data/maps/StartTown/scripts.pory"
	msgbox GraceDoneHealing
# 79 "data/maps/StartTown/scripts.pory"
	applymovement 2, GraceGoesBackToWhereSheWas
# 80 "data/maps/StartTown/scripts.pory"
	waitmovement 0
# 81 "data/maps/StartTown/scripts.pory"
	applymovement 1, ZigFollowsGraceBack
# 82 "data/maps/StartTown/scripts.pory"
	waitmovement 0
# 83 "data/maps/StartTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
# 84 "data/maps/StartTown/scripts.pory"
	release
	end

GraceBattle_2:
# 65 "data/maps/StartTown/scripts.pory"
	msgbox Grace_PlayerKnowsBattle
	goto GraceBattle_1


ShelterStaff::
# 89 "data/maps/StartTown/scripts.pory"
	lock
# 90 "data/maps/StartTown/scripts.pory"
	applymovement 4, Common_Movement_FacePlayer
# 91 "data/maps/StartTown/scripts.pory"
	msgbox ShelterStaff_Text_0
# 92 "data/maps/StartTown/scripts.pory"
	release
	end


Poochyena::
# 97 "data/maps/StartTown/scripts.pory"
	lock
# 98 "data/maps/StartTown/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 99 "data/maps/StartTown/scripts.pory"
	msgbox Poochyena_Text_0
# 100 "data/maps/StartTown/scripts.pory"
	release
	end


# 104 "data/maps/StartTown/scripts.pory"
GraceWalkToPlayer:
# 105 "data/maps/StartTown/scripts.pory"
	walk_up
# 106 "data/maps/StartTown/scripts.pory"
	walk_left
# 106 "data/maps/StartTown/scripts.pory"
	walk_left
# 106 "data/maps/StartTown/scripts.pory"
	walk_left
# 106 "data/maps/StartTown/scripts.pory"
	walk_left
# 107 "data/maps/StartTown/scripts.pory"
	step_end

# 110 "data/maps/StartTown/scripts.pory"
GraceGoesBackToWhereSheWas:
# 111 "data/maps/StartTown/scripts.pory"
	walk_down
# 112 "data/maps/StartTown/scripts.pory"
	walk_right
# 112 "data/maps/StartTown/scripts.pory"
	walk_right
# 112 "data/maps/StartTown/scripts.pory"
	walk_right
# 112 "data/maps/StartTown/scripts.pory"
	walk_right
# 113 "data/maps/StartTown/scripts.pory"
	face_left
# 114 "data/maps/StartTown/scripts.pory"
	step_end

# 117 "data/maps/StartTown/scripts.pory"
ZigFollowsGraceBack:
# 118 "data/maps/StartTown/scripts.pory"
	walk_left
# 119 "data/maps/StartTown/scripts.pory"
	delay_16
# 120 "data/maps/StartTown/scripts.pory"
	walk_in_place_left
# 121 "data/maps/StartTown/scripts.pory"
	delay_16
# 122 "data/maps/StartTown/scripts.pory"
	walk_fast_down
# 123 "data/maps/StartTown/scripts.pory"
	walk_fast_right
# 123 "data/maps/StartTown/scripts.pory"
	walk_fast_right
# 123 "data/maps/StartTown/scripts.pory"
	walk_fast_right
# 124 "data/maps/StartTown/scripts.pory"
	face_right
# 125 "data/maps/StartTown/scripts.pory"
	step_end

# 128 "data/maps/StartTown/scripts.pory"
ZigFollowGraceToPlayer:
# 129 "data/maps/StartTown/scripts.pory"
	walk_fast_up
# 130 "data/maps/StartTown/scripts.pory"
	walk_fast_left
# 130 "data/maps/StartTown/scripts.pory"
	walk_fast_left
# 131 "data/maps/StartTown/scripts.pory"
	step_end

# 216 "data/maps/StartTown/scripts.pory"
PlayerWalkDown:
# 217 "data/maps/StartTown/scripts.pory"
	walk_down
# 218 "data/maps/StartTown/scripts.pory"
	step_end

Route1Sign::
# 222 "data/maps/StartTown/scripts.pory"
	lock
# 223 "data/maps/StartTown/scripts.pory"
	msgbox Route1SignText
# 224 "data/maps/StartTown/scripts.pory"
	release
	end


ShelterSign::
# 229 "data/maps/StartTown/scripts.pory"
	lock
# 230 "data/maps/StartTown/scripts.pory"
	msgbox ShelterSignText
# 231 "data/maps/StartTown/scripts.pory"
	release
	end


Zigzagoon::
# 236 "data/maps/StartTown/scripts.pory"
	lock
# 237 "data/maps/StartTown/scripts.pory"
	faceplayer
# 238 "data/maps/StartTown/scripts.pory"
	msgbox Zigzagoon_Text_0
# 239 "data/maps/StartTown/scripts.pory"
	release
	end


WalkBack_Text_0:
# 27 "data/maps/StartTown/scripts.pory"
	.string "It's best not to go out there without a\n"
	.string "POKéMON.$"

ShelterStaff_Text_0:
# 91 "data/maps/StartTown/scripts.pory"
	.string "Working at the shelter is great, but it's\n"
	.string "tiring.\p"
	.string "Grace gives me a hand though, and\n"
	.string "that's nice!$"

Poochyena_Text_0:
# 99 "data/maps/StartTown/scripts.pory"
	.string "POOCHYENA: bark!$"

Zigzagoon_Text_0:
# 238 "data/maps/StartTown/scripts.pory"
	.string "ZIGZAGOON: … … grr?$"

GraceSeesPokemon::
# 134 "data/maps/StartTown/scripts.pory"
	.string "GRACE: {PLAYER}{KUN}!\p"
	.string "How was the band ? Did you get to \n"
	.string "meet them?$"

GraceBeforeBattle::
# 140 "data/maps/StartTown/scripts.pory"
	.string "Where's that POKéMON from?\p"
	.string "What?\p"
	.string "Abigail gave it to you?\p"
	.string "{PLAYER}{KUN} that's so cool!\p"
	.string "She also told you about the Guest \n"
	.string "List challenge?\p"
	.string "That's so exciting!\p"
	.string "You'll need training a lot though, do \n"
	.string "you know how POKéMON battles work?$"

Grace_PlayerKnowsBattle::
# 152 "data/maps/StartTown/scripts.pory"
	.string "Perfect! \p"
	.string "Let's see what you can do, then!$"

Grace_PlayerNoBattle::
# 157 "data/maps/StartTown/scripts.pory"
	.string "Oh that's okay, you have plenty \n"
	.string "of time to learn! \p"
	.string "The best way to learn is to practice! \p"
	.string "Like this!$"

GraceDefeat::
# 164 "data/maps/StartTown/scripts.pory"
	.string "You're a natural!$"

GraceAfterBattle::
# 168 "data/maps/StartTown/scripts.pory"
	.string "You really got the hang of it quickly!\p"
	.string "It's still super early but I have a \n"
	.string "feeling you might have a chance at \l"
	.string "the challenge. \p"
	.string "You'll need to train really hard of \n"
	.string "course, The Last Dinner Party are the \l"
	.string "best POKéMON trainers in the region.\p"
	.string "And they're the best band in the world!\p"
	.string "I know of a few other artists who are \n"
	.string "doing something similar. \p"
	.string "Seems to be a new trend… \p"
	.string "TLDP are by far the strongest though, \n"
	.string "so maybe you should visit these other \l"
	.string "artists before challenging them. \p"
	.string "Now, let me heal your POKéMON, that was \n"
	.string "a lot of effort. $"

GraceDoneHealing::
# 187 "data/maps/StartTown/scripts.pory"
	.string "GRACE: All done!\p"
	.string "Well, good luck for whatever's next!\p"
	.string "You're going to try your luck in \n"
	.string "Candlewax City, right?\p"
	.string "Good luck with that!\p"
	.string "See you later! $"

GraceBeforeStarter::
# 196 "data/maps/StartTown/scripts.pory"
	.string "GRACE: Hi {PLAYER}{KUN}!\p"
	.string "The Last Dinner Party are in the\n"
	.string "pub!\p"
	.string "I wish I could go see them but I have \n"
	.string "to keep an eye on this little guy…\p"
	.string "He'll cause chaos if I leave him out \n"
	.string "of my sight.\p"
	.string "You should go take a look though, and \n"
	.string "tell me all about it!$"

GraceAfterStarter::
# 209 "data/maps/StartTown/scripts.pory"
	.string "GRACE: I can't believe you got your\n"
	.string "first ever POKéMON from Abigail!\p"
	.string "I have a feeling you'll do great \n"
	.string "things, that POKéMON and you!$"

PubSignText::
# 243 "data/maps/StartTown/scripts.pory"
	.string "The Two-Legged Dog \p"
	.string "Fresh Drinks and Fresher Music!$"

Route1SignText::
# 248 "data/maps/StartTown/scripts.pory"
	.string "{UP_ARROW} Route 1 \p"
	.string "Beware of the wild POKéMON!$"

ShelterSignText::
# 253 "data/maps/StartTown/scripts.pory"
	.string "Prelude Town POKéMON Shelter $"

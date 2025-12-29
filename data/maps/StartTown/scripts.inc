StartTown_MapScripts::
# 2 "data/maps/StartTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HidePokeballs
	.byte 0


HidePokeballs::
# 11 "data/maps/StartTown/scripts.pory"
	setflag FLAG_POKEBALL_1
# 12 "data/maps/StartTown/scripts.pory"
	setflag FLAG_POKEBALL_2
# 13 "data/maps/StartTown/scripts.pory"
	setflag FLAG_POKEBALL_3
# 14 "data/maps/StartTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 15 "data/maps/StartTown/scripts.pory"
	setvar VAR_GODZILLAND_PORYGON, 0
	end


PubSign::
# 20 "data/maps/StartTown/scripts.pory"
	lock
# 21 "data/maps/StartTown/scripts.pory"
	msgbox PubSignText
# 22 "data/maps/StartTown/scripts.pory"
	release
	end


WalkBack::
# 27 "data/maps/StartTown/scripts.pory"
	lock
# 28 "data/maps/StartTown/scripts.pory"
	msgbox WalkBack_Text_0
# 29 "data/maps/StartTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerWalkDown
# 30 "data/maps/StartTown/scripts.pory"
	waitmovement 0
# 31 "data/maps/StartTown/scripts.pory"
	release
	end


GraceScript::
# 36 "data/maps/StartTown/scripts.pory"
	lock
# 37 "data/maps/StartTown/scripts.pory"
	faceplayer
# 38 "data/maps/StartTown/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 0
	goto_if_eq GraceScript_2
# 42 "data/maps/StartTown/scripts.pory"
	msgbox GraceAfterStarter
GraceScript_1:
# 44 "data/maps/StartTown/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 45 "data/maps/StartTown/scripts.pory"
	waitmovement 0
# 46 "data/maps/StartTown/scripts.pory"
	release
	end

GraceScript_2:
# 39 "data/maps/StartTown/scripts.pory"
	msgbox GraceBeforeStarter
	goto GraceScript_1


GraceBattle::
# 51 "data/maps/StartTown/scripts.pory"
	lock
# 52 "data/maps/StartTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 53 "data/maps/StartTown/scripts.pory"
	waitmovement 0
# 54 "data/maps/StartTown/scripts.pory"
	addobject 2
# 55 "data/maps/StartTown/scripts.pory"
	applymovement 2, GraceWalkToPlayer
# 56 "data/maps/StartTown/scripts.pory"
	waitmovement 0
# 57 "data/maps/StartTown/scripts.pory"
	applymovement 1, ZigFollowGraceToPlayer
# 58 "data/maps/StartTown/scripts.pory"
	waitmovement 0
# 59 "data/maps/StartTown/scripts.pory"
	msgbox GraceSeesPokemon
# 60 "data/maps/StartTown/scripts.pory"
	delay 20
# 61 "data/maps/StartTown/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 62 "data/maps/StartTown/scripts.pory"
	waitmovement 0
# 63 "data/maps/StartTown/scripts.pory"
	delay 20
# 64 "data/maps/StartTown/scripts.pory"
	msgbox GraceBeforeBattle, MSGBOX_YESNO
# 65 "data/maps/StartTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GraceBattle_2
# 69 "data/maps/StartTown/scripts.pory"
	msgbox Grace_PlayerNoBattle
GraceBattle_1:
# 71 "data/maps/StartTown/scripts.pory"
	trainerbattle_no_intro TRAINER_GRACE, GraceDefeat
# 72 "data/maps/StartTown/scripts.pory"
	msgbox GraceAfterBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/StartTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 74 "data/maps/StartTown/scripts.pory"
	playfanfare MUS_HEAL
# 75 "data/maps/StartTown/scripts.pory"
	waitfanfare
# 76 "data/maps/StartTown/scripts.pory"
	special HealPlayerParty
# 77 "data/maps/StartTown/scripts.pory"
	setrespawn HEAL_LOCATION_START_TOWN
# 78 "data/maps/StartTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 79 "data/maps/StartTown/scripts.pory"
	msgbox GraceDoneHealing, MSGBOX_AUTOCLOSE
# 80 "data/maps/StartTown/scripts.pory"
	applymovement 2, GraceGoesBackToWhereSheWas
# 81 "data/maps/StartTown/scripts.pory"
	waitmovement 0
# 82 "data/maps/StartTown/scripts.pory"
	applymovement 1, ZigFollowsGraceBack
# 83 "data/maps/StartTown/scripts.pory"
	waitmovement 0
# 84 "data/maps/StartTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
# 85 "data/maps/StartTown/scripts.pory"
	release
	end

GraceBattle_2:
# 66 "data/maps/StartTown/scripts.pory"
	msgbox Grace_PlayerKnowsBattle
	goto GraceBattle_1


ShelterStaff::
# 90 "data/maps/StartTown/scripts.pory"
	lock
# 91 "data/maps/StartTown/scripts.pory"
	applymovement 4, Common_Movement_FacePlayer
# 92 "data/maps/StartTown/scripts.pory"
	msgbox ShelterStaff_Text_0
# 93 "data/maps/StartTown/scripts.pory"
	release
	end


Poochyena::
# 98 "data/maps/StartTown/scripts.pory"
	lock
# 99 "data/maps/StartTown/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 100 "data/maps/StartTown/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 101 "data/maps/StartTown/scripts.pory"
	msgbox Poochyena_Text_0
# 102 "data/maps/StartTown/scripts.pory"
	waitmoncry
# 103 "data/maps/StartTown/scripts.pory"
	release
	end


# 107 "data/maps/StartTown/scripts.pory"
GraceWalkToPlayer:
# 108 "data/maps/StartTown/scripts.pory"
	walk_up
# 109 "data/maps/StartTown/scripts.pory"
	walk_left
# 109 "data/maps/StartTown/scripts.pory"
	walk_left
# 109 "data/maps/StartTown/scripts.pory"
	walk_left
# 109 "data/maps/StartTown/scripts.pory"
	walk_left
# 110 "data/maps/StartTown/scripts.pory"
	step_end

# 113 "data/maps/StartTown/scripts.pory"
GraceGoesBackToWhereSheWas:
# 114 "data/maps/StartTown/scripts.pory"
	walk_down
# 115 "data/maps/StartTown/scripts.pory"
	walk_right
# 115 "data/maps/StartTown/scripts.pory"
	walk_right
# 115 "data/maps/StartTown/scripts.pory"
	walk_right
# 115 "data/maps/StartTown/scripts.pory"
	walk_right
# 116 "data/maps/StartTown/scripts.pory"
	face_left
# 117 "data/maps/StartTown/scripts.pory"
	step_end

# 120 "data/maps/StartTown/scripts.pory"
ZigFollowsGraceBack:
# 121 "data/maps/StartTown/scripts.pory"
	walk_left
# 122 "data/maps/StartTown/scripts.pory"
	delay_16
# 123 "data/maps/StartTown/scripts.pory"
	walk_in_place_left
# 124 "data/maps/StartTown/scripts.pory"
	delay_16
# 125 "data/maps/StartTown/scripts.pory"
	walk_fast_down
# 126 "data/maps/StartTown/scripts.pory"
	walk_fast_right
# 126 "data/maps/StartTown/scripts.pory"
	walk_fast_right
# 126 "data/maps/StartTown/scripts.pory"
	walk_fast_right
# 127 "data/maps/StartTown/scripts.pory"
	face_right
# 128 "data/maps/StartTown/scripts.pory"
	step_end

# 131 "data/maps/StartTown/scripts.pory"
ZigFollowGraceToPlayer:
# 132 "data/maps/StartTown/scripts.pory"
	walk_fast_up
# 133 "data/maps/StartTown/scripts.pory"
	walk_fast_left
# 133 "data/maps/StartTown/scripts.pory"
	walk_fast_left
# 134 "data/maps/StartTown/scripts.pory"
	step_end

# 220 "data/maps/StartTown/scripts.pory"
PlayerWalkDown:
# 221 "data/maps/StartTown/scripts.pory"
	walk_down
# 222 "data/maps/StartTown/scripts.pory"
	step_end

Route1Sign::
# 226 "data/maps/StartTown/scripts.pory"
	lock
# 227 "data/maps/StartTown/scripts.pory"
	msgbox Route1SignText
# 228 "data/maps/StartTown/scripts.pory"
	release
	end


ShelterSign::
# 233 "data/maps/StartTown/scripts.pory"
	lock
# 234 "data/maps/StartTown/scripts.pory"
	msgbox ShelterSignText
# 235 "data/maps/StartTown/scripts.pory"
	release
	end


Zigzagoon::
# 240 "data/maps/StartTown/scripts.pory"
	lock
# 241 "data/maps/StartTown/scripts.pory"
	faceplayer
# 242 "data/maps/StartTown/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 243 "data/maps/StartTown/scripts.pory"
	msgbox Zigzagoon_Text_0
# 244 "data/maps/StartTown/scripts.pory"
	waitmoncry
# 245 "data/maps/StartTown/scripts.pory"
	release
	end


WalkBack_Text_0:
# 28 "data/maps/StartTown/scripts.pory"
	.string "It's best not to go out there without a\n"
	.string "POKéMON.$"

ShelterStaff_Text_0:
# 92 "data/maps/StartTown/scripts.pory"
	.string "Working at the shelter is great, but it's\n"
	.string "tiring.\p"
	.string "Grace gives me a hand though, and\n"
	.string "that's nice!$"

Poochyena_Text_0:
# 101 "data/maps/StartTown/scripts.pory"
	.string "POOCHYENA: bark!$"

Zigzagoon_Text_0:
# 243 "data/maps/StartTown/scripts.pory"
	.string "ZIGZAGOON: … … grr?$"

GraceSeesPokemon::
# 137 "data/maps/StartTown/scripts.pory"
	.string "GRACE: {PLAYER}{KUN}!\p"
	.string "How was the band ? Did you get to \n"
	.string "meet them?$"

GraceBeforeBattle::
# 143 "data/maps/StartTown/scripts.pory"
	.string "Where's that POKéMON from?\p"
	.string "What?\p"
	.string "Abigail gave it to you?\p"
	.string "{PLAYER}{KUN} that's so cool!\p"
	.string "She also told you about the Guest \n"
	.string "List challenge?\p"
	.string "That's so exciting!\p"
	.string "You'll need a lotta training though, do \n"
	.string "you know how POKéMON battles work?$"

Grace_PlayerKnowsBattle::
# 155 "data/maps/StartTown/scripts.pory"
	.string "Perfect! \p"
	.string "Let's see what you can do, then!$"

Grace_PlayerNoBattle::
# 160 "data/maps/StartTown/scripts.pory"
	.string "Oh that's okay, you have plenty \n"
	.string "of time to learn! \p"
	.string "The best way to learn is to practice! \p"
	.string "Like this!$"

GraceDefeat::
# 167 "data/maps/StartTown/scripts.pory"
	.string "You're a natural!$"

GraceAfterBattle::
# 171 "data/maps/StartTown/scripts.pory"
	.string "You really got the hang of it quickly!\p"
	.string "It's still super early but I have a \n"
	.string "feeling you might have a chance at \l"
	.string "the challenge. \p"
	.string "You'll need to train really hard of \n"
	.string "course, The Last Dinner Party are the \l"
	.string "best POKéMON trainers around.\p"
	.string "And they're the best band in the \n"
	.string "world!\p"
	.string "I know of a few other artists who are \n"
	.string "doing something similar. \p"
	.string "Seems to be a new trend… \p"
	.string "TLDP are by far the strongest though, \n"
	.string "so maybe you should visit these other \l"
	.string "artists before challenging them. \p"
	.string "Now, let me heal your POKéMON, that was \n"
	.string "a lot of effort. $"

GraceDoneHealing::
# 191 "data/maps/StartTown/scripts.pory"
	.string "GRACE: All done!\p"
	.string "Well, good luck for whatever's next!\p"
	.string "You're going to try your luck in \n"
	.string "Candlewax City, right?\p"
	.string "Good luck with that!\p"
	.string "See you later! $"

GraceBeforeStarter::
# 200 "data/maps/StartTown/scripts.pory"
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
# 213 "data/maps/StartTown/scripts.pory"
	.string "GRACE: I can't believe you got your\n"
	.string "first ever POKéMON from Abigail!\p"
	.string "I have a feeling you'll do great \n"
	.string "things, that POKéMON and you!$"

PubSignText::
# 249 "data/maps/StartTown/scripts.pory"
	.string "The Two-Legged Dog \p"
	.string "Fresh Drinks and Fresher Music!$"

Route1SignText::
# 254 "data/maps/StartTown/scripts.pory"
	.string "{UP_ARROW} Route 1 \p"
	.string "Beware of the wild POKéMON!$"

ShelterSignText::
# 259 "data/maps/StartTown/scripts.pory"
	.string "Prelude Town POKéMON Shelter $"

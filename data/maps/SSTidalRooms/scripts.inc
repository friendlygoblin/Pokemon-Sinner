# 1 "data/maps/SSTidalRooms/scripts.pory"

# 2 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_MapScripts::
# 3 "data/maps/SSTidalRooms/scripts.pory"
	.byte 0

ShipRoomsSnatchGiver::
# 6 "data/maps/SSTidalRooms/scripts.pory"
	lock
# 7 "data/maps/SSTidalRooms/scripts.pory"
	faceplayer
# 8 "data/maps/SSTidalRooms/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_SNATCH, ShipRoomsSnatchGiver_2
# 12 "data/maps/SSTidalRooms/scripts.pory"
	msgbox NotSuspiciousTakeThis, MSGBOX_DEFAULT
# 13 "data/maps/SSTidalRooms/scripts.pory"
	checkitemspace ITEM_TM_SNATCH
# 14 "data/maps/SSTidalRooms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShipRoomsSnatchGiver_5
ShipRoomsSnatchGiver_1:
# 20 "data/maps/SSTidalRooms/scripts.pory"
	release
	end

ShipRoomsSnatchGiver_2:
# 9 "data/maps/SSTidalRooms/scripts.pory"
	goto ShipRoomsExplainSnatch
	goto ShipRoomsSnatchGiver_1

ShipRoomsSnatchGiver_5:
# 15 "data/maps/SSTidalRooms/scripts.pory"
	giveitem ITEM_TM_SNATCH
# 16 "data/maps/SSTidalRooms/scripts.pory"
	setflag FLAG_RECEIVED_TM_SNATCH
# 17 "data/maps/SSTidalRooms/scripts.pory"
	msgbox ExplainSnatch, MSGBOX_DEFAULT
	goto ShipRoomsSnatchGiver_1


ShipRoomsExplainSnatch::
# 24 "data/maps/SSTidalRooms/scripts.pory"
	msgbox ExplainSnatch, MSGBOX_DEFAULT
# 25 "data/maps/SSTidalRooms/scripts.pory"
	release
	end


ShipRoomsBed::
# 29 "data/maps/SSTidalRooms/scripts.pory"
	lockall
# 30 "data/maps/SSTidalRooms/scripts.pory"
	msgbox TakeRestOnBed, MSGBOX_DEFAULT
# 31 "data/maps/SSTidalRooms/scripts.pory"
	closemessage
# 32 "data/maps/SSTidalRooms/scripts.pory"
	fadescreen FADE_TO_BLACK
# 33 "data/maps/SSTidalRooms/scripts.pory"
	playfanfare MUS_HEAL
# 34 "data/maps/SSTidalRooms/scripts.pory"
	waitfanfare
# 35 "data/maps/SSTidalRooms/scripts.pory"
	special HealPlayerParty
# 36 "data/maps/SSTidalRooms/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 37 "data/maps/SSTidalRooms/scripts.pory"
	compare VAR_SS_TIDAL_STATE, 0
	goto_if_eq ShipRoomsBed_2
# 43 "data/maps/SSTidalRooms/scripts.pory"
	compare VAR_SS_TIDAL_STATE, 2
	goto_if_eq ShipRoomsBed_3
ShipRoomsBed_1:
# 49 "data/maps/SSTidalRooms/scripts.pory"
	releaseall
	end

ShipRoomsBed_2:
# 38 "data/maps/SSTidalRooms/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, 1
# 39 "data/maps/SSTidalRooms/scripts.pory"
	playse SE_DING_DONG
# 40 "data/maps/SSTidalRooms/scripts.pory"
	waitse
# 41 "data/maps/SSTidalRooms/scripts.pory"
	msgbox WeveArrived, MSGBOX_AUTOCLOSE
	goto ShipRoomsBed_1

ShipRoomsBed_3:
# 44 "data/maps/SSTidalRooms/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, 3
# 45 "data/maps/SSTidalRooms/scripts.pory"
	playse SE_DING_DONG
# 46 "data/maps/SSTidalRooms/scripts.pory"
	waitse
# 47 "data/maps/SSTidalRooms/scripts.pory"
	msgbox WeveArrived, MSGBOX_AUTOCLOSE
	goto ShipRoomsBed_1


ShipRoomsMeinth::
# 53 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_COLTON, MeinthIntro, MeinthDefeat
# 54 "data/maps/SSTidalRooms/scripts.pory"
	msgbox MeinthPostBattle, MSGBOX_AUTOCLOSE
	end


ShipRoomsMicah::
# 58 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_MICAH, MicahIntro, MicahDefeat
# 59 "data/maps/SSTidalRooms/scripts.pory"
	msgbox MicahPostBattle, MSGBOX_AUTOCLOSE
	end


ShipRoomsGeorge::
# 63 "data/maps/SSTidalRooms/scripts.pory"
	lock
# 64 "data/maps/SSTidalRooms/scripts.pory"
	faceplayer
# 65 "data/maps/SSTidalRooms/scripts.pory"
	msgbox GeorgeIntro, MSGBOX_AUTOCLOSE
# 66 "data/maps/SSTidalRooms/scripts.pory"
	release
	end


ShipRoomsJed::
# 71 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_double TRAINER_LEA_AND_JED, JedIntro, JedDefeat, JedNotEnoughMons
# 72 "data/maps/SSTidalRooms/scripts.pory"
	msgbox JedPostBattle, MSGBOX_AUTOCLOSE
	end


ShipRoomsLea::
# 76 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_double TRAINER_LEA_AND_JED, LeaIntro, LeaDefeat, LeaNotEnoughMons
# 77 "data/maps/SSTidalRooms/scripts.pory"
	msgbox LeaPostBattle, MSGBOX_AUTOCLOSE
	end


ShipRoomsGarret::
# 81 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_GARRET, GarretIntro, GarretDefeat
# 82 "data/maps/SSTidalRooms/scripts.pory"
	msgbox GarretPostBattle, MSGBOX_AUTOCLOSE
	end


ShipRoomsTalia::
# 86 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_TALIA, TaliaIntro, TaliaDefeat
# 87 "data/maps/SSTidalRooms/scripts.pory"
	msgbox TaliaPostBattle, MSGBOX_AUTOCLOSE
	end


TakeRestOnBed::
# 90 "data/maps/SSTidalRooms/scripts.pory"
	.string "There's a bed…\n"
	.string "Let's take a rest.$"

WeveArrived::
# 95 "data/maps/SSTidalRooms/scripts.pory"
	.string "We've arrived!$"

MeinthIntro::
# 99 "data/maps/SSTidalRooms/scripts.pory"
	.string "I often sail to Godzilland.\p"
	.string "I enjoy attending St Vincent's,\n"
	.string "shows you see.$"

MeinthDefeat::
# 105 "data/maps/SSTidalRooms/scripts.pory"
	.string "That was an enjoyable match!$"

MeinthPostBattle::
# 109 "data/maps/SSTidalRooms/scripts.pory"
	.string "I get so excited imagining what kinds\n"
	.string "of POKéMON I'll get to see in the next\l"
	.string "show. The anticipation of it thrills!$"

MicahIntro::
# 115 "data/maps/SSTidalRooms/scripts.pory"
	.string "Are your friends strong?$"

MicahDefeat::
# 119 "data/maps/SSTidalRooms/scripts.pory"
	.string "Your friends are, indeed, strong.$"

MicahPostBattle::
# 123 "data/maps/SSTidalRooms/scripts.pory"
	.string "Friends need not be human.\n"
	.string "For me, POKéMON are treasured friends!$"

GeorgeIntro::
# 128 "data/maps/SSTidalRooms/scripts.pory"
	.string "GEORGE: Oh hi again!\p"
	.string "I'm going to Godzilland to find my \n"
	.string "neighbour!$"

GeorgeDefeat::
# 134 "data/maps/SSTidalRooms/scripts.pory"
	.string "I promise I won't throw a brick at"
	.string "her!$"

GeorgePostBattle::
# 139 "data/maps/SSTidalRooms/scripts.pory"
	.string "GEORGE: I know I sound like I have\n"
	.string "a problem with bricks but I promise \l"
	.string "it's not serious!\p"
	.string "I think… $"

JedIntro::
# 146 "data/maps/SSTidalRooms/scripts.pory"
	.string "JED: I feel a little shy about this, but…\n"
	.string "We'll show you our lovey-dovey power!$"

JedDefeat::
# 151 "data/maps/SSTidalRooms/scripts.pory"
	.string "JED: Sigh…$"

JedPostBattle::
# 155 "data/maps/SSTidalRooms/scripts.pory"
	.string "JED: It's the first time that our lovey-\n"
	.string "dovey power couldn't prevail!\l"
	.string "You must be an awesome TRAINER!$"

JedNotEnoughMons::
# 161 "data/maps/SSTidalRooms/scripts.pory"
	.string "JED: You only have one POKéMON?\n"
	.string "Isn't that just too lonesome?$"

LeaIntro::
# 166 "data/maps/SSTidalRooms/scripts.pory"
	.string "LEA: I feel a little silly, but…\n"
	.string "We'll show you our lovey-dovey power!$"

LeaDefeat::
# 171 "data/maps/SSTidalRooms/scripts.pory"
	.string "LEA: Oh, boo!$"

LeaPostBattle::
# 175 "data/maps/SSTidalRooms/scripts.pory"
	.string "LEA: I can't believe it!\n"
	.string "Our lovey-dovey power failed…\l"
	.string "You must be an awesome TRAINER!$"

LeaNotEnoughMons::
# 181 "data/maps/SSTidalRooms/scripts.pory"
	.string "LEA: I wanted to battle…\n"
	.string "But you don't even have two POKéMON…$"

GarretIntro::
# 186 "data/maps/SSTidalRooms/scripts.pory"
	.string "Ah, you've come just in time.\p"
	.string "I'm bored, you see.\n"
	.string "You may entertain me.$"

GarretDefeat::
# 192 "data/maps/SSTidalRooms/scripts.pory"
	.string "…That will do.$"

GarretPostBattle::
# 196 "data/maps/SSTidalRooms/scripts.pory"
	.string "Perhaps I shall get Father to acquire\n"
	.string "a yacht for me.\l"
	.string "A yacht for me and POKéMON!$"

TaliaIntro::
# 202 "data/maps/SSTidalRooms/scripts.pory"
	.string "TALIA: I love live music so much I'm\n"
	.string "ready to travel all over the world! $"

TaliaDefeat::
# 207 "data/maps/SSTidalRooms/scripts.pory"
	.string "You too? $"

TaliaPostBattle::
# 211 "data/maps/SSTidalRooms/scripts.pory"
	.string "TALIA: It gets a little bit expensive\n"
	.string "travelling to show, but it's so worth \l"
	.string "it!$"

NotSuspiciousTakeThis::
# 217 "data/maps/SSTidalRooms/scripts.pory"
	.string "Uh… Hi! I… I'm not acting suspicious!\n"
	.string "Uh… You can have this! For free!\p"
	.string "It… Honestly, I didn't SNATCH it from\n"
	.string "someone! I'd never do such a thing!\l"
	.string "It's clean! You can use it!$"

ExplainSnatch::
# 225 "data/maps/SSTidalRooms/scripts.pory"
	.string "SNATCH steals the beneficial effects\n"
	.string "of certain moves before they can be\l"
	.string "used by a foe or ally.$"

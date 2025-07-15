# 1 "data/maps/ConcertHall/scripts.pory"
ConcertHall_MapScripts::
# 2 "data/maps/ConcertHall/scripts.pory"
	.byte 0

IntroNPC1_EventScript_ConcertHall::
# 6 "data/maps/ConcertHall/scripts.pory"
	lock
# 7 "data/maps/ConcertHall/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 8 "data/maps/ConcertHall/scripts.pory"
	msgbox Intro
# 9 "data/maps/ConcertHall/scripts.pory"
	release
	end


# 27 "data/maps/ConcertHall/scripts.pory"
faceup:
# 28 "data/maps/ConcertHall/scripts.pory"
	face_up
	step_end

IntroSign_ConcertHall::
# 31 "data/maps/ConcertHall/scripts.pory"
	lock
# 32 "data/maps/ConcertHall/scripts.pory"
	msgbox IntroSign
# 33 "data/maps/ConcertHall/scripts.pory"
	release
	end


IntroNPC2_EventScript_ConcertHall::
# 41 "data/maps/ConcertHall/scripts.pory"
	lock
# 42 "data/maps/ConcertHall/scripts.pory"
	applymovement 4, Common_Movement_FacePlayer
# 43 "data/maps/ConcertHall/scripts.pory"
	msgbox IntroChild
# 44 "data/maps/ConcertHall/scripts.pory"
	applymovement 4, lookup
# 45 "data/maps/ConcertHall/scripts.pory"
	waitmovement 0
# 46 "data/maps/ConcertHall/scripts.pory"
	release
	end


IntroNPC3_EventScript_ConcertHall::
# 52 "data/maps/ConcertHall/scripts.pory"
	lock
# 53 "data/maps/ConcertHall/scripts.pory"
	applymovement 5, Common_Movement_FacePlayer
# 54 "data/maps/ConcertHall/scripts.pory"
	msgbox IntroBrenae
# 55 "data/maps/ConcertHall/scripts.pory"
	applymovement 5, lookup
# 56 "data/maps/ConcertHall/scripts.pory"
	waitmovement 0
# 57 "data/maps/ConcertHall/scripts.pory"
	release
	end


IntroNPC4_EventScript_ConcertHall::
# 63 "data/maps/ConcertHall/scripts.pory"
	lock
# 65 "data/maps/ConcertHall/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 66 "data/maps/ConcertHall/scripts.pory"
	waitmovement 0
# 67 "data/maps/ConcertHall/scripts.pory"
	msgbox OutroFront
# 69 "data/maps/ConcertHall/scripts.pory"
	release
	end


# 73 "data/maps/ConcertHall/scripts.pory"
playerFace:
# 74 "data/maps/ConcertHall/scripts.pory"
	face_left
	step_end

# 76 "data/maps/ConcertHall/scripts.pory"
emote:
# 77 "data/maps/ConcertHall/scripts.pory"
	emote_exclamation_mark
	step_end

# 79 "data/maps/ConcertHall/scripts.pory"
lookup:
# 80 "data/maps/ConcertHall/scripts.pory"
	face_up
	step_end

# 82 "data/maps/ConcertHall/scripts.pory"
moveaway:
# 83 "data/maps/ConcertHall/scripts.pory"
	walk_left
# 84 "data/maps/ConcertHall/scripts.pory"
	face_right
	step_end

IntroChallanger_EventScript_ConcertHall::
# 87 "data/maps/ConcertHall/scripts.pory"
	lock
# 88 "data/maps/ConcertHall/scripts.pory"
	applymovement 6, Common_Movement_FacePlayer
# 89 "data/maps/ConcertHall/scripts.pory"
	msgbox IntroChallanger
# 90 "data/maps/ConcertHall/scripts.pory"
	release
	end


SusBoy_EventScript_ConcertHall::
# 120 "data/maps/ConcertHall/scripts.pory"
	lock
# 121 "data/maps/ConcertHall/scripts.pory"
	applymovement 11, Common_Movement_FacePlayer
# 122 "data/maps/ConcertHall/scripts.pory"
	waitmovement 0
# 123 "data/maps/ConcertHall/scripts.pory"
	compare VAR_MEW, 3
	goto_if_eq SusBoy_EventScript_ConcertHall_2
# 128 "data/maps/ConcertHall/scripts.pory"
	msgbox Aiden_TruckBoxes
# 129 "data/maps/ConcertHall/scripts.pory"
	waitmessage
SusBoy_EventScript_ConcertHall_1:
# 131 "data/maps/ConcertHall/scripts.pory"
	release
	end

SusBoy_EventScript_ConcertHall_2:
# 124 "data/maps/ConcertHall/scripts.pory"
	msgbox Aiden_PokemonBox
# 125 "data/maps/ConcertHall/scripts.pory"
	waitmessage
	goto SusBoy_EventScript_ConcertHall_1


Empty_EventScript_ConcertHall::
# 158 "data/maps/ConcertHall/scripts.pory"
	lockall
# 159 "data/maps/ConcertHall/scripts.pory"
	msgbox Empty_EventScript_ConcertHall_Text_0
# 160 "data/maps/ConcertHall/scripts.pory"
	waitmessage
# 161 "data/maps/ConcertHall/scripts.pory"
	releaseall
	end


NotEmpty_EventScript_ConcertHall::
# 166 "data/maps/ConcertHall/scripts.pory"
	lockall
# 167 "data/maps/ConcertHall/scripts.pory"
	compare VAR_RARE_BOX, 1
	goto_if_eq NotEmpty_EventScript_ConcertHall_2
# 172 "data/maps/ConcertHall/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 173 "data/maps/ConcertHall/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 174 "data/maps/ConcertHall/scripts.pory"
	waitmessage
# 175 "data/maps/ConcertHall/scripts.pory"
	setvar VAR_RARE_BOX, 1
NotEmpty_EventScript_ConcertHall_1:
# 178 "data/maps/ConcertHall/scripts.pory"
	releaseall
	end

NotEmpty_EventScript_ConcertHall_2:
# 168 "data/maps/ConcertHall/scripts.pory"
	msgbox Empty_EventScript_ConcertHall_Text_0
# 169 "data/maps/ConcertHall/scripts.pory"
	waitmessage
	goto NotEmpty_EventScript_ConcertHall_1


Pokeball_EventScript_ConcertHall::
# 183 "data/maps/ConcertHall/scripts.pory"
	compare VAR_MEW, 2
	goto_if_eq Pokeball_EventScript_ConcertHall_1
# 217 "data/maps/ConcertHall/scripts.pory"
	msgbox Pokeball_EventScript_ConcertHall_Text_3
# 218 "data/maps/ConcertHall/scripts.pory"
	waitmessage
# 219 "data/maps/ConcertHall/scripts.pory"
	releaseall
	end

Pokeball_EventScript_ConcertHall_1:
# 184 "data/maps/ConcertHall/scripts.pory"
	lockall
# 185 "data/maps/ConcertHall/scripts.pory"
	msgbox Pokeball_EventScript_ConcertHall_Text_0
# 186 "data/maps/ConcertHall/scripts.pory"
	waitmessage
# 187 "data/maps/ConcertHall/scripts.pory"
	showmonpic SPECIES_MEW, 10, 3
# 188 "data/maps/ConcertHall/scripts.pory"
	playmoncry SPECIES_MEW, CRY_MODE_NORMAL
# 189 "data/maps/ConcertHall/scripts.pory"
	msgbox Pokeball_EventScript_ConcertHall_Text_1
# 190 "data/maps/ConcertHall/scripts.pory"
	waitmessage
# 192 "data/maps/ConcertHall/scripts.pory"
	givemon SPECIES_MEW, 60, item = ITEM_LIFE_ORB, ball = ITEM_CHERISH_BALL, hpEv = 252, atkEv = 0, defEv = 4, speedEv = 252, spAtkEv = 0, spDefEv = 0, move1 = MOVE_AURA_SPHERE, move2 = MOVE_PSYCHIC, move3 = MOVE_TRANSFORM, move4 = MOVE_LIGHT_SCREEN
# 193 "data/maps/ConcertHall/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Pokeball_EventScript_ConcertHall_5
# 198 "data/maps/ConcertHall/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Pokeball_EventScript_ConcertHall_6
Pokeball_EventScript_ConcertHall_4:
# 203 "data/maps/ConcertHall/scripts.pory"
	setvar VAR_DEWFORD_TOWN_STATE, 1
# 204 "data/maps/ConcertHall/scripts.pory"
	compare VAR_DEMO_STATE, 0
	goto_if_eq Pokeball_EventScript_ConcertHall_10
Pokeball_EventScript_ConcertHall_9:
# 212 "data/maps/ConcertHall/scripts.pory"
	setvar VAR_MEW, 3
# 213 "data/maps/ConcertHall/scripts.pory"
	releaseall
	end

Pokeball_EventScript_ConcertHall_5:
# 194 "data/maps/ConcertHall/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 195 "data/maps/ConcertHall/scripts.pory"
	msgbox Pokeball_EventScript_ConcertHall_Text_2
# 196 "data/maps/ConcertHall/scripts.pory"
	call NicknamePartyMon
	goto Pokeball_EventScript_ConcertHall_4

Pokeball_EventScript_ConcertHall_6:
# 199 "data/maps/ConcertHall/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 200 "data/maps/ConcertHall/scripts.pory"
	msgbox Pokeball_EventScript_ConcertHall_Text_2
# 201 "data/maps/ConcertHall/scripts.pory"
	call NicknameBoxMon
	goto Pokeball_EventScript_ConcertHall_4

Pokeball_EventScript_ConcertHall_10:
# 205 "data/maps/ConcertHall/scripts.pory"
	setvar VAR_DEMO_STATE, 1
# 206 "data/maps/ConcertHall/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 207 "data/maps/ConcertHall/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 208 "data/maps/ConcertHall/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 209 "data/maps/ConcertHall/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 210 "data/maps/ConcertHall/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto Pokeball_EventScript_ConcertHall_9


Turn_Back_Cave::
# 224 "data/maps/ConcertHall/scripts.pory"
	lock
# 225 "data/maps/ConcertHall/scripts.pory"
	msgbox Turn_Back_Cave_Text_0
# 226 "data/maps/ConcertHall/scripts.pory"
	waitmessage
# 227 "data/maps/ConcertHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playerBack1
# 228 "data/maps/ConcertHall/scripts.pory"
	waitmovement 0
# 229 "data/maps/ConcertHall/scripts.pory"
	release
	end


# 233 "data/maps/ConcertHall/scripts.pory"
playerBack1:
# 234 "data/maps/ConcertHall/scripts.pory"
	walk_down
	step_end

Nora_EventScript_ConcertHall::
# 238 "data/maps/ConcertHall/scripts.pory"
	lock
# 239 "data/maps/ConcertHall/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 240 "data/maps/ConcertHall/scripts.pory"
	applymovement 7, Common_Movement_FacePlayer
# 241 "data/maps/ConcertHall/scripts.pory"
	waitmovement 0
# 242 "data/maps/ConcertHall/scripts.pory"
	compare VAR_MEW, 2
	goto_if_eq Nora_EventScript_ConcertHall_2
# 262 "data/maps/ConcertHall/scripts.pory"
	compare VAR_MEW, 1
	goto_if_eq Nora_EventScript_ConcertHall_3
# 267 "data/maps/ConcertHall/scripts.pory"
	compare VAR_MEW, 0
	goto_if_eq Nora_EventScript_ConcertHall_4
Nora_EventScript_ConcertHall_1:
# 273 "data/maps/ConcertHall/scripts.pory"
	releaseall
	end

Nora_EventScript_ConcertHall_2:
# 243 "data/maps/ConcertHall/scripts.pory"
	msgbox NoraNoBattery
# 244 "data/maps/ConcertHall/scripts.pory"
	waitmessage
# 245 "data/maps/ConcertHall/scripts.pory"
	compare VAR_TEMP_3, 11
	goto_if_eq Nora_EventScript_ConcertHall_9
# 248 "data/maps/ConcertHall/scripts.pory"
	compare VAR_TEMP_3, 10
	goto_if_eq Nora_EventScript_ConcertHall_10
# 251 "data/maps/ConcertHall/scripts.pory"
	compare VAR_TEMP_3, 9
	goto_if_eq Nora_EventScript_ConcertHall_11
Nora_EventScript_ConcertHall_8:
# 254 "data/maps/ConcertHall/scripts.pory"
	waitmovement 0
# 255 "data/maps/ConcertHall/scripts.pory"
	removeobject 7
# 256 "data/maps/ConcertHall/scripts.pory"
	removeobject 12
# 257 "data/maps/ConcertHall/scripts.pory"
	removeobject 13
# 258 "data/maps/ConcertHall/scripts.pory"
	removeobject 14
# 259 "data/maps/ConcertHall/scripts.pory"
	removeobject 15
# 260 "data/maps/ConcertHall/scripts.pory"
	setflag FLAG_MEW
	goto Nora_EventScript_ConcertHall_1

Nora_EventScript_ConcertHall_3:
# 263 "data/maps/ConcertHall/scripts.pory"
	lock
# 264 "data/maps/ConcertHall/scripts.pory"
	msgbox Nora_EventScript_ConcertHall_Text_0
# 265 "data/maps/ConcertHall/scripts.pory"
	waitmessage
	goto Nora_EventScript_ConcertHall_1

Nora_EventScript_ConcertHall_4:
# 268 "data/maps/ConcertHall/scripts.pory"
	lock
# 269 "data/maps/ConcertHall/scripts.pory"
	msgbox NoraHelp
# 270 "data/maps/ConcertHall/scripts.pory"
	waitmessage
# 271 "data/maps/ConcertHall/scripts.pory"
	setvar VAR_MEW, 1
	goto Nora_EventScript_ConcertHall_1

Nora_EventScript_ConcertHall_9:
# 246 "data/maps/ConcertHall/scripts.pory"
	applymovement 7, Nora_Run_Right
	goto Nora_EventScript_ConcertHall_8

Nora_EventScript_ConcertHall_10:
# 249 "data/maps/ConcertHall/scripts.pory"
	applymovement 7, Nora_Run_Down
	goto Nora_EventScript_ConcertHall_8

Nora_EventScript_ConcertHall_11:
# 252 "data/maps/ConcertHall/scripts.pory"
	applymovement 7, Nora_Run_Down
	goto Nora_EventScript_ConcertHall_8


# 294 "data/maps/ConcertHall/scripts.pory"
Nora_Run_Down:
# 295 "data/maps/ConcertHall/scripts.pory"
	walk_fast_down
# 295 "data/maps/ConcertHall/scripts.pory"
	walk_fast_down
# 295 "data/maps/ConcertHall/scripts.pory"
	walk_fast_down
# 295 "data/maps/ConcertHall/scripts.pory"
	walk_fast_down
# 295 "data/maps/ConcertHall/scripts.pory"
	walk_fast_down
# 295 "data/maps/ConcertHall/scripts.pory"
	walk_fast_down
# 295 "data/maps/ConcertHall/scripts.pory"
	walk_fast_down
# 295 "data/maps/ConcertHall/scripts.pory"
	walk_fast_down
	step_end

# 297 "data/maps/ConcertHall/scripts.pory"
Nora_Run_Right:
# 298 "data/maps/ConcertHall/scripts.pory"
	walk_fast_right
# 298 "data/maps/ConcertHall/scripts.pory"
	walk_fast_right
# 299 "data/maps/ConcertHall/scripts.pory"
	walk_fast_down
# 299 "data/maps/ConcertHall/scripts.pory"
	walk_fast_down
# 299 "data/maps/ConcertHall/scripts.pory"
	walk_fast_down
# 299 "data/maps/ConcertHall/scripts.pory"
	walk_fast_down
# 299 "data/maps/ConcertHall/scripts.pory"
	walk_fast_down
# 299 "data/maps/ConcertHall/scripts.pory"
	walk_fast_down
# 299 "data/maps/ConcertHall/scripts.pory"
	walk_fast_down
# 299 "data/maps/ConcertHall/scripts.pory"
	walk_fast_down
	step_end

Empty_EventScript_ConcertHall_Text_0:
# 159 "data/maps/ConcertHall/scripts.pory"
	.string "It's empty!$"

Pokeball_EventScript_ConcertHall_Text_0:
# 185 "data/maps/ConcertHall/scripts.pory"
	.string "Huh? There's something in this box$"

Pokeball_EventScript_ConcertHall_Text_1:
# 189 "data/maps/ConcertHall/scripts.pory"
	.string "It's a strange Pokémon!$"

Pokeball_EventScript_ConcertHall_Text_2:
# 195 "data/maps/ConcertHall/scripts.pory"
	.string "Received Mew!$"

Pokeball_EventScript_ConcertHall_Text_3:
# 217 "data/maps/ConcertHall/scripts.pory"
	.string "It's empty.$"

Turn_Back_Cave_Text_0:
# 225 "data/maps/ConcertHall/scripts.pory"
	.string "Maybe I shouldn't wander around\n"
	.string "without Pokemon$"

Nora_EventScript_ConcertHall_Text_0:
# 264 "data/maps/ConcertHall/scripts.pory"
	.string "NORA: Thanks! I'll wait right here!$"

Intro::
# 14 "data/maps/ConcertHall/scripts.pory"
	.string "RACHEL: Wait… did you just hop off the \n"
	.string "band's truck? How did you even get on \l"
	.string "there?\p"
	.string "… … … What?\p"
	.string "You don't even have a ticket! \p"
	.string "Ohh I see! You're one of those Pokémon \n"
	.string "Trainers, looking to battle the band \l"
	.string "for a free ticket eh? \p"
	.string "Well good luck to you, I hear they're \n"
	.string "ruthless!\p"
	.string "I hope they play Second Best…$"

IntroSign::
# 36 "data/maps/ConcertHall/scripts.pory"
	.string "Ever Grande City Concert Hall\p"
	.string "NEXT SHOW: The Last Dinner Party $"

OutroFront::
# 94 "data/maps/ConcertHall/scripts.pory"
	.string "What are you doing out here?\p"
	.string "Show starts soon, get on in!$"

IntroChild::
# 97 "data/maps/ConcertHall/scripts.pory"
	.string "YAPGOB: I've been here since 10am!\p I'm finally getting barricade!$"

IntroBrenae::
# 101 "data/maps/ConcertHall/scripts.pory"
	.string "BRENAE: I bought my ticket months ago!\p"
	.string "I'm so nervous, I'm going to throw up…$"

IntroFront::
# 106 "data/maps/ConcertHall/scripts.pory"
	.string "STEFF: Hey I was here first! \p"
	.string "Oh wait, you don't have a ticket? \p"
	.string "Ah you're here for the challenge! \p"
	.string "Alright then, go ahead! \p"
	.string "Good luck!$"

IntroChallanger::
# 114 "data/maps/ConcertHall/scripts.pory"
	.string "NINA: You're going to face the band? \p"
	.string "Watch out for Emily… I got shredded…$"

Aiden_PokemonBox::
# 135 "data/maps/ConcertHall/scripts.pory"
	.string "AIDEN: Huh? \p"
	.string "You got a POKéMON from that box?? \p"
	.string "If I'd known what was in there \n"
	.string "I wouldn't have tipped you off…$"

Aiden_TruckBoxes::
# 142 "data/maps/ConcertHall/scripts.pory"
	.string "AIDEN: I came all the way from \n"
	.string "Finland! \p"
	.string "Also, the transport crew just left \n"
	.string "for lunch. \p"
	.string "Looks like a bunch of boxes by the \n"
	.string "trucks are up for grabs. \p"
	.string "I already swiped some cool stuff out of \n"
	.string "one of them. \p"
	.string "There's more I haven't touched, you \n"
	.string "should check them out, see if there's \l"
	.string "anything left.$"

NoraHelp::
# 277 "data/maps/ConcertHall/scripts.pory"
	.string "NORA: Oh hey! Are you here for the \n"
	.string "show? Mind if I grab a quick photo? \p"
	.string "…\p"
	.string "Oh darn! My camera just died. \p"
	.string "Hey, do you think you could check the\n"
	.string "shop, ask if they have any batteries? \p"
	.string "If not, I'll have to drive my truck \n"
	.string "back to get one!$"

NoraNoBattery::
# 287 "data/maps/ConcertHall/scripts.pory"
	.string "NORA: They didn't have any? \p"
	.string "I'll have to drive to another store \n"
	.string "real quick then. \p"
	.string "Thanks anyways, enjoy the show!$"

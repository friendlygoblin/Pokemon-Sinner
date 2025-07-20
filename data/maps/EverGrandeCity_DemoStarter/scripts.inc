# 1 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"

# 2 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
EverGrandeCity_DemoStarter_MapScripts::
# 3 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.byte 0

Demo_Mart::
# 6 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lock
# 7 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	faceplayer
# 8 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_MEW, 1
	goto_if_eq Demo_Mart_2
# 14 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_DEMOSHOP, 0
	goto_if_eq Demo_Mart_6
Demo_Mart_5:
# 18 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	message Demo_Mart_Text_0
# 19 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	waitmessage
# 20 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	pokemart Demo_MartItems
# 21 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Demo_Mart_Text_1
Demo_Mart_1:
# 23 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	release
	end

Demo_Mart_2:
# 9 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox MartBattery
# 10 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	waitmessage
# 11 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setvar VAR_MEW, 2
	goto Demo_Mart_1

Demo_Mart_6:
# 15 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	addmoney 150000
# 16 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setvar VAR_DEMOSHOP, 1
	goto Demo_Mart_5


Demo_Sign::
# 28 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lock
# 29 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Demo_Sign_Text_0
# 30 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	waitmessage
# 31 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	release
	end


	.align 2
# 45 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
Demo_MartItems:
# 46 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 47 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 48 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 49 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.2byte ITEM_AWAKENING
# 50 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.2byte ITEM_ETHER
# 51 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.2byte ITEM_MAX_ETHER
# 52 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.2byte ITEM_MAX_ELIXER
# 53 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 54 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 55 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 56 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.2byte ITEM_REVIVE
# 57 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 58 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 59 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.2byte ITEM_MEGA_RING
# 60 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.2byte ITEM_GALLADITE
# 61 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.2byte ITEM_GARCHOMPITE
# 62 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.2byte ITEM_TYRANITARITE
# 63 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.2byte ITEM_METAGROSSITE
# 64 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.2byte ITEM_VENUSAURITE
	.2byte ITEM_NONE

Ness_EventScript_Demo::
# 77 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lockall
# 78 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	applymovement 27, Common_Movement_FacePlayer
# 79 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox NessStrategy
# 80 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	waitmessage
# 81 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	releaseall
	end


Goblin_EventScript_Demo::
# 85 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lock
# 86 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 87 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox GoblinPick
# 88 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	release
	end


GoblinGive_EventScript_Demo1::
# 102 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lockall
# 103 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	applymovement 1, GoblinGive_1
# 104 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	waitmovement 0
# 105 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playerFace1
# 106 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	waitmovement 0
# 107 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox GoblinGive_Ready
# 108 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call GivePlayerGod
# 109 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox GoblinGive_GoGetem
# 110 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	applymovement 1, GoblinBack_1
# 111 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	waitmovement 0
# 112 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setvar VAR_DEMO_STATE, 2
# 113 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	releaseall
	end


GoblinGive_EventScript_Demo2::
# 118 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lockall
# 119 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	applymovement 1, GoblinGive_2
# 120 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	waitmovement 0
# 121 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playerFace1
# 122 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	waitmovement 0
# 123 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox GoblinGive_Ready
# 124 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call GivePlayerGod
# 125 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox GoblinGive_GoGetem
# 126 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	applymovement 1, GoblinBack_2
# 127 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	waitmovement 0
# 128 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setvar VAR_DEMO_STATE, 2
# 129 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	releaseall
	end


SetFlags_EventScript_Demo::
# 134 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setvar VAR_DEWFORD_TOWN_STATE, 1
# 135 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_DEMO_STATE, 0
	goto_if_eq SetFlags_EventScript_Demo_1
	return

SetFlags_EventScript_Demo_1:
# 136 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setvar VAR_DEMO_STATE, 1
# 137 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 138 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 139 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 140 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 141 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	return


# 161 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
playerFace1:
# 162 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	face_right
	step_end

# 164 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
playerBack:
# 165 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	walk_down
	step_end

# 167 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
GoblinGive_1:
# 168 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	face_left
	step_end

# 172 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
GoblinGive_2:
# 173 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	face_left
# 174 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	walk_left
	step_end

# 177 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
GoblinBack_1:
# 178 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	face_down
	step_end

# 181 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
GoblinBack_2:
# 182 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	walk_right
# 183 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	face_down
	step_end

GivePlayerGod::
# 186 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_BADGE01_GET
# 187 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_BADGE02_GET
# 188 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_BADGE03_GET
# 189 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_BADGE04_GET
# 190 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_BADGE05_GET
# 191 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_BADGE06_GET
# 192 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_BADGE07_GET
# 193 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_BADGE08_GET
# 194 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 195 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox GivePlayerGod_Text_0
# 196 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	waitmessage
# 197 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox GivePlayerGod_Text_1
# 198 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	giveitem ITEM_MAX_REVIVE, amount = 5
# 199 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	giveitem ITEM_HYPER_POTION, amount = 10
# 200 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	giveitem ITEM_FULL_RESTORE, amount = 10
	return


GoblinStop_EventScript_Demo1::
# 204 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lockall
# 205 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	applymovement 1, GoblinGive_1
# 206 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	waitmovement 0
# 207 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playerFace1
# 208 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	waitmovement 0
# 209 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox GoblinStop_Text
# 210 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playerBack
# 211 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	waitmovement 0
# 212 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	applymovement 1, GoblinBack_1
# 213 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	waitmovement 0
# 214 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	releaseall
	end


GoblinStop_EventScript_Demo2::
# 219 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lockall
# 220 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	applymovement 1, GoblinGive_2
# 221 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	waitmovement 0
# 222 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playerFace1
# 223 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	waitmovement 0
# 224 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox GoblinStop_Text
# 225 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playerBack
# 226 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	waitmovement 0
# 227 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	applymovement 1, GoblinBack_2
# 228 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	waitmovement 0
# 229 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	releaseall
	end


EverGradeCity_DemoStarter_OnTransition::
# 243 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setrespawn HEAL_LOCATION_EVERGRANDECITY_DEMOSTARTER
	end


NicknamePartyMon::
# 248 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 249 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
# 250 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 251 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 252 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 257 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 258 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
# 259 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 263 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 260 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


EventScript_VipRoom::
# 267 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lockall
# 268 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox EventScript_VipRoom_Text_0
# 269 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	waitmessage
# 270 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	releaseall
	end


Pokeball_EventScript_Demo1::
# 275 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lockall
# 276 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	showmonpic SPECIES_INFERNAPE, 10, 3
# 277 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo1_Text_0, MSGBOX_YESNO
# 278 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pokeball_EventScript_Demo1_2
# 304 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
Pokeball_EventScript_Demo1_1:
# 308 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	releaseall
	end

Pokeball_EventScript_Demo1_2:
# 279 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	givemon SPECIES_INFERNAPE, 55, item = ITEM_NONE, ball = ITEM_MASTER_BALL, speedEv = 252, atkEv = 256, move1 = MOVE_FLAMETHROWER, move2 = MOVE_CLOSE_COMBAT, move3 = MOVE_U_TURN, move4 = MOVE_THUNDER_PUNCH
# 280 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Pokeball_EventScript_Demo1_5
# 288 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Pokeball_EventScript_Demo1_6
# 297 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
# 298 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo1_Text_2
	goto Pokeball_EventScript_Demo1_1

Pokeball_EventScript_Demo1_5:
# 281 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 282 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo1_Text_1
# 283 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknamePartyMon
# 284 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 2
# 285 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_1
# 286 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo1_1

Pokeball_EventScript_Demo1_6:
# 289 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 290 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo1_Text_1
# 291 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknameBoxMon
# 292 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 2
# 293 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_1
# 294 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo1_1


Pokeball_EventScript_Demo2::
# 313 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lockall
# 314 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	showmonpic SPECIES_AZUMARILL, 10, 3
# 315 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo2_Text_0, MSGBOX_YESNO
# 316 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pokeball_EventScript_Demo2_2
# 342 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
Pokeball_EventScript_Demo2_1:
# 347 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	releaseall
	end

Pokeball_EventScript_Demo2_2:
# 317 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	givemon SPECIES_AZUMARILL, 55, item = ITEM_NONE, ball = ITEM_POKE_BALL, hpEv = 100, atkEv = 252, defEv = 0, speedEv = 152, spAtkEv = 0, spDefEv = 0, move1 = MOVE_LIQUIDATION, move2 = MOVE_PLAY_ROUGH, move3 = MOVE_AQUA_JET, move4 = MOVE_ICE_PUNCH
# 318 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Pokeball_EventScript_Demo2_5
# 326 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Pokeball_EventScript_Demo2_6
# 335 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
# 336 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo1_Text_2
	goto Pokeball_EventScript_Demo2_1

Pokeball_EventScript_Demo2_5:
# 319 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 320 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo2_Text_1
# 321 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknamePartyMon
# 322 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 3
# 323 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_2
# 324 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo2_1

Pokeball_EventScript_Demo2_6:
# 327 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 328 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo2_Text_1
# 329 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknameBoxMon
# 330 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 3
# 331 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_2
# 332 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo2_1


Pokeball_EventScript_Demo3::
# 352 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lockall
# 353 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	showmonpic SPECIES_MAGNEZONE, 10, 3
# 354 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo3_Text_0, MSGBOX_YESNO
# 355 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pokeball_EventScript_Demo3_2
# 381 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
Pokeball_EventScript_Demo3_1:
# 385 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	releaseall
	end

Pokeball_EventScript_Demo3_2:
# 356 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	givemon SPECIES_MAGNEZONE, 55, item = ITEM_NONE, ball = ITEM_MASTER_BALL, hpEv = 100, atkEv = 0, defEv = 0, speedEv = 152, spAtkEv = 256, spDefEv = 0, move1 = MOVE_THUNDERBOLT, move2 = MOVE_BODY_PRESS, move3 = MOVE_FLASH_CANNON, move4 = MOVE_THUNDER_WAVE
# 357 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Pokeball_EventScript_Demo3_5
# 365 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Pokeball_EventScript_Demo3_6
# 374 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
# 375 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo1_Text_2
	goto Pokeball_EventScript_Demo3_1

Pokeball_EventScript_Demo3_5:
# 358 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 359 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo3_Text_1
# 360 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknamePartyMon
# 361 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 4
# 362 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_3
# 363 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo3_1

Pokeball_EventScript_Demo3_6:
# 366 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 367 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo3_Text_1
# 368 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknameBoxMon
# 369 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 4
# 370 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_3
# 371 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo3_1


Pokeball_EventScript_Demo4::
# 390 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lockall
# 391 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	showmonpic SPECIES_METAGROSS, 10, 3
# 392 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo4_Text_0, MSGBOX_YESNO
# 393 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pokeball_EventScript_Demo4_2
# 419 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
Pokeball_EventScript_Demo4_1:
# 423 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	releaseall
	end

Pokeball_EventScript_Demo4_2:
# 394 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	givemon SPECIES_METAGROSS, 55, item = ITEM_NONE, ball = ITEM_MASTER_BALL, hpEv = 232, atkEv = 60, defEv = 0, speedEv = 176, spAtkEv = 0, spDefEv = 40, move1 = MOVE_BULLET_PUNCH, move2 = MOVE_ZEN_HEADBUTT, move3 = MOVE_REST, move4 = MOVE_ROCK_SLIDE
# 395 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Pokeball_EventScript_Demo4_5
# 403 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Pokeball_EventScript_Demo4_6
# 412 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
# 413 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo1_Text_2
	goto Pokeball_EventScript_Demo4_1

Pokeball_EventScript_Demo4_5:
# 396 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 397 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo4_Text_1
# 398 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknamePartyMon
# 399 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 5
# 400 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_4
# 401 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo4_1

Pokeball_EventScript_Demo4_6:
# 404 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 405 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo4_Text_1
# 406 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknameBoxMon
# 407 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 5
# 408 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_4
# 409 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo4_1


Pokeball_EventScript_Demo5::
# 428 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lockall
# 429 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	showmonpic SPECIES_UMBREON, 10, 3
# 430 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo5_Text_0, MSGBOX_YESNO
# 431 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pokeball_EventScript_Demo5_2
# 457 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
Pokeball_EventScript_Demo5_1:
# 461 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	releaseall
	end

Pokeball_EventScript_Demo5_2:
# 432 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	givemon SPECIES_UMBREON, 55, item = ITEM_NONE, ball = ITEM_MASTER_BALL, hpEv = 252, atkEv = 0, defEv = 4, speedEv = 0, spAtkEv = 0, spDefEv = 252, move1 = MOVE_THROAT_CHOP, move2 = MOVE_SHADOW_BALL, move3 = MOVE_ALLURING_VOICE, move4 = MOVE_TOXIC
# 433 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Pokeball_EventScript_Demo5_5
# 441 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Pokeball_EventScript_Demo5_6
# 450 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
# 451 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo1_Text_2
	goto Pokeball_EventScript_Demo5_1

Pokeball_EventScript_Demo5_5:
# 434 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 435 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo5_Text_1
# 436 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknamePartyMon
# 437 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 6
# 438 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_5
# 439 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo5_1

Pokeball_EventScript_Demo5_6:
# 442 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 443 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo5_Text_1
# 444 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknameBoxMon
# 445 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 6
# 446 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_5
# 447 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo5_1


Pokeball_EventScript_Demo6::
# 466 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lockall
# 467 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	showmonpic SPECIES_SCOLIPEDE, 10, 3
# 468 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo6_Text_0, MSGBOX_YESNO
# 469 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pokeball_EventScript_Demo6_2
# 495 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
Pokeball_EventScript_Demo6_1:
# 499 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	releaseall
	end

Pokeball_EventScript_Demo6_2:
# 470 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	givemon SPECIES_SCOLIPEDE, 55, item = ITEM_NONE, ball = ITEM_MASTER_BALL, hpEv = 0, atkEv = 252, defEv = 4, speedEv = 0, spAtkEv = 0, spDefEv = 252, move1 = MOVE_TOXIC_SPIKES, move2 = MOVE_STOMPING_TANTRUM, move3 = MOVE_X_SCISSOR, move4 = MOVE_SWORDS_DANCE
# 471 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Pokeball_EventScript_Demo6_5
# 479 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Pokeball_EventScript_Demo6_6
# 488 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
# 489 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo1_Text_2
	goto Pokeball_EventScript_Demo6_1

Pokeball_EventScript_Demo6_5:
# 472 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 473 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo6_Text_1
# 474 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknamePartyMon
# 475 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 7
# 476 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_6
# 477 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo6_1

Pokeball_EventScript_Demo6_6:
# 480 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 481 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo6_Text_1
# 482 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknameBoxMon
# 483 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 7
# 484 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_6
# 485 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo6_1


Pokeball_EventScript_Demo7::
# 504 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lockall
# 505 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	showmonpic SPECIES_EMPOLEON, 10, 3
# 506 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo7_Text_0, MSGBOX_YESNO
# 507 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pokeball_EventScript_Demo7_2
# 533 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
Pokeball_EventScript_Demo7_1:
# 537 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	releaseall
	end

Pokeball_EventScript_Demo7_2:
# 508 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	givemon SPECIES_EMPOLEON, 55, item = ITEM_NONE, ball = ITEM_MASTER_BALL, hpEv = 252, atkEv = 0, defEv = 76, speedEv = 180, spAtkEv = 0, spDefEv = 0, move1 = MOVE_ICE_BEAM, move2 = MOVE_SURF, move3 = MOVE_FLASH_CANNON, move4 = MOVE_ROOST
# 509 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Pokeball_EventScript_Demo7_5
# 517 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Pokeball_EventScript_Demo7_6
# 526 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
# 527 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo1_Text_2
	goto Pokeball_EventScript_Demo7_1

Pokeball_EventScript_Demo7_5:
# 510 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 511 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo7_Text_1
# 512 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknamePartyMon
# 513 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 8
# 514 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_7
# 515 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo7_1

Pokeball_EventScript_Demo7_6:
# 518 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 519 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo7_Text_1
# 520 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknameBoxMon
# 521 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 8
# 522 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_7
# 523 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo7_1


Pokeball_EventScript_Demo8::
# 542 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lockall
# 543 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	showmonpic SPECIES_EELEKTROSS, 10, 3
# 544 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo8_Text_0, MSGBOX_YESNO
# 545 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pokeball_EventScript_Demo8_2
# 571 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
Pokeball_EventScript_Demo8_1:
# 575 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	releaseall
	end

Pokeball_EventScript_Demo8_2:
# 546 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	givemon SPECIES_EELEKTROSS, 55, item = ITEM_NONE, ball = ITEM_MASTER_BALL, hpEv = 252, atkEv = 4, defEv = 0, speedEv = 0, spAtkEv = 252, spDefEv = 0, move1 = MOVE_THUNDER_PUNCH, move2 = MOVE_GIGA_DRAIN, move3 = MOVE_DRAIN_PUNCH, move4 = MOVE_LIQUIDATION
# 547 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Pokeball_EventScript_Demo8_5
# 555 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Pokeball_EventScript_Demo8_6
# 564 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
# 565 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo1_Text_2
	goto Pokeball_EventScript_Demo8_1

Pokeball_EventScript_Demo8_5:
# 548 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 549 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo8_Text_1
# 550 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknamePartyMon
# 551 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 9
# 552 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_8
# 553 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo8_1

Pokeball_EventScript_Demo8_6:
# 556 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 557 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo8_Text_1
# 558 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknameBoxMon
# 559 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 9
# 560 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_8
# 561 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo8_1


Pokeball_EventScript_Demo9::
# 580 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lockall
# 581 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	showmonpic SPECIES_FERROTHORN, 10, 3
# 582 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo9_Text_0, MSGBOX_YESNO
# 583 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pokeball_EventScript_Demo9_2
# 609 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
Pokeball_EventScript_Demo9_1:
# 613 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	releaseall
	end

Pokeball_EventScript_Demo9_2:
# 584 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	givemon SPECIES_FERROTHORN, 55, item = ITEM_NONE, ball = ITEM_MASTER_BALL, hpEv = 252, atkEv = 0, defEv = 24, speedEv = 0, spAtkEv = 0, spDefEv = 232, move1 = MOVE_GYRO_BALL, move2 = MOVE_SPIKES, move3 = MOVE_RAPID_SPIN, move4 = MOVE_POWER_WHIP
# 585 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Pokeball_EventScript_Demo9_5
# 593 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Pokeball_EventScript_Demo9_6
# 602 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
# 603 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo1_Text_2
	goto Pokeball_EventScript_Demo9_1

Pokeball_EventScript_Demo9_5:
# 586 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 587 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo9_Text_1
# 588 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknamePartyMon
# 589 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 10
# 590 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_9
# 591 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo9_1

Pokeball_EventScript_Demo9_6:
# 594 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 595 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo9_Text_1
# 596 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknameBoxMon
# 597 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 10
# 598 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_9
# 599 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo9_1


Pokeball_EventScript_Demo10::
# 618 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lockall
# 619 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	showmonpic SPECIES_AEGISLASH, 10, 3
# 620 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo10_Text_0, MSGBOX_YESNO
# 621 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pokeball_EventScript_Demo10_2
# 647 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
Pokeball_EventScript_Demo10_1:
# 651 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	releaseall
	end

Pokeball_EventScript_Demo10_2:
# 622 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	givemon SPECIES_AEGISLASH, 55, item = ITEM_NONE, ball = ITEM_MASTER_BALL, hpEv = 252, atkEv = 0, defEv = 0, speedEv = 0, spAtkEv = 4, spDefEv = 252, move1 = MOVE_FLASH_CANNON, move2 = MOVE_SHADOW_BALL, move3 = MOVE_NIGHT_SLASH, move4 = MOVE_SACRED_SWORD
# 623 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Pokeball_EventScript_Demo10_5
# 631 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Pokeball_EventScript_Demo10_6
# 640 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
# 641 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo1_Text_2
	goto Pokeball_EventScript_Demo10_1

Pokeball_EventScript_Demo10_5:
# 624 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 625 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo10_Text_1
# 626 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknamePartyMon
# 627 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 11
# 628 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_10
# 629 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo10_1

Pokeball_EventScript_Demo10_6:
# 632 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 633 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo10_Text_1
# 634 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknameBoxMon
# 635 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 11
# 636 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_10
# 637 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo10_1


Pokeball_EventScript_Demo11::
# 656 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lockall
# 657 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	showmonpic SPECIES_TALONFLAME, 10, 3
# 658 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo11_Text_0, MSGBOX_YESNO
# 659 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pokeball_EventScript_Demo11_2
# 685 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
Pokeball_EventScript_Demo11_1:
# 689 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	releaseall
	end

Pokeball_EventScript_Demo11_2:
# 660 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	givemon SPECIES_TALONFLAME, 55, item = ITEM_NONE, ball = ITEM_MASTER_BALL, hpEv = 252, atkEv = 0, defEv = 0, speedEv = 252, spAtkEv = 4, spDefEv = 0, move1 = MOVE_ACROBATICS, move2 = MOVE_HEAT_WAVE, move3 = MOVE_ROOST, move4 = MOVE_SWORDS_DANCE
# 661 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Pokeball_EventScript_Demo11_5
# 669 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Pokeball_EventScript_Demo11_6
# 678 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
# 679 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo1_Text_2
	goto Pokeball_EventScript_Demo11_1

Pokeball_EventScript_Demo11_5:
# 662 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 663 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo11_Text_1
# 664 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknamePartyMon
# 665 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 12
# 666 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_11
# 667 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo11_1

Pokeball_EventScript_Demo11_6:
# 670 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 671 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo11_Text_1
# 672 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknameBoxMon
# 673 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 12
# 674 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_11
# 675 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo11_1


Pokeball_EventScript_Demo12::
# 694 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lockall
# 695 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	showmonpic SPECIES_GALLADE, 10, 3
# 696 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo12_Text_0, MSGBOX_YESNO
# 697 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pokeball_EventScript_Demo12_2
# 723 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
Pokeball_EventScript_Demo12_1:
# 727 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	releaseall
	end

Pokeball_EventScript_Demo12_2:
# 698 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	givemon SPECIES_GALLADE, 55, item = ITEM_NONE, ball = ITEM_MASTER_BALL, hpEv = 0, atkEv = 252, defEv = 4, speedEv = 0, spAtkEv = 0, spDefEv = 252, move1 = MOVE_ICE_PUNCH, move2 = MOVE_CLOSE_COMBAT, move3 = MOVE_PSYCHO_CUT, move4 = MOVE_PAIN_SPLIT
# 699 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Pokeball_EventScript_Demo12_5
# 707 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Pokeball_EventScript_Demo12_6
# 716 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
# 717 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo1_Text_2
	goto Pokeball_EventScript_Demo12_1

Pokeball_EventScript_Demo12_5:
# 700 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 701 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo12_Text_1
# 702 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknamePartyMon
# 703 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 13
# 704 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_12
# 705 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo12_1

Pokeball_EventScript_Demo12_6:
# 708 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 709 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo12_Text_1
# 710 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknameBoxMon
# 711 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 13
# 712 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_12
# 713 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo12_1


Pokeball_EventScript_Demo13::
# 732 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lockall
# 733 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	showmonpic SPECIES_VENUSAUR, 10, 3
# 734 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo13_Text_0, MSGBOX_YESNO
# 735 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pokeball_EventScript_Demo13_2
# 761 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
Pokeball_EventScript_Demo13_1:
# 765 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	releaseall
	end

Pokeball_EventScript_Demo13_2:
# 736 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	givemon SPECIES_VENUSAUR, 55, item = ITEM_NONE, ball = ITEM_MASTER_BALL, hpEv = 100, atkEv = 0, defEv = 4, speedEv = 152, spAtkEv = 252, spDefEv = 0, move1 = MOVE_GIGA_DRAIN, move2 = MOVE_SLUDGE_BOMB, move3 = MOVE_EARTH_POWER, move4 = MOVE_TOXIC
# 737 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Pokeball_EventScript_Demo13_5
# 745 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Pokeball_EventScript_Demo13_6
# 754 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
# 755 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo1_Text_2
	goto Pokeball_EventScript_Demo13_1

Pokeball_EventScript_Demo13_5:
# 738 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 739 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo13_Text_1
# 740 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknamePartyMon
# 741 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 15
# 742 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_13
# 743 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo13_1

Pokeball_EventScript_Demo13_6:
# 746 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 747 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo13_Text_1
# 748 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknameBoxMon
# 749 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 15
# 750 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_13
# 751 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo13_1


Pokeball_EventScript_Demo14::
# 770 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lockall
# 771 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	showmonpic SPECIES_LYCANROC_DUSK, 10, 3
# 772 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo14_Text_0, MSGBOX_YESNO
# 773 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pokeball_EventScript_Demo14_2
# 799 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
Pokeball_EventScript_Demo14_1:
# 803 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	releaseall
	end

Pokeball_EventScript_Demo14_2:
# 774 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	givemon SPECIES_LYCANROC_DUSK, 55, item = ITEM_NONE, ball = ITEM_MASTER_BALL, hpEv = 0, atkEv = 252, defEv = 4, speedEv = 252, spAtkEv = 0, spDefEv = 0, move1 = MOVE_DRILL_RUN, move2 = MOVE_ACCELEROCK, move3 = MOVE_PSYCHIC_FANGS, move4 = MOVE_STEALTH_ROCK
# 775 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Pokeball_EventScript_Demo14_5
# 783 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Pokeball_EventScript_Demo14_6
# 792 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
# 793 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo1_Text_2
	goto Pokeball_EventScript_Demo14_1

Pokeball_EventScript_Demo14_5:
# 776 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 777 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo14_Text_1
# 778 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknamePartyMon
# 779 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 16
# 780 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_14
# 781 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo14_1

Pokeball_EventScript_Demo14_6:
# 784 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 785 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo14_Text_1
# 786 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknameBoxMon
# 787 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 16
# 788 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_14
# 789 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo14_1


Pokeball_EventScript_Demo15::
# 808 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lockall
# 809 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	showmonpic SPECIES_HATTERENE, 10, 3
# 810 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo15_Text_0, MSGBOX_YESNO
# 811 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pokeball_EventScript_Demo15_2
# 837 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
Pokeball_EventScript_Demo15_1:
# 841 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	releaseall
	end

Pokeball_EventScript_Demo15_2:
# 812 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	givemon SPECIES_HATTERENE, 55, item = ITEM_NONE, ball = ITEM_MASTER_BALL, hpEv = 252, atkEv = 0, defEv = 204, speedEv = 52, spAtkEv = 0, spDefEv = 0, move1 = MOVE_DRAINING_KISS, move2 = MOVE_PSYSHOCK, move3 = MOVE_MYSTICAL_FIRE, move4 = MOVE_TRICK_ROOM
# 813 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Pokeball_EventScript_Demo15_5
# 821 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Pokeball_EventScript_Demo15_6
# 830 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
# 831 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo1_Text_2
	goto Pokeball_EventScript_Demo15_1

Pokeball_EventScript_Demo15_5:
# 814 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 815 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo15_Text_1
# 816 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknamePartyMon
# 817 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 17
# 818 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_15
# 819 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo15_1

Pokeball_EventScript_Demo15_6:
# 822 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 823 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo15_Text_1
# 824 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknameBoxMon
# 825 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 17
# 826 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_15
# 827 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo15_1


Pokeball_EventScript_Demo16::
# 846 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lockall
# 847 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	showmonpic SPECIES_KINGDRA, 10, 3
# 848 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo16_Text_0, MSGBOX_YESNO
# 849 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pokeball_EventScript_Demo16_2
# 875 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
Pokeball_EventScript_Demo16_1:
# 879 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	releaseall
	end

Pokeball_EventScript_Demo16_2:
# 850 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	givemon SPECIES_KINGDRA, 55, item = ITEM_NONE, ball = ITEM_MASTER_BALL, hpEv = 0, atkEv = 0, defEv = 0, speedEv = 252, spAtkEv = 252, spDefEv = 4, move1 = MOVE_WATERFALL, move2 = MOVE_DRAGON_DANCE, move3 = MOVE_IRON_HEAD, move4 = MOVE_ICE_BEAM
# 851 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Pokeball_EventScript_Demo16_5
# 859 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Pokeball_EventScript_Demo16_6
# 868 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
# 869 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo1_Text_2
	goto Pokeball_EventScript_Demo16_1

Pokeball_EventScript_Demo16_5:
# 852 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 853 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo16_Text_1
# 854 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknamePartyMon
# 855 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 18
# 856 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_16
# 857 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo16_1

Pokeball_EventScript_Demo16_6:
# 860 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 861 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo16_Text_1
# 862 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknameBoxMon
# 863 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 18
# 864 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_16
# 865 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo16_1


Pokeball_EventScript_Demo17::
# 884 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lockall
# 885 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	showmonpic SPECIES_ARCANINE, 10, 3
# 886 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo17_Text_0, MSGBOX_YESNO
# 887 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pokeball_EventScript_Demo17_2
# 913 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
Pokeball_EventScript_Demo17_1:
# 917 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	releaseall
	end

Pokeball_EventScript_Demo17_2:
# 888 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	givemon SPECIES_ARCANINE, 55, item = ITEM_NONE, ball = ITEM_MASTER_BALL, hpEv = 160, atkEv = 252, defEv = 0, speedEv = 96, spAtkEv = 0, spDefEv = 0, move1 = MOVE_EXTREME_SPEED, move2 = MOVE_FLAMETHROWER, move3 = MOVE_CRUNCH, move4 = MOVE_SCORCHING_SANDS
# 889 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Pokeball_EventScript_Demo17_5
# 897 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Pokeball_EventScript_Demo17_6
# 906 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
# 907 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo1_Text_2
	goto Pokeball_EventScript_Demo17_1

Pokeball_EventScript_Demo17_5:
# 890 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 891 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo17_Text_1
# 892 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknamePartyMon
# 893 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 19
# 894 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_17
# 895 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo17_1

Pokeball_EventScript_Demo17_6:
# 898 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 899 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo17_Text_1
# 900 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknameBoxMon
# 901 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 19
# 902 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_17
# 903 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo17_1


Pokeball_EventScript_Demo18::
# 922 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lockall
# 923 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	showmonpic SPECIES_TYRANITAR, 10, 3
# 924 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo18_Text_0, MSGBOX_YESNO
# 925 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pokeball_EventScript_Demo18_2
# 951 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
Pokeball_EventScript_Demo18_1:
# 955 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	releaseall
	end

Pokeball_EventScript_Demo18_2:
# 926 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	givemon SPECIES_TYRANITAR, 55, item = ITEM_NONE, ball = ITEM_MASTER_BALL, hpEv = 252, atkEv = 4, defEv = 0, speedEv = 40, spAtkEv = 0, spDefEv = 212, move1 = MOVE_STEALTH_ROCK, move2 = MOVE_EARTHQUAKE, move3 = MOVE_FOUL_PLAY, move4 = MOVE_STONE_EDGE
# 927 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Pokeball_EventScript_Demo18_5
# 935 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Pokeball_EventScript_Demo18_6
# 944 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
# 945 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo1_Text_2
	goto Pokeball_EventScript_Demo18_1

Pokeball_EventScript_Demo18_5:
# 928 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 929 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo18_Text_1
# 930 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknamePartyMon
# 931 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 20
# 932 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_18
# 933 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo18_1

Pokeball_EventScript_Demo18_6:
# 936 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 937 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo18_Text_1
# 938 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknameBoxMon
# 939 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 20
# 940 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_18
# 941 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo18_1


Pokeball_EventScript_Demo19::
# 960 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lockall
# 961 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	showmonpic SPECIES_NIDOQUEEN, 10, 3
# 962 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo19_Text_0, MSGBOX_YESNO
# 963 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pokeball_EventScript_Demo19_2
# 989 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
Pokeball_EventScript_Demo19_1:
# 993 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	releaseall
	end

Pokeball_EventScript_Demo19_2:
# 964 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	givemon SPECIES_NIDOQUEEN, 55, item = ITEM_NONE, ball = ITEM_MASTER_BALL, hpEv = 248, atkEv = 0, defEv = 172, speedEv = 88, spAtkEv = 0, spDefEv = 0, move1 = MOVE_EARTHQUAKE, move2 = MOVE_POISON_JAB, move3 = MOVE_CRUNCH, move4 = MOVE_ICE_BEAM
# 965 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Pokeball_EventScript_Demo19_5
# 973 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Pokeball_EventScript_Demo19_6
# 982 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
# 983 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo1_Text_2
	goto Pokeball_EventScript_Demo19_1

Pokeball_EventScript_Demo19_5:
# 966 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 967 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo19_Text_1
# 968 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknamePartyMon
# 969 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 21
# 970 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_19
# 971 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo19_1

Pokeball_EventScript_Demo19_6:
# 974 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 975 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo19_Text_1
# 976 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknameBoxMon
# 977 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 21
# 978 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_19
# 979 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo19_1


Pokeball_EventScript_Demo20::
# 998 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lockall
# 999 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	showmonpic SPECIES_LUXRAY, 10, 3
# 1000 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo20_Text_0, MSGBOX_YESNO
# 1001 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pokeball_EventScript_Demo20_2
# 1027 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
Pokeball_EventScript_Demo20_1:
# 1031 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	releaseall
	end

Pokeball_EventScript_Demo20_2:
# 1002 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	givemon SPECIES_LUXRAY, 55, item = ITEM_NONE, ball = ITEM_MASTER_BALL, hpEv = 252, atkEv = 4, defEv = 0, speedEv = 0, spAtkEv = 252, spDefEv = 0, move1 = MOVE_PLAY_ROUGH, move2 = MOVE_THROAT_CHOP, move3 = MOVE_PSYCHIC_FANGS, move4 = MOVE_THUNDERBOLT
# 1003 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Pokeball_EventScript_Demo20_5
# 1011 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Pokeball_EventScript_Demo20_6
# 1020 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
# 1021 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo1_Text_2
	goto Pokeball_EventScript_Demo20_1

Pokeball_EventScript_Demo20_5:
# 1004 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1005 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo20_Text_1
# 1006 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknamePartyMon
# 1007 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 22
# 1008 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_20
# 1009 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo20_1

Pokeball_EventScript_Demo20_6:
# 1012 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1013 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo20_Text_1
# 1014 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknameBoxMon
# 1015 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 22
# 1016 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_20
# 1017 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo20_1


Pokeball_EventScript_Demo21::
# 1036 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lockall
# 1037 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	showmonpic SPECIES_HAWLUCHA, 10, 3
# 1038 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo21_Text_0, MSGBOX_YESNO
# 1039 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pokeball_EventScript_Demo21_2
# 1065 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
Pokeball_EventScript_Demo21_1:
# 1069 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	releaseall
	end

Pokeball_EventScript_Demo21_2:
# 1040 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	givemon SPECIES_HAWLUCHA, 55, item = ITEM_NONE, ball = ITEM_MASTER_BALL, hpEv = 0, atkEv = 252, defEv = 0, speedEv = 252, spAtkEv = 0, spDefEv = 4, move1 = MOVE_ACROBATICS, move2 = MOVE_SWORDS_DANCE, move3 = MOVE_THUNDER_PUNCH, move4 = MOVE_CROSS_CHOP
# 1041 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Pokeball_EventScript_Demo21_5
# 1049 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Pokeball_EventScript_Demo21_6
# 1058 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
# 1059 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo1_Text_2
	goto Pokeball_EventScript_Demo21_1

Pokeball_EventScript_Demo21_5:
# 1042 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1043 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo21_Text_1
# 1044 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknamePartyMon
# 1045 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 23
# 1046 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_21
# 1047 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo21_1

Pokeball_EventScript_Demo21_6:
# 1050 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1051 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo21_Text_1
# 1052 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknameBoxMon
# 1053 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 23
# 1054 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_21
# 1055 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo21_1


Pokeball_EventScript_Demo22::
# 1074 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lockall
# 1075 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	showmonpic SPECIES_LANTURN, 10, 3
# 1076 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo22_Text_0, MSGBOX_YESNO
# 1077 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pokeball_EventScript_Demo22_2
# 1103 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
Pokeball_EventScript_Demo22_1:
# 1107 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	releaseall
	end

Pokeball_EventScript_Demo22_2:
# 1078 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	givemon SPECIES_LANTURN, 55, item = ITEM_NONE, ball = ITEM_MASTER_BALL, hpEv = 252, atkEv = 4, defEv = 0, speedEv = 0, spAtkEv = 252, spDefEv = 0, move1 = MOVE_THUNDERBOLT, move2 = MOVE_SCALD, move3 = MOVE_AQUA_RING, move4 = MOVE_DAZZLING_GLEAM
# 1079 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Pokeball_EventScript_Demo22_5
# 1087 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Pokeball_EventScript_Demo22_6
# 1096 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
# 1097 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo1_Text_2
	goto Pokeball_EventScript_Demo22_1

Pokeball_EventScript_Demo22_5:
# 1080 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1081 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo22_Text_1
# 1082 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknamePartyMon
# 1083 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 24
# 1084 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_22
# 1085 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo22_1

Pokeball_EventScript_Demo22_6:
# 1088 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1089 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo22_Text_1
# 1090 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknameBoxMon
# 1091 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 24
# 1092 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_22
# 1093 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo22_1


Pokeball_EventScript_Demo23::
# 1112 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lockall
# 1113 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	showmonpic SPECIES_EXEGGUTOR, 10, 3
# 1114 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo23_Text_0, MSGBOX_YESNO
# 1115 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pokeball_EventScript_Demo23_2
# 1141 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
Pokeball_EventScript_Demo23_1:
# 1145 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	releaseall
	end

Pokeball_EventScript_Demo23_2:
# 1116 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	givemon SPECIES_EXEGGUTOR, 55, item = ITEM_NONE, ball = ITEM_MASTER_BALL, hpEv = 252, atkEv = 4, defEv = 0, speedEv = 0, spAtkEv = 252, spDefEv = 0, move1 = MOVE_LEECH_SEED, move2 = MOVE_ENERGY_BALL, move3 = MOVE_PSYCHIC, move4 = MOVE_ANCIENT_POWER
# 1117 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Pokeball_EventScript_Demo23_5
# 1125 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Pokeball_EventScript_Demo23_6
# 1134 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
# 1135 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo1_Text_2
	goto Pokeball_EventScript_Demo23_1

Pokeball_EventScript_Demo23_5:
# 1118 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1119 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo23_Text_1
# 1120 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknamePartyMon
# 1121 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 25
# 1122 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_23
# 1123 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo23_1

Pokeball_EventScript_Demo23_6:
# 1126 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1127 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo23_Text_1
# 1128 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknameBoxMon
# 1129 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 25
# 1130 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_23
# 1131 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo23_1


Pokeball_EventScript_Demo24::
# 1150 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	lockall
# 1151 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	showmonpic SPECIES_GARCHOMP, 10, 3
# 1152 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo24_Text_0, MSGBOX_YESNO
# 1153 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pokeball_EventScript_Demo24_2
# 1179 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
Pokeball_EventScript_Demo24_1:
# 1183 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	releaseall
	end

Pokeball_EventScript_Demo24_2:
# 1154 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	givemon SPECIES_GARCHOMP, 55, item = ITEM_NONE, ball = ITEM_MASTER_BALL, hpEv = 0, atkEv = 252, defEv = 4, speedEv = 252, spAtkEv = 0, spDefEv = 0, move1 = MOVE_DRAGON_CLAW, move2 = MOVE_EARTHQUAKE, move3 = MOVE_IRON_HEAD, move4 = MOVE_FIRE_BLAST
# 1155 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Pokeball_EventScript_Demo24_5
# 1163 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Pokeball_EventScript_Demo24_6
# 1172 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	hidemonpic
# 1173 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo1_Text_2
	goto Pokeball_EventScript_Demo24_1

Pokeball_EventScript_Demo24_5:
# 1156 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1157 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo24_Text_1
# 1158 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknamePartyMon
# 1159 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 26
# 1160 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_24
# 1161 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo24_1

Pokeball_EventScript_Demo24_6:
# 1164 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1165 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	msgbox Pokeball_EventScript_Demo24_Text_1
# 1166 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call NicknameBoxMon
# 1167 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	removeobject 26
# 1168 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	setflag FLAG_POKEBALL_24
# 1169 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	call SetFlags_EventScript_Demo
	goto Pokeball_EventScript_Demo24_1


Demo_Mart_Text_0:
# 18 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "AMY: Welcome to the Merch Stand, what \ncan I get for you?$"

Demo_Mart_Text_1:
# 21 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Good luck, babe!$"

Demo_Sign_Text_0:
# 29 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Rewards Preview\p"
	.string "Aurora: 100,000\p"
	.string "Emily: 120,000\p"
	.string "Lizzie: 150,000\p"
	.string "Georgia: 180,000\p"
	.string "Abigail: Dinner Guest List!$"

GivePlayerGod_Text_0:
# 195 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Received all 8 Gym Badges!$"

GivePlayerGod_Text_1:
# 197 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "They don't look as cool as my famous\nGob Pins but they'll come in handy.\pAlso take these: $"

NicknamePartyMon_Text_0:
# 248 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Give it a nickname?$"

EventScript_VipRoom_Text_0:
# 268 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Sorry pal, only VIP's allowed in the\n"
	.string "lounge area.$"

Pokeball_EventScript_Demo1_Text_0:
# 277 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Do you want to choose \nFire/Fighting type Infernape?$"

Pokeball_EventScript_Demo1_Text_1:
# 282 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Received Infernape!$"

Pokeball_EventScript_Demo1_Text_2:
# 298 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "No More Room$"

Pokeball_EventScript_Demo2_Text_0:
# 315 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Do you want to choose \nWater/Fairy type Azumarill?$"

Pokeball_EventScript_Demo2_Text_1:
# 320 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Received Azumarill!$"

Pokeball_EventScript_Demo3_Text_0:
# 354 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Do you want to choose \nElectric/Steel type Magnezone?$"

Pokeball_EventScript_Demo3_Text_1:
# 359 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Received Magnezone!$"

Pokeball_EventScript_Demo4_Text_0:
# 392 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Do you want to choose \nSteel/Psychic type Metagross?$"

Pokeball_EventScript_Demo4_Text_1:
# 397 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Received Metagross!$"

Pokeball_EventScript_Demo5_Text_0:
# 430 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Do you want to choose \nDark type Umbreon?$"

Pokeball_EventScript_Demo5_Text_1:
# 435 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Received Umbreon!$"

Pokeball_EventScript_Demo6_Text_0:
# 468 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Do you want to choose \nBug/Poison type Scolipede?$"

Pokeball_EventScript_Demo6_Text_1:
# 473 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Received Scolipede!$"

Pokeball_EventScript_Demo7_Text_0:
# 506 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Do you want to choose \nWater/Steel type Empoleon?$"

Pokeball_EventScript_Demo7_Text_1:
# 511 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Received Empoleon!$"

Pokeball_EventScript_Demo8_Text_0:
# 544 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Do you want to choose \nElectric type Eelektross?$"

Pokeball_EventScript_Demo8_Text_1:
# 549 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Received Eelektross!$"

Pokeball_EventScript_Demo9_Text_0:
# 582 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Do you want to choose \nGrass/Steel type Ferrothorn?$"

Pokeball_EventScript_Demo9_Text_1:
# 587 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Received Ferrothorn!$"

Pokeball_EventScript_Demo10_Text_0:
# 620 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Do you want to choose \nSteel/Ghost type Aegislash?$"

Pokeball_EventScript_Demo10_Text_1:
# 625 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Received Aegislash!$"

Pokeball_EventScript_Demo11_Text_0:
# 658 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Do you want to choose \nFire/Flying type Talonflame?$"

Pokeball_EventScript_Demo11_Text_1:
# 663 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Received Talonflame!$"

Pokeball_EventScript_Demo12_Text_0:
# 696 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Do you want to choose \nPsychic/Fighting type Gallade ?$"

Pokeball_EventScript_Demo12_Text_1:
# 701 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Received Gallade!$"

Pokeball_EventScript_Demo13_Text_0:
# 734 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Do you want to choose \nGrass/Poison type Venusaur?$"

Pokeball_EventScript_Demo13_Text_1:
# 739 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Received Venusaur!$"

Pokeball_EventScript_Demo14_Text_0:
# 772 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Do you want to choose \nRock type Lycanroc?$"

Pokeball_EventScript_Demo14_Text_1:
# 777 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Received Lycanroc!$"

Pokeball_EventScript_Demo15_Text_0:
# 810 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Do you want to choose \nPsychic/Fairy type Hatterene?$"

Pokeball_EventScript_Demo15_Text_1:
# 815 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Received Hatterene!$"

Pokeball_EventScript_Demo16_Text_0:
# 848 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Do you want to choose \nWater/Dragon type Kingdra?$"

Pokeball_EventScript_Demo16_Text_1:
# 853 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Received Kingdra!$"

Pokeball_EventScript_Demo17_Text_0:
# 886 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Do you want to choose \nFire type Arcanine ?$"

Pokeball_EventScript_Demo17_Text_1:
# 891 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Received Arcanine!$"

Pokeball_EventScript_Demo18_Text_0:
# 924 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Do you want to choose \nRock/Dark type Tyranitar ?$"

Pokeball_EventScript_Demo18_Text_1:
# 929 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Received Tyranitar!$"

Pokeball_EventScript_Demo19_Text_0:
# 962 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Do you want to choose \nGround/Poison type Nidoqueen?$"

Pokeball_EventScript_Demo19_Text_1:
# 967 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Received Nidoqueen!$"

Pokeball_EventScript_Demo20_Text_0:
# 1000 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Do you want to choose \nElectric type Luxray?$"

Pokeball_EventScript_Demo20_Text_1:
# 1005 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Received Luxray!$"

Pokeball_EventScript_Demo21_Text_0:
# 1038 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Do you want to choose \nFighting/Flying type Hawlucha ?$"

Pokeball_EventScript_Demo21_Text_1:
# 1043 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Received Hawlucha!$"

Pokeball_EventScript_Demo22_Text_0:
# 1076 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Do you want to choose \nWater/Electric type Lanturn ?$"

Pokeball_EventScript_Demo22_Text_1:
# 1081 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Received Lanturn!$"

Pokeball_EventScript_Demo23_Text_0:
# 1114 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Do you want to choose \nGrass/Psychic type Exeggutor ?$"

Pokeball_EventScript_Demo23_Text_1:
# 1119 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Received Exeggutor!$"

Pokeball_EventScript_Demo24_Text_0:
# 1152 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Do you want to choose \nDragon/Ground type Garchomp ?$"

Pokeball_EventScript_Demo24_Text_1:
# 1157 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "Received Garchomp!$"

MartBattery::
# 35 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "AMY: Welcome to the Merch Stand, what \n"
	.string "can I get for you?\p"
	.string "Oh, Nora needs a fresh camera battery? \p"
	.string "Sorry hun, but we don't stock them \n"
	.string "in here!\p"
	.string "You best go tell her we don't have \n"
	.string "any.$"

NessStrategy::
# 67 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "NESS: Hi! My name's Ness, nice to \n"
	.string "meet you. \p"
	.string "You're here to take on the band too? \p"
	.string "I made it all the way to Lizzie but \n"
	.string "then they stomped me! \p"
	.string "I gotta rethink my strategy…$"

GoblinPick::
# 93 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "GOBLIN: Pick your team out of these \n"
	.string "guys over there!\p"
	.string "The band are absolute killers,\n"
	.string "you're gonna need a whooole lotta\l"
	.string "nerve to beat them!$"

GoblinGive_Ready::
# 145 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "GOBLIN: Are you ready to challenge\n"
	.string "The Last Dinner Party?\p"
	.string "I heard they'll invite you to their\n"
	.string "show if you manage to beat them \l"
	.string "all in one go. \p"
	.string "I'm Goblin by the way,\n"
	.string "I'll be at the show too!\p"
	.string "Anyway you'll need these:$"

GoblinGive_GoGetem::
# 156 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "You're all set, go show 'em who's\n"
	.string "the real gunslinger!$"

GoblinStop_Text::
# 233 "data/maps/EverGrandeCity_DemoStarter/scripts.pory"
	.string "GOBLIN: Are you trying to challenge \n"
	.string "the band to POKéMON battles…\l"
	.string "without POKéMON? \p"
	.string "That won't do!\p"
	.string "Go pick your team out of these guys\n"
	.string "over there.$"

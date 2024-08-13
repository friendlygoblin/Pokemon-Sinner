EverGrandeCity_DemoStarter_MapScripts::
	.byte 0

Demo_Mart::
	lock
	faceplayer
	addmoney 50000
	message Demo_Mart_Text_0
	waitmessage
	pokemart Demo_MartItems
	msgbox Demo_Mart_Text_1
	release
	end


	.align 2
Demo_MartItems:
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_MEGA_RING
	.2byte ITEM_GALLADITE
	.2byte ITEM_NONE

Nurse_EventScript_Demo::
	lock
	applymovement 1, Common_Movement_FacePlayer
	msgbox Nurse_EventScript_Demo_Text_0
	release
	end


NurseGive_EventScript_Demo1::
	lockall
	applymovement 1, NurseGive_1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, playerFace1
	waitmovement 0
	msgbox NurseGive_EventScript_Demo1_Text_0
	call GivePlayerGod
	msgbox NurseGive_EventScript_Demo1_Text_1
	applymovement 1, NurseBack_1
	waitmovement 0
	setvar VAR_DEMO_STATE, 2
	releaseall
	end


NurseGive_EventScript_Demo2::
	lockall
	applymovement 1, NurseGive_2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, playerFace1
	waitmovement 0
	msgbox NurseGive_EventScript_Demo1_Text_0
	call GivePlayerGod
	msgbox NurseGive_EventScript_Demo1_Text_1
	applymovement 1, NurseBack_2
	waitmovement 0
	setvar VAR_DEMO_STATE, 2
	releaseall
	end


playerFace1:
	face_right
	step_end

playerBack:
	walk_down
	step_end

NurseGive_1:
	face_left
	step_end

NurseGive_2:
	face_left
	walk_left
	step_end

NurseBack_1:
	face_down
	step_end

NurseBack_2:
	walk_right
	face_down
	step_end

GivePlayerGod::
	setflag FLAG_BADGE01_GET
	setflag FLAG_BADGE02_GET
	setflag FLAG_BADGE03_GET
	setflag FLAG_BADGE04_GET
	setflag FLAG_BADGE05_GET
	setflag FLAG_BADGE06_GET
	setflag FLAG_BADGE07_GET
	setflag FLAG_BADGE08_GET
	playfanfare MUS_OBTAIN_ITEM
	msgbox GivePlayerGod_Text_0
	waitmessage
	msgbox GivePlayerGod_Text_1
	giveitem ITEM_MAX_REVIVE, amount = 5
	giveitem ITEM_HYPER_POTION, amount = 10
	giveitem ITEM_FULL_RESTORE, amount = 10
	return


NurseStop_EventScript_Demo1::
	lockall
	applymovement 1, NurseGive_1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, playerFace1
	waitmovement 0
	msgbox NurseStop_EventScript_Demo1_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, playerBack
	waitmovement 0
	applymovement 1, NurseBack_1
	waitmovement 0
	releaseall
	end


NurseStop_EventScript_Demo2::
	lockall
	applymovement 1, NurseGive_2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, playerFace1
	waitmovement 0
	msgbox NurseStop_EventScript_Demo1_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, playerBack
	waitmovement 0
	applymovement 1, NurseBack_2
	waitmovement 0
	releaseall
	end


EverGradeCity_DemoStarter_OnTransition::
	setrespawn HEAL_LOCATION_EVERGRANDECITY_DEMOSTARTER
	end


NicknamePartyMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


Pokeball_EventScript_Demo1::
	lockall
	showmonpic SPECIES_INFERNAPE, 10, 3
	msgbox Pokeball_EventScript_Demo1_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Pokeball_EventScript_Demo1_2
	hidemonpic
Pokeball_EventScript_Demo1_1:
	setvar VAR_DEWFORD_TOWN_STATE, 1
	compare VAR_DEMO_STATE, 0
	goto_if_eq Pokeball_EventScript_Demo1_6
Pokeball_EventScript_Demo1_5:
	releaseall
	end

Pokeball_EventScript_Demo1_2:
	givemon SPECIES_INFERNAPE, 55, item = ITEM_NONE, ball = ITEM_MASTER_BALL, hpEv = 20, speedEv = 20, atkEv = 20, move1 = MOVE_FLARE_BLITZ, move2 = MOVE_CLOSE_COMBAT, move3 = MOVE_U_TURN, move4 = MOVE_THUNDER_PUNCH
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Pokeball_EventScript_Demo1_8
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Pokeball_EventScript_Demo1_9
	hidemonpic
	msgbox Pokeball_EventScript_Demo1_Text_2
	goto Pokeball_EventScript_Demo1_1

Pokeball_EventScript_Demo1_6:
	setvar VAR_DEMO_STATE, 1
	setflag FLAG_ADVENTURE_STARTED
	setflag FLAG_SYS_POKEDEX_GET
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
	setflag FLAG_SYS_POKEMON_GET
	goto Pokeball_EventScript_Demo1_5

Pokeball_EventScript_Demo1_8:
	playfanfare MUS_OBTAIN_ITEM
	msgbox Pokeball_EventScript_Demo1_Text_1
	call NicknamePartyMon
	removeobject 2
	setflag FLAG_POKEBALL_1
	goto Pokeball_EventScript_Demo1_1

Pokeball_EventScript_Demo1_9:
	playfanfare MUS_OBTAIN_ITEM
	msgbox Pokeball_EventScript_Demo1_Text_1
	call NicknameBoxMon
	removeobject 2
	setflag FLAG_POKEBALL_1
	goto Pokeball_EventScript_Demo1_1


Pokeball_EventScript_Demo2::
	lockall
	showmonpic SPECIES_AZUMARILL, 10, 3
	msgbox Pokeball_EventScript_Demo2_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Pokeball_EventScript_Demo2_2
	hidemonpic
Pokeball_EventScript_Demo2_1:
	setvar VAR_DEWFORD_TOWN_STATE, 1
	compare VAR_DEMO_STATE, 0
	goto_if_eq Pokeball_EventScript_Demo2_6
Pokeball_EventScript_Demo2_5:
	releaseall
	end

Pokeball_EventScript_Demo2_2:
	givemon SPECIES_AZUMARILL, 55, item = ITEM_NONE, ball = ITEM_POKE_BALL, move1 = MOVE_LIQUIDATION, move2 = MOVE_PLAY_ROUGH, move3 = MOVE_AQUA_JET, move4 = MOVE_ICE_PUNCH
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Pokeball_EventScript_Demo2_8
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Pokeball_EventScript_Demo2_9
	hidemonpic
	msgbox Pokeball_EventScript_Demo1_Text_2
	goto Pokeball_EventScript_Demo2_1

Pokeball_EventScript_Demo2_6:
	setvar VAR_DEMO_STATE, 1
	setflag FLAG_ADVENTURE_STARTED
	setflag FLAG_SYS_POKEDEX_GET
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
	setflag FLAG_SYS_POKEMON_GET
	goto Pokeball_EventScript_Demo2_5

Pokeball_EventScript_Demo2_8:
	playfanfare MUS_OBTAIN_ITEM
	msgbox Pokeball_EventScript_Demo2_Text_1
	call NicknamePartyMon
	removeobject 3
	setflag FLAG_POKEBALL_2
	goto Pokeball_EventScript_Demo2_1

Pokeball_EventScript_Demo2_9:
	playfanfare MUS_OBTAIN_ITEM
	msgbox Pokeball_EventScript_Demo2_Text_1
	call NicknameBoxMon
	removeobject 3
	setflag FLAG_POKEBALL_2
	goto Pokeball_EventScript_Demo2_1


Demo_Mart_Text_0:
	.string "Welcome to Amy's Shop, What can I get\n"
	.string "for you?$"

Demo_Mart_Text_1:
	.string "Good Luck Babe!$"

Nurse_EventScript_Demo_Text_0:
	.string "Go ahead and choose some pokemon!$"

NurseGive_EventScript_Demo1_Text_0:
	.string "Hey! It's me! Goblin! So your here to\n"
	.string "challange The Last Dinner Party too?\l"
	.string "You'll be needing these if you wana\l"
	.string "take on the band!$"

NurseGive_EventScript_Demo1_Text_1:
	.string "Your all set, go show em who's the real\n"
	.string "gunslinger!$"

GivePlayerGod_Text_0:
	.string "Recieved all 8 Gym Badges!$"

GivePlayerGod_Text_1:
	.string "and a few of these couldn't hurt either!$"

NurseStop_EventScript_Demo1_Text_0:
	.string "You need to pick some Pokemon!$"

NicknamePartyMon_Text_0:
	.string "Give it a nickname?$"

Pokeball_EventScript_Demo1_Text_0:
	.string "Do you want to choose Infernape?$"

Pokeball_EventScript_Demo1_Text_1:
	.string "Recieved Infernape$"

Pokeball_EventScript_Demo1_Text_2:
	.string "No More Room$"

Pokeball_EventScript_Demo2_Text_0:
	.string "Do you want to choose Azumarill?$"

Pokeball_EventScript_Demo2_Text_1:
	.string "Recieved Azumarill$"

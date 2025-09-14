BigDogIsland_Cave_2F_MapScripts::
	.byte 0


BDI_Fossil::
# 7 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	lock
# 8 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	msgbox BDI_Fossil_Text_0
# 10 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	dynmultipush BDI_Fossil_Text_1, ITEM_SKULL_FOSSIL
# 11 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	dynmultipush BDI_Fossil_Text_2, ITEM_ARMOR_FOSSIL
# 12 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	dynmultipush BDI_Fossil_Text_3, ITEM_NONE
# 13 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 3, DYN_MULTICHOICE_CB_NONE
# 15 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	switch VAR_RESULT
# 16 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	case ITEM_SKULL_FOSSIL, BDI_Fossil_3
# 20 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	case ITEM_ARMOR_FOSSIL, BDI_Fossil_4
# 24 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	case ITEM_NONE, BDI_Fossil_5
# 28 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	release
	end

BDI_Fossil_1:
# 31 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	release
	end

BDI_Fossil_3:
# 17 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	giveitem ITEM_SKULL_FOSSIL
# 18 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	removeobject 1
# 19 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	setflag FLAG_BDI_FOSSILS
	goto BDI_Fossil_1

BDI_Fossil_4:
# 21 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	giveitem ITEM_ARMOR_FOSSIL
# 22 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	removeobject 1
# 23 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	setflag FLAG_BDI_FOSSILS
	goto BDI_Fossil_1

BDI_Fossil_5:
# 25 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	release
	end


BDI_Rora::
# 36 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	lock
# 37 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	faceplayer
# 38 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	compare VAR_BDI_DOG, 0
	goto_if_eq BDI_Rora_2
BDI_Rora_1:
# 68 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	release
	end

BDI_Rora_2:
# 39 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	setvar VAR_BDI_DOG, 1
# 40 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	msgbox BDI_RoraWhatchaDoingHere, MSGBOX_AUTOCLOSE
# 41 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	applymovement 3, BDI_RoraLookAtDogThenBack
# 42 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	waitmovement 0
# 43 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	msgbox BDI_RoraDogHurt, MSGBOX_YESNO
# 44 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BDI_Rora_5
# 59 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	msgbox BDI_RoraLeaveBerries, MSGBOX_AUTOCLOSE
BDI_Rora_4:
# 61 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 62 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	playse SE_EXIT
# 63 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	waitse
# 64 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	setflag FLAG_BDI_RORA
# 65 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	removeobject 3
# 66 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto BDI_Rora_1

BDI_Rora_5:
# 45 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 46 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq BDI_Rora_8
# 50 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	msgbox BDI_RoraTakeDog, MSGBOX_AUTOCLOSE
# 51 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	removeobject 2
# 52 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	setflag FLAG_BDI_DOG
# 53 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	givemon SPECIES_FENNEKIN, 5
# 54 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	setvar VAR_BDI_DOG, 2
# 55 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	msgbox BDI_RoraLeaves
	goto BDI_Rora_4

BDI_Rora_8:
# 47 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	msgbox BDI_RoraNotEnoughSpace, MSGBOX_AUTOCLOSE
	goto BDI_Rora_4


# 72 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
BDI_RoraLookAtDogThenBack:
# 73 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	walk_in_place_right
# 74 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	delay_16
# 75 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	face_player
# 76 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	step_end

BDI_Dog::
# 80 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	lock
# 81 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	faceplayer
# 82 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	switch VAR_BDI_DOG
# 83 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	case 0, BDI_Dog_3
# 87 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	case 1, BDI_Dog_4
# 103 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	case 2, BDI_Dog_5
# 105 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	case 3, BDI_Dog_6
BDI_Dog_1:
# 109 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	release
	end

BDI_Dog_3:
# 84 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	playmoncry SPECIES_FENNEKIN, CRY_MODE_WEAK
# 85 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	msgbox BDI_Dog_Text_0
# 86 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	waitmoncry
	goto BDI_Dog_1

BDI_Dog_4:
# 88 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	playmoncry SPECIES_FENNEKIN, CRY_MODE_WEAK
# 89 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	msgbox BDI_Dog_Text_1, MSGBOX_YESNO
# 90 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BDI_Dog_7
	goto BDI_Dog_1

BDI_Dog_5:
# 104 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	msgbox BDI_Dog_Text_4
	goto BDI_Dog_1

BDI_Dog_6:
# 106 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	msgbox BDI_Dog_Text_4
	goto BDI_Dog_1

BDI_Dog_7:
# 91 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 92 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq BDI_Dog_9
# 96 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	msgbox BDI_Dog_Text_3, MSGBOX_AUTOCLOSE
# 97 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	setflag FLAG_BDI_DOG
# 98 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	removeobject 2
# 99 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	givemon SPECIES_FENNEKIN, 5, ITEM_ORAN_BERRY
# 100 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	setvar VAR_BDI_DOG, 2
	goto BDI_Dog_1

BDI_Dog_9:
# 93 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	msgbox BDI_Dog_Text_2, MSGBOX_AUTOCLOSE
	goto BDI_Dog_1


BDI_Fossil_Text_0:
# 8 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	.string "It looks like this rock contains two\n"
	.string "fossils.\p"
	.string "You only have space in your bag for one,\n"
	.string "which one do you pick?$"

BDI_Fossil_Text_1:
# 10 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	.string "Skull Fossil$"

BDI_Fossil_Text_2:
# 11 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	.string "Armor Fossil$"

BDI_Fossil_Text_3:
# 12 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	.string "None, thanks!$"

BDI_Dog_Text_0:
# 85 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	.string "This poor POKéMON looks hurt.$"

BDI_Dog_Text_1:
# 89 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	.string "Aurora couldn't stay but she's counting\n"
	.string "on you to take care of the POKéMON.\p"
	.string "Take it in now?$"

BDI_Dog_Text_2:
# 93 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	.string "There isn't enough space in your party.\p"
	.string "Better come back after making room.$"

BDI_Dog_Text_3:
# 96 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	.string "The POKéMON seems to be happy to go\n"
	.string "with you!$"

BDI_Dog_Text_4:
# 104 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	.string "uhhhh this shouldn't be possible$"

BDI_RoraWhatchaDoingHere::
# 115 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	.string "AURORA: {PLAYER}? What are you doing \n"
	.string "here? \p"
	.string "You know what, that's not important \n"
	.string "right now. $"

BDI_RoraLeaveBerries::
# 122 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	.string "AURORA: Hmm… and I can't take it with\n"
	.string "me… \p"
	.string "I'll leave some berries here so it can \n"
	.string "hopefully get better on its own. \p"
	.string "I have to get going now, I hope it'll \n"
	.string "be okay.$"

BDI_RoraDogHurt::
# 131 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	.string "See, I was visiting the island when I\n"
	.string "heard noise in the cave, and I found \l"
	.string "this little one. \p"
	.string "I think it's hurt, I couldn't just \n"
	.string "leave it alone. \p"
	.string "Maybe you could take it to the Prelude \n"
	.string "Town shelter, they'll be able to take \l"
	.string "proper care of it. \p"
	.string "What do you say? $"

BDI_RoraNotEnoughSpace::
# 143 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	.string "Great! \p"
	.string "Oh… your team is full. \p"
	.string "Come back when you've made space, I \n"
	.string "can't stay forever so I'll leave \l"
	.string "some berries here. \p"
	.string "There's a POKéMON Centre with a PC \n"
	.string "outside the cave, I trust you! $"

BDI_RoraTakeDog::
# 153 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	.string "Perfect! \n"
	.string "Here, thank you for doing this. \p"
	.string "I know it's the second time a TLDP \n"
	.string "member is asking you to take a \l"
	.string "POKéMON in, so really thank you.$"

BDI_RoraLeaves::
# 161 "data/maps/BigDogIsland_Cave_2F/scripts.pory"
	.string "AURORA: I have to go now, see you in \n"
	.string "Mirror City! $"

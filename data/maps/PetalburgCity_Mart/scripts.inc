# 1 "data/maps/PetalburgCity_Mart/scripts.pory"

# 2 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_MapScripts::
# 3 "data/maps/PetalburgCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/PetalburgCity_Mart/scripts.pory"

# 5 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Clerk::
# 6 "data/maps/PetalburgCity_Mart/scripts.pory"
	lock
# 7 "data/maps/PetalburgCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/PetalburgCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/PetalburgCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/PetalburgCity_Mart/scripts.pory"
	goto_if_set FLAG_PETALBURG_MART_EXPANDED_ITEMS, PetalburgCity_Mart_EventScript_ExpandedItems
# 11 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemart PetalburgCity_Mart_Pokemart_Basic
# 12 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 13 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
# 14 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 15 "data/maps/PetalburgCity_Mart/scripts.pory"

# 16 "data/maps/PetalburgCity_Mart/scripts.pory"
	.align 2
# 17 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Pokemart_Basic:
# 18 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 19 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 20 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 21 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 22 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 23 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 24 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 25 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 26 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 27 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 28 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 29 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 30 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 31 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 32 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 33 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ORANGE_MAIL
# 34 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_NONE
# 35 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
# 36 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 37 "data/maps/PetalburgCity_Mart/scripts.pory"

# 38 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_ExpandedItems::
# 39 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemart PetalburgCity_Mart_Pokemart_Expanded
# 40 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 41 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
# 42 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 43 "data/maps/PetalburgCity_Mart/scripts.pory"

# 44 "data/maps/PetalburgCity_Mart/scripts.pory"
	.align 2
# 45 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Pokemart_Expanded:
# 46 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 47 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 48 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 49 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 50 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 51 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 52 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 53 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 54 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 55 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 56 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 57 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 58 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 59 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 60 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 61 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ORANGE_MAIL
# 62 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_NONE
# 63 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
# 64 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 65 "data/maps/PetalburgCity_Mart/scripts.pory"

# 66 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Woman::
# 67 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_WeakWillGrowStronger, MSGBOX_NPC
# 68 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 69 "data/maps/PetalburgCity_Mart/scripts.pory"

# 70 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Boy::
# 71 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_RepelIsUseful, MSGBOX_NPC
# 72 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 73 "data/maps/PetalburgCity_Mart/scripts.pory"

# 74 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Man::
# 75 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_TakeSomeAntidotesWithYou, MSGBOX_NPC
# 76 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 77 "data/maps/PetalburgCity_Mart/scripts.pory"

# 78 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_WeakWillGrowStronger:
# 79 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Even if a POKéMON is weak now,\n"
# 80 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "it will grow stronger.\p"
# 81 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "The most important thing is love!\n"
# 82 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Love for your POKéMON!$"
# 83 "data/maps/PetalburgCity_Mart/scripts.pory"

# 84 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_RepelIsUseful:
# 85 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Do you use REPEL?\n"
# 86 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "It keeps POKéMON away, so it's\l"
# 87 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "useful when you're in a hurry.$"
# 88 "data/maps/PetalburgCity_Mart/scripts.pory"

# 89 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_TakeSomeAntidotesWithYou:
# 90 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Do you have any ANTIDOTES with\n"
# 91 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "you?\p"
# 92 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "If you walk around with a poisoned\n"
# 93 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "POKéMON, it will lose HP until it faints.\l"
# 94 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Take some ANTIDOTES with you.$"

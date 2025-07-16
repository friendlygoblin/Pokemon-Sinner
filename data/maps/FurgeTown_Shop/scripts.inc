FurgeTown_Shop_MapScripts::
	.byte 0


FurgeTown_ShopGirl::
# 4 "data/maps/FurgeTown_Shop/scripts.pory"
	lock
# 5 "data/maps/FurgeTown_Shop/scripts.pory"
	faceplayer
# 6 "data/maps/FurgeTown_Shop/scripts.pory"
	msgbox FurgeTown_ShopGirl_Text_0, MSGBOX_AUTOCLOSE
# 7 "data/maps/FurgeTown_Shop/scripts.pory"
	releaseall
	end


FurgeTown_House1_EventScript_Kecleon::
# 12 "data/maps/FurgeTown_Shop/scripts.pory"
	lock
# 13 "data/maps/FurgeTown_Shop/scripts.pory"
	faceplayer
# 14 "data/maps/FurgeTown_Shop/scripts.pory"
	waitse
# 15 "data/maps/FurgeTown_Shop/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_NORMAL
# 16 "data/maps/FurgeTown_Shop/scripts.pory"
	msgbox FurgeTown_House1_EventScript_Kecleon_Text_0, MSGBOX_DEFAULT
# 17 "data/maps/FurgeTown_Shop/scripts.pory"
	waitmoncry
# 18 "data/maps/FurgeTown_Shop/scripts.pory"
	release
	end


FurgeTown_Granny::
# 22 "data/maps/FurgeTown_Shop/scripts.pory"
	lock
# 23 "data/maps/FurgeTown_Shop/scripts.pory"
	message FurgeTown_Granny_Text_0
# 24 "data/maps/FurgeTown_Shop/scripts.pory"
	waitmessage
# 25 "data/maps/FurgeTown_Shop/scripts.pory"
	pokemart GrannyMart
# 26 "data/maps/FurgeTown_Shop/scripts.pory"
	msgbox GrannyThanks
# 27 "data/maps/FurgeTown_Shop/scripts.pory"
	release
	end


	.align 2
# 31 "data/maps/FurgeTown_Shop/scripts.pory"
GrannyMart:
# 32 "data/maps/FurgeTown_Shop/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 33 "data/maps/FurgeTown_Shop/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 34 "data/maps/FurgeTown_Shop/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 35 "data/maps/FurgeTown_Shop/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 36 "data/maps/FurgeTown_Shop/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 37 "data/maps/FurgeTown_Shop/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
	.2byte ITEM_NONE

FurgeTown_ShopGirl_Text_0:
# 6 "data/maps/FurgeTown_Shop/scripts.pory"
	.string "Granny's herbal remedies are very\n"
	.string "effective, you know.\p"
	.string "But they taste bad, so POKéMON dislike\n"
	.string "them.\p"
	.string "They might be annoyed at you when you\n"
	.string "use them.$"

FurgeTown_House1_EventScript_Kecleon_Text_0:
# 16 "data/maps/FurgeTown_Shop/scripts.pory"
	.string "KECLEON: Kleeee!$"

FurgeTown_Granny_Text_0:
# 23 "data/maps/FurgeTown_Shop/scripts.pory"
	.string "I sell organic medicine straight from\n"
	.string "the forest. What do you want?$"

GrannyThanks::
# 40 "data/maps/FurgeTown_Shop/scripts.pory"
	.string "Here you go.\p"
	.string "Come back soon.$"

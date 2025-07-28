# 1 "data/maps/LilycoveCity_UnusedMart/scripts.pory"

# 2 "data/maps/LilycoveCity_UnusedMart/scripts.pory"
LilycoveCity_UnusedMart_MapScripts::
# 3 "data/maps/LilycoveCity_UnusedMart/scripts.pory"
	.byte 0

CrystalStreamCity_Mart_EventScript_Clerk::
# 7 "data/maps/LilycoveCity_UnusedMart/scripts.pory"
	lock
# 8 "data/maps/LilycoveCity_UnusedMart/scripts.pory"
	faceplayer
# 9 "data/maps/LilycoveCity_UnusedMart/scripts.pory"
	message gText_HowMayIServeYou
# 10 "data/maps/LilycoveCity_UnusedMart/scripts.pory"
	waitmessage
# 11 "data/maps/LilycoveCity_UnusedMart/scripts.pory"
	pokemart CrystalStreamCity_Mart_Pokemart
# 12 "data/maps/LilycoveCity_UnusedMart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 13 "data/maps/LilycoveCity_UnusedMart/scripts.pory"
	release
	end


	.align 2
# 17 "data/maps/LilycoveCity_UnusedMart/scripts.pory"
CrystalStreamCity_Mart_Pokemart:
# 18 "data/maps/LilycoveCity_UnusedMart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 19 "data/maps/LilycoveCity_UnusedMart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 20 "data/maps/LilycoveCity_UnusedMart/scripts.pory"
	.2byte ITEM_POTION
# 21 "data/maps/LilycoveCity_UnusedMart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 22 "data/maps/LilycoveCity_UnusedMart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 23 "data/maps/LilycoveCity_UnusedMart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 24 "data/maps/LilycoveCity_UnusedMart/scripts.pory"
	.2byte ITEM_AWAKENING
# 25 "data/maps/LilycoveCity_UnusedMart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 26 "data/maps/LilycoveCity_UnusedMart/scripts.pory"
	.2byte ITEM_REPEL
# 27 "data/maps/LilycoveCity_UnusedMart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

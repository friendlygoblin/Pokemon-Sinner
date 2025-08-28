MercyTown_RockShop_MapScripts::
	.byte 0


	.align 2
# 3 "data/maps/MercyTown_RockShop/scripts.pory"
RockMart:
# 4 "data/maps/MercyTown_RockShop/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 5 "data/maps/MercyTown_RockShop/scripts.pory"
	.2byte ITEM_EVIOLITE
# 6 "data/maps/MercyTown_RockShop/scripts.pory"
	.2byte ITEM_EVERSTONE
# 7 "data/maps/MercyTown_RockShop/scripts.pory"
	.2byte ITEM_WATER_STONE
# 8 "data/maps/MercyTown_RockShop/scripts.pory"
	.2byte ITEM_SUN_STONE
# 9 "data/maps/MercyTown_RockShop/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 10 "data/maps/MercyTown_RockShop/scripts.pory"
	.2byte ITEM_MOON_STONE
# 11 "data/maps/MercyTown_RockShop/scripts.pory"
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_NONE

RockSellerDude::
# 50 "data/maps/MercyTown_RockShop/scripts.pory"
	lock
# 51 "data/maps/MercyTown_RockShop/scripts.pory"
	faceplayer
# 52 "data/maps/MercyTown_RockShop/scripts.pory"
	compare VAR_SAILORTOWN_NORA, 2
	goto_if_eq RockSellerDude_2
# 60 "data/maps/MercyTown_RockShop/scripts.pory"
	message SellRocks
# 61 "data/maps/MercyTown_RockShop/scripts.pory"
	waitmessage
# 62 "data/maps/MercyTown_RockShop/scripts.pory"
	pokemart RockMart
# 63 "data/maps/MercyTown_RockShop/scripts.pory"
	msgbox ExplainRocks, MSGBOX_AUTOCLOSE
# 64 "data/maps/MercyTown_RockShop/scripts.pory"
	release
	end

RockSellerDude_2:
# 53 "data/maps/MercyTown_RockShop/scripts.pory"
	msgbox NoticeMegaRing
# 54 "data/maps/MercyTown_RockShop/scripts.pory"
	giveitem ITEM_AMPHAROSITE
# 55 "data/maps/MercyTown_RockShop/scripts.pory"
	msgbox ExplainMegaStones, MSGBOX_AUTOCLOSE
# 56 "data/maps/MercyTown_RockShop/scripts.pory"
	setvar VAR_SAILORTOWN_NORA, 3
# 57 "data/maps/MercyTown_RockShop/scripts.pory"
	release
	end


RockShop_LittleGirl::
# 69 "data/maps/MercyTown_RockShop/scripts.pory"
	lock
# 70 "data/maps/MercyTown_RockShop/scripts.pory"
	faceplayer
# 71 "data/maps/MercyTown_RockShop/scripts.pory"
	msgbox DadSellsRocks, MSGBOX_AUTOCLOSE
# 72 "data/maps/MercyTown_RockShop/scripts.pory"
	releaseall
	end


SellRocks::
# 14 "data/maps/MercyTown_RockShop/scripts.pory"
	.string "Hello! \p"
	.string "I sell rocks! \p"
	.string "Have a look, they all have cool \n"
	.string "effects!$"

ExplainRocks::
# 21 "data/maps/MercyTown_RockShop/scripts.pory"
	.string "Alright! \p"
	.string "Rocks are fascinating, some make POKéMON \n"
	.string "stronger, others make them evolve… \p"
	.string "Come back$"

NoticeMegaRing::
# 28 "data/maps/MercyTown_RockShop/scripts.pory"
	.string "Hello! \p"
	.string "I sell rocks! \p"
	.string "Oh! is this a Mega-Ring? \p"
	.string "Then you must be interested in Mega \n"
	.string "Stones! \p"
	.string "I only have one to spare right now, \n"
	.string "but I'm feeling generous so here you \l"
	.string "go!$"

ExplainMegaStones::
# 39 "data/maps/MercyTown_RockShop/scripts.pory"
	.string "If you have an Ampharos and give it \n"
	.string "this stone to hold, you'll be able to \l"
	.string "Mega-Evolve it! \p"
	.string "Mega-Stones are rare and not every \n"
	.string "POKéMON can Mega-Evolve, but they are \l"
	.string "worth the search!$"

DadSellsRocks::
# 76 "data/maps/MercyTown_RockShop/scripts.pory"
	.string "My dad loves rocks so much. \p"
	.string "He finds most of them in the Sunday \n"
	.string "Cave. \p"
	.string "Maybe you'll find some too if you go \n"
	.string "there… \p"
	.string "Or you can just buy from him!$"

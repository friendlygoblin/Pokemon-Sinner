MercyTown_RockShop_MapScripts::
	.byte 0


	.align 2
# 3 "data/maps/MercyTown_RockShop/scripts.pory"
RockMart_NoMega:
# 4 "data/maps/MercyTown_RockShop/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 5 "data/maps/MercyTown_RockShop/scripts.pory"
	.2byte ITEM_EVIOLITE
# 6 "data/maps/MercyTown_RockShop/scripts.pory"
	.2byte ITEM_EVERSTONE
# 7 "data/maps/MercyTown_RockShop/scripts.pory"
	.2byte ITEM_WATER_STONE
# 8 "data/maps/MercyTown_RockShop/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 9 "data/maps/MercyTown_RockShop/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 10 "data/maps/MercyTown_RockShop/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 11 "data/maps/MercyTown_RockShop/scripts.pory"
	.2byte ITEM_MOON_STONE
	.2byte ITEM_NONE

	.align 2
# 14 "data/maps/MercyTown_RockShop/scripts.pory"
RockMart_Mega:
# 15 "data/maps/MercyTown_RockShop/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 16 "data/maps/MercyTown_RockShop/scripts.pory"
	.2byte ITEM_EVIOLITE
# 17 "data/maps/MercyTown_RockShop/scripts.pory"
	.2byte ITEM_EVERSTONE
# 18 "data/maps/MercyTown_RockShop/scripts.pory"
	.2byte ITEM_WATER_STONE
# 19 "data/maps/MercyTown_RockShop/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 20 "data/maps/MercyTown_RockShop/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 21 "data/maps/MercyTown_RockShop/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 22 "data/maps/MercyTown_RockShop/scripts.pory"
	.2byte ITEM_MOON_STONE
# 23 "data/maps/MercyTown_RockShop/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 24 "data/maps/MercyTown_RockShop/scripts.pory"
	.2byte ITEM_ALTARIANITE
# 25 "data/maps/MercyTown_RockShop/scripts.pory"
	.2byte ITEM_SALAMENCITE
# 26 "data/maps/MercyTown_RockShop/scripts.pory"
	.2byte ITEM_STEELIXITE
	.2byte ITEM_NONE

RockSellerDude::
# 69 "data/maps/MercyTown_RockShop/scripts.pory"
	lock
# 70 "data/maps/MercyTown_RockShop/scripts.pory"
	faceplayer
# 71 "data/maps/MercyTown_RockShop/scripts.pory"
	compare VAR_SAILORTOWN_NORA, 2
	goto_if_eq RockSellerDude_2
# 86 "data/maps/MercyTown_RockShop/scripts.pory"
	message SellRocks
# 87 "data/maps/MercyTown_RockShop/scripts.pory"
	waitmessage
# 88 "data/maps/MercyTown_RockShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_MEGARING, RockSellerDude_5
RockSellerDude_4:
# 91 "data/maps/MercyTown_RockShop/scripts.pory"
	msgbox ExplainRocks, MSGBOX_AUTOCLOSE
# 92 "data/maps/MercyTown_RockShop/scripts.pory"
	release
	end

RockSellerDude_2:
# 72 "data/maps/MercyTown_RockShop/scripts.pory"
	msgbox NoticeMegaRing
# 73 "data/maps/MercyTown_RockShop/scripts.pory"
	switch VAR_STARTER_MON
# 74 "data/maps/MercyTown_RockShop/scripts.pory"
	case 0, RockSellerDude_9
# 76 "data/maps/MercyTown_RockShop/scripts.pory"
	case 1, RockSellerDude_10
# 78 "data/maps/MercyTown_RockShop/scripts.pory"
	case 2, RockSellerDude_11
RockSellerDude_7:
# 81 "data/maps/MercyTown_RockShop/scripts.pory"
	msgbox ExplainMegaStones, MSGBOX_AUTOCLOSE
# 82 "data/maps/MercyTown_RockShop/scripts.pory"
	setvar VAR_SAILORTOWN_NORA, 3
# 83 "data/maps/MercyTown_RockShop/scripts.pory"
	release
	end

RockSellerDude_5:
# 89 "data/maps/MercyTown_RockShop/scripts.pory"
	pokemart RockMart_NoMega
	goto RockSellerDude_4

RockSellerDude_9:
# 75 "data/maps/MercyTown_RockShop/scripts.pory"
	giveitem ITEM_BLAZIKENITE
	goto RockSellerDude_7

RockSellerDude_10:
# 77 "data/maps/MercyTown_RockShop/scripts.pory"
	giveitem ITEM_VENUSAURITE
	goto RockSellerDude_7

RockSellerDude_11:
# 79 "data/maps/MercyTown_RockShop/scripts.pory"
	giveitem ITEM_SWAMPERTITE
	goto RockSellerDude_7


RockShop_LittleGirl::
# 97 "data/maps/MercyTown_RockShop/scripts.pory"
	lock
# 98 "data/maps/MercyTown_RockShop/scripts.pory"
	faceplayer
# 99 "data/maps/MercyTown_RockShop/scripts.pory"
	msgbox DadSellsRocks, MSGBOX_AUTOCLOSE
# 100 "data/maps/MercyTown_RockShop/scripts.pory"
	releaseall
	end


SellRocks::
# 29 "data/maps/MercyTown_RockShop/scripts.pory"
	.string "Hello! \p"
	.string "I sell rocks! \p"
	.string "Have a look, they all have cool \n"
	.string "effects!$"

ExplainRocks::
# 36 "data/maps/MercyTown_RockShop/scripts.pory"
	.string "Alright! \p"
	.string "Rocks are fascinating, some make POKéMON \n"
	.string "stronger, others make them evolve… \p"
	.string "Come back soon!$"

NoticeMegaRing::
# 43 "data/maps/MercyTown_RockShop/scripts.pory"
	.string "Hello! \p"
	.string "I sell rocks! \p"
	.string "Oh! is this a Mega-Ring? \p"
	.string "Then you must be interested in Mega \n"
	.string "Stones! \p"
	.string "Barely anyone is interested in them, \n"
	.string "which is beyond me. \p"
	.string "So here, for you!$"

ExplainMegaStones::
# 54 "data/maps/MercyTown_RockShop/scripts.pory"
	.string "The last people who came to me asking \n"
	.string "about Mega-Stones were… um… \p"
	.string "… yes! The Last Dinner Party! \p"
	.string "I'm a huge fan, so I gave them some for \n"
	.string "free!\p"
	.string "Mega-Stones are rare and not every \n"
	.string "POKéMON can Mega-Evolve, but they are \l"
	.string "worth the search.\p"
	.string "My brother sells some in Beautiful Port \n"
	.string "if you wanna have a look. $"

DadSellsRocks::
# 104 "data/maps/MercyTown_RockShop/scripts.pory"
	.string "My dad loves rocks so much. \p"
	.string "He finds most of them in the Sunday \n"
	.string "Cave. \p"
	.string "Maybe you'll find some too if you go \n"
	.string "there… \p"
	.string "Or you can just buy from him!$"

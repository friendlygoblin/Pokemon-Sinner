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
# 29 "data/maps/MercyTown_RockShop/scripts.pory"
	lock
# 30 "data/maps/MercyTown_RockShop/scripts.pory"
	faceplayer
# 31 "data/maps/MercyTown_RockShop/scripts.pory"
	message SellRocks
# 32 "data/maps/MercyTown_RockShop/scripts.pory"
	waitmessage
# 33 "data/maps/MercyTown_RockShop/scripts.pory"
	pokemart RockMart
# 34 "data/maps/MercyTown_RockShop/scripts.pory"
	msgbox ExplainRocks, MSGBOX_AUTOCLOSE
# 35 "data/maps/MercyTown_RockShop/scripts.pory"
	release
	end


RockShop_LittleGirl::
# 40 "data/maps/MercyTown_RockShop/scripts.pory"
	lock
# 41 "data/maps/MercyTown_RockShop/scripts.pory"
	faceplayer
# 42 "data/maps/MercyTown_RockShop/scripts.pory"
	msgbox DadSellsRocks, MSGBOX_AUTOCLOSE
# 43 "data/maps/MercyTown_RockShop/scripts.pory"
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

DadSellsRocks::
# 47 "data/maps/MercyTown_RockShop/scripts.pory"
	.string "My dad loves rocks so much. \p"
	.string "He finds most of them in the Sunday \n"
	.string "Cave. \p"
	.string "Maybe you'll find some too if you go \n"
	.string "there… \p"
	.string "Or you can just buy from him!$"

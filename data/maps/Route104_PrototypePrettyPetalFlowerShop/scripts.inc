# 1 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"

# 2 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
Route104_PrototypePrettyPetalFlowerShop_MapScripts::
# 3 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	.byte 0

	.align 2
# 6 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
FlowerShop_Mart:
# 7 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 8 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 9 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 10 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 11 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 12 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 13 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 14 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_TM19
	.2byte ITEM_NONE

FlowerShop_Clerk::
# 18 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	lock
# 19 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	message FlowerShop_Clerk_Text_0
# 20 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	waitmessage
# 21 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	pokemart FlowerShop_Mart
# 22 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	msgbox FlowerShop_Clerk_Text_1
# 23 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	release
	end


FlowerShop_Skitty::
# 28 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	lock
# 29 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	faceplayer
# 30 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 31 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	msgbox FlowerShop_Skitty_Text_0
# 32 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	waitmoncry
# 33 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	release
	end


FlowerShop_Man::
# 38 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	lock
# 39 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	faceplayer
# 40 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, FlowerShop_Man_2
# 44 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	msgbox FlowerShop_Man_Text_1
# 45 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 46 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
FlowerShop_Man_1:
# 48 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	release
	end

FlowerShop_Man_2:
# 41 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	msgbox FlowerShop_Man_Text_0
	goto FlowerShop_Man_1


FlowerShop_Girl::
# 53 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	lock
# 54 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	faceplayer
# 55 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	msgbox FlowerShop_Girl_Text_0, MSGBOX_AUTOCLOSE
# 56 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	release
	end


FlowerShop_Clerk_Text_0:
# 19 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	.string "Welcome to the Nightingale City Flower\n"
	.string "Shop!\p"
	.string "How can I help you?$"

FlowerShop_Clerk_Text_1:
# 22 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	.string "Have a nice day!$"

FlowerShop_Skitty_Text_0:
# 31 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	.string "SKITTY: Meeow!$"

FlowerShop_Man_Text_0:
# 41 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	.string "I love Grass Type POKéMON!\p"
	.string "I found that when I give them a certain\n"
	.string "item, their Grass Type moves are\l"
	.string "stronger.$"

FlowerShop_Man_Text_1:
# 44 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	.string "I love Grass Type POKéMON!\p"
	.string "I found that when I give them a certain\n"
	.string "item, their Grass Type moves are\l"
	.string "stronger.\p"
	.string "Here, I'm feeling generous!$"

FlowerShop_Girl_Text_0:
# 55 "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.pory"
	.string "Berries can be very useful.\p"
	.string "And also very tasty!$"

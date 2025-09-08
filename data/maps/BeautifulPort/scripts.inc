BeautifulPort_MapScripts::
# 2 "data/maps/BeautifulPort/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BeautifulPort_Visited
	.byte 0


BeautifulPort_Visited::
# 6 "data/maps/BeautifulPort/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
	return


BeautifulPort_CitySign::
# 10 "data/maps/BeautifulPort/scripts.pory"
	lock
# 11 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_CitySign_Text_0, MSGBOX_AUTOCLOSE
# 12 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


BeautifulPort_MarketSign::
# 17 "data/maps/BeautifulPort/scripts.pory"
	lock
# 18 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_MarketSign_Text_0, MSGBOX_AUTOCLOSE
# 19 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


BeautifulPort_PortSign::
# 24 "data/maps/BeautifulPort/scripts.pory"
	lock
# 25 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_PortSign_Text_0, MSGBOX_AUTOCLOSE
# 26 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


BeautifulPort_TotoSign::
# 31 "data/maps/BeautifulPort/scripts.pory"
	lock
# 32 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_TotoSign_Text_0, MSGBOX_AUTOCLOSE
# 33 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


BeautifulPort_LighthouseSign::
# 38 "data/maps/BeautifulPort/scripts.pory"
	lock
# 39 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_LighthouseSign_Text_0, MSGBOX_AUTOCLOSE
# 40 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


BeautifulPort_BeachMan::
# 45 "data/maps/BeautifulPort/scripts.pory"
	lock
# 46 "data/maps/BeautifulPort/scripts.pory"
	faceplayer
# 47 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_BeachMan_Text_0, MSGBOX_AUTOCLOSE
# 48 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


BeautifulPort_BeachFisherman::
# 53 "data/maps/BeautifulPort/scripts.pory"
	lock
# 54 "data/maps/BeautifulPort/scripts.pory"
	faceplayer
# 55 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_BeachFisherman_Text_0, MSGBOX_AUTOCLOSE
# 56 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


BeautifulPort_BeachLittleGirl::
# 61 "data/maps/BeautifulPort/scripts.pory"
	lock
# 62 "data/maps/BeautifulPort/scripts.pory"
	faceplayer
# 63 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_BeachLittleGirl_Text_0, MSGBOX_AUTOCLOSE
# 64 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


BeautifulPort_BeachGirl::
# 69 "data/maps/BeautifulPort/scripts.pory"
	lock
# 70 "data/maps/BeautifulPort/scripts.pory"
	faceplayer
# 71 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_BeachGirl_Text_0, MSGBOX_AUTOCLOSE
# 72 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


BeautifulPort_Wingull::
# 77 "data/maps/BeautifulPort/scripts.pory"
	lock
# 78 "data/maps/BeautifulPort/scripts.pory"
	faceplayer
# 79 "data/maps/BeautifulPort/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 80 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_Wingull_Text_0, MSGBOX_AUTOCLOSE
# 81 "data/maps/BeautifulPort/scripts.pory"
	waitmoncry
# 82 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


BeautifulPort_Boatbuilder::
# 87 "data/maps/BeautifulPort/scripts.pory"
	lock
# 88 "data/maps/BeautifulPort/scripts.pory"
	faceplayer
# 89 "data/maps/BeautifulPort/scripts.pory"
	goto_if_set FLAG_RECEIVED_HEAVY_DUTY_BOOTS, BeautifulPort_Boatbuilder_2
# 93 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_Boatbuilder_Text_1
# 94 "data/maps/BeautifulPort/scripts.pory"
	giveitem ITEM_HEAVY_DUTY_BOOTS
# 95 "data/maps/BeautifulPort/scripts.pory"
	setflag FLAG_RECEIVED_HEAVY_DUTY_BOOTS
BeautifulPort_Boatbuilder_1:
# 97 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end

BeautifulPort_Boatbuilder_2:
# 90 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_Boatbuilder_Text_0, MSGBOX_AUTOCLOSE
	goto BeautifulPort_Boatbuilder_1


BeautifulPort_Sailor::
# 102 "data/maps/BeautifulPort/scripts.pory"
	lock
# 103 "data/maps/BeautifulPort/scripts.pory"
	faceplayer
# 104 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_Sailor_Text_0, MSGBOX_AUTOCLOSE
# 105 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


	.align 2
# 109 "data/maps/BeautifulPort/scripts.pory"
BeautifulPort_SouvenirShop:
# 110 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 111 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 112 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_UTILITY_UMBRELLA
# 113 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 114 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_AIR_BALLOON
	.2byte ITEM_NONE

	.align 2
# 117 "data/maps/BeautifulPort/scripts.pory"
BeautifulPort_PokeballShop:
# 118 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 119 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 120 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 121 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_NET_BALL
# 122 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_HEAVY_BALL
	.2byte ITEM_NONE

	.align 2
# 125 "data/maps/BeautifulPort/scripts.pory"
BeautifulPort_MoveShop:
# 126 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_TM06
# 127 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_TM09
# 128 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_TM39
# 129 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_TM42
# 130 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_TM45
# 131 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_TM46
	.2byte ITEM_NONE

	.align 2
# 134 "data/maps/BeautifulPort/scripts.pory"
BeautifulPort_MegaStoneShop:
# 135 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_ALAKAZITE
# 136 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_GARCHOMPITE
# 137 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_LOPUNNITE
# 138 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_METAGROSSITE
# 139 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_PIDGEOTITE
	.2byte ITEM_NONE

BeautifulPort_MegaVendor::
# 143 "data/maps/BeautifulPort/scripts.pory"
	lock
# 144 "data/maps/BeautifulPort/scripts.pory"
	goto_if_set FLAG_RECEIVED_MEGARING, BeautifulPort_MegaVendor_2
# 151 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_MegaVendor_Text_2
BeautifulPort_MegaVendor_1:
# 153 "data/maps/BeautifulPort/scripts.pory"
	release
	end

BeautifulPort_MegaVendor_2:
# 145 "data/maps/BeautifulPort/scripts.pory"
	message BeautifulPort_MegaVendor_Text_0
# 146 "data/maps/BeautifulPort/scripts.pory"
	waitmessage
# 147 "data/maps/BeautifulPort/scripts.pory"
	pokemart BeautifulPort_MegaStoneShop
# 148 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_MegaVendor_Text_1
	goto BeautifulPort_MegaVendor_1


BeautifulPort_SouvenirVendor::
# 158 "data/maps/BeautifulPort/scripts.pory"
	lock
# 159 "data/maps/BeautifulPort/scripts.pory"
	message BeautifulPort_SouvenirVendor_Text_0
# 160 "data/maps/BeautifulPort/scripts.pory"
	waitmessage
# 161 "data/maps/BeautifulPort/scripts.pory"
	pokemart BeautifulPort_SouvenirShop
# 162 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_SouvenirVendor_Text_1
# 163 "data/maps/BeautifulPort/scripts.pory"
	release
	end


BeautifulPort_PokeballVendor::
# 168 "data/maps/BeautifulPort/scripts.pory"
	lock
# 169 "data/maps/BeautifulPort/scripts.pory"
	message BeautifulPort_PokeballVendor_Text_0
# 170 "data/maps/BeautifulPort/scripts.pory"
	waitmessage
# 171 "data/maps/BeautifulPort/scripts.pory"
	pokemart BeautifulPort_PokeballShop
# 172 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_PokeballVendor_Text_1
# 173 "data/maps/BeautifulPort/scripts.pory"
	release
	end


BeautifulPort_MoveVendor::
# 178 "data/maps/BeautifulPort/scripts.pory"
	lock
# 179 "data/maps/BeautifulPort/scripts.pory"
	message BeautifulPort_MoveVendor_Text_0
# 180 "data/maps/BeautifulPort/scripts.pory"
	waitmessage
# 181 "data/maps/BeautifulPort/scripts.pory"
	pokemart BeautifulPort_MoveShop
# 182 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_MegaVendor_Text_1
# 183 "data/maps/BeautifulPort/scripts.pory"
	release
	end


BeautifulPort_CitySign_Text_0:
# 11 "data/maps/BeautifulPort/scripts.pory"
	.string "Welcome to Beautiful Port!\p"
	.string "From where ships sail to safety!$"

BeautifulPort_MarketSign_Text_0:
# 18 "data/maps/BeautifulPort/scripts.pory"
	.string "Beautiful Port Marketplace\p"
	.string "Shop and enjoy the beach!$"

BeautifulPort_PortSign_Text_0:
# 25 "data/maps/BeautifulPort/scripts.pory"
	.string "Beautiful Port Harbour\p"
	.string "Next departure: Godzilland$"

BeautifulPort_TotoSign_Text_0:
# 32 "data/maps/BeautifulPort/scripts.pory"
	.string "Toto's House\p"
	.string "POKéMON nickname expert!$"

BeautifulPort_LighthouseSign_Text_0:
# 39 "data/maps/BeautifulPort/scripts.pory"
	.string "Lighthouse\p"
	.string "Light up the rocky land's end!$"

BeautifulPort_BeachMan_Text_0:
# 47 "data/maps/BeautifulPort/scripts.pory"
	.string "I'm so glad I moved here, I love being\n"
	.string "able to go to the beach every day!$"

BeautifulPort_BeachFisherman_Text_0:
# 55 "data/maps/BeautifulPort/scripts.pory"
	.string "If you fish in different places, you can\n"
	.string "catch different POKéMON!\p"
	.string "Makes you wanna travel doesn't it?$"

BeautifulPort_BeachLittleGirl_Text_0:
# 63 "data/maps/BeautifulPort/scripts.pory"
	.string "I'm learning to swim!\p"
	.string "I wanna be able to swim like a Milotic!$"

BeautifulPort_BeachGirl_Text_0:
# 71 "data/maps/BeautifulPort/scripts.pory"
	.string "Every time I come to Beautiful Port, I\n"
	.string "go visit the marketplace.\p"
	.string "I don't always buy things, but I like to\n"
	.string "look around.$"

BeautifulPort_Wingull_Text_0:
# 80 "data/maps/BeautifulPort/scripts.pory"
	.string "WINGULL: Eeeeee!$"

BeautifulPort_Boatbuilder_Text_0:
# 90 "data/maps/BeautifulPort/scripts.pory"
	.string "I'm a boat builder.\p"
	.string "I build boats.\p"
	.string "I fix boats.\p"
	.string "I love boats!$"

BeautifulPort_Boatbuilder_Text_1:
# 93 "data/maps/BeautifulPort/scripts.pory"
	.string "I'm a boat builder.\p"
	.string "I build boats.\p"
	.string "I fix boats.\p"
	.string "I love boats!\p"
	.string "Safety first!$"

BeautifulPort_Sailor_Text_0:
# 104 "data/maps/BeautifulPort/scripts.pory"
	.string "I went to Godzilland to challenge an\n"
	.string "artist I love.\p"
	.string "I lost, she was too strong for me…$"

BeautifulPort_MegaVendor_Text_0:
# 145 "data/maps/BeautifulPort/scripts.pory"
	.string "I sell very very special stones, look!$"

BeautifulPort_MegaVendor_Text_1:
# 148 "data/maps/BeautifulPort/scripts.pory"
	.string "Come back soon!$"

BeautifulPort_MegaVendor_Text_2:
# 151 "data/maps/BeautifulPort/scripts.pory"
	.string "Um… I'm sorry but my shop isn't ready\n"
	.string "yet.\p"
	.string "Come back later!$"

BeautifulPort_SouvenirVendor_Text_0:
# 159 "data/maps/BeautifulPort/scripts.pory"
	.string "Visiting Beautiful Port? Why not get a\n"
	.string "souvenir?$"

BeautifulPort_SouvenirVendor_Text_1:
# 162 "data/maps/BeautifulPort/scripts.pory"
	.string "Enjoy your stay and come back soon!$"

BeautifulPort_PokeballVendor_Text_0:
# 169 "data/maps/BeautifulPort/scripts.pory"
	.string "Standard Poké Balls aren't the only way\n"
	.string "to catch POKéMON, you know!\p"
	.string "Check these out!$"

BeautifulPort_PokeballVendor_Text_1:
# 172 "data/maps/BeautifulPort/scripts.pory"
	.string "Have fun catching POKéMON!$"

BeautifulPort_MoveVendor_Text_0:
# 179 "data/maps/BeautifulPort/scripts.pory"
	.string "You, Trainer!\p"
	.string "I have some TMs, you can use them to\n"
	.string "teach moves to your POKéMON.\p"
	.string "Have a look!$"

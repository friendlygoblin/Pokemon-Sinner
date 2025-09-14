BeautifulPort_MapScripts::
# 2 "data/maps/BeautifulPort/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BeautifulPort_Visited
	.byte 0


BeautifulPort_Visited::
# 6 "data/maps/BeautifulPort/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 7 "data/maps/BeautifulPort/scripts.pory"
	setvar VAR_GODZILLAND_PORYGON, 0
	return


BeautifulPort_CitySign::
# 11 "data/maps/BeautifulPort/scripts.pory"
	lock
# 12 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_CitySign_Text_0, MSGBOX_AUTOCLOSE
# 13 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


BeautifulPort_MarketSign::
# 18 "data/maps/BeautifulPort/scripts.pory"
	lock
# 19 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_MarketSign_Text_0, MSGBOX_AUTOCLOSE
# 20 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


BeautifulPort_PortSign::
# 25 "data/maps/BeautifulPort/scripts.pory"
	lock
# 26 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_PortSign_Text_0, MSGBOX_AUTOCLOSE
# 27 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


BeautifulPort_TotoSign::
# 32 "data/maps/BeautifulPort/scripts.pory"
	lock
# 33 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_TotoSign_Text_0, MSGBOX_AUTOCLOSE
# 34 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


BeautifulPort_LighthouseSign::
# 39 "data/maps/BeautifulPort/scripts.pory"
	lock
# 40 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_LighthouseSign_Text_0, MSGBOX_AUTOCLOSE
# 41 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


BeautifulPort_BeachMan::
# 46 "data/maps/BeautifulPort/scripts.pory"
	lock
# 47 "data/maps/BeautifulPort/scripts.pory"
	faceplayer
# 48 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_BeachMan_Text_0, MSGBOX_AUTOCLOSE
# 49 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


BeautifulPort_BeachFisherman::
# 54 "data/maps/BeautifulPort/scripts.pory"
	lock
# 55 "data/maps/BeautifulPort/scripts.pory"
	faceplayer
# 56 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_BeachFisherman_Text_0, MSGBOX_AUTOCLOSE
# 57 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


BeautifulPort_BeachLittleGirl::
# 62 "data/maps/BeautifulPort/scripts.pory"
	lock
# 63 "data/maps/BeautifulPort/scripts.pory"
	faceplayer
# 64 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_BeachLittleGirl_Text_0, MSGBOX_AUTOCLOSE
# 65 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


BeautifulPort_BeachGirl::
# 70 "data/maps/BeautifulPort/scripts.pory"
	lock
# 71 "data/maps/BeautifulPort/scripts.pory"
	faceplayer
# 72 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_BeachGirl_Text_0, MSGBOX_AUTOCLOSE
# 73 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


BeautifulPort_Wingull::
# 78 "data/maps/BeautifulPort/scripts.pory"
	lock
# 79 "data/maps/BeautifulPort/scripts.pory"
	faceplayer
# 80 "data/maps/BeautifulPort/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 81 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_Wingull_Text_0, MSGBOX_AUTOCLOSE
# 82 "data/maps/BeautifulPort/scripts.pory"
	waitmoncry
# 83 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


BeautifulPort_Boatbuilder::
# 88 "data/maps/BeautifulPort/scripts.pory"
	lock
# 89 "data/maps/BeautifulPort/scripts.pory"
	faceplayer
# 90 "data/maps/BeautifulPort/scripts.pory"
	goto_if_set FLAG_RECEIVED_HEAVY_DUTY_BOOTS, BeautifulPort_Boatbuilder_2
# 94 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_Boatbuilder_Text_1
# 95 "data/maps/BeautifulPort/scripts.pory"
	giveitem ITEM_HEAVY_DUTY_BOOTS
# 96 "data/maps/BeautifulPort/scripts.pory"
	setflag FLAG_RECEIVED_HEAVY_DUTY_BOOTS
BeautifulPort_Boatbuilder_1:
# 98 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end

BeautifulPort_Boatbuilder_2:
# 91 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_Boatbuilder_Text_0, MSGBOX_AUTOCLOSE
	goto BeautifulPort_Boatbuilder_1


BeautifulPort_Sailor::
# 103 "data/maps/BeautifulPort/scripts.pory"
	lock
# 104 "data/maps/BeautifulPort/scripts.pory"
	faceplayer
# 105 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_Sailor_Text_0, MSGBOX_AUTOCLOSE
# 106 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


	.align 2
# 110 "data/maps/BeautifulPort/scripts.pory"
BeautifulPort_SouvenirShop:
# 111 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 112 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 113 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_UTILITY_UMBRELLA
# 114 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 115 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 116 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_LINKING_CORD
	.2byte ITEM_NONE

	.align 2
# 119 "data/maps/BeautifulPort/scripts.pory"
BeautifulPort_PokeballShop:
# 120 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 121 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 122 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 123 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_NET_BALL
# 124 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_HEAVY_BALL
	.2byte ITEM_NONE

	.align 2
# 127 "data/maps/BeautifulPort/scripts.pory"
BeautifulPort_MoveShop:
# 128 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_TM06
# 129 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_TM09
# 130 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_TM13
# 131 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_TM39
# 132 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_TM42
# 133 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_TM45
# 134 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_TM46
# 135 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_TM47
	.2byte ITEM_NONE

	.align 2
# 138 "data/maps/BeautifulPort/scripts.pory"
BeautifulPort_MegaStoneShop:
# 139 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_ALAKAZITE
# 140 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_GARCHOMPITE
# 141 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_LOPUNNITE
# 142 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_METAGROSSITE
# 143 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_PIDGEOTITE
	.2byte ITEM_NONE

BeautifulPort_MegaVendor::
# 147 "data/maps/BeautifulPort/scripts.pory"
	lock
# 148 "data/maps/BeautifulPort/scripts.pory"
	goto_if_set FLAG_RECEIVED_MEGARING, BeautifulPort_MegaVendor_2
# 155 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_MegaVendor_Text_2
BeautifulPort_MegaVendor_1:
# 157 "data/maps/BeautifulPort/scripts.pory"
	release
	end

BeautifulPort_MegaVendor_2:
# 149 "data/maps/BeautifulPort/scripts.pory"
	message BeautifulPort_MegaVendor_Text_0
# 150 "data/maps/BeautifulPort/scripts.pory"
	waitmessage
# 151 "data/maps/BeautifulPort/scripts.pory"
	pokemart BeautifulPort_MegaStoneShop
# 152 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_MegaVendor_Text_1
	goto BeautifulPort_MegaVendor_1


BeautifulPort_SouvenirVendor::
# 162 "data/maps/BeautifulPort/scripts.pory"
	lock
# 163 "data/maps/BeautifulPort/scripts.pory"
	message BeautifulPort_SouvenirVendor_Text_0
# 164 "data/maps/BeautifulPort/scripts.pory"
	waitmessage
# 165 "data/maps/BeautifulPort/scripts.pory"
	pokemart BeautifulPort_SouvenirShop
# 166 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_SouvenirVendor_Text_1
# 167 "data/maps/BeautifulPort/scripts.pory"
	release
	end


BeautifulPort_PokeballVendor::
# 172 "data/maps/BeautifulPort/scripts.pory"
	lock
# 173 "data/maps/BeautifulPort/scripts.pory"
	message BeautifulPort_PokeballVendor_Text_0
# 174 "data/maps/BeautifulPort/scripts.pory"
	waitmessage
# 175 "data/maps/BeautifulPort/scripts.pory"
	pokemart BeautifulPort_PokeballShop
# 176 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_PokeballVendor_Text_1
# 177 "data/maps/BeautifulPort/scripts.pory"
	release
	end


BeautifulPort_MoveVendor::
# 182 "data/maps/BeautifulPort/scripts.pory"
	lock
# 183 "data/maps/BeautifulPort/scripts.pory"
	message BeautifulPort_MoveVendor_Text_0
# 184 "data/maps/BeautifulPort/scripts.pory"
	waitmessage
# 185 "data/maps/BeautifulPort/scripts.pory"
	pokemart BeautifulPort_MoveShop
# 186 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_MegaVendor_Text_1
# 187 "data/maps/BeautifulPort/scripts.pory"
	release
	end


BeautifulPort_CitySign_Text_0:
# 12 "data/maps/BeautifulPort/scripts.pory"
	.string "Welcome to Beautiful Port!\p"
	.string "From where ships sail to safety!$"

BeautifulPort_MarketSign_Text_0:
# 19 "data/maps/BeautifulPort/scripts.pory"
	.string "Beautiful Port Marketplace\p"
	.string "Shop and enjoy the beach!$"

BeautifulPort_PortSign_Text_0:
# 26 "data/maps/BeautifulPort/scripts.pory"
	.string "Beautiful Port Harbour\p"
	.string "Next departure: Godzilland$"

BeautifulPort_TotoSign_Text_0:
# 33 "data/maps/BeautifulPort/scripts.pory"
	.string "Toto's House\p"
	.string "POKéMON nickname expert!$"

BeautifulPort_LighthouseSign_Text_0:
# 40 "data/maps/BeautifulPort/scripts.pory"
	.string "Lighthouse\p"
	.string "Light up the rocky land's end!$"

BeautifulPort_BeachMan_Text_0:
# 48 "data/maps/BeautifulPort/scripts.pory"
	.string "I'm so glad I moved here, I love being\n"
	.string "able to go to the beach every day!$"

BeautifulPort_BeachFisherman_Text_0:
# 56 "data/maps/BeautifulPort/scripts.pory"
	.string "If you fish in different places, you can\n"
	.string "catch different POKéMON!\p"
	.string "Makes you wanna travel doesn't it?$"

BeautifulPort_BeachLittleGirl_Text_0:
# 64 "data/maps/BeautifulPort/scripts.pory"
	.string "I'm learning to swim!\p"
	.string "I wanna be able to swim like a Milotic!$"

BeautifulPort_BeachGirl_Text_0:
# 72 "data/maps/BeautifulPort/scripts.pory"
	.string "Every time I come to Beautiful Port, I\n"
	.string "go visit the marketplace.\p"
	.string "I don't always buy things, but I like to\n"
	.string "look around.$"

BeautifulPort_Wingull_Text_0:
# 81 "data/maps/BeautifulPort/scripts.pory"
	.string "WINGULL: Eeeeee!$"

BeautifulPort_Boatbuilder_Text_0:
# 91 "data/maps/BeautifulPort/scripts.pory"
	.string "I'm a boat builder.\p"
	.string "I build boats.\p"
	.string "I fix boats.\p"
	.string "I love boats!$"

BeautifulPort_Boatbuilder_Text_1:
# 94 "data/maps/BeautifulPort/scripts.pory"
	.string "I'm a boat builder.\p"
	.string "I build boats.\p"
	.string "I fix boats.\p"
	.string "I love boats!\p"
	.string "Safety first!$"

BeautifulPort_Sailor_Text_0:
# 105 "data/maps/BeautifulPort/scripts.pory"
	.string "I went to Godzilland to challenge an\n"
	.string "artist I love.\p"
	.string "I lost, she was too strong for me…$"

BeautifulPort_MegaVendor_Text_0:
# 149 "data/maps/BeautifulPort/scripts.pory"
	.string "I sell very very special stones, look!$"

BeautifulPort_MegaVendor_Text_1:
# 152 "data/maps/BeautifulPort/scripts.pory"
	.string "Come back soon!$"

BeautifulPort_MegaVendor_Text_2:
# 155 "data/maps/BeautifulPort/scripts.pory"
	.string "Um… I'm sorry but my shop isn't ready\n"
	.string "yet.\p"
	.string "Come back later!$"

BeautifulPort_SouvenirVendor_Text_0:
# 163 "data/maps/BeautifulPort/scripts.pory"
	.string "Visiting Beautiful Port? Why not get a\n"
	.string "souvenir?$"

BeautifulPort_SouvenirVendor_Text_1:
# 166 "data/maps/BeautifulPort/scripts.pory"
	.string "Enjoy your stay and come back soon!$"

BeautifulPort_PokeballVendor_Text_0:
# 173 "data/maps/BeautifulPort/scripts.pory"
	.string "Standard Poké Balls aren't the only way\n"
	.string "to catch POKéMON, you know!\p"
	.string "Check these out!$"

BeautifulPort_PokeballVendor_Text_1:
# 176 "data/maps/BeautifulPort/scripts.pory"
	.string "Have fun catching POKéMON!$"

BeautifulPort_MoveVendor_Text_0:
# 183 "data/maps/BeautifulPort/scripts.pory"
	.string "You, Trainer!\p"
	.string "I have some TMs, you can use them to\n"
	.string "teach moves to your POKéMON.\p"
	.string "Have a look!$"

BeautifulPort_MapScripts::
	.byte 0


BeautifulPort_CitySign::
# 4 "data/maps/BeautifulPort/scripts.pory"
	lock
# 5 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_CitySign_Text_0, MSGBOX_AUTOCLOSE
# 6 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


BeautifulPort_MarketSign::
# 11 "data/maps/BeautifulPort/scripts.pory"
	lock
# 12 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_MarketSign_Text_0, MSGBOX_AUTOCLOSE
# 13 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


BeautifulPort_PortSign::
# 18 "data/maps/BeautifulPort/scripts.pory"
	lock
# 19 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_PortSign_Text_0, MSGBOX_AUTOCLOSE
# 20 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


BeautifulPort_LighthouseSign::
# 25 "data/maps/BeautifulPort/scripts.pory"
	lock
# 26 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_LighthouseSign_Text_0, MSGBOX_AUTOCLOSE
# 27 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


BeautifulPort_BeachMan::
# 32 "data/maps/BeautifulPort/scripts.pory"
	lock
# 33 "data/maps/BeautifulPort/scripts.pory"
	faceplayer
# 34 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_BeachMan_Text_0, MSGBOX_AUTOCLOSE
# 35 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


BeautifulPort_BeachFisherman::
# 40 "data/maps/BeautifulPort/scripts.pory"
	lock
# 41 "data/maps/BeautifulPort/scripts.pory"
	faceplayer
# 42 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_BeachFisherman_Text_0, MSGBOX_AUTOCLOSE
# 43 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


BeautifulPort_BeachLittleGirl::
# 48 "data/maps/BeautifulPort/scripts.pory"
	lock
# 49 "data/maps/BeautifulPort/scripts.pory"
	faceplayer
# 50 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_BeachLittleGirl_Text_0, MSGBOX_AUTOCLOSE
# 51 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


BeautifulPort_BeachGirl::
# 56 "data/maps/BeautifulPort/scripts.pory"
	lock
# 57 "data/maps/BeautifulPort/scripts.pory"
	faceplayer
# 58 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_BeachGirl_Text_0, MSGBOX_AUTOCLOSE
# 59 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


BeautifulPort_Wingull::
# 64 "data/maps/BeautifulPort/scripts.pory"
	lock
# 65 "data/maps/BeautifulPort/scripts.pory"
	faceplayer
# 66 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_Wingull_Text_0, MSGBOX_AUTOCLOSE
# 67 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


BeautifulPort_Boatbuilder::
# 72 "data/maps/BeautifulPort/scripts.pory"
	lock
# 73 "data/maps/BeautifulPort/scripts.pory"
	faceplayer
# 74 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_Boatbuilder_Text_0, MSGBOX_AUTOCLOSE
# 75 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


BeautifulPort_Sailor::
# 80 "data/maps/BeautifulPort/scripts.pory"
	lock
# 81 "data/maps/BeautifulPort/scripts.pory"
	faceplayer
# 82 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_Sailor_Text_0, MSGBOX_AUTOCLOSE
# 83 "data/maps/BeautifulPort/scripts.pory"
	releaseall
	end


	.align 2
# 87 "data/maps/BeautifulPort/scripts.pory"
BeautifulPort_SouvenirShop:
# 88 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 89 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 90 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_UTILITY_UMBRELLA
# 91 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 92 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_AIR_BALLOON
	.2byte ITEM_NONE

	.align 2
# 95 "data/maps/BeautifulPort/scripts.pory"
BeautifulPort_PokeballShop:
# 96 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 97 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 98 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 99 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_NET_BALL
# 100 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_HEAVY_BALL
	.2byte ITEM_NONE

	.align 2
# 103 "data/maps/BeautifulPort/scripts.pory"
BeautifulPort_MoveShop:
# 104 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_TM06
# 105 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_TM09
# 106 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_TM39
# 107 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_TM42
# 108 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_TM45
# 109 "data/maps/BeautifulPort/scripts.pory"
	.2byte ITEM_TM46
	.2byte ITEM_NONE

BeautifulPort_SouvenirVendor::
# 113 "data/maps/BeautifulPort/scripts.pory"
	lock
# 114 "data/maps/BeautifulPort/scripts.pory"
	message BeautifulPort_SouvenirVendor_Text_0
# 115 "data/maps/BeautifulPort/scripts.pory"
	waitmessage
# 116 "data/maps/BeautifulPort/scripts.pory"
	pokemart BeautifulPort_SouvenirShop
# 117 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_SouvenirVendor_Text_1
# 118 "data/maps/BeautifulPort/scripts.pory"
	release
	end


BeautifulPort_PokeballVendor::
# 123 "data/maps/BeautifulPort/scripts.pory"
	lock
# 124 "data/maps/BeautifulPort/scripts.pory"
	message BeautifulPort_PokeballVendor_Text_0
# 125 "data/maps/BeautifulPort/scripts.pory"
	waitmessage
# 126 "data/maps/BeautifulPort/scripts.pory"
	pokemart BeautifulPort_PokeballShop
# 127 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_PokeballVendor_Text_1
# 128 "data/maps/BeautifulPort/scripts.pory"
	release
	end


BeautifulPort_MoveVendor::
# 133 "data/maps/BeautifulPort/scripts.pory"
	lock
# 134 "data/maps/BeautifulPort/scripts.pory"
	message BeautifulPort_MoveVendor_Text_0
# 135 "data/maps/BeautifulPort/scripts.pory"
	waitmessage
# 136 "data/maps/BeautifulPort/scripts.pory"
	pokemart BeautifulPort_MoveShop
# 137 "data/maps/BeautifulPort/scripts.pory"
	msgbox BeautifulPort_MoveVendor_Text_1
# 138 "data/maps/BeautifulPort/scripts.pory"
	release
	end


BeautifulPort_CitySign_Text_0:
# 5 "data/maps/BeautifulPort/scripts.pory"
	.string "Welcome to Beautiful Port!\p"
	.string "From where ships sail to safety!$"

BeautifulPort_MarketSign_Text_0:
# 12 "data/maps/BeautifulPort/scripts.pory"
	.string "Beautiful Port Marketplace\p"
	.string "Shop and enjoy the beach!$"

BeautifulPort_PortSign_Text_0:
# 19 "data/maps/BeautifulPort/scripts.pory"
	.string "Beautiful Port Harbour\p"
	.string "Next departure: Godzilland$"

BeautifulPort_LighthouseSign_Text_0:
# 26 "data/maps/BeautifulPort/scripts.pory"
	.string "Lighthouse\p"
	.string "Light up the rocky land's end!$"

BeautifulPort_BeachMan_Text_0:
# 34 "data/maps/BeautifulPort/scripts.pory"
	.string "I'm so glad I moved here, I love being\n"
	.string "able to go to the beach every day!$"

BeautifulPort_BeachFisherman_Text_0:
# 42 "data/maps/BeautifulPort/scripts.pory"
	.string "If you fish in different places, you can\n"
	.string "catch different POKéMON!\p"
	.string "Makes you wanna travel doesn't it?$"

BeautifulPort_BeachLittleGirl_Text_0:
# 50 "data/maps/BeautifulPort/scripts.pory"
	.string "I'm learning to swim!\p"
	.string "I wanna be able to swim like a Milotic!$"

BeautifulPort_BeachGirl_Text_0:
# 58 "data/maps/BeautifulPort/scripts.pory"
	.string "Every time I come to Beautiful Port, I\n"
	.string "go visit the marketplace.\p"
	.string "I don't always buy things, but I like to\n"
	.string "look around.$"

BeautifulPort_Wingull_Text_0:
# 66 "data/maps/BeautifulPort/scripts.pory"
	.string "WINGULL: Eeeeee!$"

BeautifulPort_Boatbuilder_Text_0:
# 74 "data/maps/BeautifulPort/scripts.pory"
	.string "I'm a boat builder.\p"
	.string "I build boats.\p"
	.string "I fix boats.\p"
	.string "I love boats!$"

BeautifulPort_Sailor_Text_0:
# 82 "data/maps/BeautifulPort/scripts.pory"
	.string "I went to Godzilland to challenge an\n"
	.string "artist I love.\p"
	.string "I lost, she was too strong for me…$"

BeautifulPort_SouvenirVendor_Text_0:
# 114 "data/maps/BeautifulPort/scripts.pory"
	.string "Visiting Beautiful Port? Why not get a\n"
	.string "souvenir?$"

BeautifulPort_SouvenirVendor_Text_1:
# 117 "data/maps/BeautifulPort/scripts.pory"
	.string "Enjoy your stay and come back soon!$"

BeautifulPort_PokeballVendor_Text_0:
# 124 "data/maps/BeautifulPort/scripts.pory"
	.string "Standard Poké Balls aren't the only way\n"
	.string "to catch POKéMON, you know!\p"
	.string "Check these out!$"

BeautifulPort_PokeballVendor_Text_1:
# 127 "data/maps/BeautifulPort/scripts.pory"
	.string "Have fun catching POKéMON!$"

BeautifulPort_MoveVendor_Text_0:
# 134 "data/maps/BeautifulPort/scripts.pory"
	.string "You, Trainer!\p"
	.string "I have some TMs, you can use them to\n"
	.string "teach moves to your POKéMON.\p"
	.string "Have a look!$"

BeautifulPort_MoveVendor_Text_1:
# 137 "data/maps/BeautifulPort/scripts.pory"
	.string "Come back soon!$"

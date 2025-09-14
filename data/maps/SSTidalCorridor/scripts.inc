SSTidalCorridor_MapScripts::
	.byte 0


ShipCorridor_ExitSailor::
# 4 "data/maps/SSTidalCorridor/scripts.pory"
	lock
# 5 "data/maps/SSTidalCorridor/scripts.pory"
	faceplayer
# 6 "data/maps/SSTidalCorridor/scripts.pory"
	switch VAR_SS_TIDAL_STATE
# 7 "data/maps/SSTidalCorridor/scripts.pory"
	case 0, ShipCorridor_ExitSailor_3
# 10 "data/maps/SSTidalCorridor/scripts.pory"
	case 1, ShipCorridor_ExitSailor_4
# 14 "data/maps/SSTidalCorridor/scripts.pory"
	case 2, ShipCorridor_ExitSailor_5
# 17 "data/maps/SSTidalCorridor/scripts.pory"
	case 3, ShipCorridor_ExitSailor_6
ShipCorridor_ExitSailor_1:
# 21 "data/maps/SSTidalCorridor/scripts.pory"
	releaseall
	end

ShipCorridor_ExitSailor_3:
# 8 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox CanRestInCabin2, MSGBOX_AUTOCLOSE
	goto ShipCorridor_ExitSailor_1

ShipCorridor_ExitSailor_4:
# 11 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox MadeLandInGodzilland, MSGBOX_AUTOCLOSE
# 12 "data/maps/SSTidalCorridor/scripts.pory"
	warp MAP_GODZILLAND_HARBOUR_LOBBY, 3, 5
	goto ShipCorridor_ExitSailor_1

ShipCorridor_ExitSailor_5:
# 15 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox CanRestInCabin2, MSGBOX_AUTOCLOSE
	goto ShipCorridor_ExitSailor_1

ShipCorridor_ExitSailor_6:
# 18 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox MadeLandInBPort, MSGBOX_AUTOCLOSE
# 19 "data/maps/SSTidalCorridor/scripts.pory"
	warp MAP_BEAUTIFUL_PORT_HARBOUR_LOBBY, 13, 6
	goto ShipCorridor_ExitSailor_1


Cabin1_Sign::
# 26 "data/maps/SSTidalCorridor/scripts.pory"
	lock
# 27 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox ShipCorridor_Text_Cabin1, MSGBOX_AUTOCLOSE
# 28 "data/maps/SSTidalCorridor/scripts.pory"
	releaseall
	end


Cabin2_Sign::
# 33 "data/maps/SSTidalCorridor/scripts.pory"
	lock
# 34 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox ShipCorridor_Text_Cabin2, MSGBOX_AUTOCLOSE
# 35 "data/maps/SSTidalCorridor/scripts.pory"
	releaseall
	end


Cabin3_Sign::
# 40 "data/maps/SSTidalCorridor/scripts.pory"
	lock
# 41 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox ShipCorridor_Text_Cabin3, MSGBOX_AUTOCLOSE
# 42 "data/maps/SSTidalCorridor/scripts.pory"
	releaseall
	end


Cabin4_Sign::
# 47 "data/maps/SSTidalCorridor/scripts.pory"
	lock
# 48 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox ShipCorridor_Text_Cabin4, MSGBOX_AUTOCLOSE
# 49 "data/maps/SSTidalCorridor/scripts.pory"
	releaseall
	end


Lookout_Porthole::
# 54 "data/maps/SSTidalCorridor/scripts.pory"
	lock
# 55 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox HorizonSpreadsBeyondPorthole, MSGBOX_AUTOCLOSE
# 56 "data/maps/SSTidalCorridor/scripts.pory"
	releaseall
	end


Ship_Sailor::
# 61 "data/maps/SSTidalCorridor/scripts.pory"
	lock
# 62 "data/maps/SSTidalCorridor/scripts.pory"
	faceplayer
# 63 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox VisitOtherCabins, MSGBOX_AUTOCLOSE
# 64 "data/maps/SSTidalCorridor/scripts.pory"
	releaseall
	end


Ship_Captain::
# 69 "data/maps/SSTidalCorridor/scripts.pory"
	lock
# 70 "data/maps/SSTidalCorridor/scripts.pory"
	faceplayer
# 71 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox WelcomeAboard, MSGBOX_AUTOCLOSE
# 72 "data/maps/SSTidalCorridor/scripts.pory"
	releaseall
	end


Ship_Peeko::
# 77 "data/maps/SSTidalCorridor/scripts.pory"
	lock
# 78 "data/maps/SSTidalCorridor/scripts.pory"
	faceplayer
# 79 "data/maps/SSTidalCorridor/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 80 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox Peeko, MSGBOX_AUTOCLOSE
# 81 "data/maps/SSTidalCorridor/scripts.pory"
	waitmoncry
# 82 "data/maps/SSTidalCorridor/scripts.pory"
	releaseall
	end


FastCurrentsHopeYouEnjoyVoyage::
# 86 "data/maps/SSTidalCorridor/scripts.pory"
	.string "This ferry is built to plow through\n"
	.string "fast-running currents.\p"
	.string "We hope you enjoy your voyage with us.\n"
	.string "Feel free to explore the ship.$"

HopeYouEnjoyVoyage::
# 93 "data/maps/SSTidalCorridor/scripts.pory"
	.string "We hope you enjoy your voyage on\n"
	.string "The Interlude.$"

MadeLandInBPort::
# 98 "data/maps/SSTidalCorridor/scripts.pory"
	.string "We have made land in Beautiful Port.\n"
	.string "Thank you for sailing with us.$"

MadeLandInGodzilland::
# 103 "data/maps/SSTidalCorridor/scripts.pory"
	.string "We have made land in Godzilland.\n"
	.string "Thank you for sailing with us.$"

CanRestInCabin2::
# 108 "data/maps/SSTidalCorridor/scripts.pory"
	.string "Welcome aboard The Interlude!\p"
	.string "It'll be some time before we make land,\n"
	.string "I reckon.\p"
	.string "You can rest up in your cabin if you'd\n"
	.string "like. Your cabin's No. 2.\p"
	.string "The bed in there is soft and plushy.\n"
	.string "I can attest to how comfy it is!$"

VisitOtherCabins::
# 118 "data/maps/SSTidalCorridor/scripts.pory"
	.string "Go visit other cabins.\n"
	.string "Trainers bored of the boat trip will\l"
	.string "be itching to battle.$"

EnjoyYourCruise::
# 124 "data/maps/SSTidalCorridor/scripts.pory"
	.string "Enjoy your cruise!$"

HorizonSpreadsBeyondPorthole::
# 128 "data/maps/SSTidalCorridor/scripts.pory"
	.string "The horizon spreads beyond\n"
	.string "the porthole.$"

WelcomeAboard::
# 133 "data/maps/SSTidalCorridor/scripts.pory"
	.string "Welcome aboard!\p"
	.string "I'm the captain of The Interlude!\p"
	.string "Thank you for sailing with us, feel free \n"
	.string "to explore the ship and meet the other \l"
	.string "passengers!$"

Peeko::
# 141 "data/maps/SSTidalCorridor/scripts.pory"
	.string "PEEKO: Reeee eeeee…$"

ShipCorridor_Text_Cabin1::
# 144 "data/maps/SSTidalCorridor/scripts.pory"
	.string "Cabin 1$"

ShipCorridor_Text_Cabin2::
# 147 "data/maps/SSTidalCorridor/scripts.pory"
	.string "Cabin 2$"

ShipCorridor_Text_Cabin3::
# 151 "data/maps/SSTidalCorridor/scripts.pory"
	.string "Cabin 3$"

ShipCorridor_Text_Cabin4::
# 155 "data/maps/SSTidalCorridor/scripts.pory"
	.string "Cabin 4$"

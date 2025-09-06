CrystalStreamCity_BikeShop_MapScripts::
	.byte 0


CSCBS_Clerk::
# 4 "data/maps/CrystalStreamCity_BikeShop/scripts.pory"
	lock
# 5 "data/maps/CrystalStreamCity_BikeShop/scripts.pory"
	faceplayer
# 6 "data/maps/CrystalStreamCity_BikeShop/scripts.pory"
	switch VAR_BIKESHOPS
# 7 "data/maps/CrystalStreamCity_BikeShop/scripts.pory"
	case 0, CSCBS_Clerk_3
# 9 "data/maps/CrystalStreamCity_BikeShop/scripts.pory"
	case 1, CSCBS_Clerk_4
# 24 "data/maps/CrystalStreamCity_BikeShop/scripts.pory"
	case 2, CSCBS_Clerk_5
CSCBS_Clerk_1:
# 27 "data/maps/CrystalStreamCity_BikeShop/scripts.pory"
	release
	end

CSCBS_Clerk_3:
# 8 "data/maps/CrystalStreamCity_BikeShop/scripts.pory"
	msgbox CSCBS_ExplainBikeProblem, MSGBOX_AUTOCLOSE
	goto CSCBS_Clerk_1

CSCBS_Clerk_4:
# 10 "data/maps/CrystalStreamCity_BikeShop/scripts.pory"
	msgbox CSCBS_PlayerBroughtPart, MSGBOX_AUTOCLOSE
# 11 "data/maps/CrystalStreamCity_BikeShop/scripts.pory"
	fadescreen FADE_TO_BLACK
# 12 "data/maps/CrystalStreamCity_BikeShop/scripts.pory"
	playse SE_BALL
# 13 "data/maps/CrystalStreamCity_BikeShop/scripts.pory"
	waitse
# 14 "data/maps/CrystalStreamCity_BikeShop/scripts.pory"
	playse SE_BALL
# 15 "data/maps/CrystalStreamCity_BikeShop/scripts.pory"
	waitse
# 16 "data/maps/CrystalStreamCity_BikeShop/scripts.pory"
	playse SE_BIKE_BELL
# 17 "data/maps/CrystalStreamCity_BikeShop/scripts.pory"
	waitse
# 18 "data/maps/CrystalStreamCity_BikeShop/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 19 "data/maps/CrystalStreamCity_BikeShop/scripts.pory"
	msgbox CSCBS_BikeReady, MSGBOX_AUTOCLOSE
# 20 "data/maps/CrystalStreamCity_BikeShop/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 21 "data/maps/CrystalStreamCity_BikeShop/scripts.pory"
	setvar VAR_BIKESHOPS, 2
# 22 "data/maps/CrystalStreamCity_BikeShop/scripts.pory"
	setflag FLAG_RECEIVED_BIKE
	goto CSCBS_Clerk_1

CSCBS_Clerk_5:
# 25 "data/maps/CrystalStreamCity_BikeShop/scripts.pory"
	msgbox CSCBS_Clerk_Text_0, MSGBOX_AUTOCLOSE
	goto CSCBS_Clerk_1


CSCBS_BikeManual::
# 71 "data/maps/CrystalStreamCity_BikeShop/scripts.pory"
	lock
# 72 "data/maps/CrystalStreamCity_BikeShop/scripts.pory"
	msgbox BikeManual
# 73 "data/maps/CrystalStreamCity_BikeShop/scripts.pory"
	release
	end


CSCBS_Clerk_Text_0:
# 25 "data/maps/CrystalStreamCity_BikeShop/scripts.pory"
	.string "Oh, hi! How are you liking the bike?\p"
	.string "Say hi to my friend for me if you're ever\n"
	.string "in Candlewax City again!$"

CSCBS_ExplainBikeProblem::
# 31 "data/maps/CrystalStreamCity_BikeShop/scripts.pory"
	.string "Hello, are you here to purchase a \n"
	.string "bike? \p"
	.string "I'm sorry, I'm busy figuring out how \n"
	.string "to finish my latest model. \p"
	.string "I asked my friend in Candlewax City to \n"
	.string "design a custom part but she can't \l"
	.string "leave her workshop for too long. \p"
	.string "Ugh, I really need that part… \p"
	.string "If only someone could help my friend \n"
	.string "bring it here… $"

CSCBS_PlayerBroughtPart::
# 44 "data/maps/CrystalStreamCity_BikeShop/scripts.pory"
	.string "Hello, are you here to purchase a \n"
	.string "bike? \p"
	.string "I'm sorry, I'm busy figuring out how \n"
	.string "to finish my latest model. \p"
	.string "I asked my friend in Candlewax City to \n"
	.string "design a custom part but she can't \l"
	.string "leave her workshop for too long. \p"
	.string "What? You have it here? Gimme, gimme! \p"
	.string "Thanks! Just gimme a sec!$"

CSCBS_BikeReady::
# 56 "data/maps/CrystalStreamCity_BikeShop/scripts.pory"
	.string "Finished! Oh my, it looks so perfect! \p"
	.string "I need to test it now… but I can't \n"
	.string "just leave the shop!\p"
	.string "Oh, I know! \p"
	.string "Why don't you take it, as thanks for \n"
	.string "helping me complete it? \p"
	.string "Plus that would advertise the shop so \n"
	.string "really it's a win-win situation. \p"
	.string "Take it, I insist! \p"
	.string "The manual's the big red book in the \n"
	.string "corner, feel free to have a look!$"

BikeManual::
# 77 "data/maps/CrystalStreamCity_BikeShop/scripts.pory"
	.string "MACH BIKE MANUAL \p"
	.string "Be faster than ever with the MACH BIKE!\p"
	.string "The MACH BIKE is speedy, but it can't\n"
	.string "stop very quickly.\p"
	.string "It gets a little tricky to get around\n"
	.string "a corner.\p"
	.string "Release the + Control Pad a little\n"
	.string "before turning to slow down.$"

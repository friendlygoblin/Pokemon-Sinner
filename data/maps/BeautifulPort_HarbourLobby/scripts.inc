BeautifulPort_HarbourLobby_MapScripts::
	.byte 0


BP_Lobby_Sailor::
# 4 "data/maps/BeautifulPort_HarbourLobby/scripts.pory"
	lock
# 5 "data/maps/BeautifulPort_HarbourLobby/scripts.pory"
	msgbox BP_WelcomeToBPHarbour, MSGBOX_YESNO
# 6 "data/maps/BeautifulPort_HarbourLobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BP_Lobby_Sailor_2
# 16 "data/maps/BeautifulPort_HarbourLobby/scripts.pory"
	msgbox BP_NoTicket, MSGBOX_AUTOCLOSE
# 18 "data/maps/BeautifulPort_HarbourLobby/scripts.pory"
	releaseall
	end

BP_Lobby_Sailor_2:
# 7 "data/maps/BeautifulPort_HarbourLobby/scripts.pory"
	playse SE_SHOP
# 8 "data/maps/BeautifulPort_HarbourLobby/scripts.pory"
	msgbox BP_YesTicket, MSGBOX_AUTOCLOSE
# 9 "data/maps/BeautifulPort_HarbourLobby/scripts.pory"
	removemoney 100
# 10 "data/maps/BeautifulPort_HarbourLobby/scripts.pory"
	warp MAP_SS_TIDAL_CORRIDOR, 7, 10
# 11 "data/maps/BeautifulPort_HarbourLobby/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, 0
# 12 "data/maps/BeautifulPort_HarbourLobby/scripts.pory"
	releaseall
	end


BP_WelcomeToBPHarbour::
# 22 "data/maps/BeautifulPort_HarbourLobby/scripts.pory"
	.string "Welcome to Beautiful Port Harbour!\p"
	.string "The next boat will soon depart for \n"
	.string "Godzilland.\p"
	.string "There are a few tickets left, for a \n"
	.string "price of ¥100.\p"
	.string "Would you like to buy one?$"

BP_YesTicket::
# 31 "data/maps/BeautifulPort_HarbourLobby/scripts.pory"
	.string "Alright, here you go!\p"
	.string "Bon voyage!$"

BP_NoTicket::
# 36 "data/maps/BeautifulPort_HarbourLobby/scripts.pory"
	.string "Perhaps another time, then. $"

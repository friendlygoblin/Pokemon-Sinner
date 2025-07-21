Godzilland_HarbourLobby_MapScripts::
	.byte 0


Godzilland_Lobby_Sailor::
# 4 "data/maps/Godzilland_HarbourLobby/scripts.pory"
	lock
# 5 "data/maps/Godzilland_HarbourLobby/scripts.pory"
	msgbox Godzilland_WelcomeToHarbour, MSGBOX_YESNO
# 6 "data/maps/Godzilland_HarbourLobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Godzilland_Lobby_Sailor_2
# 16 "data/maps/Godzilland_HarbourLobby/scripts.pory"
	msgbox Godzilland_NoTicket, MSGBOX_AUTOCLOSE
# 18 "data/maps/Godzilland_HarbourLobby/scripts.pory"
	releaseall
	end

Godzilland_Lobby_Sailor_2:
# 7 "data/maps/Godzilland_HarbourLobby/scripts.pory"
	playse SE_SHOP
# 8 "data/maps/Godzilland_HarbourLobby/scripts.pory"
	msgbox Godzilland_YesTicket, MSGBOX_AUTOCLOSE
# 9 "data/maps/Godzilland_HarbourLobby/scripts.pory"
	removemoney 100
# 10 "data/maps/Godzilland_HarbourLobby/scripts.pory"
	warp MAP_SS_TIDAL_CORRIDOR, 7, 10
# 11 "data/maps/Godzilland_HarbourLobby/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, 2
# 12 "data/maps/Godzilland_HarbourLobby/scripts.pory"
	releaseall
	end


Godzilland_WelcomeToHarbour::
# 22 "data/maps/Godzilland_HarbourLobby/scripts.pory"
	.string "Oh hi there!\p"
	.string "You're just in time for the next ferry \n"
	.string "to Beautiful Port!\p"
	.string "Tickets are ¥100, do you want one?$"

Godzilland_YesTicket::
# 29 "data/maps/Godzilland_HarbourLobby/scripts.pory"
	.string "Alright then, enjoy the trip!$"

Godzilland_NoTicket::
# 33 "data/maps/Godzilland_HarbourLobby/scripts.pory"
	.string "Oh, alright.\p"
	.string "Come back soon!$"

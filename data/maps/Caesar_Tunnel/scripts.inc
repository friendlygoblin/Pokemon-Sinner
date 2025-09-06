Caesar_Tunnel_MapScripts::
	.byte 0


CaesarTunnel_FossilGuy::
# 4 "data/maps/Caesar_Tunnel/scripts.pory"
	lock
# 5 "data/maps/Caesar_Tunnel/scripts.pory"
	faceplayer
# 6 "data/maps/Caesar_Tunnel/scripts.pory"
	goto_if_set FLAG_CAESARTUNNEL_FOSSIL, CaesarTunnel_FossilGuy_2
# 11 "data/maps/Caesar_Tunnel/scripts.pory"
	msgbox CaesarTunnel_FoundFossils
# 13 "data/maps/Caesar_Tunnel/scripts.pory"
	dynmultipush CaesarTunnel_FossilGuy_Text_0, ITEM_ROOT_FOSSIL
# 14 "data/maps/Caesar_Tunnel/scripts.pory"
	dynmultipush CaesarTunnel_FossilGuy_Text_1, ITEM_CLAW_FOSSIL
# 15 "data/maps/Caesar_Tunnel/scripts.pory"
	dynmultipush CaesarTunnel_FossilGuy_Text_2, ITEM_NONE
# 16 "data/maps/Caesar_Tunnel/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 3, DYN_MULTICHOICE_CB_NONE
# 18 "data/maps/Caesar_Tunnel/scripts.pory"
	switch VAR_RESULT
# 19 "data/maps/Caesar_Tunnel/scripts.pory"
	case ITEM_ROOT_FOSSIL, CaesarTunnel_FossilGuy_6
# 23 "data/maps/Caesar_Tunnel/scripts.pory"
	case ITEM_CLAW_FOSSIL, CaesarTunnel_FossilGuy_7
# 27 "data/maps/Caesar_Tunnel/scripts.pory"
	case ITEM_NONE, CaesarTunnel_FossilGuy_8
# 30 "data/maps/Caesar_Tunnel/scripts.pory"
	msgbox CaesarTunnel_FossilGuy_Text_3, MSGBOX_AUTOCLOSE
CaesarTunnel_FossilGuy_1:
# 33 "data/maps/Caesar_Tunnel/scripts.pory"
	releaseall
	end

CaesarTunnel_FossilGuy_2:
# 7 "data/maps/Caesar_Tunnel/scripts.pory"
	msgbox CaesarTunnel_TakingBreak, MSGBOX_AUTOCLOSE
	goto CaesarTunnel_FossilGuy_1

CaesarTunnel_FossilGuy_6:
# 20 "data/maps/Caesar_Tunnel/scripts.pory"
	giveitem ITEM_ROOT_FOSSIL
# 21 "data/maps/Caesar_Tunnel/scripts.pory"
	msgbox CaesarTunnel_TakingBreak, MSGBOX_AUTOCLOSE
# 22 "data/maps/Caesar_Tunnel/scripts.pory"
	setflag FLAG_CAESARTUNNEL_FOSSIL
	goto CaesarTunnel_FossilGuy_1

CaesarTunnel_FossilGuy_7:
# 24 "data/maps/Caesar_Tunnel/scripts.pory"
	giveitem ITEM_CLAW_FOSSIL
# 25 "data/maps/Caesar_Tunnel/scripts.pory"
	msgbox CaesarTunnel_TakingBreak, MSGBOX_AUTOCLOSE
# 26 "data/maps/Caesar_Tunnel/scripts.pory"
	setflag FLAG_CAESARTUNNEL_FOSSIL
	goto CaesarTunnel_FossilGuy_1

CaesarTunnel_FossilGuy_8:
# 28 "data/maps/Caesar_Tunnel/scripts.pory"
	msgbox CaesarTunnel_FossilGuy_Text_3, MSGBOX_AUTOCLOSE
	goto CaesarTunnel_FossilGuy_1


CaesarTunnel_FossilGuy_Text_0:
# 13 "data/maps/Caesar_Tunnel/scripts.pory"
	.string "Root Fossil$"

CaesarTunnel_FossilGuy_Text_1:
# 14 "data/maps/Caesar_Tunnel/scripts.pory"
	.string "Claw Fossil$"

CaesarTunnel_FossilGuy_Text_2:
# 15 "data/maps/Caesar_Tunnel/scripts.pory"
	.string "None, thanks!$"

CaesarTunnel_FossilGuy_Text_3:
# 28 "data/maps/Caesar_Tunnel/scripts.pory"
	.string "Ah, that's fine…\p"
	.string "I'll stay here for a bit, I can't go any\n"
	.string "further with both fossils in my bag.$"

CaesarTunnel_FoundFossils::
# 37 "data/maps/Caesar_Tunnel/scripts.pory"
	.string "Huff… huff… I found some fossils during\n"
	.string "my travels but they're so heavy… \p"
	.string "I wanted to get them to Crystal Stream \n"
	.string "City's museum to have them analysed, \l"
	.string "but I'll never get there alive carrying \l"
	.string "both. \p"
	.string "You travel the world too, right?\n"
	.string "How about you take one with you? $"

CaesarTunnel_TakingBreak::
# 48 "data/maps/Caesar_Tunnel/scripts.pory"
	.string "My bag is so much lighter now, thank \n"
	.string "you! \p"
	.string "I'm taking a break to rest, but I'll \n"
	.string "reach the Crystal Stream City Museum \l"
	.string "eventually!$"

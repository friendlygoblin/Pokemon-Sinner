MirrorCity_ConcertHall_Lounge1_MapScripts::
	.byte 0


MCCH_LoungeHozier::
# 12 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	lock
# 13 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	faceplayer
# 14 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeHozier_OfferBattle, MSGBOX_YESNO
# 15 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCCH_LoungeHozier_2
# 21 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeHozier_RefuseBattle, MSGBOX_AUTOCLOSE
MCCH_LoungeHozier_1:
# 23 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 24 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	release
	end

MCCH_LoungeHozier_2:
# 16 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeHozier_AcceptBattle, MSGBOX_AUTOCLOSE
# 17 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	trainerbattle_no_intro TRAINER_HOZIER_2, MCCH_LoungeHozier_Text_0
# 18 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeHozier_PostBattle, MSGBOX_AUTOCLOSE
	goto MCCH_LoungeHozier_1


MCCH_LoungeFlorence::
# 54 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	lock
# 55 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	faceplayer
# 56 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeFlorence_OfferBattle, MSGBOX_YESNO
# 57 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCCH_LoungeFlorence_2
# 63 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeFlorence_RefuseBattle, MSGBOX_AUTOCLOSE
MCCH_LoungeFlorence_1:
# 65 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 66 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	release
	end

MCCH_LoungeFlorence_2:
# 58 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeFlorence_AcceptBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	trainerbattle_no_intro TRAINER_FLORENCE_2, MCCH_LoungeFlorence_Text_0
# 60 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeFlorence_PostBattle, MSGBOX_AUTOCLOSE
	goto MCCH_LoungeFlorence_1


MCCH_LoungeStVincent::
# 95 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	lock
# 96 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	faceplayer
# 97 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeStVincent_OfferBattle, MSGBOX_YESNO
# 98 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCCH_LoungeStVincent_2
# 104 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeStVincent_RefuseBattle, MSGBOX_AUTOCLOSE
MCCH_LoungeStVincent_1:
# 106 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 107 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	release
	end

MCCH_LoungeStVincent_2:
# 99 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeStVincent_AcceptBattle, MSGBOX_AUTOCLOSE
# 100 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	trainerbattle_no_intro TRAINER_STVINCENT_2, MCCH_LoungeStVincent_Text_0
# 101 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeStVincent_PostBattle, MSGBOX_AUTOCLOSE
	goto MCCH_LoungeStVincent_1


MCCH_LoungeChappell::
# 138 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	lock
# 139 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	faceplayer
# 140 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeChappell_OfferBattle, MSGBOX_YESNO
# 141 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCCH_LoungeChappell_2
# 147 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeChappell_RefuseBattle, MSGBOX_AUTOCLOSE
MCCH_LoungeChappell_1:
# 149 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 150 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	release
	end

MCCH_LoungeChappell_2:
# 142 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeChappell_AcceptBattle, MSGBOX_AUTOCLOSE
# 143 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAPPELL_2, MCCH_LoungeChappell_Text_0
# 144 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeChappell_PostBattle, MSGBOX_AUTOCLOSE
	goto MCCH_LoungeChappell_1


MCCH_LoungeCMAT::
# 179 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	lock
# 180 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	faceplayer
# 181 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeCMAT_OfferBattle, MSGBOX_YESNO
# 182 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCCH_LoungeCMAT_2
# 188 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeCMAT_RefuseBattle, MSGBOX_AUTOCLOSE
MCCH_LoungeCMAT_1:
# 190 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 191 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	release
	end

MCCH_LoungeCMAT_2:
# 183 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeCMAT_AcceptBattle, MSGBOX_AUTOCLOSE
# 184 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	trainerbattle_no_intro TRAINER_CMAT_2, MCCH_LoungeCMAT_Text_0
# 185 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeCMAT_PostBattle, MSGBOX_AUTOCLOSE
	goto MCCH_LoungeCMAT_1


MCCH_LoungeMarina::
# 216 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	lock
# 217 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	faceplayer
# 218 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeMarina_OfferBattle, MSGBOX_YESNO
# 219 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCCH_LoungeMarina_2
# 225 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeMarina_RefuseBattle, MSGBOX_AUTOCLOSE
MCCH_LoungeMarina_1:
# 227 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 228 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	release
	end

MCCH_LoungeMarina_2:
# 220 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeMarina_AcceptBattle, MSGBOX_AUTOCLOSE
# 221 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	trainerbattle_no_intro TRAINER_MARINA_2, MCCH_LoungeCMAT_Text_0
# 222 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeMarina_PostBattle, MSGBOX_AUTOCLOSE
	goto MCCH_LoungeMarina_1


MCCH_LoungeHozier_Text_0:
# 17 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "Either way, it ends…$"

MCCH_LoungeFlorence_Text_0:
# 59 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "Oh, tell me it's not over yet…$"

MCCH_LoungeStVincent_Text_0:
# 100 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "Down and out…$"

MCCH_LoungeChappell_Text_0:
# 143 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "You're hot to go!$"

MCCH_LoungeCMAT_Text_0:
# 184 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "I'm fine, no really, I'm fine…$"

LoungeHozier_OfferBattle::
# 28 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "HOZIER: Oh, hello young friend! \p"
	.string "You've come a long way, that's great! \p"
	.string "Would you like to tell me about your \n"
	.string "travels over a friendly battle? \p"
	.string "Consider it training before you face \n"
	.string "The Last Dinner Party. $"

LoungeHozier_RefuseBattle::
# 37 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "Very well, perhaps another time… $"

LoungeHozier_AcceptBattle::
# 41 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "Let's do it then, don't hold back! $"

LoungeHozier_PostBattle::
# 45 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "How incredible, you were phenomenal \n"
	.string "as you were the first time we met! \p"
	.string "I wish you the best of luck against \n"
	.string "The Last Dinner Party, even if you \l"
	.string "may not need it. $"

LoungeFlorence_OfferBattle::
# 70 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "FLORENCE: Here you are! \p"
	.string "I knew you had the drive to reach great \n"
	.string "heights. \p"
	.string "I saw it in you. \p"
	.string "Now, would you like to warm up with me \n"
	.string "before facing The Last Dinner Party ?$"

LoungeFlorence_RefuseBattle::
# 79 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "It's alright, come back if you change\n"
	.string "your mind. $"

LoungeFlorence_AcceptBattle::
# 84 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "Show me everything you have! $"

LoungeFlorence_PostBattle::
# 88 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "I knew you'd grown strong but you \n"
	.string "exceeded all my expectations! \p"
	.string "Keep it up, love! $"

LoungeStVincent_OfferBattle::
# 111 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "ST.VINCENT: Yes, what do you want? \p"
	.string "Oh, it's you! \p"
	.string "So this is it, you're challenging The \n"
	.string "Last Dinner Party today? \p"
	.string "Do you feel ready? \p"
	.string "I can help you prepare if you want. $"

LoungeStVincent_RefuseBattle::
# 120 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "You're all prepared already? \n"
	.string "That's great! \p"
	.string "I'll be hanging out here until the \n"
	.string "show starts if you change your mind. $"

LoungeStVincent_AcceptBattle::
# 127 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "Here we go, give it all away! $"

LoungeStVincent_PostBattle::
# 131 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "Good job, just as good as last time! \p"
	.string "Go on, go get'em! \p"
	.string "The whole world's watching you! $"

LoungeChappell_OfferBattle::
# 154 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "CHAPPELL: Well, if it isn't the cunty \p"
	.string "one from the Sunday Cave! \p"
	.string "You've come to challenge The Last  \n"
	.string "Dinner Party? \p"
	.string "How fun! \p"
	.string "Warm up with me first! $"

LoungeChappell_RefuseBattle::
# 163 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "No? \p"
	.string "No fun…  \p"
	.string "Well, good luck anyway. $"

LoungeChappell_AcceptBattle::
# 169 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "Let's go, get it hot! $"

LoungeChappell_PostBattle::
# 173 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "Wow, as fun as last time! \p"
	.string "Go show'em how iconic you are! $"

LoungeCMAT_OfferBattle::
# 195 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "CMAT: Oh it's you again! \p"
	.string "Fancy a rematch? \n"
	.string "Pass the time while we wait for TLDP? $"

LoungeCMAT_RefuseBattle::
# 201 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "That's okay, I'm here if you need\n"
	.string "me… $"

LoungeCMAT_AcceptBattle::
# 206 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "Great! Make this interesting, okay? $"

LoungeCMAT_PostBattle::
# 210 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "That was certainly entertaining! \p"
	.string "Enjoy the show, have fun! $"

LoungeMarina_OfferBattle::
# 232 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "CMAT: Oh it's you again! \p"
	.string "Fancy a rematch? \n"
	.string "Pass the time while we wait for TLDP? $"

LoungeMarina_RefuseBattle::
# 238 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "That's okay, I'm here if you need\n"
	.string "me… $"

LoungeMarina_AcceptBattle::
# 243 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "Great! Make this interesting, okay? $"

LoungeMarina_PostBattle::
# 247 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "That was certainly entertaining! \p"
	.string "Enjoy the show, have fun! $"

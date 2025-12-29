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
# 94 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	lock
# 95 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	faceplayer
# 96 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeStVincent_OfferBattle, MSGBOX_YESNO
# 97 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCCH_LoungeStVincent_2
# 103 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeStVincent_RefuseBattle, MSGBOX_AUTOCLOSE
MCCH_LoungeStVincent_1:
# 105 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 106 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	release
	end

MCCH_LoungeStVincent_2:
# 98 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeStVincent_AcceptBattle, MSGBOX_AUTOCLOSE
# 99 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	trainerbattle_no_intro TRAINER_STVINCENT_2, MCCH_LoungeStVincent_Text_0
# 100 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeStVincent_PostBattle, MSGBOX_AUTOCLOSE
	goto MCCH_LoungeStVincent_1


MCCH_LoungeChappell::
# 137 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	lock
# 138 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	faceplayer
# 139 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeChappell_OfferBattle, MSGBOX_YESNO
# 140 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCCH_LoungeChappell_2
# 146 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeChappell_RefuseBattle, MSGBOX_AUTOCLOSE
MCCH_LoungeChappell_1:
# 148 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 149 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	release
	end

MCCH_LoungeChappell_2:
# 141 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeChappell_AcceptBattle, MSGBOX_AUTOCLOSE
# 142 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAPPELL_2, MCCH_LoungeChappell_Text_0
# 143 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeChappell_PostBattle, MSGBOX_AUTOCLOSE
	goto MCCH_LoungeChappell_1


MCCH_LoungeCMAT::
# 178 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	lock
# 179 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	faceplayer
# 180 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeCMAT_OfferBattle, MSGBOX_YESNO
# 181 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCCH_LoungeCMAT_2
# 187 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeCMAT_RefuseBattle, MSGBOX_AUTOCLOSE
MCCH_LoungeCMAT_1:
# 189 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 190 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	release
	end

MCCH_LoungeCMAT_2:
# 182 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeCMAT_AcceptBattle, MSGBOX_AUTOCLOSE
# 183 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	trainerbattle_no_intro TRAINER_CMAT_2, MCCH_LoungeCMAT_Text_0
# 184 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeCMAT_PostBattle, MSGBOX_AUTOCLOSE
	goto MCCH_LoungeCMAT_1


MCCH_LoungeMarina::
# 215 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	lock
# 216 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	faceplayer
# 217 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeMarina_OfferBattle, MSGBOX_YESNO
# 218 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCCH_LoungeMarina_2
# 224 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeMarina_RefuseBattle, MSGBOX_AUTOCLOSE
MCCH_LoungeMarina_1:
# 226 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 227 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	release
	end

MCCH_LoungeMarina_2:
# 219 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeMarina_AcceptBattle, MSGBOX_AUTOCLOSE
# 220 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	trainerbattle_no_intro TRAINER_MARINA_2, MCCH_LoungeMarina_Text_0
# 221 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeMarina_PostBattle, MSGBOX_AUTOCLOSE
	goto MCCH_LoungeMarina_1


MCCH_LoungeBrianMay::
# 258 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	lock
# 259 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	faceplayer
# 260 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeBrianMay_OfferBattle, MSGBOX_YESNO
# 261 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCCH_LoungeBrianMay_2
# 267 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeBrianMay_RefuseBattle, MSGBOX_AUTOCLOSE
MCCH_LoungeBrianMay_1:
# 269 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 270 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	release
	end

MCCH_LoungeBrianMay_2:
# 262 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeBrianMay_AcceptBattle, MSGBOX_AUTOCLOSE
# 263 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	trainerbattle_no_intro TRAINER_BRIANMAY_2, MCCH_LoungeMarina_Text_0
# 264 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	msgbox LoungeBrianMay_PostBattle, MSGBOX_AUTOCLOSE
	goto MCCH_LoungeBrianMay_1


MCCH_LoungeHozier_Text_0:
# 17 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "Either way, it ends…$"

MCCH_LoungeFlorence_Text_0:
# 59 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "Oh, tell me it's not over yet…$"

MCCH_LoungeStVincent_Text_0:
# 99 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "Down and out…$"

MCCH_LoungeChappell_Text_0:
# 142 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "You're hot to go!$"

MCCH_LoungeCMAT_Text_0:
# 183 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "I'm fine, no really, I'm fine…$"

MCCH_LoungeMarina_Text_0:
# 220 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "Nobody can stop you!$"

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
	.string "heights, I saw it in you. \p"
	.string "Now, would you like to warm up with me \n"
	.string "before facing The Last Dinner Party ?$"

LoungeFlorence_RefuseBattle::
# 78 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "It's alright, come back if you change\n"
	.string "your mind. $"

LoungeFlorence_AcceptBattle::
# 83 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "Show me everything you have! $"

LoungeFlorence_PostBattle::
# 87 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "I knew you'd grown strong but you \n"
	.string "exceeded all my expectations! \p"
	.string "Keep it up, love! $"

LoungeStVincent_OfferBattle::
# 110 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "ST.VINCENT: Yes, what do you want? \p"
	.string "Oh, it's you! \p"
	.string "So this is it, you're challenging The \n"
	.string "Last Dinner Party today? \p"
	.string "Do you feel ready? \p"
	.string "I can help you prepare if you want. $"

LoungeStVincent_RefuseBattle::
# 119 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "You're all prepared already? \n"
	.string "That's great! \p"
	.string "I'll be hanging out here until the \n"
	.string "show starts if you change your mind. $"

LoungeStVincent_AcceptBattle::
# 126 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "Here we go, give it all away! $"

LoungeStVincent_PostBattle::
# 130 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "Good job, just as good as last time! \p"
	.string "Go on, go get'em! \p"
	.string "The whole world's watching you! $"

LoungeChappell_OfferBattle::
# 153 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "CHAPPELL: Well, if it isn't the cunty \n"
	.string "one from the Sunday Cave! \p"
	.string "You've come to challenge The Last  \n"
	.string "Dinner Party? \p"
	.string "How fun! \p"
	.string "Warm up with me first! $"

LoungeChappell_RefuseBattle::
# 162 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "No? \p"
	.string "No fun…  \p"
	.string "Well, good luck anyway. $"

LoungeChappell_AcceptBattle::
# 168 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "Let's go, get it hot! $"

LoungeChappell_PostBattle::
# 172 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "Wow, as fun as last time! \p"
	.string "Go show'em how iconic you are! $"

LoungeCMAT_OfferBattle::
# 194 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "CMAT: Oh it's you again! \p"
	.string "Fancy a rematch? \n"
	.string "Pass the time while we wait for TLDP? $"

LoungeCMAT_RefuseBattle::
# 200 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "That's okay, I'm here if you need\n"
	.string "me… $"

LoungeCMAT_AcceptBattle::
# 205 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "Great! Make this interesting, okay? $"

LoungeCMAT_PostBattle::
# 209 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "That was certainly entertaining! \p"
	.string "Enjoy the show, have fun! $"

LoungeMarina_OfferBattle::
# 231 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "MARINA: Oh, hello! \p"
	.string "Yes, I remember you said your goal \n"
	.string "was to challenge TLDP. \p"
	.string "I'm here to see them too. \p"
	.string "Why don't we rematch while we're \n"
	.string "waiting?$"

LoungeMarina_RefuseBattle::
# 240 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "Maybe later, that's okay! $"

LoungeMarina_AcceptBattle::
# 244 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "Perfect! And be cuntissimo like last\n"
	.string "time! $"

LoungeMarina_PostBattle::
# 249 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "That confirms what I thought, you're \n"
	.string "really something special! \p"
	.string "Now go show them that! \p"
	.string "But remember, rule number one is that\n"
	.string "you gotta have fun! $"

LoungeBrianMay_OfferBattle::
# 274 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "BRIAN MAY: Hello! \p"
	.string "You're the young one from the pub,\n"
	.string "the fan of Emily's, aren't you? \p"
	.string "I told Emily I'd be here so here I am! \p"
	.string "Since you're here to challenge the band,\n"
	.string "why don't you show me your strategy?$"

LoungeBrianMay_RefuseBattle::
# 283 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "Oh that's alright, I'm sure you have \n"
	.string "a great plan. \p"
	.string "I'll be cheering you on! $"

LoungeBrianMay_AcceptBattle::
# 289 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "Let's go! $"

LoungeBrianMay_PostBattle::
# 293 "data/maps/MirrorCity_ConcertHall_Lounge1/scripts.pory"
	.string "How brilliant, I'm sure The Last Dinner \n"
	.string "Party will have a lot of fun with you! \p"
	.string "I wish you the best of luck against \n"
	.string "them, go rock them! $"

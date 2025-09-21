MirrorCity_ConcertHall_Lounge2_MapScripts::
	.byte 0


MCCH_LoungeHarv::
# 14 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	lock
# 15 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	faceplayer
# 16 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeHarv_OfferBattle, MSGBOX_YESNO
# 17 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCCH_LoungeHarv_2
# 23 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeHarv_RefuseBattle, MSGBOX_AUTOCLOSE
MCCH_LoungeHarv_1:
# 25 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 26 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	release
	end

MCCH_LoungeHarv_2:
# 18 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeHarv_AcceptBattle, MSGBOX_AUTOCLOSE
# 19 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	trainerbattle_no_intro TRAINER_HARV_2, MCCH_LoungeHarv_Text_0
# 20 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeHarv_PostBattle, MSGBOX_AUTOCLOSE
	goto MCCH_LoungeHarv_1


MCCH_LoungeAle::
# 60 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	lock
# 61 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	faceplayer
# 62 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeAle_OfferBattle, MSGBOX_YESNO
# 63 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCCH_LoungeAle_2
# 69 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeAle_RefuseBattle, MSGBOX_AUTOCLOSE
MCCH_LoungeAle_1:
# 71 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 72 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	release
	end

MCCH_LoungeAle_2:
# 64 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeAle_AcceptBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	trainerbattle_no_intro TRAINER_ALEJANDRA, MCCH_LoungeAle_Text_0
# 66 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeAle_PostBattle, MSGBOX_AUTOCLOSE
	goto MCCH_LoungeAle_1


MCCH_LoungePau::
# 104 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	lock
# 105 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	faceplayer
# 106 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungePau_OfferBattle, MSGBOX_YESNO
# 107 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCCH_LoungePau_2
# 113 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungePau_RefuseBattle, MSGBOX_AUTOCLOSE
MCCH_LoungePau_1:
# 115 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 116 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	release
	end

MCCH_LoungePau_2:
# 108 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungePau_AcceptBattle, MSGBOX_AUTOCLOSE
# 109 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	trainerbattle_no_intro TRAINER_PAULINA, MCCH_LoungePau_Text_0
# 110 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungePau_PostBattle, MSGBOX_AUTOCLOSE
	goto MCCH_LoungePau_1


MCCH_LoungeDany::
# 151 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	lock
# 152 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	faceplayer
# 153 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeDany_OfferBattle, MSGBOX_YESNO
# 154 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCCH_LoungeDany_2
# 160 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeDany_RefuseBattle, MSGBOX_AUTOCLOSE
MCCH_LoungeDany_1:
# 162 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 163 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	release
	end

MCCH_LoungeDany_2:
# 155 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeDany_AcceptBattle, MSGBOX_AUTOCLOSE
# 156 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	trainerbattle_no_intro TRAINER_DANIELA, MCCH_LoungeDany_Text_0
# 157 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeDany_PostBattle, MSGBOX_AUTOCLOSE
	goto MCCH_LoungeDany_1


MCCH_LoungeLuvcat::
# 194 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	lock
# 195 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	faceplayer
# 196 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeLuvcat_OfferBattle, MSGBOX_YESNO
# 197 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCCH_LoungeLuvcat_2
# 203 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeLuvcat_RefuseBattle, MSGBOX_AUTOCLOSE
MCCH_LoungeLuvcat_1:
# 205 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 206 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	release
	end

MCCH_LoungeLuvcat_2:
# 198 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeLuvcat_AcceptBattle, MSGBOX_AUTOCLOSE
# 199 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	trainerbattle_no_intro TRAINER_LUVCAT, MCCH_LoungeLuvcat_Text_0
# 200 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeLuvcat_PostBattle, MSGBOX_AUTOCLOSE
	goto MCCH_LoungeLuvcat_1


MCCH_LoungeNora::
# 234 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	lock
# 235 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	faceplayer
# 236 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeNora_OfferBattle, MSGBOX_YESNO
# 237 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCCH_LoungeNora_2
# 243 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeNora_RefuseBattle, MSGBOX_AUTOCLOSE
MCCH_LoungeNora_1:
# 245 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	release
	end

MCCH_LoungeNora_2:
# 238 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeNora_AcceptBattle, MSGBOX_AUTOCLOSE
# 239 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	trainerbattle_no_intro TRAINER_NORA, MCCH_LoungeNora_Text_0
# 240 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeNora_PostBattle, MSGBOX_AUTOCLOSE
	goto MCCH_LoungeNora_1


MCCH_LoungeKatherine::
# 278 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	lock
# 279 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	faceplayer
# 280 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeKatherine_OfferBattle, MSGBOX_YESNO
# 281 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCCH_LoungeKatherine_2
# 294 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeKatherine_RefuseBattle, MSGBOX_AUTOCLOSE
MCCH_LoungeKatherine_1:
# 296 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 297 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	release
	end

MCCH_LoungeKatherine_2:
# 282 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 283 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MCCH_LoungeKatherine_5
# 287 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeKatherine_AcceptBattle
# 288 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeElla_AcceptBattleFromKatherine, MSGBOX_AUTOCLOSE
# 289 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	trainerbattle_no_intro TRAINER_PICTURE_PARLOUR_2, MCCH_LoungeKatherine_Text_1
# 290 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeKatherine_PostBattle, MSGBOX_AUTOCLOSE
	goto MCCH_LoungeKatherine_1

MCCH_LoungeKatherine_5:
# 284 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox MCCH_LoungeKatherine_Text_0
	goto MCCH_LoungeKatherine_1


MCCH_LoungeElla::
# 331 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	lock
# 332 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	faceplayer
# 333 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeElla_OfferBattle, MSGBOX_YESNO
# 334 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCCH_LoungeElla_2
# 347 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeElla_RefuseBattle, MSGBOX_AUTOCLOSE
MCCH_LoungeElla_1:
# 349 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 350 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	release
	end

MCCH_LoungeElla_2:
# 335 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 336 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MCCH_LoungeElla_5
# 340 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeElla_AcceptBattle
# 341 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeKatherine_AcceptBattleFromElla, MSGBOX_AUTOCLOSE
# 342 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	trainerbattle_no_intro TRAINER_PICTURE_PARLOUR_2, MCCH_LoungeKatherine_Text_1
# 343 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeKatherine_PostBattle, MSGBOX_AUTOCLOSE
	goto MCCH_LoungeElla_1

MCCH_LoungeElla_5:
# 337 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox MCCH_LoungeElla_Text_0
	goto MCCH_LoungeElla_1


MCCH_LoungeCal::
# 383 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	lock
# 384 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	faceplayer
# 385 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeCal_OfferBattle, MSGBOX_YESNO
# 386 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCCH_LoungeCal_2
# 392 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeCal_RefuseBattle, MSGBOX_AUTOCLOSE
MCCH_LoungeCal_1:
# 394 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	applymovement 8, Common_Movement_FaceUp
# 395 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	release
	end

MCCH_LoungeCal_2:
# 387 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeCal_AcceptBattle, MSGBOX_AUTOCLOSE
# 388 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	trainerbattle_no_intro TRAINER_CAL, MCCH_LoungeCal_Text_0
# 389 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	msgbox LoungeCal_PostBattle, MSGBOX_AUTOCLOSE
	goto MCCH_LoungeCal_1


MCCH_LoungeHarv_Text_0:
# 19 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "Cut!\n"
	.string "Wait that's right I'm not at work…$"

MCCH_LoungeAle_Text_0:
# 65 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "… … …$"

MCCH_LoungePau_Text_0:
# 109 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "Greedy little…$"

MCCH_LoungeDany_Text_0:
# 156 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "Do you feel satisfied?$"

MCCH_LoungeLuvcat_Text_0:
# 199 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "I've been damned…$"

MCCH_LoungeNora_Text_0:
# 239 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "Oh it's gonna be great!$"

MCCH_LoungeKatherine_Text_0:
# 284 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "Wait, we only do double battles and you\n"
	.string "only have one POKéMON…\p"
	.string "Come back when you have at least two on\n"
	.string "your team!$"

MCCH_LoungeKatherine_Text_1:
# 289 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "KATHERINE: Yup, still super cool!\p"
	.string "ELLA: You rock!$"

MCCH_LoungeElla_Text_0:
# 337 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "Wait, we only do double battles and you\n"
	.string "only have one POKéMON…\p"
	.string "That wouldn't be fair, come back with\n"
	.string "more POKéMON, we'll wait right here.$"

MCCH_LoungeCal_Text_0:
# 388 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "Ooh, photogenic!$"

LoungeHarv_OfferBattle::
# 30 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "HARV: Hey, that's my new movie star! \p"
	.string "How have you been? \p"
	.string "I'm not filming anything today, or \n"
	.string "at least not for work. \p"
	.string "I'm here to see my friends, The Last \n"
	.string "Dinner Party! \p"
	.string "We have a minute before the show  \n"
	.string "starts, would you like to have a \l"
	.string "quick battle? $"

LoungeHarv_RefuseBattle::
# 42 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "No worries, you know where to find \n"
	.string "me if you change your mind. $"

LoungeHarv_AcceptBattle::
# 47 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "Aaand… ACTION! $"

LoungeHarv_PostBattle::
# 51 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "You really have a unique style, have \n"
	.string "you ever considered being an actor? \p"
	.string "I know who to call if I ever need \n"
	.string "extras again, until then good luck \l"
	.string "against the band! $"

LoungeAle_OfferBattle::
# 76 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "ALEJANDRA: Hi, have we met before? \p"
	.string "No? Thought so…  \p"
	.string "I'm Alejandra, I'm in the band The \n"
	.string "Warning with my sisters, I play bass. \p"
	.string "… … … \p"
	.string "Wanna spar to pass the time? $"
	.string "We're also big fans of The Last Dinner \n"
	.string "Party. \p$"

LoungeAle_RefuseBattle::
# 87 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "Oh I get it, no problem. $"

LoungeAle_AcceptBattle::
# 91 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "Alright, watch out! $"

LoungeAle_PostBattle::
# 95 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "Cool! \p"
	.string "We're thinking of having our own \n"
	.string "challenge too, you know. \p"
	.string "You'll be welcome to try it!$"

LoungePau_OfferBattle::
# 120 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "PAULINA: Hi I'm Paulina but my sisters \n"
	.string "call me Pau! \p"
	.string "I play drums for The Warning we're big \n"
	.string "fans of The Last Dinner Party! \p"
	.string "Are you here to challenge them? \p"
	.string "I heard they're super strong, why don't \n"
	.string "you warm up with me?\p"
	.string "To be honest I just really wanna move, \n"
	.string "I could use a fun battle… $"

LoungePau_RefuseBattle::
# 132 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "Oh okay, I'll find something else to \n"
	.string "do it's okay. $"

LoungePau_AcceptBattle::
# 137 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "You better be good! $"

LoungePau_PostBattle::
# 141 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "Well that was fun! \p"
	.string "I'm glad I managed to convince my \n"
	.string "sisters to set up a fan challenge! \p"
	.string "Well, Dany was on board right away, it \n"
	.string "was Ale who was hard to convince… \p"
	.string "Anyway, good luck against TLDP! $"

LoungeDany_OfferBattle::
# 167 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "DANY: Hi, I'm Dany! \p"
	.string "I'm the guitarist and lead singer of \n"
	.string "The Warning, we're three sisters from \l"
	.string "Mexico and we came to see TLDP! \p"
	.string "How about we have a quick battle, for \n"
	.string "you to train before you face TLDP and \l"
	.string "for me to prepare for our very own \l"
	.string "challenge! $"

LoungeDany_RefuseBattle::
# 178 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "Awh okay, another time maybe… $"

LoungeDany_AcceptBattle::
# 182 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "Yay, let's do this! $"

LoungeDany_PostBattle::
# 186 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "Wow that was incredible, I hope we'll \n"
	.string "get cool challengers like you! \p"
	.string "Have fun at the show and go show'em \n"
	.string "you ain't a burnout! $"

LoungeLuvcat_OfferBattle::
# 210 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "???: Hi, darling! \p"
	.string "LUVCAT: I'm Luvcat, I opened for TLDP \n"
	.string "a little while ago! \p"
	.string "You're here to challenge them, aren't \n"
	.string "you? \p"
	.string "Would you like to warm up against me? \n"
	.string "It'll be fun! $"

LoungeLuvcat_RefuseBattle::
# 220 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "No worries, another time… $"

LoungeLuvcat_AcceptBattle::
# 224 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "Great, let's go! $"

LoungeLuvcat_PostBattle::
# 228 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "My goodness, you're so delicious! \p"
	.string "TLDP are gonna love battling with you! $"

LoungeNora_OfferBattle::
# 249 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "NORA: {PLAYER}, what's up? \p"
	.string "So this is it? You're ready for TLDP? \p"
	.string "I've seen them prepare, you're gonna \n"
	.string "have fun! \p"
	.string "To be honest… I'd like to have fun too, \n"
	.string "spar with me? $"

LoungeNora_RefuseBattle::
# 258 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "That's alright, I should get my equipment\n"
	.string "ready anyway, I'll be shooting the show! $"

LoungeNora_AcceptBattle::
# 263 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "Let's do it!\n"
	.string "And don't hold back! $"

LoungeNora_PostBattle::
# 268 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "Wow, you're gonna crush it out there, \n"
	.string "and I'm not saying that because you \l"
	.string "just beat me! \p"
	.string "The band are still killers, but I bet \n"
	.string "you'll give us a real show, can't wait \l"
	.string "to take pics of that! $"

LoungeKatherine_OfferBattle::
# 301 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "KATHERINE: Hey, you're the one from the \n"
	.string "music video! \p"
	.string "You're here for the TLDP challenge? \p"
	.string "Ella and I are just here to watch the \n"
	.string "show, but that sounds fun!\p"
	.string "I know they don't do double battles, \n"
	.string "but wanna train with us? $"

LoungeKatherine_RefuseBattle::
# 311 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "Bummer, well we'll be waitin' here if \n"
	.string "you need us. $"

LoungeKatherine_AcceptBattle::
# 316 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "Alright! Ella? $"

LoungeKatherine_AcceptBattleFromElla::
# 320 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "KATHERINE: On it!$"

LoungeKatherine_PostBattle::
# 324 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "Just as cool as on set! \p"
	.string "You'll come visit us if we set up our\n"
	.string "own challenge, will ya? $"

LoungeElla_OfferBattle::
# 354 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "ELLA: Hey, I remember you, you starred \n"
	.string "in our music video! \p"
	.string "Thanks again for that. \p"
	.string "Wanna double battles again, consider \n"
	.string "it training for TLDP? $"

LoungeElla_RefuseBattle::
# 362 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "That's fine, we'll just chill here  \n"
	.string "waitin' for the show to start. $"

LoungeElla_AcceptBattle::
# 367 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "Cool! Katherine? $"

LoungeElla_AcceptBattleFromKatherine::
# 371 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "ELLA: Be right there!$"

LoungeElla_PostBattle::
# 375 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "Hell yeah, that was cool! \p"
	.string "Good luck out there, hope you'll \n"
	.string "come to us when we're big enough \l"
	.string "to have our own challenge! $"

LoungeCal_OfferBattle::
# 399 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "CAL: Hello, are you here to see The \n"
	.string "Last Dinner Party? \p"
	.string "Oh, challenge them? \p"
	.string "Right, they told me about that, sounds \n"
	.string "exciting! \p"
	.string "Hey, what if I took a few pictures of \n"
	.string "you, immortalise the moment before the \l"
	.string "big battle? \p"
	.string "We can have a quick match now so I can \n"
	.string "get shots in action, what do you say?$"

LoungeCal_RefuseBattle::
# 412 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "No worries, come back if you change\n"
	.string "your mind. $"

LoungeCal_AcceptBattle::
# 417 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "Okay, now just be cool and natural! $"

LoungeCal_PostBattle::
# 421 "data/maps/MirrorCity_ConcertHall_Lounge2/scripts.pory"
	.string "Hey, nice! I got some good shots \n"
	.string "there! \p"
	.string "Have fun, The Last Dinner Party are \n"
	.string "gonna love your style I'm sure! $"

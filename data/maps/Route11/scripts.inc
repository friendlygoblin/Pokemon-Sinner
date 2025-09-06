Route11_MapScripts::
# 2 "data/maps/Route11/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route11_HideEmily
	.byte 0


Route11_HideEmily::
# 9 "data/maps/Route11/scripts.pory"
	compare VAR_ROUTE11_SNORLAX, 0
	goto_if_eq Route11_HideEmily_1
# 9 "data/maps/Route11/scripts.pory"
	compare VAR_ROUTE11_SNORLAX, 3
	goto_if_eq Route11_HideEmily_1
	return

Route11_HideEmily_1:
# 10 "data/maps/Route11/scripts.pory"
	setflag FLAG_ROUTE11_EMILY
	return


Route11_Snorlax::
# 15 "data/maps/Route11/scripts.pory"
	lock
# 16 "data/maps/Route11/scripts.pory"
	switch VAR_ROUTE11_SNORLAX
# 17 "data/maps/Route11/scripts.pory"
	case 0, Route11_Snorlax_3
# 20 "data/maps/Route11/scripts.pory"
	case 1, Route11_Snorlax_4
# 22 "data/maps/Route11/scripts.pory"
	case 2, Route11_Snorlax_5
# 38 "data/maps/Route11/scripts.pory"
	case 3, Route11_Snorlax_6
Route11_Snorlax_1:
# 41 "data/maps/Route11/scripts.pory"
	release
	end

Route11_Snorlax_3:
# 18 "data/maps/Route11/scripts.pory"
	msgbox Route11_Snorlax_Text_0, MSGBOX_AUTOCLOSE
# 19 "data/maps/Route11/scripts.pory"
	call Route11_EmilyToSnorlax
	goto Route11_Snorlax_1

Route11_Snorlax_4:
# 21 "data/maps/Route11/scripts.pory"
	msgbox Route11_Snorlax_Text_0, MSGBOX_AUTOCLOSE
	goto Route11_Snorlax_1

Route11_Snorlax_5:
# 23 "data/maps/Route11/scripts.pory"
	msgbox Route11_Snorlax_Text_1, MSGBOX_AUTOCLOSE
# 24 "data/maps/Route11/scripts.pory"
	setwildbattle SPECIES_SNORLAX, 30
# 25 "data/maps/Route11/scripts.pory"
	dowildbattle
# 26 "data/maps/Route11/scripts.pory"
	removeobject 2
# 27 "data/maps/Route11/scripts.pory"
	setvar VAR_ROUTE11_SNORLAX, 3
# 28 "data/maps/Route11/scripts.pory"
	setflag FLAG_ROUTE11_SNORLAX
# 29 "data/maps/Route11/scripts.pory"
	applymovement 1, WalkInPlaceUp
# 30 "data/maps/Route11/scripts.pory"
	waitmovement 0
# 31 "data/maps/Route11/scripts.pory"
	msgbox Route11_EmilyMoveOn, MSGBOX_AUTOCLOSE
# 32 "data/maps/Route11/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route11_PlayerMoveAside
# 33 "data/maps/Route11/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route11/scripts.pory"
	applymovement 1, Route11_EmilyLeavesAfterSnorlax
# 35 "data/maps/Route11/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route11/scripts.pory"
	removeobject 1
# 37 "data/maps/Route11/scripts.pory"
	setflag FLAG_ROUTE11_EMILY
	goto Route11_Snorlax_1

Route11_Snorlax_6:
# 39 "data/maps/Route11/scripts.pory"
	msgbox Route11_Snorlax_Text_2
	goto Route11_Snorlax_1


Route11_EmilyToSnorlax::
# 46 "data/maps/Route11/scripts.pory"
	addobject 1
# 47 "data/maps/Route11/scripts.pory"
	compare VAR_ROUTE11_SNORLAX, 0
	goto_if_eq Route11_EmilyToSnorlax_2
Route11_EmilyToSnorlax_1:
# 57 "data/maps/Route11/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Route11_EmilyToSnorlax_8
Route11_EmilyToSnorlax_6:
# 64 "data/maps/Route11/scripts.pory"
	msgbox Route11_NotEnoughBadges, MSGBOX_AUTOCLOSE
# 65 "data/maps/Route11/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_LOOK_AROUND
Route11_EmilyToSnorlax_4:
# 67 "data/maps/Route11/scripts.pory"
	release
	end

Route11_EmilyToSnorlax_2:
# 48 "data/maps/Route11/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 49 "data/maps/Route11/scripts.pory"
	waitmovement 0
# 50 "data/maps/Route11/scripts.pory"
	applymovement 1, Route11_EmilyWalksToPlayer
# 51 "data/maps/Route11/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route11/scripts.pory"
	clearflag FLAG_ROUTE11_EMILY
# 53 "data/maps/Route11/scripts.pory"
	setobjectxyperm 1, 8, 13
# 54 "data/maps/Route11/scripts.pory"
	setvar VAR_ROUTE11_SNORLAX, 1
# 55 "data/maps/Route11/scripts.pory"
	msgbox Route11_EmilySnorlax
	goto Route11_EmilyToSnorlax_1

Route11_EmilyToSnorlax_5:
# 58 "data/maps/Route11/scripts.pory"
	msgbox Route11_EmilyPlaysFlute, MSGBOX_AUTOCLOSE
# 59 "data/maps/Route11/scripts.pory"
	applymovement 1, WalkInPlaceUp
# 60 "data/maps/Route11/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route11/scripts.pory"
	setvar VAR_ROUTE11_SNORLAX, 2
	goto Route11_EmilyToSnorlax_4

Route11_EmilyToSnorlax_7:
# 57 "data/maps/Route11/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, Route11_EmilyToSnorlax_12
	goto Route11_EmilyToSnorlax_6

Route11_EmilyToSnorlax_8:
# 57 "data/maps/Route11/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Route11_EmilyToSnorlax_7
	goto Route11_EmilyToSnorlax_6

Route11_EmilyToSnorlax_11:
# 57 "data/maps/Route11/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Route11_EmilyToSnorlax_15
	goto Route11_EmilyToSnorlax_6

Route11_EmilyToSnorlax_12:
# 57 "data/maps/Route11/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, Route11_EmilyToSnorlax_11
	goto Route11_EmilyToSnorlax_6

Route11_EmilyToSnorlax_15:
# 57 "data/maps/Route11/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, Route11_EmilyToSnorlax_5
	goto Route11_EmilyToSnorlax_6


Route11_Emily::
# 72 "data/maps/Route11/scripts.pory"
	lock
# 73 "data/maps/Route11/scripts.pory"
	faceplayer
# 74 "data/maps/Route11/scripts.pory"
	compare VAR_ROUTE11_SNORLAX, 1
	goto_if_eq Route11_Emily_2
# 83 "data/maps/Route11/scripts.pory"
	compare VAR_ROUTE11_SNORLAX, 2
	goto_if_eq Route11_Emily_3
Route11_Emily_1:
# 86 "data/maps/Route11/scripts.pory"
	release
	end

Route11_Emily_2:
# 75 "data/maps/Route11/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Route11_Emily_9
Route11_Emily_7:
# 79 "data/maps/Route11/scripts.pory"
	msgbox Route11_StillNotEnoughBadges, MSGBOX_AUTOCLOSE
	goto Route11_Emily_1

Route11_Emily_3:
# 84 "data/maps/Route11/scripts.pory"
	msgbox Route11_Emily_Text_0
	goto Route11_Emily_1

Route11_Emily_6:
# 76 "data/maps/Route11/scripts.pory"
	msgbox Route11_FinallyEnoughBadges, MSGBOX_AUTOCLOSE
	goto Route11_Emily_1

Route11_Emily_8:
# 75 "data/maps/Route11/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, Route11_Emily_13
	goto Route11_Emily_7

Route11_Emily_9:
# 75 "data/maps/Route11/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Route11_Emily_8
	goto Route11_Emily_7

Route11_Emily_12:
# 75 "data/maps/Route11/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Route11_Emily_16
	goto Route11_Emily_7

Route11_Emily_13:
# 75 "data/maps/Route11/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, Route11_Emily_12
	goto Route11_Emily_7

Route11_Emily_16:
# 75 "data/maps/Route11/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, Route11_Emily_6
	goto Route11_Emily_7


# 90 "data/maps/Route11/scripts.pory"
Route11_EmilyWalksToPlayer:
# 91 "data/maps/Route11/scripts.pory"
	walk_up
# 91 "data/maps/Route11/scripts.pory"
	walk_up
# 91 "data/maps/Route11/scripts.pory"
	walk_up
# 91 "data/maps/Route11/scripts.pory"
	walk_up
# 92 "data/maps/Route11/scripts.pory"
	step_end

# 95 "data/maps/Route11/scripts.pory"
Route11_PlayerMoveAside:
# 96 "data/maps/Route11/scripts.pory"
	walk_up
# 96 "data/maps/Route11/scripts.pory"
	walk_up
# 97 "data/maps/Route11/scripts.pory"
	walk_left
# 98 "data/maps/Route11/scripts.pory"
	face_right
# 99 "data/maps/Route11/scripts.pory"
	step_end

# 102 "data/maps/Route11/scripts.pory"
Route11_EmilyLeavesAfterSnorlax:
# 103 "data/maps/Route11/scripts.pory"
	walk_up
# 104 "data/maps/Route11/scripts.pory"
	walk_right
# 105 "data/maps/Route11/scripts.pory"
	walk_up
# 105 "data/maps/Route11/scripts.pory"
	walk_up
# 105 "data/maps/Route11/scripts.pory"
	walk_up
# 105 "data/maps/Route11/scripts.pory"
	walk_up
# 105 "data/maps/Route11/scripts.pory"
	walk_up
# 105 "data/maps/Route11/scripts.pory"
	walk_up
# 106 "data/maps/Route11/scripts.pory"
	walk_right
# 106 "data/maps/Route11/scripts.pory"
	walk_right
# 106 "data/maps/Route11/scripts.pory"
	walk_right
# 106 "data/maps/Route11/scripts.pory"
	walk_right
# 107 "data/maps/Route11/scripts.pory"
	walk_up
# 107 "data/maps/Route11/scripts.pory"
	walk_up
# 107 "data/maps/Route11/scripts.pory"
	walk_up
# 107 "data/maps/Route11/scripts.pory"
	walk_up
# 108 "data/maps/Route11/scripts.pory"
	step_end

Route11_Aiden::
# 162 "data/maps/Route11/scripts.pory"
	lock
# 163 "data/maps/Route11/scripts.pory"
	faceplayer
# 164 "data/maps/Route11/scripts.pory"
	trainerbattle_single TRAINER_AIDEN, Route11_Aiden_Text_0, Route11_Aiden_Text_1, Route11_AidenLeaves
# 165 "data/maps/Route11/scripts.pory"
	release
	end


Route11_AidenLeaves::
# 170 "data/maps/Route11/scripts.pory"
	fadescreen FADE_TO_BLACK
# 171 "data/maps/Route11/scripts.pory"
	removeobject 3
# 172 "data/maps/Route11/scripts.pory"
	playse SE_EXIT
# 173 "data/maps/Route11/scripts.pory"
	waitse
# 174 "data/maps/Route11/scripts.pory"
	setflag FLAG_ROUTE11_AIDEN
# 175 "data/maps/Route11/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 176 "data/maps/Route11/scripts.pory"
	release
	end


Route11_BirdKeeper::
# 181 "data/maps/Route11/scripts.pory"
	trainerbattle_single TRAINER_PHIL, Route11_BirdKeeper_Text_0, Route11_BirdKeeper_Text_1
# 182 "data/maps/Route11/scripts.pory"
	msgbox Route11_BirdKeeper_Text_2, MSGBOX_AUTOCLOSE
	return


Route11_BattleGirl::
# 186 "data/maps/Route11/scripts.pory"
	trainerbattle_single TRAINER_CORA, Route11_BattleGirl_Text_0, Route11_BattleGirl_Text_1
# 187 "data/maps/Route11/scripts.pory"
	msgbox Route11_BattleGirl_Text_2, MSGBOX_AUTOCLOSE
	return


Route11_BugManiac::
# 191 "data/maps/Route11/scripts.pory"
	trainerbattle_single TRAINER_BRENT, Route11_BugManiac_Text_0, Route11_BugManiac_Text_1
# 192 "data/maps/Route11/scripts.pory"
	msgbox Route11_BugManiac_Text_2, MSGBOX_AUTOCLOSE
	return


Route11_AromaLady::
# 196 "data/maps/Route11/scripts.pory"
	trainerbattle_single TRAINER_CELINA, Route11_AromaLady_Text_0, Route11_AromaLady_Text_1, GiveShinyStone
# 197 "data/maps/Route11/scripts.pory"
	msgbox Route11_AromaLady_Text_2, MSGBOX_AUTOCLOSE
	return


GiveShinyStone::
# 201 "data/maps/Route11/scripts.pory"
	msgbox GiveShinyStone_Text_0
# 202 "data/maps/Route11/scripts.pory"
	giveitem ITEM_SHINY_STONE
# 203 "data/maps/Route11/scripts.pory"
	release
	end


Route11_Snorlax_Text_0:
# 18 "data/maps/Route11/scripts.pory"
	.string "There is a big sleeping POKéMON\n"
	.string "blocking the way.$"

Route11_Snorlax_Text_1:
# 23 "data/maps/Route11/scripts.pory"
	.string "The big POKéMON blocking the way is\n"
	.string "waking up to Emily's music!$"

Route11_Snorlax_Text_2:
# 39 "data/maps/Route11/scripts.pory"
	.string "DEVELOPPER: Uh that's not normal\n"
	.string "Snorlax should be gone.$"

Route11_Emily_Text_0:
# 84 "data/maps/Route11/scripts.pory"
	.string "EMILY: I'll play the flute while you\n"
	.string "wake up the POKéMON!$"

Route11_Aiden_Text_0:
# 164 "data/maps/Route11/scripts.pory"
	.string "AIDEN: I'm here to train for the TLDP\n"
	.string "challenge!\p"
	.string "You too?$"

Route11_Aiden_Text_1:
# 164 "data/maps/Route11/scripts.pory"
	.string "Hmm, still a long way to go.$"

Route11_BirdKeeper_Text_0:
# 181 "data/maps/Route11/scripts.pory"
	.string "My bird POKéMON love these woods, and\n"
	.string "so do I!$"

Route11_BirdKeeper_Text_1:
# 181 "data/maps/Route11/scripts.pory"
	.string "It's really nice here, isn't it?$"

Route11_BirdKeeper_Text_2:
# 182 "data/maps/Route11/scripts.pory"
	.string "I could spend my entire life here.$"

Route11_BattleGirl_Text_0:
# 186 "data/maps/Route11/scripts.pory"
	.string "My team and I train by hitting thick\n"
	.string "tree trunks, look how strong we are!$"

Route11_BattleGirl_Text_1:
# 186 "data/maps/Route11/scripts.pory"
	.string "Oh, you're even stronger…$"

Route11_BattleGirl_Text_2:
# 187 "data/maps/Route11/scripts.pory"
	.string "It's peaceful here, which is perfect for\n"
	.string "training.$"

Route11_BugManiac_Text_0:
# 191 "data/maps/Route11/scripts.pory"
	.string "Bugs, bugs everywhere!\p"
	.string "I love this place!$"

Route11_BugManiac_Text_1:
# 191 "data/maps/Route11/scripts.pory"
	.string "I'll go back to looking for bugs…$"

Route11_BugManiac_Text_2:
# 192 "data/maps/Route11/scripts.pory"
	.string "Bug POKéMON are the most fascinating\n"
	.string "of all!$"

Route11_AromaLady_Text_0:
# 196 "data/maps/Route11/scripts.pory"
	.string "I found a strange stone and it made my\n"
	.string "POKéMON evolve.$"

Route11_AromaLady_Text_1:
# 196 "data/maps/Route11/scripts.pory"
	.string "They all look cuter now!$"

Route11_AromaLady_Text_2:
# 197 "data/maps/Route11/scripts.pory"
	.string "Those evolution stones are so\n"
	.string "mysterious…$"

GiveShinyStone_Text_0:
# 201 "data/maps/Route11/scripts.pory"
	.string "I kept a part of that weird stone, I'd\n"
	.string "like you to have it.$"

Route11_EmilySnorlax::
# 111 "data/maps/Route11/scripts.pory"
	.string "EMILY: Oh, {PLAYER}! \p"
	.string "Are you trying to get to Mirror Lake? \p"
	.string "Hmmm, this big guy sure didn't choose \n"
	.string "the best spot to fall asleep… $"

Route11_NotEnoughBadges::
# 118 "data/maps/Route11/scripts.pory"
	.string "I'll see if I can find a solution to \n"
	.string "make it move. \p"
	.string "It might take a while… \p"
	.string "There are other artists who have open\n"
	.string "challenges like ours, maybe you can \l"
	.string "go check them out while I think! \p"
	.string "It'll be good training before you face \n"
	.string "us, because we won't go down without a \l"
	.string "fight!$"

Route11_FinallyEnoughBadges::
# 130 "data/maps/Route11/scripts.pory"
	.string "EMILY: You're back! \p"
	.string "I think I know how to get rid of that \n"
	.string "big guy blocking the road, go have a \l"
	.string "look at it and I'll tell you the plan.$"

Route11_StillNotEnoughBadges::
# 137 "data/maps/Route11/scripts.pory"
	.string "EMILY: Hey, {PLAYER}! \p"
	.string "I still haven't found a way to move \n"
	.string "that big POKéMON, sorry. \p"
	.string "In the meantime why don't you go train \n"
	.string "against other artists, to prepare for \l"
	.string "Mirror City?$"

Route11_EmilyPlaysFlute::
# 146 "data/maps/Route11/scripts.pory"
	.string "I heard music could help POKéMON wake \n"
	.string "up… \p"
	.string "I have my flute with me, let's see if \n"
	.string "that does anything. \p"
	.string "I'll play, you try to make it move!$"

Route11_EmilyMoveOn::
# 154 "data/maps/Route11/scripts.pory"
	.string "EMILY: Nice job! \p"
	.string "Well, now that the path is clear, I'm \n"
	.string "gonna head to Mirror City! \p"
	.string "I'll see you there!$"

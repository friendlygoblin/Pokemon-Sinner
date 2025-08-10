Route3_MapScripts::
	.byte 0


PlaceGoblin1::
# 9 "data/maps/Route3/scripts.pory"
	lock
# 10 "data/maps/Route3/scripts.pory"
	addobject 2
# 11 "data/maps/Route3/scripts.pory"
	clearflag FLAG_ROUTE3_GOBLIN
# 12 "data/maps/Route3/scripts.pory"
	msgbox PlaceGoblin1_Text_0, MSGBOX_AUTOCLOSE
# 13 "data/maps/Route3/scripts.pory"
	closemessage
# 14 "data/maps/Route3/scripts.pory"
	applymovement 2, GoblinCatchUp1
# 15 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 16 "data/maps/Route3/scripts.pory"
	call GoblinBattle
# 17 "data/maps/Route3/scripts.pory"
	applymovement 2, GoblinGoAway1
# 18 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 19 "data/maps/Route3/scripts.pory"
	removeobject 2
# 20 "data/maps/Route3/scripts.pory"
	setflag FLAG_ROUTE3_GOBLIN
# 21 "data/maps/Route3/scripts.pory"
	releaseall
	end


PlaceGoblin2::
# 26 "data/maps/Route3/scripts.pory"
	lock
# 27 "data/maps/Route3/scripts.pory"
	addobject 2
# 28 "data/maps/Route3/scripts.pory"
	clearflag FLAG_ROUTE3_GOBLIN
# 29 "data/maps/Route3/scripts.pory"
	msgbox PlaceGoblin1_Text_0
# 30 "data/maps/Route3/scripts.pory"
	closemessage
# 31 "data/maps/Route3/scripts.pory"
	applymovement 2, GoblinCatchUp2
# 32 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 33 "data/maps/Route3/scripts.pory"
	call GoblinBattle
# 34 "data/maps/Route3/scripts.pory"
	applymovement 2, GoblinGoAway2
# 35 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route3/scripts.pory"
	removeobject 2
# 37 "data/maps/Route3/scripts.pory"
	setflag FLAG_ROUTE3_GOBLIN
# 38 "data/maps/Route3/scripts.pory"
	releaseall
	end


GoblinBattle::
# 43 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 44 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route3/scripts.pory"
	msgbox GoblinRecognisePlayer
# 46 "data/maps/Route3/scripts.pory"
	trainerbattle_no_intro TRAINER_GOBLIN_ROUTE_3, GoblinLoseBattle
# 47 "data/maps/Route3/scripts.pory"
	msgbox GoblinPostBattle
# 48 "data/maps/Route3/scripts.pory"
	fadescreen FADE_TO_BLACK
# 49 "data/maps/Route3/scripts.pory"
	playfanfare MUS_HEAL
# 50 "data/maps/Route3/scripts.pory"
	waitfanfare
# 51 "data/maps/Route3/scripts.pory"
	special HealPlayerParty
# 52 "data/maps/Route3/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 53 "data/maps/Route3/scripts.pory"
	setvar VAR_ROUTE3_GOBLIN, 1
# 54 "data/maps/Route3/scripts.pory"
	msgbox GoodToGo, MSGBOX_AUTOCLOSE
	return


# 58 "data/maps/Route3/scripts.pory"
GoblinCatchUp1:
# 59 "data/maps/Route3/scripts.pory"
	walk_down
# 59 "data/maps/Route3/scripts.pory"
	walk_down
# 59 "data/maps/Route3/scripts.pory"
	walk_down
# 59 "data/maps/Route3/scripts.pory"
	walk_down
# 59 "data/maps/Route3/scripts.pory"
	walk_down
# 60 "data/maps/Route3/scripts.pory"
	walk_right
# 60 "data/maps/Route3/scripts.pory"
	walk_right
# 60 "data/maps/Route3/scripts.pory"
	walk_right
# 61 "data/maps/Route3/scripts.pory"
	step_end

# 64 "data/maps/Route3/scripts.pory"
GoblinCatchUp2:
# 65 "data/maps/Route3/scripts.pory"
	walk_down
# 65 "data/maps/Route3/scripts.pory"
	walk_down
# 65 "data/maps/Route3/scripts.pory"
	walk_down
# 65 "data/maps/Route3/scripts.pory"
	walk_down
# 65 "data/maps/Route3/scripts.pory"
	walk_down
# 65 "data/maps/Route3/scripts.pory"
	walk_down
# 66 "data/maps/Route3/scripts.pory"
	walk_right
# 66 "data/maps/Route3/scripts.pory"
	walk_right
# 66 "data/maps/Route3/scripts.pory"
	walk_right
# 67 "data/maps/Route3/scripts.pory"
	step_end

# 70 "data/maps/Route3/scripts.pory"
GoblinGoAway1:
# 71 "data/maps/Route3/scripts.pory"
	walk_down
# 72 "data/maps/Route3/scripts.pory"
	walk_right
# 72 "data/maps/Route3/scripts.pory"
	walk_right
# 72 "data/maps/Route3/scripts.pory"
	walk_right
# 72 "data/maps/Route3/scripts.pory"
	walk_right
# 72 "data/maps/Route3/scripts.pory"
	walk_right
# 72 "data/maps/Route3/scripts.pory"
	walk_right
# 72 "data/maps/Route3/scripts.pory"
	walk_right
# 72 "data/maps/Route3/scripts.pory"
	walk_right
# 72 "data/maps/Route3/scripts.pory"
	walk_right
# 73 "data/maps/Route3/scripts.pory"
	step_end

# 76 "data/maps/Route3/scripts.pory"
GoblinGoAway2:
# 77 "data/maps/Route3/scripts.pory"
	walk_up
# 78 "data/maps/Route3/scripts.pory"
	walk_right
# 78 "data/maps/Route3/scripts.pory"
	walk_right
# 78 "data/maps/Route3/scripts.pory"
	walk_right
# 78 "data/maps/Route3/scripts.pory"
	walk_right
# 78 "data/maps/Route3/scripts.pory"
	walk_right
# 78 "data/maps/Route3/scripts.pory"
	walk_right
# 78 "data/maps/Route3/scripts.pory"
	walk_right
# 78 "data/maps/Route3/scripts.pory"
	walk_right
# 78 "data/maps/Route3/scripts.pory"
	walk_right
# 79 "data/maps/Route3/scripts.pory"
	step_end

Route3_FindOranBerry::
# 117 "data/maps/Route3/scripts.pory"
	lock
# 118 "data/maps/Route3/scripts.pory"
	giveitem ITEM_ORAN_BERRY
# 119 "data/maps/Route3/scripts.pory"
	hideobjectat 1, 0
# 120 "data/maps/Route3/scripts.pory"
	removeobject 1
# 121 "data/maps/Route3/scripts.pory"
	setflag FLAG_ORAN_ROUTE3
# 122 "data/maps/Route3/scripts.pory"
	release
	end


Route3_FindShroom::
# 127 "data/maps/Route3/scripts.pory"
	lock
# 128 "data/maps/Route3/scripts.pory"
	giveitem ITEM_TINY_MUSHROOM
# 129 "data/maps/Route3/scripts.pory"
	hideobjectat 3, 0
# 130 "data/maps/Route3/scripts.pory"
	removeobject 3
# 131 "data/maps/Route3/scripts.pory"
	setflag FLAG_SHROOM_ROUTE3
# 132 "data/maps/Route3/scripts.pory"
	release
	end


Route3_BugCatcher::
# 137 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_DAVIS, Route3_BugCatcher_Text_0, Route3_BugCatcher_Text_1
# 138 "data/maps/Route3/scripts.pory"
	msgbox Route3_BugCatcher_Text_2, MSGBOX_AUTOCLOSE
	return


Route3_BugManiac::
# 142 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ANGELO, Route3_BugManiac_Text_0, Route3_BugManiac_Text_1
# 143 "data/maps/Route3/scripts.pory"
	msgbox Route3_BugManiac_Text_2, MSGBOX_AUTOCLOSE
	return


Route3_Picknicker::
# 147 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_AUTUMN, Route3_Picknicker_Text_0, Route3_Picknicker_Text_1
# 148 "data/maps/Route3/scripts.pory"
	msgbox Route3_Picknicker_Text_2, MSGBOX_AUTOCLOSE
	return


Route3_SchoolKid::
# 152 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_JERRY_1, Route3_SchoolKid_Text_0, Route3_SchoolKid_Text_1
# 153 "data/maps/Route3/scripts.pory"
	msgbox Route3_SchoolKid_Text_2, MSGBOX_AUTOCLOSE
	return


Route3_PlaceAmy1::
# 157 "data/maps/Route3/scripts.pory"
	lock
# 158 "data/maps/Route3/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 159 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 160 "data/maps/Route3/scripts.pory"
	delay 20
# 161 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_PlayerFaceUp
# 162 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 163 "data/maps/Route3/scripts.pory"
	call Route3_AmyQuest
	return


CallAmyQuest::
# 167 "data/maps/Route3/scripts.pory"
	lock
# 168 "data/maps/Route3/scripts.pory"
	faceplayer
# 169 "data/maps/Route3/scripts.pory"
	call Route3_AmyQuest
# 170 "data/maps/Route3/scripts.pory"
	releaseall
	end


Route3_AmyQuest::
# 175 "data/maps/Route3/scripts.pory"
	switch VAR_ROUTE3_AMY
# 176 "data/maps/Route3/scripts.pory"
	case 0, Route3_AmyQuest_2
# 180 "data/maps/Route3/scripts.pory"
	case 1, Route3_AmyQuest_3
# 183 "data/maps/Route3/scripts.pory"
	case 2, Route3_AmyQuest_4
# 194 "data/maps/Route3/scripts.pory"
	msgbox AmyNeedHelpShort, MSGBOX_AUTOCLOSE
	return

Route3_AmyQuest_2:
# 177 "data/maps/Route3/scripts.pory"
	msgbox AmyNeedHelpLong, MSGBOX_AUTOCLOSE
# 178 "data/maps/Route3/scripts.pory"
	setvar VAR_ROUTE3_AMY, 1
# 179 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_PlayerWalkBack
	return

Route3_AmyQuest_3:
# 181 "data/maps/Route3/scripts.pory"
	msgbox AmyNeedHelpShort, MSGBOX_AUTOCLOSE
# 182 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_PlayerWalkBack
	return

Route3_AmyQuest_4:
# 184 "data/maps/Route3/scripts.pory"
	msgbox AmyFoundNotes, MSGBOX_AUTOCLOSE
# 185 "data/maps/Route3/scripts.pory"
	trainerbattle_no_intro TRAINER_AMY_ROUTE3, Route3_AmyQuest_Text_0
# 186 "data/maps/Route3/scripts.pory"
	msgbox AmyPostBattle, MSGBOX_AUTOCLOSE
# 187 "data/maps/Route3/scripts.pory"
	applymovement 7, AmyGoAway
# 188 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 189 "data/maps/Route3/scripts.pory"
	removeobject 7
# 190 "data/maps/Route3/scripts.pory"
	setflag FLAG_AMY_ROUTE3
# 191 "data/maps/Route3/scripts.pory"
	setvar VAR_ROUTE3_AMY, 3
# 192 "data/maps/Route3/scripts.pory"
	setvar VAR_ROUTE3_AMY_TRIGGER, 1
	return


# 198 "data/maps/Route3/scripts.pory"
Route3_PlayerFaceUp:
# 199 "data/maps/Route3/scripts.pory"
	face_up
	step_end

# 202 "data/maps/Route3/scripts.pory"
Route3_PlayerWalkBack:
# 203 "data/maps/Route3/scripts.pory"
	walk_left
# 204 "data/maps/Route3/scripts.pory"
	step_end

# 207 "data/maps/Route3/scripts.pory"
AmyGoAway:
# 208 "data/maps/Route3/scripts.pory"
	walk_right
# 208 "data/maps/Route3/scripts.pory"
	walk_right
# 208 "data/maps/Route3/scripts.pory"
	walk_right
# 208 "data/maps/Route3/scripts.pory"
	walk_right
# 208 "data/maps/Route3/scripts.pory"
	walk_right
# 208 "data/maps/Route3/scripts.pory"
	walk_right
# 208 "data/maps/Route3/scripts.pory"
	walk_right
# 208 "data/maps/Route3/scripts.pory"
	walk_right
# 208 "data/maps/Route3/scripts.pory"
	walk_right
# 209 "data/maps/Route3/scripts.pory"
	step_end

RightDeadTree::
# 266 "data/maps/Route3/scripts.pory"
	lock
# 267 "data/maps/Route3/scripts.pory"
	compare VAR_ROUTE3_AMY, 1
	goto_if_eq RightDeadTree_2
# 277 "data/maps/Route3/scripts.pory"
	msgbox RightDeadTree_Text_2, MSGBOX_AUTOCLOSE
# 278 "data/maps/Route3/scripts.pory"
	closemessage
RightDeadTree_1:
# 280 "data/maps/Route3/scripts.pory"
	releaseall
	end

RightDeadTree_2:
# 268 "data/maps/Route3/scripts.pory"
	msgbox RightDeadTree_Text_0, MSGBOX_AUTOCLOSE
# 269 "data/maps/Route3/scripts.pory"
	setwildbattle SPECIES_NICKIT, 12
# 270 "data/maps/Route3/scripts.pory"
	dowildbattle
# 271 "data/maps/Route3/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 272 "data/maps/Route3/scripts.pory"
	msgbox RightDeadTree_Text_1, MSGBOX_AUTOCLOSE
# 273 "data/maps/Route3/scripts.pory"
	setvar VAR_ROUTE3_AMY, 2
# 274 "data/maps/Route3/scripts.pory"
	closemessage
	goto RightDeadTree_1


WrongDeadTree::
# 285 "data/maps/Route3/scripts.pory"
	lock
# 286 "data/maps/Route3/scripts.pory"
	msgbox RightDeadTree_Text_2, MSGBOX_AUTOCLOSE
# 287 "data/maps/Route3/scripts.pory"
	closemessage
# 288 "data/maps/Route3/scripts.pory"
	releaseall
	end


PlaceGoblin1_Text_0:
# 12 "data/maps/Route3/scripts.pory"
	.string "GOBLIN: {PLAYER}! $"

Route3_BugCatcher_Text_0:
# 137 "data/maps/Route3/scripts.pory"
	.string "I love forests!\p"
	.string "There are plenty of cool bugs to catch!$"

Route3_BugCatcher_Text_1:
# 137 "data/maps/Route3/scripts.pory"
	.string "My cool bugs!$"

Route3_BugCatcher_Text_2:
# 138 "data/maps/Route3/scripts.pory"
	.string "If you like bugs, you gotta love hanging\n"
	.string "out in the woods!$"

Route3_BugManiac_Text_0:
# 142 "data/maps/Route3/scripts.pory"
	.string "These woods are full of critters.\p"
	.string "Let me show you the ones I've found!$"

Route3_BugManiac_Text_1:
# 142 "data/maps/Route3/scripts.pory"
	.string "Aren't they beautiful?$"

Route3_BugManiac_Text_2:
# 143 "data/maps/Route3/scripts.pory"
	.string "So many critters everywhere…$"

Route3_Picknicker_Text_0:
# 147 "data/maps/Route3/scripts.pory"
	.string "This place is perfect for a picnic!\p"
	.string "I like to grab what I need from the shop\n"
	.string "in Furge Town and enjoy it here with\n"
	.string "my POKéMON!$"

Route3_Picknicker_Text_1:
# 147 "data/maps/Route3/scripts.pory"
	.string "Oh, I'm out of sandwiches…$"

Route3_Picknicker_Text_2:
# 148 "data/maps/Route3/scripts.pory"
	.string "It's so peaceful here.\p"
	.string "It's a bit dark but I'm not scared as\n"
	.string "long as I have my POKéMON with me.$"

Route3_SchoolKid_Text_0:
# 152 "data/maps/Route3/scripts.pory"
	.string "I learn better in the forest than at\n"
	.string "school!\p"
	.string "Look at what I can do!$"

Route3_SchoolKid_Text_1:
# 152 "data/maps/Route3/scripts.pory"
	.string "You must have trained a lot in the\n"
	.string "forest…$"

Route3_SchoolKid_Text_2:
# 153 "data/maps/Route3/scripts.pory"
	.string "The woods help you learn better\n"
	.string "because you get to practice things.\p"
	.string "I don't like sitting behind a desk…$"

Route3_AmyQuest_Text_0:
# 185 "data/maps/Route3/scripts.pory"
	.string "Our readers are gonna love you!$"

RightDeadTree_Text_0:
# 268 "data/maps/Route3/scripts.pory"
	.string "It's a dead tree.\p"
	.string "There's a POKéMON hiding under it!$"

RightDeadTree_Text_1:
# 272 "data/maps/Route3/scripts.pory"
	.string "{PLAYER} retrieved the missing page\n"
	.string "from the POKéMON.$"

RightDeadTree_Text_2:
# 277 "data/maps/Route3/scripts.pory"
	.string "It's a dead tree.$"

GoblinRecognisePlayer::
# 82 "data/maps/Route3/scripts.pory"
	.string "GOBLIN: Thought it might be you!\p"
	.string "I'm here to catch new POKéMON! \p"
	.string "Have you caught any since the last \n"
	.string "time we spoke? \p"
	.string "Wait no don't tell me, just show me!$"

GoblinLoseBattle::
# 90 "data/maps/Route3/scripts.pory"
	.string "Woah, cool!$"

GoblinPostBattle::
# 94 "data/maps/Route3/scripts.pory"
	.string "GOBLIN: Woah you've really put those \n"
	.string "Poké Balls to good use! \p"
	.string "Hozier must have been impressed when \n"
	.string "you won against him! \p"
	.string "Now, let me heal your team before I go. $"

GoodToGo::
# 102 "data/maps/Route3/scripts.pory"
	.string "All good to go! \p"
	.string "Now, I'm gonna go ahead see if there \n"
	.string "are any more interesting POKéMON to \l"
	.string "catch. \p"
	.string "I heard there was another artist \n"
	.string "challenge in Furge Town. \p"
	.string "It's deeper in the forest, you can't \n"
	.string "miss it. \p"
	.string "Well, good luck for whatever you're \n"
	.string "gonna do next!\p"
	.string "See ya!$"

AmyNeedHelpLong::
# 212 "data/maps/Route3/scripts.pory"
	.string "???: You! I need your help!\p"
	.string "AMY: I'm Amy, editor at ParlourZine. \p"
	.string "I'm writing a piece about all those \n"
	.string "artist challenges, but I lost part of \l"
	.string "my notes in the woods. \p"
	.string "I dropped my notebook and the wind \n"
	.string "blew some pages away.\p"
	.string "That'll teach me to use old supplies… \p"
	.string "Anyway, I got most of it back but \n"
	.string "there's one page I still can't find. \p"
	.string "Please, if you can help me I'll write a \n"
	.string "piece about you! \p"
	.string "I think some POKéMON took the page \n"
	.string "away, and it went to hide in its den \l"
	.string "under a dead tree.$"

AmyNeedHelpShort::
# 230 "data/maps/Route3/scripts.pory"
	.string "AMY: Please, if you can help me I'll \n"
	.string "write a piece about you! \p"
	.string "I saw some POKéMON take the page away, \n"
	.string "and it went to hide in its den under a \l"
	.string "dead tree.$"

AmyFoundNotes::
# 238 "data/maps/Route3/scripts.pory"
	.string "AMY: Did you find my notes?\p"
	.string "… … …\p"
	.string "Amazing thank you! \p"
	.string "By the way what's your name? \p"
	.string "{PLAYER}?\p"
	.string "Well {PLAYER}, you just saved the next \n"
	.string "issue of the ParlourZine! \p"
	.string "I told you I'd write something about \n"
	.string "you and guess what, there's nothing \l"
	.string "like a POKéMON battle to get to know \l"
	.string "someone! \p"
	.string "En garde!$"

AmyPostBattle::
# 253 "data/maps/Route3/scripts.pory"
	.string "Wow, that was great! \p"
	.string "I'm gonna get to work on that article, \n"
	.string "our readers are gonna love this! \p"
	.string "Thanks again for your help, you're \n"
	.string "gonna challenge Florence in Furge \l"
	.string "Town aren't you? \p"
	.string "… … … \p"
	.string "Good luck, then! \p"
	.string "I have a feeling I'll see you again. $"

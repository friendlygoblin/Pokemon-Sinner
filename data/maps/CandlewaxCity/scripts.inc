CandlewaxCity_MapScripts::
	.byte 0


PlaceJay::
# 9 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 10 "data/maps/CandlewaxCity/scripts.pory"
	compare VAR_CANDLEWAX_CITY_JAY, 0
	goto_if_eq PlaceJay_2
# 13 "data/maps/CandlewaxCity/scripts.pory"
	compare VAR_CANDLEWAX_CITY_JAY, 2
	goto_if_eq PlaceJay_3
# 17 "data/maps/CandlewaxCity/scripts.pory"
	goto JayNotYetRescued
PlaceJay_1:
# 20 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end

PlaceJay_2:
# 11 "data/maps/CandlewaxCity/scripts.pory"
	goto JayHelpPlease
	goto PlaceJay_1

PlaceJay_3:
# 14 "data/maps/CandlewaxCity/scripts.pory"
	goto JayPkmnRescued
	goto PlaceJay_1


JayPkmnRescued::
# 25 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 26 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 27 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 28 "data/maps/CandlewaxCity/scripts.pory"
	delay 20
# 29 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 1, JayRunsToPlayer
# 30 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 31 "data/maps/CandlewaxCity/scripts.pory"
	msgbox JayMadeIt, MSGBOX_AUTOCLOSE
# 32 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 1, JayLeaves
# 33 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 34 "data/maps/CandlewaxCity/scripts.pory"
	removeobject 1
# 35 "data/maps/CandlewaxCity/scripts.pory"
	setflag FLAG_JAY_CANDLEWAXCITY
# 36 "data/maps/CandlewaxCity/scripts.pory"
	setflag FLAG_JAY_HOZIER_HALL
# 37 "data/maps/CandlewaxCity/scripts.pory"
	setvar VAR_CANDLEWAX_CITY_TRIGGER, 1
# 38 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


CandlewaxCity_Jay::
# 43 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 44 "data/maps/CandlewaxCity/scripts.pory"
	faceplayer
# 45 "data/maps/CandlewaxCity/scripts.pory"
	msgbox JayDescribesBadGuys
# 46 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


JayHelpPlease::
# 51 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 52 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 53 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 54 "data/maps/CandlewaxCity/scripts.pory"
	delay 20
# 55 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 1, JayRunsToPlayer
# 56 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 57 "data/maps/CandlewaxCity/scripts.pory"
	msgbox JayStolenPokemon, MSGBOX_AUTOCLOSE
# 58 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 1, JayRunsInPlace
# 59 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 60 "data/maps/CandlewaxCity/scripts.pory"
	msgbox JayDescribesBadGuys
# 61 "data/maps/CandlewaxCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 62 "data/maps/CandlewaxCity/scripts.pory"
	playfanfare MUS_HEAL
# 63 "data/maps/CandlewaxCity/scripts.pory"
	waitfanfare
# 64 "data/maps/CandlewaxCity/scripts.pory"
	special HealPlayerParty
# 65 "data/maps/CandlewaxCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 66 "data/maps/CandlewaxCity/scripts.pory"
	setvar VAR_CANDLEWAX_CITY_JAY, 1
# 67 "data/maps/CandlewaxCity/scripts.pory"
	setflag FLAG_GUARD_RIBCAVE
# 68 "data/maps/CandlewaxCity/scripts.pory"
	setobjectxy 1, 18, 6
# 69 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


JayNotYetRescued::
# 74 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 75 "data/maps/CandlewaxCity/scripts.pory"
	msgbox JayWhatAboutPokemon, MSGBOX_AUTOCLOSE
# 76 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 1, JayRunsInPlace
# 77 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 78 "data/maps/CandlewaxCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 79 "data/maps/CandlewaxCity/scripts.pory"
	playfanfare MUS_HEAL
# 80 "data/maps/CandlewaxCity/scripts.pory"
	waitfanfare
# 81 "data/maps/CandlewaxCity/scripts.pory"
	special HealPlayerParty
# 82 "data/maps/CandlewaxCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 83 "data/maps/CandlewaxCity/scripts.pory"
	msgbox JayDescribesBadGuys
# 84 "data/maps/CandlewaxCity/scripts.pory"
	setvar VAR_CANDLEWAX_CITY_JAY, 1
# 85 "data/maps/CandlewaxCity/scripts.pory"
	setflag FLAG_GUARD_RIBCAVE
# 86 "data/maps/CandlewaxCity/scripts.pory"
	setobjectxy 1, 18, 6
# 87 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


# 129 "data/maps/CandlewaxCity/scripts.pory"
JayLeaves:
# 130 "data/maps/CandlewaxCity/scripts.pory"
	walk_down
# 130 "data/maps/CandlewaxCity/scripts.pory"
	walk_down
# 130 "data/maps/CandlewaxCity/scripts.pory"
	walk_down
# 130 "data/maps/CandlewaxCity/scripts.pory"
	walk_down
# 130 "data/maps/CandlewaxCity/scripts.pory"
	walk_down
# 130 "data/maps/CandlewaxCity/scripts.pory"
	walk_down
# 130 "data/maps/CandlewaxCity/scripts.pory"
	walk_down
# 131 "data/maps/CandlewaxCity/scripts.pory"
	step_end

# 134 "data/maps/CandlewaxCity/scripts.pory"
JayRunsToPlayer:
# 135 "data/maps/CandlewaxCity/scripts.pory"
	walk_fast_right
# 135 "data/maps/CandlewaxCity/scripts.pory"
	walk_fast_right
# 135 "data/maps/CandlewaxCity/scripts.pory"
	walk_fast_right
# 136 "data/maps/CandlewaxCity/scripts.pory"
	walk_fast_up
# 136 "data/maps/CandlewaxCity/scripts.pory"
	walk_fast_up
# 136 "data/maps/CandlewaxCity/scripts.pory"
	walk_fast_up
# 137 "data/maps/CandlewaxCity/scripts.pory"
	step_end

# 140 "data/maps/CandlewaxCity/scripts.pory"
JayRunsInPlace:
# 141 "data/maps/CandlewaxCity/scripts.pory"
	walk_in_place_fast_up
# 141 "data/maps/CandlewaxCity/scripts.pory"
	walk_in_place_fast_up
# 142 "data/maps/CandlewaxCity/scripts.pory"
	step_end

PlaceJay_HozierHall_1::
# 146 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 147 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 2, JayGoesToPlayer_HozierHall1
# 148 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 149 "data/maps/CandlewaxCity/scripts.pory"
	goto JayGivesShoes
	return


PlaceJay_HozierHall_2::
# 153 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 154 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 2, JayGoesToPlayer_HozierHall2
# 155 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 156 "data/maps/CandlewaxCity/scripts.pory"
	goto JayGivesShoes
	return


JayGivesShoes::
# 160 "data/maps/CandlewaxCity/scripts.pory"
	msgbox Jay_SeeHozier, MSGBOX_AUTOCLOSE
# 161 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 162 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 163 "data/maps/CandlewaxCity/scripts.pory"
	delay 20
# 164 "data/maps/CandlewaxCity/scripts.pory"
	msgbox Jay_WonAgainstHozier, MSGBOX_AUTOCLOSE
# 165 "data/maps/CandlewaxCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 166 "data/maps/CandlewaxCity/scripts.pory"
	message JayGivesShoes_Text_0
# 167 "data/maps/CandlewaxCity/scripts.pory"
	waitfanfare
# 168 "data/maps/CandlewaxCity/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 169 "data/maps/CandlewaxCity/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 170 "data/maps/CandlewaxCity/scripts.pory"
	msgbox Jay_ExplainRunningShoes, MSGBOX_AUTOCLOSE
# 171 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 2, JayLeaves
# 172 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 173 "data/maps/CandlewaxCity/scripts.pory"
	removeobject 2
# 174 "data/maps/CandlewaxCity/scripts.pory"
	setflag FLAG_JAY_HOZIER_HALL
# 175 "data/maps/CandlewaxCity/scripts.pory"
	setflag FLAG_ROUTE3_GOBLIN
# 176 "data/maps/CandlewaxCity/scripts.pory"
	setvar VAR_CANDLEWAX_CITY_TRIGGER, 3
# 177 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


# 214 "data/maps/CandlewaxCity/scripts.pory"
JayGoesToPlayer_HozierHall1:
# 215 "data/maps/CandlewaxCity/scripts.pory"
	emote_exclamation_mark
# 216 "data/maps/CandlewaxCity/scripts.pory"
	delay_16
# 217 "data/maps/CandlewaxCity/scripts.pory"
	walk_right
# 217 "data/maps/CandlewaxCity/scripts.pory"
	walk_right
# 217 "data/maps/CandlewaxCity/scripts.pory"
	walk_right
# 218 "data/maps/CandlewaxCity/scripts.pory"
	step_end

# 221 "data/maps/CandlewaxCity/scripts.pory"
JayGoesToPlayer_HozierHall2:
# 222 "data/maps/CandlewaxCity/scripts.pory"
	emote_exclamation_mark
# 223 "data/maps/CandlewaxCity/scripts.pory"
	delay_16
# 224 "data/maps/CandlewaxCity/scripts.pory"
	walk_down
# 225 "data/maps/CandlewaxCity/scripts.pory"
	walk_right
# 225 "data/maps/CandlewaxCity/scripts.pory"
	walk_right
# 225 "data/maps/CandlewaxCity/scripts.pory"
	walk_right
# 226 "data/maps/CandlewaxCity/scripts.pory"
	step_end

CandlewaxCity_HallSign::
# 230 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 231 "data/maps/CandlewaxCity/scripts.pory"
	msgbox CandlewaxCity_HallSign_Text_0
# 232 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


CandlewaxCity_RibCaveSign::
# 237 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 238 "data/maps/CandlewaxCity/scripts.pory"
	msgbox CandlewaxCity_RibCaveSign_Text_0
# 239 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


CandlewaxCity_CitySign::
# 244 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 245 "data/maps/CandlewaxCity/scripts.pory"
	msgbox CandlewaxCity_CitySign_Text_0
# 246 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


CandlewaxCity_TunnelSign::
# 251 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 252 "data/maps/CandlewaxCity/scripts.pory"
	msgbox CandlewaxCity_TunnelSign_Text_0
# 253 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


CandlewaxCity_Girl::
# 258 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 259 "data/maps/CandlewaxCity/scripts.pory"
	faceplayer
# 260 "data/maps/CandlewaxCity/scripts.pory"
	msgbox CandlewaxCity_Girl_Text_0, MSGBOX_AUTOCLOSE
# 261 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


CandlewaxCity_KirliaGirl::
# 266 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 267 "data/maps/CandlewaxCity/scripts.pory"
	faceplayer
# 268 "data/maps/CandlewaxCity/scripts.pory"
	msgbox CandlewaxCity_KirliaGirl_Text_0, MSGBOX_AUTOCLOSE
# 269 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


CandlewaxCity_Kirlia::
# 274 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 275 "data/maps/CandlewaxCity/scripts.pory"
	faceplayer
# 276 "data/maps/CandlewaxCity/scripts.pory"
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
# 277 "data/maps/CandlewaxCity/scripts.pory"
	msgbox CandlewaxCity_Kirlia_Text_0, MSGBOX_AUTOCLOSE
# 278 "data/maps/CandlewaxCity/scripts.pory"
	waitmoncry
# 279 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


CandlewaxCity_Hiker::
# 284 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 285 "data/maps/CandlewaxCity/scripts.pory"
	faceplayer
# 286 "data/maps/CandlewaxCity/scripts.pory"
	msgbox CandlewaxCity_Hiker_Text_0
# 287 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


CandlewaxCity_Worker::
# 292 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 293 "data/maps/CandlewaxCity/scripts.pory"
	faceplayer
# 294 "data/maps/CandlewaxCity/scripts.pory"
	msgbox CandlewaxCity_Worker_Text_0
# 295 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


JayGivesShoes_Text_0:
# 166 "data/maps/CandlewaxCity/scripts.pory"
	.string "Jay gave {PLAYER} the RUNNING SHOES!$"

CandlewaxCity_HallSign_Text_0:
# 231 "data/maps/CandlewaxCity/scripts.pory"
	.string "CANDLEWAX CITY CONCERT HALL\p"
	.string "HOZIER CHALLENGE IS ON$"

CandlewaxCity_RibCaveSign_Text_0:
# 238 "data/maps/CandlewaxCity/scripts.pory"
	.string "{UP_ARROW} Rib Cave\p"
	.string "Gateway to Ecstasy Town.$"

CandlewaxCity_CitySign_Text_0:
# 245 "data/maps/CandlewaxCity/scripts.pory"
	.string "Welcome to Candlewax City!\p"
	.string "A lively city with the prettiest\n"
	.string "pavement in the world.$"

CandlewaxCity_TunnelSign_Text_0:
# 252 "data/maps/CandlewaxCity/scripts.pory"
	.string "{DOWN_ARROW}: Caesar Tunnel\p"
	.string "To Route 3 and Furge Town.$"

CandlewaxCity_Girl_Text_0:
# 260 "data/maps/CandlewaxCity/scripts.pory"
	.string "The pattern on the pavement is the\n"
	.string "pride of Candlewax City!$"

CandlewaxCity_KirliaGirl_Text_0:
# 268 "data/maps/CandlewaxCity/scripts.pory"
	.string "I'm so glad Concert Halls allow POKéMON!\p"
	.string "I couldn't imagine seeing my favourite\n"
	.string "artists without Kirlia!$"

CandlewaxCity_Kirlia_Text_0:
# 277 "data/maps/CandlewaxCity/scripts.pory"
	.string "Krrrr!$"

CandlewaxCity_Hiker_Text_0:
# 286 "data/maps/CandlewaxCity/scripts.pory"
	.string "Route 3 is on the other side of that\n"
	.string "tunnel.\p"
	.string "It's more of a forest path actually, I\n"
	.string "almost got lost.\p"
	.string "I don't like forests.$"

CandlewaxCity_Worker_Text_0:
# 294 "data/maps/CandlewaxCity/scripts.pory"
	.string "We're finishing up some minor works in\n"
	.string "the Tunnel, come back later.\p"
	.string "Why don't you go pass the time at the\n"
	.string "Concert Hall?$"

JayMadeIt::
# 91 "data/maps/CandlewaxCity/scripts.pory"
	.string "JAY: {PLAYER}! You're okay! \p"
	.string "My POKéMON… \p"
	.string "You did it?!\p"
	.string "Oh {PLAYER}! \p"
	.string "Thank you thank you thank you! \p"
	.string "I don't know what to say… \p"
	.string "I'd better go to the POKéMON \n"
	.string "Center now.\p"
	.string "Thank you again, I owe you one!$"

JayStolenPokemon::
# 103 "data/maps/CandlewaxCity/scripts.pory"
	.string "JAY: {PLAYER}! \p"
	.string "Oh, {PLAYER} I need your help! \p"
	.string "I was making my way through the cave \n"
	.string "when I got attacked!\p"
	.string "There were two of them, they took my \n"
	.string "POKéMON, please help me!\p$"

JayDescribesBadGuys::
# 112 "data/maps/CandlewaxCity/scripts.pory"
	.string "They were dressed like pirates, they \n"
	.string "ran away before I could do anything!\p"
	.string "My poor POKéMON, please if anyone can \n"
	.string "rescue it, it's you {PLAYER}!\p"
	.string "Here, I'll heal your team so you \n"
	.string "have all your chances. $"

JayWhatAboutPokemon::
# 121 "data/maps/CandlewaxCity/scripts.pory"
	.string "JAY: {PLAYER}! Did you get my POKéMON \n"
	.string "back? \p"
	.string "Not yet? \p"
	.string "It's okay, I'll heal your team so you \n"
	.string "have all your chances. $"

Jay_SeeHozier::
# 182 "data/maps/CandlewaxCity/scripts.pory"
	.string "JAY: {PLAYER}! \p"
	.string "Did you get to see Hozier? \p"
	.string "… … … \p"
	.string "Oh no, you missed the show? \p"
	.string "I'm sorry I made you go back into \n"
	.string "the cave, it must have delayed you. $"

Jay_WonAgainstHozier::
# 191 "data/maps/CandlewaxCity/scripts.pory"
	.string "What? You challenged him anyway? \p"
	.string "And won??\p"
	.string "Wow, {PLAYER}! \p"
	.string "If you keep that up you'll soon be \n"
	.string "strong enough to beat The Last Dinner \l"
	.string "Party! \p"
	.string "I still feel bad about making you miss \n"
	.string "the show…\p"
	.string "I know! \p"
	.string "Here, take these! $"

Jay_ExplainRunningShoes::
# 204 "data/maps/CandlewaxCity/scripts.pory"
	.string "These are brand new RUNNING SHOES! \p"
	.string "I accidentally ordered the wrong size \n"
	.string "but you're lucky, it looks like they \l"
	.string "fit you perfectly! \p"
	.string "They'll allow you to move super fast, \n"
	.string "just equip them and keep the B button \l"
	.string "pressed while moving. $"

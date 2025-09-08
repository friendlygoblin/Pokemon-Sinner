CandlewaxCity_MapScripts::
# 2 "data/maps/CandlewaxCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CandlewaxCity_Visited
	.byte 0


CandlewaxCity_Visited::
# 6 "data/maps/CandlewaxCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
	return


PlaceJay::
# 13 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 14 "data/maps/CandlewaxCity/scripts.pory"
	compare VAR_CANDLEWAX_CITY_JAY, 0
	goto_if_eq PlaceJay_2
# 17 "data/maps/CandlewaxCity/scripts.pory"
	compare VAR_CANDLEWAX_CITY_JAY, 2
	goto_if_eq PlaceJay_3
# 21 "data/maps/CandlewaxCity/scripts.pory"
	goto JayNotYetRescued
PlaceJay_1:
# 24 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end

PlaceJay_2:
# 15 "data/maps/CandlewaxCity/scripts.pory"
	goto JayHelpPlease
	goto PlaceJay_1

PlaceJay_3:
# 18 "data/maps/CandlewaxCity/scripts.pory"
	goto JayPkmnRescued
	goto PlaceJay_1


JayPkmnRescued::
# 29 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 30 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 31 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 32 "data/maps/CandlewaxCity/scripts.pory"
	delay 20
# 33 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 1, JayRunsToPlayer
# 34 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 35 "data/maps/CandlewaxCity/scripts.pory"
	msgbox JayMadeIt, MSGBOX_AUTOCLOSE
# 36 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 1, JayLeaves
# 37 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 38 "data/maps/CandlewaxCity/scripts.pory"
	removeobject 1
# 39 "data/maps/CandlewaxCity/scripts.pory"
	setflag FLAG_JAY_CANDLEWAXCITY
# 40 "data/maps/CandlewaxCity/scripts.pory"
	setflag FLAG_JAY_HOZIER_HALL
# 41 "data/maps/CandlewaxCity/scripts.pory"
	setvar VAR_CANDLEWAX_CITY_TRIGGER, 1
# 42 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


CandlewaxCity_Jay::
# 47 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 48 "data/maps/CandlewaxCity/scripts.pory"
	faceplayer
# 49 "data/maps/CandlewaxCity/scripts.pory"
	msgbox JayDescribesBadGuys
# 50 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


JayHelpPlease::
# 55 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 56 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 57 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 58 "data/maps/CandlewaxCity/scripts.pory"
	delay 20
# 59 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 1, JayRunsToPlayer
# 60 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 61 "data/maps/CandlewaxCity/scripts.pory"
	msgbox JayStolenPokemon, MSGBOX_AUTOCLOSE
# 62 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 1, JayRunsInPlace
# 63 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 64 "data/maps/CandlewaxCity/scripts.pory"
	msgbox JayDescribesBadGuys
# 65 "data/maps/CandlewaxCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 66 "data/maps/CandlewaxCity/scripts.pory"
	playfanfare MUS_HEAL
# 67 "data/maps/CandlewaxCity/scripts.pory"
	waitfanfare
# 68 "data/maps/CandlewaxCity/scripts.pory"
	special HealPlayerParty
# 69 "data/maps/CandlewaxCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 70 "data/maps/CandlewaxCity/scripts.pory"
	setvar VAR_CANDLEWAX_CITY_JAY, 1
# 71 "data/maps/CandlewaxCity/scripts.pory"
	setflag FLAG_GUARD_RIBCAVE
# 72 "data/maps/CandlewaxCity/scripts.pory"
	setobjectxy 1, 18, 6
# 73 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


JayNotYetRescued::
# 78 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 79 "data/maps/CandlewaxCity/scripts.pory"
	msgbox JayWhatAboutPokemon, MSGBOX_AUTOCLOSE
# 80 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 1, JayRunsInPlace
# 81 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 82 "data/maps/CandlewaxCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 83 "data/maps/CandlewaxCity/scripts.pory"
	playfanfare MUS_HEAL
# 84 "data/maps/CandlewaxCity/scripts.pory"
	waitfanfare
# 85 "data/maps/CandlewaxCity/scripts.pory"
	special HealPlayerParty
# 86 "data/maps/CandlewaxCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 87 "data/maps/CandlewaxCity/scripts.pory"
	msgbox JayDescribesBadGuys
# 88 "data/maps/CandlewaxCity/scripts.pory"
	setvar VAR_CANDLEWAX_CITY_JAY, 1
# 89 "data/maps/CandlewaxCity/scripts.pory"
	setflag FLAG_GUARD_RIBCAVE
# 90 "data/maps/CandlewaxCity/scripts.pory"
	setobjectxy 1, 18, 6
# 91 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


# 133 "data/maps/CandlewaxCity/scripts.pory"
JayLeaves:
# 134 "data/maps/CandlewaxCity/scripts.pory"
	walk_down
# 134 "data/maps/CandlewaxCity/scripts.pory"
	walk_down
# 134 "data/maps/CandlewaxCity/scripts.pory"
	walk_down
# 134 "data/maps/CandlewaxCity/scripts.pory"
	walk_down
# 134 "data/maps/CandlewaxCity/scripts.pory"
	walk_down
# 134 "data/maps/CandlewaxCity/scripts.pory"
	walk_down
# 134 "data/maps/CandlewaxCity/scripts.pory"
	walk_down
# 135 "data/maps/CandlewaxCity/scripts.pory"
	step_end

# 138 "data/maps/CandlewaxCity/scripts.pory"
JayRunsToPlayer:
# 139 "data/maps/CandlewaxCity/scripts.pory"
	walk_fast_right
# 139 "data/maps/CandlewaxCity/scripts.pory"
	walk_fast_right
# 139 "data/maps/CandlewaxCity/scripts.pory"
	walk_fast_right
# 140 "data/maps/CandlewaxCity/scripts.pory"
	walk_fast_up
# 140 "data/maps/CandlewaxCity/scripts.pory"
	walk_fast_up
# 140 "data/maps/CandlewaxCity/scripts.pory"
	walk_fast_up
# 141 "data/maps/CandlewaxCity/scripts.pory"
	step_end

# 144 "data/maps/CandlewaxCity/scripts.pory"
JayRunsInPlace:
# 145 "data/maps/CandlewaxCity/scripts.pory"
	walk_in_place_fast_up
# 145 "data/maps/CandlewaxCity/scripts.pory"
	walk_in_place_fast_up
# 146 "data/maps/CandlewaxCity/scripts.pory"
	step_end

PlaceJay_HozierHall_1::
# 150 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 151 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 2, JayGoesToPlayer_HozierHall1
# 152 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 153 "data/maps/CandlewaxCity/scripts.pory"
	goto JayGivesShoes
	return


PlaceJay_HozierHall_2::
# 157 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 158 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 2, JayGoesToPlayer_HozierHall2
# 159 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 160 "data/maps/CandlewaxCity/scripts.pory"
	goto JayGivesShoes
	return


JayGivesShoes::
# 164 "data/maps/CandlewaxCity/scripts.pory"
	msgbox Jay_SeeHozier, MSGBOX_AUTOCLOSE
# 165 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 166 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 167 "data/maps/CandlewaxCity/scripts.pory"
	delay 20
# 168 "data/maps/CandlewaxCity/scripts.pory"
	msgbox Jay_WonAgainstHozier, MSGBOX_AUTOCLOSE
# 169 "data/maps/CandlewaxCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 170 "data/maps/CandlewaxCity/scripts.pory"
	message JayGivesShoes_Text_0
# 171 "data/maps/CandlewaxCity/scripts.pory"
	waitfanfare
# 172 "data/maps/CandlewaxCity/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 173 "data/maps/CandlewaxCity/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 174 "data/maps/CandlewaxCity/scripts.pory"
	msgbox Jay_ExplainRunningShoes, MSGBOX_AUTOCLOSE
# 175 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 2, JayLeaves
# 176 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 177 "data/maps/CandlewaxCity/scripts.pory"
	removeobject 2
# 178 "data/maps/CandlewaxCity/scripts.pory"
	setflag FLAG_JAY_HOZIER_HALL
# 179 "data/maps/CandlewaxCity/scripts.pory"
	setflag FLAG_ROUTE3_GOBLIN
# 180 "data/maps/CandlewaxCity/scripts.pory"
	setvar VAR_CANDLEWAX_CITY_TRIGGER, 3
# 181 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


# 218 "data/maps/CandlewaxCity/scripts.pory"
JayGoesToPlayer_HozierHall1:
# 219 "data/maps/CandlewaxCity/scripts.pory"
	emote_exclamation_mark
# 220 "data/maps/CandlewaxCity/scripts.pory"
	delay_16
# 221 "data/maps/CandlewaxCity/scripts.pory"
	walk_right
# 221 "data/maps/CandlewaxCity/scripts.pory"
	walk_right
# 221 "data/maps/CandlewaxCity/scripts.pory"
	walk_right
# 222 "data/maps/CandlewaxCity/scripts.pory"
	step_end

# 225 "data/maps/CandlewaxCity/scripts.pory"
JayGoesToPlayer_HozierHall2:
# 226 "data/maps/CandlewaxCity/scripts.pory"
	emote_exclamation_mark
# 227 "data/maps/CandlewaxCity/scripts.pory"
	delay_16
# 228 "data/maps/CandlewaxCity/scripts.pory"
	walk_down
# 229 "data/maps/CandlewaxCity/scripts.pory"
	walk_right
# 229 "data/maps/CandlewaxCity/scripts.pory"
	walk_right
# 229 "data/maps/CandlewaxCity/scripts.pory"
	walk_right
# 230 "data/maps/CandlewaxCity/scripts.pory"
	step_end

CandlewaxCity_HallSign::
# 234 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 235 "data/maps/CandlewaxCity/scripts.pory"
	msgbox CandlewaxCity_HallSign_Text_0
# 236 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


CandlewaxCity_RibCaveSign::
# 241 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 242 "data/maps/CandlewaxCity/scripts.pory"
	msgbox CandlewaxCity_RibCaveSign_Text_0
# 243 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


CandlewaxCity_CitySign::
# 248 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 249 "data/maps/CandlewaxCity/scripts.pory"
	msgbox CandlewaxCity_CitySign_Text_0
# 250 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


CandlewaxCity_TunnelSign::
# 255 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 256 "data/maps/CandlewaxCity/scripts.pory"
	msgbox CandlewaxCity_TunnelSign_Text_0
# 257 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


CandlewaxCity_Girl::
# 262 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 263 "data/maps/CandlewaxCity/scripts.pory"
	faceplayer
# 264 "data/maps/CandlewaxCity/scripts.pory"
	msgbox CandlewaxCity_Girl_Text_0, MSGBOX_AUTOCLOSE
# 265 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


CandlewaxCity_KirliaGirl::
# 270 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 271 "data/maps/CandlewaxCity/scripts.pory"
	faceplayer
# 272 "data/maps/CandlewaxCity/scripts.pory"
	msgbox CandlewaxCity_KirliaGirl_Text_0, MSGBOX_AUTOCLOSE
# 273 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


CandlewaxCity_Kirlia::
# 278 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 279 "data/maps/CandlewaxCity/scripts.pory"
	faceplayer
# 280 "data/maps/CandlewaxCity/scripts.pory"
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
# 281 "data/maps/CandlewaxCity/scripts.pory"
	msgbox CandlewaxCity_Kirlia_Text_0, MSGBOX_AUTOCLOSE
# 282 "data/maps/CandlewaxCity/scripts.pory"
	waitmoncry
# 283 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


CandlewaxCity_Hiker::
# 288 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 289 "data/maps/CandlewaxCity/scripts.pory"
	faceplayer
# 290 "data/maps/CandlewaxCity/scripts.pory"
	msgbox CandlewaxCity_Hiker_Text_0
# 291 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


CandlewaxCity_Worker::
# 296 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 297 "data/maps/CandlewaxCity/scripts.pory"
	faceplayer
# 298 "data/maps/CandlewaxCity/scripts.pory"
	msgbox CandlewaxCity_Worker_Text_0
# 299 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


JayGivesShoes_Text_0:
# 170 "data/maps/CandlewaxCity/scripts.pory"
	.string "Jay gave {PLAYER} the RUNNING SHOES!$"

CandlewaxCity_HallSign_Text_0:
# 235 "data/maps/CandlewaxCity/scripts.pory"
	.string "CANDLEWAX CITY CONCERT HALL\p"
	.string "HOZIER CHALLENGE IS ON$"

CandlewaxCity_RibCaveSign_Text_0:
# 242 "data/maps/CandlewaxCity/scripts.pory"
	.string "{UP_ARROW} Rib Cave\p"
	.string "Gateway to Ecstasy Town.$"

CandlewaxCity_CitySign_Text_0:
# 249 "data/maps/CandlewaxCity/scripts.pory"
	.string "Welcome to Candlewax City!\p"
	.string "A lively city with the prettiest\n"
	.string "pavement in the world.$"

CandlewaxCity_TunnelSign_Text_0:
# 256 "data/maps/CandlewaxCity/scripts.pory"
	.string "{DOWN_ARROW}: Caesar Tunnel\p"
	.string "To Route 3 and Furge Town.$"

CandlewaxCity_Girl_Text_0:
# 264 "data/maps/CandlewaxCity/scripts.pory"
	.string "The pattern on the pavement is the\n"
	.string "pride of Candlewax City!$"

CandlewaxCity_KirliaGirl_Text_0:
# 272 "data/maps/CandlewaxCity/scripts.pory"
	.string "I'm so glad Concert Halls allow POKéMON!\p"
	.string "I couldn't imagine seeing my favourite\n"
	.string "artists without Kirlia!$"

CandlewaxCity_Kirlia_Text_0:
# 281 "data/maps/CandlewaxCity/scripts.pory"
	.string "Krrrr!$"

CandlewaxCity_Hiker_Text_0:
# 290 "data/maps/CandlewaxCity/scripts.pory"
	.string "Route 3 is on the other side of that\n"
	.string "tunnel.\p"
	.string "It's more of a forest path actually, I\n"
	.string "almost got lost.\p"
	.string "I don't like forests.$"

CandlewaxCity_Worker_Text_0:
# 298 "data/maps/CandlewaxCity/scripts.pory"
	.string "We're finishing up some minor works in\n"
	.string "the Tunnel, come back later.\p"
	.string "Why don't you go pass the time at the\n"
	.string "Concert Hall?$"

JayMadeIt::
# 95 "data/maps/CandlewaxCity/scripts.pory"
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
# 107 "data/maps/CandlewaxCity/scripts.pory"
	.string "JAY: {PLAYER}! \p"
	.string "Oh, {PLAYER} I need your help! \p"
	.string "I was making my way through the cave \n"
	.string "when I got attacked!\p"
	.string "There were two of them, they took my \n"
	.string "POKéMON, please help me!\p$"

JayDescribesBadGuys::
# 116 "data/maps/CandlewaxCity/scripts.pory"
	.string "They were dressed like pirates, they \n"
	.string "ran away before I could do anything!\p"
	.string "My poor POKéMON, please if anyone can \n"
	.string "rescue it, it's you {PLAYER}!\p"
	.string "Here, I'll heal your team so you \n"
	.string "have all your chances. $"

JayWhatAboutPokemon::
# 125 "data/maps/CandlewaxCity/scripts.pory"
	.string "JAY: {PLAYER}! Did you get my POKéMON \n"
	.string "back? \p"
	.string "Not yet? \p"
	.string "It's okay, I'll heal your team so you \n"
	.string "have all your chances. $"

Jay_SeeHozier::
# 186 "data/maps/CandlewaxCity/scripts.pory"
	.string "JAY: {PLAYER}! \p"
	.string "Did you get to see Hozier? \p"
	.string "… … … \p"
	.string "Oh no, you missed the show? \p"
	.string "I'm sorry I made you go back into \n"
	.string "the cave, it must have delayed you. $"

Jay_WonAgainstHozier::
# 195 "data/maps/CandlewaxCity/scripts.pory"
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
# 208 "data/maps/CandlewaxCity/scripts.pory"
	.string "These are brand new RUNNING SHOES! \p"
	.string "I accidentally ordered the wrong size \n"
	.string "but you're lucky, it looks like they \l"
	.string "fit you perfectly! \p"
	.string "They'll allow you to move super fast, \n"
	.string "just equip them and keep the B button \l"
	.string "pressed while moving. $"

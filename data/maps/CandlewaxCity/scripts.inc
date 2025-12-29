CandlewaxCity_MapScripts::
# 2 "data/maps/CandlewaxCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CandlewaxCity_Visited
	.byte 0


CandlewaxCity_Visited::
# 6 "data/maps/CandlewaxCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 7 "data/maps/CandlewaxCity/scripts.pory"
	setvar VAR_GODZILLAND_PORYGON, 0
	return


PlaceJay::
# 14 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 15 "data/maps/CandlewaxCity/scripts.pory"
	compare VAR_CANDLEWAX_CITY_JAY, 0
	goto_if_eq PlaceJay_2
# 18 "data/maps/CandlewaxCity/scripts.pory"
	compare VAR_CANDLEWAX_CITY_JAY, 2
	goto_if_eq PlaceJay_3
# 22 "data/maps/CandlewaxCity/scripts.pory"
	goto JayNotYetRescued
PlaceJay_1:
# 25 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end

PlaceJay_2:
# 16 "data/maps/CandlewaxCity/scripts.pory"
	goto JayHelpPlease
	goto PlaceJay_1

PlaceJay_3:
# 19 "data/maps/CandlewaxCity/scripts.pory"
	goto JayPkmnRescued
	goto PlaceJay_1


JayPkmnRescued::
# 30 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 31 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 32 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 33 "data/maps/CandlewaxCity/scripts.pory"
	delay 20
# 34 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 1, JayRunsToPlayer
# 35 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 36 "data/maps/CandlewaxCity/scripts.pory"
	msgbox JayMadeIt, MSGBOX_AUTOCLOSE
# 37 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 1, JayLeaves
# 38 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 39 "data/maps/CandlewaxCity/scripts.pory"
	removeobject 1
# 40 "data/maps/CandlewaxCity/scripts.pory"
	setflag FLAG_JAY_CANDLEWAXCITY
# 41 "data/maps/CandlewaxCity/scripts.pory"
	setflag FLAG_JAY_HOZIER_HALL
# 42 "data/maps/CandlewaxCity/scripts.pory"
	setvar VAR_CANDLEWAX_CITY_TRIGGER, 1
# 43 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


CandlewaxCity_Jay::
# 48 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 49 "data/maps/CandlewaxCity/scripts.pory"
	faceplayer
# 50 "data/maps/CandlewaxCity/scripts.pory"
	msgbox JayDescribesBadGuys
# 51 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


JayHelpPlease::
# 56 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 57 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 58 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 59 "data/maps/CandlewaxCity/scripts.pory"
	delay 20
# 60 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 1, JayRunsToPlayer
# 61 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 62 "data/maps/CandlewaxCity/scripts.pory"
	msgbox JayStolenPokemon, MSGBOX_AUTOCLOSE
# 63 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 1, JayRunsInPlace
# 64 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 65 "data/maps/CandlewaxCity/scripts.pory"
	msgbox JayDescribesBadGuys
# 66 "data/maps/CandlewaxCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 67 "data/maps/CandlewaxCity/scripts.pory"
	playfanfare MUS_HEAL
# 68 "data/maps/CandlewaxCity/scripts.pory"
	waitfanfare
# 69 "data/maps/CandlewaxCity/scripts.pory"
	special HealPlayerParty
# 70 "data/maps/CandlewaxCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 71 "data/maps/CandlewaxCity/scripts.pory"
	setvar VAR_CANDLEWAX_CITY_JAY, 1
# 72 "data/maps/CandlewaxCity/scripts.pory"
	setflag FLAG_GUARD_RIBCAVE
# 73 "data/maps/CandlewaxCity/scripts.pory"
	setobjectxy 1, 18, 6
# 74 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


JayNotYetRescued::
# 79 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 80 "data/maps/CandlewaxCity/scripts.pory"
	msgbox JayWhatAboutPokemon, MSGBOX_AUTOCLOSE
# 81 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 1, JayRunsInPlace
# 82 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 83 "data/maps/CandlewaxCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 84 "data/maps/CandlewaxCity/scripts.pory"
	playfanfare MUS_HEAL
# 85 "data/maps/CandlewaxCity/scripts.pory"
	waitfanfare
# 86 "data/maps/CandlewaxCity/scripts.pory"
	special HealPlayerParty
# 87 "data/maps/CandlewaxCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 88 "data/maps/CandlewaxCity/scripts.pory"
	msgbox JayDescribesBadGuys
# 89 "data/maps/CandlewaxCity/scripts.pory"
	setvar VAR_CANDLEWAX_CITY_JAY, 1
# 90 "data/maps/CandlewaxCity/scripts.pory"
	setflag FLAG_GUARD_RIBCAVE
# 91 "data/maps/CandlewaxCity/scripts.pory"
	setobjectxy 1, 18, 6
# 92 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


# 134 "data/maps/CandlewaxCity/scripts.pory"
JayLeaves:
# 135 "data/maps/CandlewaxCity/scripts.pory"
	walk_down
# 135 "data/maps/CandlewaxCity/scripts.pory"
	walk_down
# 135 "data/maps/CandlewaxCity/scripts.pory"
	walk_down
# 135 "data/maps/CandlewaxCity/scripts.pory"
	walk_down
# 135 "data/maps/CandlewaxCity/scripts.pory"
	walk_down
# 135 "data/maps/CandlewaxCity/scripts.pory"
	walk_down
# 135 "data/maps/CandlewaxCity/scripts.pory"
	walk_down
# 136 "data/maps/CandlewaxCity/scripts.pory"
	step_end

# 139 "data/maps/CandlewaxCity/scripts.pory"
JayRunsToPlayer:
# 140 "data/maps/CandlewaxCity/scripts.pory"
	walk_fast_right
# 140 "data/maps/CandlewaxCity/scripts.pory"
	walk_fast_right
# 140 "data/maps/CandlewaxCity/scripts.pory"
	walk_fast_right
# 141 "data/maps/CandlewaxCity/scripts.pory"
	walk_fast_up
# 141 "data/maps/CandlewaxCity/scripts.pory"
	walk_fast_up
# 141 "data/maps/CandlewaxCity/scripts.pory"
	walk_fast_up
# 142 "data/maps/CandlewaxCity/scripts.pory"
	step_end

# 145 "data/maps/CandlewaxCity/scripts.pory"
JayRunsInPlace:
# 146 "data/maps/CandlewaxCity/scripts.pory"
	walk_in_place_fast_up
# 146 "data/maps/CandlewaxCity/scripts.pory"
	walk_in_place_fast_up
# 147 "data/maps/CandlewaxCity/scripts.pory"
	step_end

PlaceJay_HozierHall_1::
# 151 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 152 "data/maps/CandlewaxCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 153 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 2, JayGoesToPlayer_HozierHall1
# 154 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 155 "data/maps/CandlewaxCity/scripts.pory"
	goto JayGivesShoes
	return


PlaceJay_HozierHall_2::
# 159 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 160 "data/maps/CandlewaxCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 161 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 2, JayGoesToPlayer_HozierHall2
# 162 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 163 "data/maps/CandlewaxCity/scripts.pory"
	goto JayGivesShoes
	return


JayGivesShoes::
# 167 "data/maps/CandlewaxCity/scripts.pory"
	msgbox Jay_SeeHozier, MSGBOX_AUTOCLOSE
# 168 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 169 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 170 "data/maps/CandlewaxCity/scripts.pory"
	delay 20
# 171 "data/maps/CandlewaxCity/scripts.pory"
	msgbox Jay_WonAgainstHozier, MSGBOX_AUTOCLOSE
# 172 "data/maps/CandlewaxCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 173 "data/maps/CandlewaxCity/scripts.pory"
	message JayGivesShoes_Text_0
# 174 "data/maps/CandlewaxCity/scripts.pory"
	waitfanfare
# 175 "data/maps/CandlewaxCity/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 176 "data/maps/CandlewaxCity/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 177 "data/maps/CandlewaxCity/scripts.pory"
	msgbox Jay_ExplainRunningShoes, MSGBOX_AUTOCLOSE
# 178 "data/maps/CandlewaxCity/scripts.pory"
	applymovement 2, JayLeaves
# 179 "data/maps/CandlewaxCity/scripts.pory"
	waitmovement 0
# 180 "data/maps/CandlewaxCity/scripts.pory"
	removeobject 2
# 181 "data/maps/CandlewaxCity/scripts.pory"
	setflag FLAG_JAY_HOZIER_HALL
# 182 "data/maps/CandlewaxCity/scripts.pory"
	setflag FLAG_ROUTE3_GOBLIN
# 183 "data/maps/CandlewaxCity/scripts.pory"
	setvar VAR_CANDLEWAX_CITY_TRIGGER, 3
# 184 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


# 221 "data/maps/CandlewaxCity/scripts.pory"
JayGoesToPlayer_HozierHall1:
# 222 "data/maps/CandlewaxCity/scripts.pory"
	emote_exclamation_mark
# 223 "data/maps/CandlewaxCity/scripts.pory"
	delay_16
# 224 "data/maps/CandlewaxCity/scripts.pory"
	walk_right
# 224 "data/maps/CandlewaxCity/scripts.pory"
	walk_right
# 224 "data/maps/CandlewaxCity/scripts.pory"
	walk_right
# 225 "data/maps/CandlewaxCity/scripts.pory"
	step_end

# 228 "data/maps/CandlewaxCity/scripts.pory"
JayGoesToPlayer_HozierHall2:
# 229 "data/maps/CandlewaxCity/scripts.pory"
	emote_exclamation_mark
# 230 "data/maps/CandlewaxCity/scripts.pory"
	delay_16
# 231 "data/maps/CandlewaxCity/scripts.pory"
	walk_down
# 232 "data/maps/CandlewaxCity/scripts.pory"
	walk_right
# 232 "data/maps/CandlewaxCity/scripts.pory"
	walk_right
# 232 "data/maps/CandlewaxCity/scripts.pory"
	walk_right
# 233 "data/maps/CandlewaxCity/scripts.pory"
	step_end

CandlewaxCity_HallSign::
# 237 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 238 "data/maps/CandlewaxCity/scripts.pory"
	msgbox CandlewaxCity_HallSign_Text_0
# 239 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


CandlewaxCity_RibCaveSign::
# 244 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 245 "data/maps/CandlewaxCity/scripts.pory"
	msgbox CandlewaxCity_RibCaveSign_Text_0
# 246 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


CandlewaxCity_CitySign::
# 251 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 252 "data/maps/CandlewaxCity/scripts.pory"
	msgbox CandlewaxCity_CitySign_Text_0
# 253 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


CandlewaxCity_BikeSign::
# 258 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 259 "data/maps/CandlewaxCity/scripts.pory"
	msgbox CandlewaxCity_BikeSign_Text_0
# 260 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


CandlewaxCity_SchoolSign::
# 265 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 266 "data/maps/CandlewaxCity/scripts.pory"
	msgbox CandlewaxCity_SchoolSign_Text_0
# 267 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


CandlewaxCity_TunnelSign::
# 272 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 273 "data/maps/CandlewaxCity/scripts.pory"
	msgbox CandlewaxCity_TunnelSign_Text_0
# 274 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


CandlewaxCity_Girl::
# 279 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 280 "data/maps/CandlewaxCity/scripts.pory"
	faceplayer
# 281 "data/maps/CandlewaxCity/scripts.pory"
	msgbox CandlewaxCity_Girl_Text_0, MSGBOX_AUTOCLOSE
# 282 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


CandlewaxCity_Man::
# 287 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 288 "data/maps/CandlewaxCity/scripts.pory"
	faceplayer
# 289 "data/maps/CandlewaxCity/scripts.pory"
	msgbox CandlewaxCity_Man_Text_0, MSGBOX_AUTOCLOSE
# 290 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


CandlewaxCity_KirliaGirl::
# 295 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 296 "data/maps/CandlewaxCity/scripts.pory"
	faceplayer
# 297 "data/maps/CandlewaxCity/scripts.pory"
	msgbox CandlewaxCity_KirliaGirl_Text_0, MSGBOX_AUTOCLOSE
# 298 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


CandlewaxCity_Kirlia::
# 303 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 304 "data/maps/CandlewaxCity/scripts.pory"
	faceplayer
# 305 "data/maps/CandlewaxCity/scripts.pory"
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
# 306 "data/maps/CandlewaxCity/scripts.pory"
	msgbox CandlewaxCity_Kirlia_Text_0, MSGBOX_AUTOCLOSE
# 307 "data/maps/CandlewaxCity/scripts.pory"
	waitmoncry
# 308 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


CandlewaxCity_Hiker::
# 313 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 314 "data/maps/CandlewaxCity/scripts.pory"
	faceplayer
# 315 "data/maps/CandlewaxCity/scripts.pory"
	msgbox CandlewaxCity_Hiker_Text_0
# 316 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


CandlewaxCity_Worker::
# 321 "data/maps/CandlewaxCity/scripts.pory"
	lock
# 322 "data/maps/CandlewaxCity/scripts.pory"
	faceplayer
# 323 "data/maps/CandlewaxCity/scripts.pory"
	msgbox CandlewaxCity_Worker_Text_0
# 324 "data/maps/CandlewaxCity/scripts.pory"
	releaseall
	end


JayGivesShoes_Text_0:
# 173 "data/maps/CandlewaxCity/scripts.pory"
	.string "Jay gave {PLAYER} the RUNNING SHOES!$"

CandlewaxCity_HallSign_Text_0:
# 238 "data/maps/CandlewaxCity/scripts.pory"
	.string "CANDLEWAX CITY CONCERT HALL\p"
	.string "HOZIER CHALLENGE IS ON$"

CandlewaxCity_RibCaveSign_Text_0:
# 245 "data/maps/CandlewaxCity/scripts.pory"
	.string "{UP_ARROW} Rib Cave\p"
	.string "Gateway to Ecstasy Town.$"

CandlewaxCity_CitySign_Text_0:
# 252 "data/maps/CandlewaxCity/scripts.pory"
	.string "Welcome to Candlewax City!\p"
	.string "Where you can be whatever you set out\n"
	.string "to be.$"

CandlewaxCity_BikeSign_Text_0:
# 259 "data/maps/CandlewaxCity/scripts.pory"
	.string "Candlewax City Bike Workshop\p"
	.string "More innovation, faster bikes.$"

CandlewaxCity_SchoolSign_Text_0:
# 266 "data/maps/CandlewaxCity/scripts.pory"
	.string "Candlewax City POKéMON School\p"
	.string "Open to all, come learn the basics of\n"
	.string "POKéMON training!$"

CandlewaxCity_TunnelSign_Text_0:
# 273 "data/maps/CandlewaxCity/scripts.pory"
	.string "{DOWN_ARROW}: Caesar Tunnel\p"
	.string "To Route 3 and Furge Town.$"

CandlewaxCity_Girl_Text_0:
# 281 "data/maps/CandlewaxCity/scripts.pory"
	.string "The pattern on the pavement is the\n"
	.string "pride of Candlewax City!\p"
	.string "Do you think that's what The Last\n"
	.string "Dinner Party reference when they say\l"
	.string "'There is candlewax melting in my\l"
	.string "veins'?$"

CandlewaxCity_Man_Text_0:
# 289 "data/maps/CandlewaxCity/scripts.pory"
	.string "My cousin bought a bike that was\n"
	.string "designed here in Candlewax City.\p"
	.string "Even her Ponyta struggles to keep up\n"
	.string "with her.$"

CandlewaxCity_KirliaGirl_Text_0:
# 297 "data/maps/CandlewaxCity/scripts.pory"
	.string "I'm so glad Concert Halls allow POKéMON!\p"
	.string "I couldn't imagine seeing my favourite\n"
	.string "artists without Kirlia…$"

CandlewaxCity_Kirlia_Text_0:
# 306 "data/maps/CandlewaxCity/scripts.pory"
	.string "KIRLIA: Krrrr!$"

CandlewaxCity_Hiker_Text_0:
# 315 "data/maps/CandlewaxCity/scripts.pory"
	.string "Route 3 is on the other side of that\n"
	.string "tunnel.\p"
	.string "It's more of a forest path actually, I\n"
	.string "almost got lost.\p"
	.string "I don't like forests.$"

CandlewaxCity_Worker_Text_0:
# 323 "data/maps/CandlewaxCity/scripts.pory"
	.string "We're finishing up some minor works in\n"
	.string "the Tunnel, come back later.\p"
	.string "Why don't you go pass the time at the\n"
	.string "Concert Hall?$"

JayMadeIt::
# 96 "data/maps/CandlewaxCity/scripts.pory"
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
# 108 "data/maps/CandlewaxCity/scripts.pory"
	.string "JAY: {PLAYER}! \p"
	.string "Oh, {PLAYER} I need your help! \p"
	.string "I was making my way through the cave \n"
	.string "when I got attacked!\p"
	.string "There were two of them, they took my \n"
	.string "POKéMON, please help me!\p$"

JayDescribesBadGuys::
# 117 "data/maps/CandlewaxCity/scripts.pory"
	.string "They were dressed like pirates, they \n"
	.string "ran away before I could do anything!\p"
	.string "My poor POKéMON, please if anyone can \n"
	.string "rescue it, it's you {PLAYER}!\p"
	.string "Here, I'll heal your team so you \n"
	.string "have all your chances. $"

JayWhatAboutPokemon::
# 126 "data/maps/CandlewaxCity/scripts.pory"
	.string "JAY: {PLAYER}! Did you get my POKéMON \n"
	.string "back? \p"
	.string "Not yet? \p"
	.string "It's okay, I'll heal your team so you \n"
	.string "have all your chances. $"

Jay_SeeHozier::
# 189 "data/maps/CandlewaxCity/scripts.pory"
	.string "JAY: {PLAYER}! \p"
	.string "Did you get to see Hozier? \p"
	.string "… … … \p"
	.string "Oh no, you missed the show? \p"
	.string "I'm sorry I made you go back into \n"
	.string "the cave, it must have delayed you. $"

Jay_WonAgainstHozier::
# 198 "data/maps/CandlewaxCity/scripts.pory"
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
# 211 "data/maps/CandlewaxCity/scripts.pory"
	.string "These are brand new RUNNING SHOES! \p"
	.string "I accidentally ordered the wrong size \n"
	.string "but you're lucky, it looks like they \l"
	.string "fit you perfectly! \p"
	.string "They'll allow you to move super fast, \n"
	.string "just equip them and keep the B button \l"
	.string "pressed while moving. $"

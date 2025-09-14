SecondBestIsland_MapScripts::
# 2 "data/maps/SecondBestIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SBI_ResetRachel
	.byte 0


SBI_ResetRachel::
# 9 "data/maps/SecondBestIsland/scripts.pory"
	setvar VAR_GODZILLAND_PORYGON, 0
# 10 "data/maps/SecondBestIsland/scripts.pory"
	setflag FLAG_VISITED_FALLARBOR_TOWN
# 11 "data/maps/SecondBestIsland/scripts.pory"
	clearflag FLAG_SBI_RACHEL
	return


SBI_Rachel::
# 15 "data/maps/SecondBestIsland/scripts.pory"
	lock
# 16 "data/maps/SecondBestIsland/scripts.pory"
	faceplayer
# 17 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_RachelWannaBattle, MSGBOX_YESNO
# 18 "data/maps/SecondBestIsland/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SBI_Rachel_2
# 22 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_RachelNoBattle
SBI_Rachel_1:
# 24 "data/maps/SecondBestIsland/scripts.pory"
	release
	end

SBI_Rachel_2:
# 19 "data/maps/SecondBestIsland/scripts.pory"
	trainerbattle_single TRAINER_RACHEL, SBI_RachelYesBattle, SBI_Rachel_Text_0, SBI_RachelPostBattle
	goto SBI_Rachel_1


SBI_RachelPostBattle::
# 29 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_RachelPostBattleText, MSGBOX_AUTOCLOSE
# 30 "data/maps/SecondBestIsland/scripts.pory"
	applymovement 2, PiplupJump
# 31 "data/maps/SecondBestIsland/scripts.pory"
	playmoncry SPECIES_PIPLUP, CRY_MODE_NORMAL
# 32 "data/maps/SecondBestIsland/scripts.pory"
	waitmoncry
# 33 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_RachelPostBattle_Text_0
# 34 "data/maps/SecondBestIsland/scripts.pory"
	setflag FLAG_SBI_RACHEL
# 35 "data/maps/SecondBestIsland/scripts.pory"
	release
	end


SBI_Piplup::
# 40 "data/maps/SecondBestIsland/scripts.pory"
	lock
# 41 "data/maps/SecondBestIsland/scripts.pory"
	faceplayer
# 42 "data/maps/SecondBestIsland/scripts.pory"
	playmoncry SPECIES_PIPLUP, CRY_MODE_NORMAL
# 43 "data/maps/SecondBestIsland/scripts.pory"
	waitmoncry
# 44 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_Piplup_Text_0
# 45 "data/maps/SecondBestIsland/scripts.pory"
	release
	end


# 81 "data/maps/SecondBestIsland/scripts.pory"
PiplupJump:
# 82 "data/maps/SecondBestIsland/scripts.pory"
	jump_in_place_right
# 82 "data/maps/SecondBestIsland/scripts.pory"
	jump_in_place_right
# 83 "data/maps/SecondBestIsland/scripts.pory"
	step_end

SBI_Sign::
# 87 "data/maps/SecondBestIsland/scripts.pory"
	lock
# 88 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_LyricsIntro
# 89 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_LyricsVerse1
# 90 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_LyricsChorus
# 91 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_LyricsVerse2
# 92 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_LyricsChorus
# 93 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_LyricsOutro
# 94 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_LyricsChorus, MSGBOX_AUTOCLOSE
# 95 "data/maps/SecondBestIsland/scripts.pory"
	releaseall
	end


SBI_ChaiseLongue::
# 166 "data/maps/SecondBestIsland/scripts.pory"
	lock
# 167 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_TakeABreak, MSGBOX_YESNO
# 168 "data/maps/SecondBestIsland/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SBI_ChaiseLongue_2
SBI_ChaiseLongue_1:
# 177 "data/maps/SecondBestIsland/scripts.pory"
	releaseall
	end

SBI_ChaiseLongue_2:
# 169 "data/maps/SecondBestIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 170 "data/maps/SecondBestIsland/scripts.pory"
	playfanfare MUS_HEAL
# 171 "data/maps/SecondBestIsland/scripts.pory"
	waitfanfare
# 172 "data/maps/SecondBestIsland/scripts.pory"
	special HealPlayerParty
# 173 "data/maps/SecondBestIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 174 "data/maps/SecondBestIsland/scripts.pory"
	setrespawn HEAL_LOCATION_SECOND_BEST_ISLAND
# 175 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_ChaiseLongue_Text_0, MSGBOX_AUTOCLOSE
	goto SBI_ChaiseLongue_1


SBI_Swimmer1::
# 188 "data/maps/SecondBestIsland/scripts.pory"
	trainerbattle_single TRAINER_BEVERLY, SBI_Swimmer1_Text_0, SBI_Swimmer1_Text_1
# 189 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_Swimmer1_Text_2, MSGBOX_AUTOCLOSE
	return


SBI_Swimmer2::
# 193 "data/maps/SecondBestIsland/scripts.pory"
	trainerbattle_single TRAINER_IMANI, SBI_Swimmer2_Text_0, SBI_Swimmer2_Text_1
# 194 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_Swimmer2_Text_2, MSGBOX_AUTOCLOSE
	return


SBI_Rachel_Text_0:
# 19 "data/maps/SecondBestIsland/scripts.pory"
	.string "Ain't it nice?$"

SBI_RachelPostBattle_Text_0:
# 33 "data/maps/SecondBestIsland/scripts.pory"
	.string "PIPLUP: Pip!$"

SBI_Piplup_Text_0:
# 44 "data/maps/SecondBestIsland/scripts.pory"
	.string "PIPLUP: Pipip!$"

SBI_ChaiseLongue_Text_0:
# 175 "data/maps/SecondBestIsland/scripts.pory"
	.string "You and your POKéMON wake up feeling\n"
	.string "well rested.$"

SBI_Swimmer1_Text_0:
# 188 "data/maps/SecondBestIsland/scripts.pory"
	.string "Of course I know there's an island over\n"
	.string "there!\p"
	.string "But I'm training to swim faster!$"

SBI_Swimmer1_Text_1:
# 188 "data/maps/SecondBestIsland/scripts.pory"
	.string "Time for a little break…$"

SBI_Swimmer1_Text_2:
# 189 "data/maps/SecondBestIsland/scripts.pory"
	.string "I'm jealous of Water Type POKéMON,\n"
	.string "swimming is so easy for them…$"

SBI_Swimmer2_Text_0:
# 193 "data/maps/SecondBestIsland/scripts.pory"
	.string "I'm gonna swim across the ocean!$"

SBI_Swimmer2_Text_1:
# 193 "data/maps/SecondBestIsland/scripts.pory"
	.string "Maybe I'll start with a shorter\n"
	.string "distance…$"

SBI_Swimmer2_Text_2:
# 194 "data/maps/SecondBestIsland/scripts.pory"
	.string "You should learn to swim, in case your\n"
	.string "POKéMON can't carry you.$"

SBI_RachelWannaBattle::
# 49 "data/maps/SecondBestIsland/scripts.pory"
	.string "RACHEL: Oh hi! \p"
	.string "Welcome to Second Best Island! \p"
	.string "Did you know The Last Dinner Party wrote \n"
	.string "Second Best after visiting this place? \p"
	.string "Naturally I had to move here when I \n"
	.string "found out. \p"
	.string "I really like it here, but it gets a bit \n"
	.string "lonely. \p"
	.string "It's just me and my POKéMON… \p"
	.string "Wait you're a POKéMON Trainer! \p"
	.string "Can we spar? Please? $"

SBI_RachelYesBattle::
# 63 "data/maps/SecondBestIsland/scripts.pory"
	.string "Yay! Let's do this!$"

SBI_RachelNoBattle::
# 67 "data/maps/SecondBestIsland/scripts.pory"
	.string "Awh that's okay… \p"
	.string "I'll just listen to Second Best in my \n"
	.string "corner. \p"
	.string "Come back if you change your mind!$"

SBI_RachelPostBattleText::
# 74 "data/maps/SecondBestIsland/scripts.pory"
	.string "RACHEL: That was fun! \p"
	.string "Almost as fun as Second Best! \p"
	.string "Feel free to look around here and \n"
	.string "enjoy the island!$"

SBI_LyricsIntro::
# 99 "data/maps/SecondBestIsland/scripts.pory"
	.string "SECOND BEST \p"
	.string "Now the days grow long \n"
	.string "And your hands and tears \l"
	.string "Are lost…\l"
	.string "To the wind.\p"
	.string "Take me back, \n"
	.string "Take me back! \p"
	.string "Let us walk by the shore. \p"
	.string "By the hand, by the hair, \n"
	.string "I don't care anymore. \p"
	.string "Put the world at your feet, \n"
	.string "Leave footprints on my back, \l"
	.string "I'll be first, I'll be last \l"
	.string "Don't want to need to go back! $"

SBI_LyricsVerse1::
# 115 "data/maps/SecondBestIsland/scripts.pory"
	.string "Chewing gum and white wine, \n"
	.string "Your cold answer's mine… \p"
	.string "I'm wasting my time. \p"
	.string "You know I hate to lose, \n"
	.string "And maybe that's why \l"
	.string "I've left you behind. \p"
	.string "I feel like I've left you behind. $"

SBI_LyricsChorus::
# 124 "data/maps/SecondBestIsland/scripts.pory"
	.string "Ain't it nice? \p"
	.string "Second best! \p"
	.string "Ain't it good? \p"
	.string "Second best! \p"
	.string "Ain't it nice? \p"
	.string "Second best! \p"
	.string "Ain't it good? \p"
	.string "Second best! $"

SBI_LyricsVerse2::
# 135 "data/maps/SecondBestIsland/scripts.pory"
	.string "Oh against your bathroom tiles \n"
	.string "Your back goes on for miles… \p"
	.string "I'm losing my mind! \p"
	.string "Babe! Ya know it ain't faiyuh! \p"
	.string "You leave me again! \p"
	.string "He's waiting downstairs… \p"
	.string "There's always somebody down… \p"
	.string "… \p"
	.string "… staaairs! $"

SBI_LyricsOutro::
# 147 "data/maps/SecondBestIsland/scripts.pory"
	.string "What do I do to be better for you? \p"
	.string "What do I do to be better for you? \p"
	.string "What do I do to be better for you? \p"
	.string "What do I do to be better for you? \p"
	.string "What do I do to be better for you? \n"
	.string "Take me back, take me back! Let us \l"
	.string "walk by the shore! \p"
	.string "What do I do to be better for you? \n"
	.string "By the hand, by the hair I don't care \l"
	.string "anymore! \p"
	.string "What do I do to be better for you? \n"
	.string "Put the world at your feet, leave \l"
	.string "footprints on my back, \p"
	.string "I'll be first, I'll be last! \n"
	.string "Don't want to need to go back! $"

SBI_TakeABreak::
# 181 "data/maps/SecondBestIsland/scripts.pory"
	.string "This looks like a nice spot to take \n"
	.string "a break. \p"
	.string "Would you like to take a nap?$"

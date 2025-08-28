SecondBestIsland_MapScripts::
# 2 "data/maps/SecondBestIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SBI_ResetRachel
	.byte 0


SBI_ResetRachel::
# 9 "data/maps/SecondBestIsland/scripts.pory"
	clearflag FLAG_SBI_RACHEL
	return


SBI_Rachel::
# 13 "data/maps/SecondBestIsland/scripts.pory"
	lock
# 14 "data/maps/SecondBestIsland/scripts.pory"
	faceplayer
# 15 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_RachelWannaBattle, MSGBOX_YESNO
# 16 "data/maps/SecondBestIsland/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SBI_Rachel_2
# 20 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_RachelNoBattle
SBI_Rachel_1:
# 22 "data/maps/SecondBestIsland/scripts.pory"
	release
	end

SBI_Rachel_2:
# 17 "data/maps/SecondBestIsland/scripts.pory"
	trainerbattle_single TRAINER_RACHEL, SBI_RachelYesBattle, SBI_Rachel_Text_0, SBI_RachelPostBattle
	goto SBI_Rachel_1


SBI_RachelPostBattle::
# 27 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_RachelPostBattleText, MSGBOX_AUTOCLOSE
# 28 "data/maps/SecondBestIsland/scripts.pory"
	applymovement 2, PiplupJump
# 29 "data/maps/SecondBestIsland/scripts.pory"
	playmoncry SPECIES_PIPLUP, CRY_MODE_NORMAL
# 30 "data/maps/SecondBestIsland/scripts.pory"
	waitmoncry
# 31 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_RachelPostBattle_Text_0
# 32 "data/maps/SecondBestIsland/scripts.pory"
	setflag FLAG_SBI_RACHEL
# 33 "data/maps/SecondBestIsland/scripts.pory"
	release
	end


SBI_Piplup::
# 38 "data/maps/SecondBestIsland/scripts.pory"
	lock
# 39 "data/maps/SecondBestIsland/scripts.pory"
	faceplayer
# 40 "data/maps/SecondBestIsland/scripts.pory"
	playmoncry SPECIES_PIPLUP, CRY_MODE_NORMAL
# 41 "data/maps/SecondBestIsland/scripts.pory"
	waitmoncry
# 42 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_Piplup_Text_0
# 43 "data/maps/SecondBestIsland/scripts.pory"
	release
	end


# 79 "data/maps/SecondBestIsland/scripts.pory"
PiplupJump:
# 80 "data/maps/SecondBestIsland/scripts.pory"
	jump_in_place_right
# 80 "data/maps/SecondBestIsland/scripts.pory"
	jump_in_place_right
# 81 "data/maps/SecondBestIsland/scripts.pory"
	step_end

SBI_Sign::
# 85 "data/maps/SecondBestIsland/scripts.pory"
	lock
# 86 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_LyricsIntro
# 87 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_LyricsVerse1
# 88 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_LyricsChorus
# 89 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_LyricsVerse2
# 90 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_LyricsChorus
# 91 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_LyricsOutro
# 92 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_LyricsChorus, MSGBOX_AUTOCLOSE
# 93 "data/maps/SecondBestIsland/scripts.pory"
	releaseall
	end


SBI_ChaiseLongue::
# 164 "data/maps/SecondBestIsland/scripts.pory"
	lock
# 165 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_TakeABreak, MSGBOX_YESNO
# 166 "data/maps/SecondBestIsland/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SBI_ChaiseLongue_2
SBI_ChaiseLongue_1:
# 175 "data/maps/SecondBestIsland/scripts.pory"
	releaseall
	end

SBI_ChaiseLongue_2:
# 167 "data/maps/SecondBestIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 168 "data/maps/SecondBestIsland/scripts.pory"
	playfanfare MUS_HEAL
# 169 "data/maps/SecondBestIsland/scripts.pory"
	waitfanfare
# 170 "data/maps/SecondBestIsland/scripts.pory"
	special HealPlayerParty
# 171 "data/maps/SecondBestIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 172 "data/maps/SecondBestIsland/scripts.pory"
	setrespawn HEAL_LOCATION_SECOND_BEST_ISLAND
# 173 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_ChaiseLongue_Text_0, MSGBOX_AUTOCLOSE
	goto SBI_ChaiseLongue_1


SBI_Swimmer1::
# 186 "data/maps/SecondBestIsland/scripts.pory"
	trainerbattle_single TRAINER_BEVERLY, SBI_Swimmer1_Text_0, SBI_Swimmer1_Text_1
# 187 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_Swimmer1_Text_2, MSGBOX_AUTOCLOSE
	return


SBI_Swimmer2::
# 191 "data/maps/SecondBestIsland/scripts.pory"
	trainerbattle_single TRAINER_IMANI, SBI_Swimmer2_Text_0, SBI_Swimmer2_Text_1
# 192 "data/maps/SecondBestIsland/scripts.pory"
	msgbox SBI_Swimmer2_Text_2, MSGBOX_AUTOCLOSE
	return


SBI_Rachel_Text_0:
# 17 "data/maps/SecondBestIsland/scripts.pory"
	.string "Ain't it nice?$"

SBI_RachelPostBattle_Text_0:
# 31 "data/maps/SecondBestIsland/scripts.pory"
	.string "PIPLUP: Pip!$"

SBI_Piplup_Text_0:
# 42 "data/maps/SecondBestIsland/scripts.pory"
	.string "PIPLUP: Pipip!$"

SBI_ChaiseLongue_Text_0:
# 173 "data/maps/SecondBestIsland/scripts.pory"
	.string "You and your POKéMON wake up feeling\n"
	.string "well rested.$"

SBI_Swimmer1_Text_0:
# 186 "data/maps/SecondBestIsland/scripts.pory"
	.string "Of course I know there's an island over\n"
	.string "there!\p"
	.string "But I'm training to swim faster!$"

SBI_Swimmer1_Text_1:
# 186 "data/maps/SecondBestIsland/scripts.pory"
	.string "Time for a little break…$"

SBI_Swimmer1_Text_2:
# 187 "data/maps/SecondBestIsland/scripts.pory"
	.string "I'm jealous of Water Type POKéMON,\n"
	.string "swimming is so easy for them…$"

SBI_Swimmer2_Text_0:
# 191 "data/maps/SecondBestIsland/scripts.pory"
	.string "I'm gonna swim across the ocean!$"

SBI_Swimmer2_Text_1:
# 191 "data/maps/SecondBestIsland/scripts.pory"
	.string "Maybe I'll start with a shorter\n"
	.string "distance…$"

SBI_Swimmer2_Text_2:
# 192 "data/maps/SecondBestIsland/scripts.pory"
	.string "You should learn to swim, in case your\n"
	.string "POKéMON can't carry you.$"

SBI_RachelWannaBattle::
# 47 "data/maps/SecondBestIsland/scripts.pory"
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
# 61 "data/maps/SecondBestIsland/scripts.pory"
	.string "Yay! Let's do this!$"

SBI_RachelNoBattle::
# 65 "data/maps/SecondBestIsland/scripts.pory"
	.string "Awh that's okay… \p"
	.string "I'll just listen to Second Best in my \n"
	.string "corner. \p"
	.string "Come back if you change your mind!$"

SBI_RachelPostBattleText::
# 72 "data/maps/SecondBestIsland/scripts.pory"
	.string "RACHEL: That was fun! \p"
	.string "Almost as fun as Second Best! \p"
	.string "Feel free to look around here and \n"
	.string "enjoy the island!$"

SBI_LyricsIntro::
# 97 "data/maps/SecondBestIsland/scripts.pory"
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
# 113 "data/maps/SecondBestIsland/scripts.pory"
	.string "Chewing gum and white wine, \n"
	.string "Your cold answer's mine… \p"
	.string "I'm wasting my time. \p"
	.string "You know I hate to lose, \n"
	.string "And maybe that's why \l"
	.string "I've left you behind. \p"
	.string "I feel like I've left you behind. $"

SBI_LyricsChorus::
# 122 "data/maps/SecondBestIsland/scripts.pory"
	.string "Ain't it nice? \p"
	.string "Second best! \p"
	.string "Ain't it good? \p"
	.string "Second best! \p"
	.string "Ain't it nice? \p"
	.string "Second best! \p"
	.string "Ain't it good? \p"
	.string "Second best! $"

SBI_LyricsVerse2::
# 133 "data/maps/SecondBestIsland/scripts.pory"
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
# 145 "data/maps/SecondBestIsland/scripts.pory"
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
# 179 "data/maps/SecondBestIsland/scripts.pory"
	.string "This looks like a nice spot to take \n"
	.string "a break. \p"
	.string "Would you like to take a nap?$"

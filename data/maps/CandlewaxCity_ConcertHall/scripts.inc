CandlewaxCity_ConcertHall_MapScripts::
	.byte 0


HozierBattle::
# 4 "data/maps/CandlewaxCity_ConcertHall/scripts.pory"
	lock
# 5 "data/maps/CandlewaxCity_ConcertHall/scripts.pory"
	checktrainerflag TRAINER_HOZIER
	goto_if 1, HozierBattle_2
# 9 "data/maps/CandlewaxCity_ConcertHall/scripts.pory"
	trainerbattle_single TRAINER_HOZIER, Hozier_BattleIntro, Hozier_DefeatedText, Hozier_DefeatedScript, NO_MUSIC
HozierBattle_1:
# 11 "data/maps/CandlewaxCity_ConcertHall/scripts.pory"
	release
	end

HozierBattle_2:
# 6 "data/maps/CandlewaxCity_ConcertHall/scripts.pory"
	msgbox HozierBadgePerks_Independent, MSGBOX_DEFAULT
	goto HozierBattle_1


Hozier_DefeatedScript::
# 16 "data/maps/CandlewaxCity_ConcertHall/scripts.pory"
	msgbox HozierGiveBadge, MSGBOX_AUTOCLOSE
# 17 "data/maps/CandlewaxCity_ConcertHall/scripts.pory"
	message Hozier_DefeatedScript_Text_0
# 18 "data/maps/CandlewaxCity_ConcertHall/scripts.pory"
	waitmessage
# 19 "data/maps/CandlewaxCity_ConcertHall/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 20 "data/maps/CandlewaxCity_ConcertHall/scripts.pory"
	setflag FLAG_BADGE01_GET
# 21 "data/maps/CandlewaxCity_ConcertHall/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 22 "data/maps/CandlewaxCity_ConcertHall/scripts.pory"
	clearflag FLAG_JAY_HOZIER_HALL
# 23 "data/maps/CandlewaxCity_ConcertHall/scripts.pory"
	setvar VAR_CANDLEWAX_CITY_TRIGGER, 2
# 24 "data/maps/CandlewaxCity_ConcertHall/scripts.pory"
	msgbox HozierBadgePerks, MSGBOX_AUTOCLOSE
# 25 "data/maps/CandlewaxCity_ConcertHall/scripts.pory"
	releaseall
	end


Hozier_DefeatedScript_Text_0:
# 17 "data/maps/CandlewaxCity_ConcertHall/scripts.pory"
	.string "Received the WASTELAND BADGE from\n"
	.string "HOZIER!$"

Hozier_BattleIntro::
# 29 "data/maps/CandlewaxCity_ConcertHall/scripts.pory"
	.string "HOZIER: Welcome, I am Hozier. \p"
	.string "I heard about your exploits in the \n"
	.string "Rib Cave. \p"
	.string "I admire your courage, now I'd like \n"
	.string "to witness it firsthand if you'll \l"
	.string "let me. $"

Hozier_DefeatedText::
# 38 "data/maps/CandlewaxCity_ConcertHall/scripts.pory"
	.string "All things end…$"

HozierGiveBadge::
# 42 "data/maps/CandlewaxCity_ConcertHall/scripts.pory"
	.string "HOZIER: Not bad, not bad at all! \p"
	.string "Young friend, you have earned this \n"
	.string "very special badge.\p"
	.string "Wear it and you will be granted free\n"
	.string "access to all of my future shows.$"

HozierBadgePerks::
# 50 "data/maps/CandlewaxCity_ConcertHall/scripts.pory"
	.string "This will also ensure your POKéMON \n"
	.string "listen to you until they reach level 20. \p"
	.string "Maybe I will see you again, until then \n"
	.string "keep on fighting for what you think is \l"
	.string "right. \p"
	.string "Good luck for whatever awaits you. $"

HozierBadgePerks_Independent::
# 59 "data/maps/CandlewaxCity_ConcertHall/scripts.pory"
	.string "HOZIER: My WASTELAND BADGE ensure your \n"
	.string "POKéMON listen to you until they reach \l"
	.string "level 20. \p"
	.string "Maybe I will see you again, until then \n"
	.string "keep on fighting for what you think is \l"
	.string "right. \p"
	.string "Good luck for whatever awaits you. $"

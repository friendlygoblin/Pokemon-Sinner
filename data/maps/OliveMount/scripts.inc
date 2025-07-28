OliveMount_MapScripts::
	.byte 0


OliveMount_Youngster::
# 4 "data/maps/OliveMount/scripts.pory"
	trainerbattle_single TRAINER_JOEY, OliveMount_Youngster_Text_0, OliveMount_Youngster_Text_1
# 5 "data/maps/OliveMount/scripts.pory"
	msgbox OliveMount_Youngster_Text_2, MSGBOX_AUTOCLOSE
	return


OliveMount_Picnicker::
# 9 "data/maps/OliveMount/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, OliveMount_Picnicker_Text_0, OliveMount_Picnicker_Text_1
# 10 "data/maps/OliveMount/scripts.pory"
	msgbox OliveMount_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	return


DayCareSign::
# 14 "data/maps/OliveMount/scripts.pory"
	lock
# 15 "data/maps/OliveMount/scripts.pory"
	msgbox DayCareSign_Text_0, MSGBOX_AUTOCLOSE
# 16 "data/maps/OliveMount/scripts.pory"
	releaseall
	end


OliveMount_Fisherman::
# 21 "data/maps/OliveMount/scripts.pory"
	lock
# 22 "data/maps/OliveMount/scripts.pory"
	faceplayer
# 23 "data/maps/OliveMount/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUPER_ROD, OliveMount_Fisherman_2
# 27 "data/maps/OliveMount/scripts.pory"
	msgbox OliveMount_Fisherman_Text_0
# 28 "data/maps/OliveMount/scripts.pory"
	trainerbattle_no_intro TRAINER_ANDREW, OliveMount_Fisherman_Text_1
# 29 "data/maps/OliveMount/scripts.pory"
	goto GiveFishingRod
OliveMount_Fisherman_1:
# 31 "data/maps/OliveMount/scripts.pory"
	releaseall
	end

OliveMount_Fisherman_2:
# 24 "data/maps/OliveMount/scripts.pory"
	msgbox ExplainFishing
	goto OliveMount_Fisherman_1


GiveFishingRod::
# 36 "data/maps/OliveMount/scripts.pory"
	msgbox GiveFishingRod_Text_0, MSGBOX_AUTOCLOSE
# 37 "data/maps/OliveMount/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 38 "data/maps/OliveMount/scripts.pory"
	setflag FLAG_RECEIVED_SUPER_ROD
# 39 "data/maps/OliveMount/scripts.pory"
	msgbox ExplainFishing, MSGBOX_AUTOCLOSE
# 40 "data/maps/OliveMount/scripts.pory"
	releaseall
	end


OliveMount_OldMan::
# 53 "data/maps/OliveMount/scripts.pory"
	lock
# 54 "data/maps/OliveMount/scripts.pory"
	faceplayer
# 55 "data/maps/OliveMount/scripts.pory"
	compare VAR_OLIVEMOUNT_OLDMAN_EGG, 0
	goto_if_eq OliveMount_OldMan_2
# 79 "data/maps/OliveMount/scripts.pory"
	msgbox OldMan_HowIsMyEgg, MSGBOX_AUTOCLOSE
OliveMount_OldMan_1:
# 81 "data/maps/OliveMount/scripts.pory"
	releaseall
	end

OliveMount_OldMan_2:
# 56 "data/maps/OliveMount/scripts.pory"
	msgbox OldMan_AreYouATrainer, MSGBOX_YESNO
# 57 "data/maps/OliveMount/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OliveMount_OldMan_5
# 73 "data/maps/OliveMount/scripts.pory"
	msgbox OliveMount_OldMan_Text_3, MSGBOX_AUTOCLOSE
# 74 "data/maps/OliveMount/scripts.pory"
	releaseall
	end

OliveMount_OldMan_5:
# 58 "data/maps/OliveMount/scripts.pory"
	msgbox OliveMount_OldMan_Text_0, MSGBOX_AUTOCLOSE
# 59 "data/maps/OliveMount/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 60 "data/maps/OliveMount/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq OliveMount_OldMan_8
# 64 "data/maps/OliveMount/scripts.pory"
	giveegg SPECIES_EEVEE
# 65 "data/maps/OliveMount/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 66 "data/maps/OliveMount/scripts.pory"
	message OliveMount_OldMan_Text_2
# 67 "data/maps/OliveMount/scripts.pory"
	waitmessage
# 68 "data/maps/OliveMount/scripts.pory"
	msgbox OldMan_AcceptEgg, MSGBOX_AUTOCLOSE
# 69 "data/maps/OliveMount/scripts.pory"
	setvar VAR_OLIVEMOUNT_OLDMAN_EGG, 1
	goto OliveMount_OldMan_1

OliveMount_OldMan_8:
# 61 "data/maps/OliveMount/scripts.pory"
	msgbox OliveMount_OldMan_Text_1
	goto OliveMount_OldMan_1


OliveMount_Youngster_Text_0:
# 4 "data/maps/OliveMount/scripts.pory"
	.string "I just picked up my POKéMON from the\n"
	.string "Day Care!\p"
	.string "Look how strong it is now!$"

OliveMount_Youngster_Text_1:
# 4 "data/maps/OliveMount/scripts.pory"
	.string "Well, it might be a little bit out of\n"
	.string "practice…$"

OliveMount_Youngster_Text_2:
# 5 "data/maps/OliveMount/scripts.pory"
	.string "The Day Care people can take care of\n"
	.string "your POKéMON for you!\p"
	.string "When you come back, they're even\n"
	.string "stronger than before!$"

OliveMount_Picnicker_Text_0:
# 9 "data/maps/OliveMount/scripts.pory"
	.string "The Day Care?\p"
	.string "Oh no, I'm just here to admire the\n"
	.string "scenery!$"

OliveMount_Picnicker_Text_1:
# 9 "data/maps/OliveMount/scripts.pory"
	.string "Oh no, I must have been distracted…$"

OliveMount_Picnicker_Text_2:
# 10 "data/maps/OliveMount/scripts.pory"
	.string "It's so pretty here!\p"
	.string "I wish it weren't raining all the time,\n"
	.string "though…$"

DayCareSign_Text_0:
# 15 "data/maps/OliveMount/scripts.pory"
	.string "POKéMON Day Care\p"
	.string "We take care of your POKéMON for you!$"

OliveMount_Fisherman_Text_0:
# 27 "data/maps/OliveMount/scripts.pory"
	.string "If you win, I'll give you something super\n"
	.string "cool!$"

OliveMount_Fisherman_Text_1:
# 28 "data/maps/OliveMount/scripts.pory"
	.string "Alright, alright you win…$"

GiveFishingRod_Text_0:
# 36 "data/maps/OliveMount/scripts.pory"
	.string "You won, so here you go:$"

OliveMount_OldMan_Text_0:
# 58 "data/maps/OliveMount/scripts.pory"
	.string "Brilliant!$"

OliveMount_OldMan_Text_1:
# 61 "data/maps/OliveMount/scripts.pory"
	.string "Oh, uh…\p"
	.string "It looks like your party's full.\p"
	.string "Come back when you've made room,\n"
	.string "please.$"

OliveMount_OldMan_Text_2:
# 66 "data/maps/OliveMount/scripts.pory"
	.string "Obtained EGG from the old man!$"

OliveMount_OldMan_Text_3:
# 73 "data/maps/OliveMount/scripts.pory"
	.string "Oh, alright…\p"
	.string "Well come back if you change your mind.$"

ExplainFishing::
# 44 "data/maps/OliveMount/scripts.pory"
	.string "Fishing is simple: just find some \n"
	.string "water, cast your line, and wait for \l"
	.string "a POKéMON to bite!\p"
	.string "Don't wait too long though, or it might\n"
	.string "get away…$"

OldMan_AreYouATrainer::
# 85 "data/maps/OliveMount/scripts.pory"
	.string "Hello, are you a POKéMON trainer?\p"
	.string "… … …\p"
	.string "Ah perfect! \p"
	.string "You see, I left my POKéMON at the Day \n"
	.string "Care while I was gone on holidays and \l"
	.string "when I came back, the Day Care Lady \l"
	.string "gave me an Egg! \p"
	.string "I'm too old to raise a baby POKéMON… \p"
	.string "Would you take care of it for me?$"

OldMan_AcceptEgg::
# 97 "data/maps/OliveMount/scripts.pory"
	.string "Here you go! \p"
	.string "I heard eggs hatch after spending some \n"
	.string "time with a loving trainer and healthy  \l"
	.string "POKéMON.\p"
	.string "I trust you to take good care of it!$"

OldMan_HowIsMyEgg::
# 105 "data/maps/OliveMount/scripts.pory"
	.string "Hello! \p"
	.string "How is the egg doing?\p"
	.string "… … …\p"
	.string "Wonderful! I knew you would be a good \n"
	.string "caretaker!$"

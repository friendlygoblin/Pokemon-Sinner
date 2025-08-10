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


OliveMount_Psychic::
# 14 "data/maps/OliveMount/scripts.pory"
	trainerbattle_single TRAINER_EDWARD, OliveMount_Psychic_Text_0, OliveMount_Psychic_Text_1
# 15 "data/maps/OliveMount/scripts.pory"
	msgbox OliveMount_Psychic_Text_2, MSGBOX_AUTOCLOSE
	return


OliveMount_SchoolGirl::
# 19 "data/maps/OliveMount/scripts.pory"
	trainerbattle_single TRAINER_TIANA, OliveMount_SchoolGirl_Text_0, OliveMount_SchoolGirl_Text_1
# 20 "data/maps/OliveMount/scripts.pory"
	msgbox OliveMount_SchoolGirl_Text_2, MSGBOX_AUTOCLOSE
	return


DayCareSign::
# 24 "data/maps/OliveMount/scripts.pory"
	lock
# 25 "data/maps/OliveMount/scripts.pory"
	msgbox DayCareSign_Text_0, MSGBOX_AUTOCLOSE
# 26 "data/maps/OliveMount/scripts.pory"
	releaseall
	end


OliveMount_Fisherman::
# 31 "data/maps/OliveMount/scripts.pory"
	lock
# 32 "data/maps/OliveMount/scripts.pory"
	faceplayer
# 33 "data/maps/OliveMount/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUPER_ROD, OliveMount_Fisherman_2
# 37 "data/maps/OliveMount/scripts.pory"
	msgbox OliveMount_Fisherman_Text_0
# 38 "data/maps/OliveMount/scripts.pory"
	trainerbattle_no_intro TRAINER_ANDREW, OliveMount_Fisherman_Text_1
# 39 "data/maps/OliveMount/scripts.pory"
	goto GiveFishingRod
OliveMount_Fisherman_1:
# 41 "data/maps/OliveMount/scripts.pory"
	releaseall
	end

OliveMount_Fisherman_2:
# 34 "data/maps/OliveMount/scripts.pory"
	msgbox ExplainFishing
	goto OliveMount_Fisherman_1


GiveFishingRod::
# 46 "data/maps/OliveMount/scripts.pory"
	msgbox GiveFishingRod_Text_0, MSGBOX_AUTOCLOSE
# 47 "data/maps/OliveMount/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 48 "data/maps/OliveMount/scripts.pory"
	setflag FLAG_RECEIVED_SUPER_ROD
# 49 "data/maps/OliveMount/scripts.pory"
	msgbox ExplainFishing, MSGBOX_AUTOCLOSE
# 50 "data/maps/OliveMount/scripts.pory"
	releaseall
	end


OliveMount_OldMan::
# 63 "data/maps/OliveMount/scripts.pory"
	lock
# 64 "data/maps/OliveMount/scripts.pory"
	faceplayer
# 65 "data/maps/OliveMount/scripts.pory"
	compare VAR_OLIVEMOUNT_OLDMAN_EGG, 0
	goto_if_eq OliveMount_OldMan_2
# 89 "data/maps/OliveMount/scripts.pory"
	msgbox OldMan_HowIsMyEgg, MSGBOX_AUTOCLOSE
OliveMount_OldMan_1:
# 91 "data/maps/OliveMount/scripts.pory"
	releaseall
	end

OliveMount_OldMan_2:
# 66 "data/maps/OliveMount/scripts.pory"
	msgbox OldMan_AreYouATrainer, MSGBOX_YESNO
# 67 "data/maps/OliveMount/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OliveMount_OldMan_5
# 83 "data/maps/OliveMount/scripts.pory"
	msgbox OliveMount_OldMan_Text_3, MSGBOX_AUTOCLOSE
# 84 "data/maps/OliveMount/scripts.pory"
	releaseall
	end

OliveMount_OldMan_5:
# 68 "data/maps/OliveMount/scripts.pory"
	msgbox OliveMount_OldMan_Text_0, MSGBOX_AUTOCLOSE
# 69 "data/maps/OliveMount/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 70 "data/maps/OliveMount/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq OliveMount_OldMan_8
# 74 "data/maps/OliveMount/scripts.pory"
	giveegg SPECIES_EEVEE
# 75 "data/maps/OliveMount/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 76 "data/maps/OliveMount/scripts.pory"
	message OliveMount_OldMan_Text_2
# 77 "data/maps/OliveMount/scripts.pory"
	waitmessage
# 78 "data/maps/OliveMount/scripts.pory"
	msgbox OldMan_AcceptEgg, MSGBOX_AUTOCLOSE
# 79 "data/maps/OliveMount/scripts.pory"
	setvar VAR_OLIVEMOUNT_OLDMAN_EGG, 1
	goto OliveMount_OldMan_1

OliveMount_OldMan_8:
# 71 "data/maps/OliveMount/scripts.pory"
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

OliveMount_Psychic_Text_0:
# 14 "data/maps/OliveMount/scripts.pory"
	.string "The rain won't break my concentration!\p"
	.string "I have laser like focus!$"

OliveMount_Psychic_Text_1:
# 14 "data/maps/OliveMount/scripts.pory"
	.string "But I was fully focused…$"

OliveMount_Psychic_Text_2:
# 15 "data/maps/OliveMount/scripts.pory"
	.string "I train my mind in harsh conditions so\n"
	.string "I'm stronger the rest of the time.$"

OliveMount_SchoolGirl_Text_0:
# 19 "data/maps/OliveMount/scripts.pory"
	.string "I like the rain, and so do my POKéMON!$"

OliveMount_SchoolGirl_Text_1:
# 19 "data/maps/OliveMount/scripts.pory"
	.string "I might be catching a cold…$"

OliveMount_SchoolGirl_Text_2:
# 20 "data/maps/OliveMount/scripts.pory"
	.string "My friends from school don't like the\n"
	.string "rain so they don't come hang out here…\p"
	.string "But I still have my POKéMON with me!$"

DayCareSign_Text_0:
# 25 "data/maps/OliveMount/scripts.pory"
	.string "POKéMON Day Care\p"
	.string "We take care of your POKéMON for you!$"

OliveMount_Fisherman_Text_0:
# 37 "data/maps/OliveMount/scripts.pory"
	.string "If you win, I'll give you something super\n"
	.string "cool!$"

OliveMount_Fisherman_Text_1:
# 38 "data/maps/OliveMount/scripts.pory"
	.string "Alright, alright you win…$"

GiveFishingRod_Text_0:
# 46 "data/maps/OliveMount/scripts.pory"
	.string "You won, so here you go:$"

OliveMount_OldMan_Text_0:
# 68 "data/maps/OliveMount/scripts.pory"
	.string "Brilliant!$"

OliveMount_OldMan_Text_1:
# 71 "data/maps/OliveMount/scripts.pory"
	.string "Oh, uh…\p"
	.string "It looks like your party's full.\p"
	.string "Come back when you've made room,\n"
	.string "please.$"

OliveMount_OldMan_Text_2:
# 76 "data/maps/OliveMount/scripts.pory"
	.string "Obtained EGG from the old man!$"

OliveMount_OldMan_Text_3:
# 83 "data/maps/OliveMount/scripts.pory"
	.string "Oh, alright…\p"
	.string "Well come back if you change your mind.$"

ExplainFishing::
# 54 "data/maps/OliveMount/scripts.pory"
	.string "Fishing is simple: just find some \n"
	.string "water, cast your line, and wait for \l"
	.string "a POKéMON to bite!\p"
	.string "Don't wait too long though, or it might\n"
	.string "get away…$"

OldMan_AreYouATrainer::
# 95 "data/maps/OliveMount/scripts.pory"
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
# 107 "data/maps/OliveMount/scripts.pory"
	.string "Here you go! \p"
	.string "I heard eggs hatch after spending some \n"
	.string "time with a loving trainer and healthy  \l"
	.string "POKéMON.\p"
	.string "I trust you to take good care of it!$"

OldMan_HowIsMyEgg::
# 115 "data/maps/OliveMount/scripts.pory"
	.string "Hello! \p"
	.string "How is the egg doing?\p"
	.string "… … …\p"
	.string "Wonderful! I knew you would be a good \n"
	.string "caretaker!$"

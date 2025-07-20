# 1 "data/maps/DewfordTown_House1/scripts.pory"

# 2 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_MapScripts::
# 3 "data/maps/DewfordTown_House1/scripts.pory"
	.byte 0

FurgeTown_House1_EventScript_Man::
# 7 "data/maps/DewfordTown_House1/scripts.pory"
	lock
# 8 "data/maps/DewfordTown_House1/scripts.pory"
	faceplayer
# 9 "data/maps/DewfordTown_House1/scripts.pory"
	compare VAR_FURGETOWN_HONEY, 0
	goto_if_eq FurgeTown_House1_EventScript_Man_2
FurgeTown_House1_EventScript_Man_1:
# 14 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox FurgeTown_House1_HoneyGiven, MSGBOX_AUTOCLOSE
	end

FurgeTown_House1_EventScript_Man_2:
# 10 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox FurgeTown_House1_GiveHoney, MSGBOX_AUTOCLOSE
# 11 "data/maps/DewfordTown_House1/scripts.pory"
	giveitem ITEM_HONEY
# 12 "data/maps/DewfordTown_House1/scripts.pory"
	setvar VAR_FURGETOWN_HONEY, 1
	goto FurgeTown_House1_EventScript_Man_1


FurgeTown_House1_EventScript_Woman::
# 19 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox FurgeTown_House1_Text_LifeGoesSlowlyOnIsland, MSGBOX_NPC
	end


FurgeTown_House1_EventScript_Zigzagoon::
# 23 "data/maps/DewfordTown_House1/scripts.pory"
	lock
# 24 "data/maps/DewfordTown_House1/scripts.pory"
	faceplayer
# 25 "data/maps/DewfordTown_House1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 26 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox FurgeTown_House1_Text_Zigzagoon, MSGBOX_DEFAULT
# 27 "data/maps/DewfordTown_House1/scripts.pory"
	waitmoncry
# 28 "data/maps/DewfordTown_House1/scripts.pory"
	release
	end


FurgeTown_House1_GiveHoney::
# 31 "data/maps/DewfordTown_House1/scripts.pory"
	.string "I make my own Honey, with the help \n"
	.string "of the Combees that live in the hive \l"
	.string "just outside.\p"
	.string "Here, have a jar, as a welcome gift! $"

FurgeTown_House1_HoneyGiven::
# 38 "data/maps/DewfordTown_House1/scripts.pory"
	.string "It's 100% organic, and made with love by\n"
	.string "the Combees.\p"
	.string "I give them shelter, they give me Honey!\p"
	.string "And then, I give it to visitors like you!\p"
	.string "It's so good it attracts wild POKéMON, so \n"
	.string "you can use it to make new friends!$"

FurgeTown_House1_Text_LifeGoesSlowlyOnIsland::
# 48 "data/maps/DewfordTown_House1/scripts.pory"
	.string "Life goes by slowly in this little\n"
	.string "town.\p"
	.string "But being surrounded by the trees, \n"
	.string "that's happiness too.$"

FurgeTown_House1_Text_Zigzagoon::
# 55 "data/maps/DewfordTown_House1/scripts.pory"
	.string "ZIGZAGOON: Guguuh!$"

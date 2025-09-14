Godzilland_MapScripts::
# 2 "data/maps/Godzilland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Godzilland_Visited
	.byte 0


Godzilland_Visited::
# 6 "data/maps/Godzilland/scripts.pory"
	setflag FLAG_VISITED_LAVARIDGE_TOWN
	return


Godzilland_CitySign::
# 10 "data/maps/Godzilland/scripts.pory"
	lock
# 11 "data/maps/Godzilland/scripts.pory"
	msgbox Godzilland_CitySign_Text_0, MSGBOX_AUTOCLOSE
# 12 "data/maps/Godzilland/scripts.pory"
	releaseall
	end


Godzilland_Route5Sign::
# 17 "data/maps/Godzilland/scripts.pory"
	lock
# 18 "data/maps/Godzilland/scripts.pory"
	msgbox Godzilland_Route5Sign_Text_0, MSGBOX_AUTOCLOSE
# 19 "data/maps/Godzilland/scripts.pory"
	releaseall
	end


Godzilland_HarbourSign::
# 24 "data/maps/Godzilland/scripts.pory"
	lock
# 25 "data/maps/Godzilland/scripts.pory"
	msgbox Godzilland_HarbourSign_Text_0, MSGBOX_AUTOCLOSE
# 26 "data/maps/Godzilland/scripts.pory"
	releaseall
	end


Godzilland_ConcertHallSign::
# 31 "data/maps/Godzilland/scripts.pory"
	lock
# 32 "data/maps/Godzilland/scripts.pory"
	msgbox Godzilland_ConcertHallSign_Text_0, MSGBOX_AUTOCLOSE
# 33 "data/maps/Godzilland/scripts.pory"
	releaseall
	end


Godzilland_DevHouseSign::
# 38 "data/maps/Godzilland/scripts.pory"
	lock
# 39 "data/maps/Godzilland/scripts.pory"
	msgbox Godzilland_DevHouseSign_Text_0, MSGBOX_AUTOCLOSE
# 40 "data/maps/Godzilland/scripts.pory"
	releaseall
	end


Godzilland_Sailor::
# 45 "data/maps/Godzilland/scripts.pory"
	lock
# 46 "data/maps/Godzilland/scripts.pory"
	faceplayer
# 47 "data/maps/Godzilland/scripts.pory"
	msgbox Godzilland_Sailor_Text_0, MSGBOX_AUTOCLOSE
# 48 "data/maps/Godzilland/scripts.pory"
	releaseall
	end


Godzilland_LittleGirl::
# 53 "data/maps/Godzilland/scripts.pory"
	lock
# 54 "data/maps/Godzilland/scripts.pory"
	faceplayer
# 55 "data/maps/Godzilland/scripts.pory"
	msgbox Godzilland_LittleGirl_Text_0, MSGBOX_AUTOCLOSE
# 56 "data/maps/Godzilland/scripts.pory"
	releaseall
	end


Godzilland_GiveItemFinder::
# 61 "data/maps/Godzilland/scripts.pory"
	lock
# 62 "data/maps/Godzilland/scripts.pory"
	faceplayer
# 63 "data/maps/Godzilland/scripts.pory"
	goto_if_set FLAG_GODZILLAND_ITEM_FINDER, Godzilland_GiveItemFinder_2
# 67 "data/maps/Godzilland/scripts.pory"
	msgbox ExplainHiddenItems
# 68 "data/maps/Godzilland/scripts.pory"
	giveitem ITEM_ITEMFINDER
# 69 "data/maps/Godzilland/scripts.pory"
	msgbox ExplainItemFinder
# 70 "data/maps/Godzilland/scripts.pory"
	setflag FLAG_GODZILLAND_ITEM_FINDER
Godzilland_GiveItemFinder_1:
# 72 "data/maps/Godzilland/scripts.pory"
	release
	end

Godzilland_GiveItemFinder_2:
# 64 "data/maps/Godzilland/scripts.pory"
	msgbox FindAnyTreasures, MSGBOX_AUTOCLOSE
	goto Godzilland_GiveItemFinder_1


Godzilland_Morpheus::
# 101 "data/maps/Godzilland/scripts.pory"
	lock
# 102 "data/maps/Godzilland/scripts.pory"
	faceplayer
# 103 "data/maps/Godzilland/scripts.pory"
	goto_if_set FLAG_GODZILLAND_UPGRADE, Godzilland_Morpheus_1
# 107 "data/maps/Godzilland/scripts.pory"
	special IsPorygonInParty
# 108 "data/maps/Godzilland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Godzilland_Morpheus_4
# 115 "data/maps/Godzilland/scripts.pory"
	msgbox Godzilland_Morpheus_Text_1
	return

Godzilland_Morpheus_1:
# 104 "data/maps/Godzilland/scripts.pory"
	msgbox Godzilland_Morpheus_Text_0, MSGBOX_AUTOCLOSE
	return

Godzilland_Morpheus_4:
# 109 "data/maps/Godzilland/scripts.pory"
	msgbox Godzilland_MorpheusUpgrade
# 110 "data/maps/Godzilland/scripts.pory"
	giveitem ITEM_UP_GRADE
# 111 "data/maps/Godzilland/scripts.pory"
	msgbox Godzilland_MorpheusSmootherPorygon, MSGBOX_AUTOCLOSE
# 112 "data/maps/Godzilland/scripts.pory"
	setflag FLAG_GODZILLAND_UPGRADE
	return


Godzilland_CitySign_Text_0:
# 11 "data/maps/Godzilland/scripts.pory"
	.string "Welcome to Godzilland!\p"
	.string "Gateway to the unreleased archipelago!$"

Godzilland_Route5Sign_Text_0:
# 18 "data/maps/Godzilland/scripts.pory"
	.string "{DOWN_ARROW}: Route 5.$"

Godzilland_HarbourSign_Text_0:
# 25 "data/maps/Godzilland/scripts.pory"
	.string "Godzilland Harbour.\p"
	.string "Next departure: Beautiful Port.$"

Godzilland_ConcertHallSign_Text_0:
# 32 "data/maps/Godzilland/scripts.pory"
	.string "GODZILLAND CONCERT HALL\p"
	.string "CURRENT RESIDENT: ST.VINCENT$"

Godzilland_DevHouseSign_Text_0:
# 39 "data/maps/Godzilland/scripts.pory"
	.string "POKéMON Sinner Dev House\p"
	.string "Come meet the Dev Team!$"

Godzilland_Sailor_Text_0:
# 47 "data/maps/Godzilland/scripts.pory"
	.string "Today is my day off, but I still come\n"
	.string "hang out near the Harbour.\p"
	.string "I'd spend the day on the ferry if I\n"
	.string "could!$"

Godzilland_LittleGirl_Text_0:
# 55 "data/maps/Godzilland/scripts.pory"
	.string "You come from Prelude Town?\p"
	.string "That's so far away! You must be a great\n"
	.string "adventurer!$"

Godzilland_Morpheus_Text_0:
# 104 "data/maps/Godzilland/scripts.pory"
	.string "MORPHEUS: Isn't it fascinating that\n"
	.string "you can upgrade a POKéMON like you'd\l"
	.string "update an app?$"

Godzilland_Morpheus_Text_1:
# 115 "data/maps/Godzilland/scripts.pory"
	.string "MORPHEUS: I like to drop by the\n"
	.string "developpers' house to give them ideas.\p"
	.string "Brainstorming is fun!$"

ExplainHiddenItems::
# 76 "data/maps/Godzilland/scripts.pory"
	.string "Hey you! \p"
	.string "Do you like treasure hunting? \p"
	.string "No don't say anything, everyone loves \n"
	.string "treasure hunting! \p"
	.string "So here, take this! $"

ExplainItemFinder::
# 84 "data/maps/Godzilland/scripts.pory"
	.string "It's a Dowsing Machine! \p"
	.string "Some treasures are invisible to the \n"
	.string "naked eye, but this baby can find them \l"
	.string "for you! \p"
	.string "It emits a sound when you're close \n"
	.string "to a hidden item! \p"
	.string "Have fun treasure hunting! $"

FindAnyTreasures::
# 94 "data/maps/Godzilland/scripts.pory"
	.string "So, how's the treasure hunting going? \p"
	.string "I hope you're finding a lot of cool \n"
	.string "items!$"

Godzilland_MorpheusUpgrade::
# 120 "data/maps/Godzilland/scripts.pory"
	.string "MORPHEUS: Oh, what a beautiful Porygon! \p"
	.string "I love these POKéMON so much, did you \n"
	.string "know you could upgrade them? \p"
	.string "All you need is this!$"

Godzilland_MorpheusSmootherPorygon::
# 127 "data/maps/Godzilland/scripts.pory"
	.string "MORPHEUS: That'll make your Porygon \n"
	.string "smoother and smarter!$"

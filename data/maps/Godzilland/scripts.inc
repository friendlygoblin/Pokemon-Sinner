Godzilland_MapScripts::
	.byte 0


Godzilland_CitySign::
# 4 "data/maps/Godzilland/scripts.pory"
	lock
# 5 "data/maps/Godzilland/scripts.pory"
	msgbox Godzilland_CitySign_Text_0, MSGBOX_AUTOCLOSE
# 6 "data/maps/Godzilland/scripts.pory"
	releaseall
	end


Godzilland_Route5Sign::
# 11 "data/maps/Godzilland/scripts.pory"
	lock
# 12 "data/maps/Godzilland/scripts.pory"
	msgbox Godzilland_Route5Sign_Text_0, MSGBOX_AUTOCLOSE
# 13 "data/maps/Godzilland/scripts.pory"
	releaseall
	end


Godzilland_HarbourSign::
# 18 "data/maps/Godzilland/scripts.pory"
	lock
# 19 "data/maps/Godzilland/scripts.pory"
	msgbox Godzilland_HarbourSign_Text_0, MSGBOX_AUTOCLOSE
# 20 "data/maps/Godzilland/scripts.pory"
	releaseall
	end


Godzilland_ConcertHallSign::
# 25 "data/maps/Godzilland/scripts.pory"
	lock
# 26 "data/maps/Godzilland/scripts.pory"
	msgbox Godzilland_ConcertHallSign_Text_0, MSGBOX_AUTOCLOSE
# 27 "data/maps/Godzilland/scripts.pory"
	releaseall
	end


Godzilland_GiveItemFinder::
# 32 "data/maps/Godzilland/scripts.pory"
	lock
# 33 "data/maps/Godzilland/scripts.pory"
	faceplayer
# 34 "data/maps/Godzilland/scripts.pory"
	goto_if_set FLAG_GODZILLAND_ITEM_FINDER, Godzilland_GiveItemFinder_2
# 38 "data/maps/Godzilland/scripts.pory"
	msgbox ExplainHiddenItems
# 39 "data/maps/Godzilland/scripts.pory"
	giveitem ITEM_ITEMFINDER
# 40 "data/maps/Godzilland/scripts.pory"
	msgbox ExplainItemFinder
Godzilland_GiveItemFinder_1:
# 42 "data/maps/Godzilland/scripts.pory"
	release
	end

Godzilland_GiveItemFinder_2:
# 35 "data/maps/Godzilland/scripts.pory"
	msgbox FindAnyTreasures, MSGBOX_AUTOCLOSE
	goto Godzilland_GiveItemFinder_1


Godzilland_CitySign_Text_0:
# 5 "data/maps/Godzilland/scripts.pory"
	.string "Welcome to Godzilland!\p"
	.string "Gateway to the unreleased archipelago!$"

Godzilland_Route5Sign_Text_0:
# 12 "data/maps/Godzilland/scripts.pory"
	.string "{DOWN_ARROW}: Route 5.$"

Godzilland_HarbourSign_Text_0:
# 19 "data/maps/Godzilland/scripts.pory"
	.string "Godzilland Harbour.\p"
	.string "Next departure: Beautiful Port.$"

Godzilland_ConcertHallSign_Text_0:
# 26 "data/maps/Godzilland/scripts.pory"
	.string "GODZILLAND CONCERT HALL\p"
	.string "CURRENT RESIDENT: ST.VINCENT$"

ExplainHiddenItems::
# 46 "data/maps/Godzilland/scripts.pory"
	.string "Hey you! \p"
	.string "Do you like treasure hunting? \p"
	.string "No don't say anything, everyone loves \n"
	.string "treasure hunting! \p"
	.string "So here, take this! $"

ExplainItemFinder::
# 54 "data/maps/Godzilland/scripts.pory"
	.string "It's an Item Finder! \p"
	.string "Some treasures are invisible to the \n"
	.string "naked eye, but this baby can find! \l"
	.string "them for you! \p"
	.string "It emits a sound when you're close \n"
	.string "to a hidden item! \p"
	.string "Have fun treasure hunting! $"

FindAnyTreasures::
# 64 "data/maps/Godzilland/scripts.pory"
	.string "So, how's the treasure hunting going? \p"
	.string "I hope you're finding a lot of cool \n"
	.string "items!$"

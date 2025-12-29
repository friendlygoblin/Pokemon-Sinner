Godzilland_DevHouse_MapScripts::
	.byte 0


DevHouse_ScriptGoblin::
# 4 "data/maps/Godzilland_DevHouse/scripts.pory"
	lock
# 5 "data/maps/Godzilland_DevHouse/scripts.pory"
	faceplayer
# 6 "data/maps/Godzilland_DevHouse/scripts.pory"
	msgbox DevHouse_ScriptGoblin_Text_0, MSGBOX_AUTOCLOSE
# 7 "data/maps/Godzilland_DevHouse/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 8 "data/maps/Godzilland_DevHouse/scripts.pory"
	waitmovement 0
# 9 "data/maps/Godzilland_DevHouse/scripts.pory"
	release
	end


DevHouse_MapGoblin::
# 14 "data/maps/Godzilland_DevHouse/scripts.pory"
	lock
# 15 "data/maps/Godzilland_DevHouse/scripts.pory"
	faceplayer
# 16 "data/maps/Godzilland_DevHouse/scripts.pory"
	msgbox DevHouse_MapGoblin_Text_0, MSGBOX_AUTOCLOSE
# 17 "data/maps/Godzilland_DevHouse/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 18 "data/maps/Godzilland_DevHouse/scripts.pory"
	waitmovement 0
# 19 "data/maps/Godzilland_DevHouse/scripts.pory"
	release
	end


DevHouse_TestGoblin::
# 24 "data/maps/Godzilland_DevHouse/scripts.pory"
	lock
# 25 "data/maps/Godzilland_DevHouse/scripts.pory"
	faceplayer
# 26 "data/maps/Godzilland_DevHouse/scripts.pory"
	msgbox DevHouse_TestGoblin_Text_0, MSGBOX_AUTOCLOSE
# 27 "data/maps/Godzilland_DevHouse/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 28 "data/maps/Godzilland_DevHouse/scripts.pory"
	waitmovement 0
# 29 "data/maps/Godzilland_DevHouse/scripts.pory"
	release
	end


DevHouse_DevAmy::
# 34 "data/maps/Godzilland_DevHouse/scripts.pory"
	lock
# 35 "data/maps/Godzilland_DevHouse/scripts.pory"
	faceplayer
# 36 "data/maps/Godzilland_DevHouse/scripts.pory"
	msgbox DevHouse_DevAmy_Text_0, MSGBOX_AUTOCLOSE
# 37 "data/maps/Godzilland_DevHouse/scripts.pory"
	applymovement 11, Common_Movement_FaceUp
# 38 "data/maps/Godzilland_DevHouse/scripts.pory"
	waitmovement 0
# 39 "data/maps/Godzilland_DevHouse/scripts.pory"
	release
	end


DevHouse_SmallSpriteGoblin::
# 44 "data/maps/Godzilland_DevHouse/scripts.pory"
	lock
# 45 "data/maps/Godzilland_DevHouse/scripts.pory"
	faceplayer
# 46 "data/maps/Godzilland_DevHouse/scripts.pory"
	msgbox DevHouse_SmallSpriteGoblin_Text_0, MSGBOX_AUTOCLOSE
# 47 "data/maps/Godzilland_DevHouse/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 48 "data/maps/Godzilland_DevHouse/scripts.pory"
	waitmovement 0
# 49 "data/maps/Godzilland_DevHouse/scripts.pory"
	release
	end


DevHouse_BigSpriteGoblin::
# 54 "data/maps/Godzilland_DevHouse/scripts.pory"
	lock
# 55 "data/maps/Godzilland_DevHouse/scripts.pory"
	faceplayer
# 56 "data/maps/Godzilland_DevHouse/scripts.pory"
	msgbox DevHouse_BigSpriteGoblin_Text_0, MSGBOX_AUTOCLOSE
# 57 "data/maps/Godzilland_DevHouse/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 58 "data/maps/Godzilland_DevHouse/scripts.pory"
	waitmovement 0
# 59 "data/maps/Godzilland_DevHouse/scripts.pory"
	release
	end


DevHouse_TeamBuilderGoblin::
# 64 "data/maps/Godzilland_DevHouse/scripts.pory"
	lock
# 65 "data/maps/Godzilland_DevHouse/scripts.pory"
	faceplayer
# 66 "data/maps/Godzilland_DevHouse/scripts.pory"
	msgbox DevHouse_TeamBuilderGoblin_Text_0, MSGBOX_AUTOCLOSE
# 67 "data/maps/Godzilland_DevHouse/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 68 "data/maps/Godzilland_DevHouse/scripts.pory"
	waitmovement 0
# 69 "data/maps/Godzilland_DevHouse/scripts.pory"
	release
	end


DevHouse_ConsultantGoblin::
# 74 "data/maps/Godzilland_DevHouse/scripts.pory"
	lock
# 75 "data/maps/Godzilland_DevHouse/scripts.pory"
	faceplayer
# 76 "data/maps/Godzilland_DevHouse/scripts.pory"
	msgbox DevHouse_ConsultantGoblin_Text_0, MSGBOX_AUTOCLOSE
# 77 "data/maps/Godzilland_DevHouse/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 78 "data/maps/Godzilland_DevHouse/scripts.pory"
	waitmovement 0
# 79 "data/maps/Godzilland_DevHouse/scripts.pory"
	release
	end


DevHouse_Interview::
# 84 "data/maps/Godzilland_DevHouse/scripts.pory"
	lock
# 85 "data/maps/Godzilland_DevHouse/scripts.pory"
	msgbox DevHouse_Interview_Text_0, MSGBOX_AUTOCLOSE
# 86 "data/maps/Godzilland_DevHouse/scripts.pory"
	release
	end


DevHouse_BugGoblin::
# 91 "data/maps/Godzilland_DevHouse/scripts.pory"
	lock
# 92 "data/maps/Godzilland_DevHouse/scripts.pory"
	faceplayer
# 93 "data/maps/Godzilland_DevHouse/scripts.pory"
	switch VAR_GODZILLAND_PORYGON
# 94 "data/maps/Godzilland_DevHouse/scripts.pory"
	case 0, DevHouse_BugGoblin_3
# 97 "data/maps/Godzilland_DevHouse/scripts.pory"
	case 1, DevHouse_BugGoblin_4
# 99 "data/maps/Godzilland_DevHouse/scripts.pory"
	case 2, DevHouse_BugGoblin_5
# 104 "data/maps/Godzilland_DevHouse/scripts.pory"
	case 3, DevHouse_BugGoblin_6
DevHouse_BugGoblin_1:
# 107 "data/maps/Godzilland_DevHouse/scripts.pory"
	release
	end

DevHouse_BugGoblin_3:
# 95 "data/maps/Godzilland_DevHouse/scripts.pory"
	msgbox DevHouse_BugGoblin_Text_0
# 96 "data/maps/Godzilland_DevHouse/scripts.pory"
	setvar VAR_GODZILLAND_PORYGON, 1
	goto DevHouse_BugGoblin_1

DevHouse_BugGoblin_4:
# 98 "data/maps/Godzilland_DevHouse/scripts.pory"
	msgbox DevHouse_BugGoblin_Text_1
	goto DevHouse_BugGoblin_1

DevHouse_BugGoblin_5:
# 100 "data/maps/Godzilland_DevHouse/scripts.pory"
	msgbox DevHouse_BugGoblin_Text_2
# 101 "data/maps/Godzilland_DevHouse/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 102 "data/maps/Godzilland_DevHouse/scripts.pory"
	msgbox DevHouse_BugGoblin_Text_3
# 103 "data/maps/Godzilland_DevHouse/scripts.pory"
	setvar VAR_GODZILLAND_PORYGON, 3
	goto DevHouse_BugGoblin_1

DevHouse_BugGoblin_6:
# 105 "data/maps/Godzilland_DevHouse/scripts.pory"
	msgbox DevHouse_BugGoblin_Text_4
	goto DevHouse_BugGoblin_1


DevHouse_Porygon::
# 112 "data/maps/Godzilland_DevHouse/scripts.pory"
	lock
# 113 "data/maps/Godzilland_DevHouse/scripts.pory"
	switch VAR_GODZILLAND_PORYGON
# 114 "data/maps/Godzilland_DevHouse/scripts.pory"
	case 0, DevHouse_Porygon_3
# 116 "data/maps/Godzilland_DevHouse/scripts.pory"
	case 1, DevHouse_Porygon_4
# 128 "data/maps/Godzilland_DevHouse/scripts.pory"
	case 2, DevHouse_Porygon_5
# 130 "data/maps/Godzilland_DevHouse/scripts.pory"
	case 3, DevHouse_Porygon_6
DevHouse_Porygon_1:
# 133 "data/maps/Godzilland_DevHouse/scripts.pory"
	release
	end

DevHouse_Porygon_3:
# 115 "data/maps/Godzilland_DevHouse/scripts.pory"
	msgbox DevHouse_Porygon_Text_0
	goto DevHouse_Porygon_1

DevHouse_Porygon_4:
# 117 "data/maps/Godzilland_DevHouse/scripts.pory"
	msgbox DevHouse_Porygon_Text_1, MSGBOX_YESNO
# 118 "data/maps/Godzilland_DevHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DevHouse_Porygon_7
# 126 "data/maps/Godzilland_DevHouse/scripts.pory"
	msgbox DevHouse_Porygon_Text_4
	goto DevHouse_Porygon_1

DevHouse_Porygon_5:
# 129 "data/maps/Godzilland_DevHouse/scripts.pory"
	msgbox DevHouse_Porygon_Text_3
	goto DevHouse_Porygon_1

DevHouse_Porygon_6:
# 131 "data/maps/Godzilland_DevHouse/scripts.pory"
	msgbox DevHouse_Porygon_Text_5
	goto DevHouse_Porygon_1

DevHouse_Porygon_7:
# 119 "data/maps/Godzilland_DevHouse/scripts.pory"
	msgbox DevHouse_Porygon_Text_2
# 120 "data/maps/Godzilland_DevHouse/scripts.pory"
	setwildbattle SPECIES_PORYGON, 18
# 121 "data/maps/Godzilland_DevHouse/scripts.pory"
	dowildbattle
# 122 "data/maps/Godzilland_DevHouse/scripts.pory"
	msgbox DevHouse_Porygon_Text_3
# 123 "data/maps/Godzilland_DevHouse/scripts.pory"
	setvar VAR_GODZILLAND_PORYGON, 2
	goto DevHouse_Porygon_1


DevHouse_ScriptGoblin_Text_0:
# 6 "data/maps/Godzilland_DevHouse/scripts.pory"
	.string "GOBLIN: I'm working on scripting every\n"
	.string "event in the game!\p"
	.string "Like this dialogue for example…\p"
	.string "It's a lot of work.$"

DevHouse_MapGoblin_Text_0:
# 16 "data/maps/Godzilland_DevHouse/scripts.pory"
	.string "GOBLIN: My job is to create maps!\p"
	.string "It's a bit like painting, but with\n"
	.string "stamps…\p"
	.string "Something like that.$"

DevHouse_TestGoblin_Text_0:
# 26 "data/maps/Godzilland_DevHouse/scripts.pory"
	.string "GOBLIN: I'm testing the game, it's\n"
	.string "probably the most fun part of the job!\p"
	.string "I take notes of things to improve and\n"
	.string "bugs to fix, testing is very important!$"

DevHouse_DevAmy_Text_0:
# 36 "data/maps/Godzilland_DevHouse/scripts.pory"
	.string "AMY: I did the heavy lifting on the demo\n"
	.string "of the game, but I've let Goblin take\l"
	.string "over since I've been busy with\l"
	.string "ParlourZine.\p"
	.string "I still give a hand here and there\n"
	.string "whenever I can.$"

DevHouse_SmallSpriteGoblin_Text_0:
# 46 "data/maps/Godzilland_DevHouse/scripts.pory"
	.string "GOBLIN: I'm desiging overworld sprites!\p"
	.string "They're the ones you're seeing right\n"
	.string "now, my colleague is working on the\l"
	.string "battle ones.$"

DevHouse_BigSpriteGoblin_Text_0:
# 56 "data/maps/Godzilland_DevHouse/scripts.pory"
	.string "GOBLIN: Look, I'm making everyone's big\n"
	.string "sprites!\p"
	.string "They're the ones you see in battle, I'm\n"
	.string "making some for every artist, guest,\l"
	.string "and fan you'll meet!$"

DevHouse_TeamBuilderGoblin_Text_0:
# 66 "data/maps/Godzilland_DevHouse/scripts.pory"
	.string "GOBLIN: I'm the team builder.\p"
	.string "I build everyone's POKéMON teams.\p"
	.string "It's tricky, I need to make them\n"
	.string "balanced to keep the game fun to play.$"

DevHouse_ConsultantGoblin_Text_0:
# 76 "data/maps/Godzilland_DevHouse/scripts.pory"
	.string "GOBLIN: I'm the contact person!\p"
	.string "Building teams is hard, so my job is to\n"
	.string "find outside help.\p"
	.string "It's harder to build teams for artists\n"
	.string "we're less familiar with, so sometimes I\l"
	.string "have to find consultants.\p"
	.string "I'm also the one who reaches out to the\n"
	.string "artists themselves to tell them about\l"
	.string "the project!$"

DevHouse_Interview_Text_0:
# 85 "data/maps/Godzilland_DevHouse/scripts.pory"
	.string "It looks like Amy is interviewing Goblin\n"
	.string "about POKéMON Sinner.$"

DevHouse_BugGoblin_Text_0:
# 95 "data/maps/Godzilland_DevHouse/scripts.pory"
	.string "GOBLIN: There's a bug! There's a bug!\p"
	.string "I don't know what's happening but I\n"
	.string "can't even access my work anymore!\p"
	.string "My computer is the one closest to the\n"
	.string "door, I just don't have the strength to\l"
	.string "keep fighting with it…$"

DevHouse_BugGoblin_Text_1:
# 98 "data/maps/Godzilland_DevHouse/scripts.pory"
	.string "GOBLIN: My computer is the one closest\n"
	.string "to the door, I just don't have the\l"
	.string "strength to keep fighting with it…$"

DevHouse_BugGoblin_Text_2:
# 100 "data/maps/Godzilland_DevHouse/scripts.pory"
	.string "GOBLIN: A Porygon? God, not again!\p"
	.string "It happens all the time, but I can\n"
	.string "usually spot them…\p"
	.string "Thanks for your help! Here, for you!$"

DevHouse_BugGoblin_Text_3:
# 102 "data/maps/Godzilland_DevHouse/scripts.pory"
	.string "GOBLIN: I guess I should go back to\n"
	.string "work now…\p"
	.string "Mmmh, but I really need a nap…$"

DevHouse_BugGoblin_Text_4:
# 105 "data/maps/Godzilland_DevHouse/scripts.pory"
	.string "GOBLIN: I'm in charge of researching\n"
	.string "the POKéMON species we're implementing.\p"
	.string "But right now, I really need a nap…$"

DevHouse_Porygon_Text_0:
# 115 "data/maps/Godzilland_DevHouse/scripts.pory"
	.string "The screen is displaying weird colours.$"

DevHouse_Porygon_Text_1:
# 117 "data/maps/Godzilland_DevHouse/scripts.pory"
	.string "The screen is displaying weird colours.\p"
	.string "Do you want to try pressing a key?$"

DevHouse_Porygon_Text_2:
# 119 "data/maps/Godzilland_DevHouse/scripts.pory"
	.string "You press a random key.\p"
	.string "The computer doesn't seem to like that!$"

DevHouse_Porygon_Text_3:
# 122 "data/maps/Godzilland_DevHouse/scripts.pory"
	.string "With the POKéMON gone, the computer is\n"
	.string "rebooting…\p"
	.string "Goblin will be happy!$"

DevHouse_Porygon_Text_4:
# 126 "data/maps/Godzilland_DevHouse/scripts.pory"
	.string "You decide to leave the computer alone.$"

DevHouse_Porygon_Text_5:
# 131 "data/maps/Godzilland_DevHouse/scripts.pory"
	.string "It looks like Goblin's been researching\n"
	.string "POKéMON species…$"

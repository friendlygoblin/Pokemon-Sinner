# 1 "data/maps/Route114_LanettesHouse/scripts.pory"

# 2 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_MapScripts::
# 3 "data/maps/Route114_LanettesHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_LanettesHouse_OnTransition
# 4 "data/maps/Route114_LanettesHouse/scripts.pory"
	.byte 0
# 5 "data/maps/Route114_LanettesHouse/scripts.pory"

# 6 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_OnTransition:
# 7 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_LANDMARK_LANETTES_HOUSE
# 8 "data/maps/Route114_LanettesHouse/scripts.pory"
	end

ParlourZine_Amy::
# 11 "data/maps/Route114_LanettesHouse/scripts.pory"
	lock
# 12 "data/maps/Route114_LanettesHouse/scripts.pory"
	faceplayer
# 13 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox ParlourZine_AmyHi
# 14 "data/maps/Route114_LanettesHouse/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 15 "data/maps/Route114_LanettesHouse/scripts.pory"
	waitmovement 0
# 16 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox ParlourZine_Amy_Text_0, MSGBOX_AUTOCLOSE
# 17 "data/maps/Route114_LanettesHouse/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 18 "data/maps/Route114_LanettesHouse/scripts.pory"
	waitmovement 0
# 19 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
	end


ParlourZine_Rachel::
# 32 "data/maps/Route114_LanettesHouse/scripts.pory"
	lock
# 33 "data/maps/Route114_LanettesHouse/scripts.pory"
	faceplayer
# 34 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox ParlourZine_RachelHi, MSGBOX_AUTOCLOSE
# 35 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
	end


ParlourZine_Grace::
# 48 "data/maps/Route114_LanettesHouse/scripts.pory"
	lock
# 49 "data/maps/Route114_LanettesHouse/scripts.pory"
	faceplayer
# 50 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox ParlourZine_GraceHi, MSGBOX_AUTOCLOSE
# 51 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
	end


ParlourZine_Piplup::
# 67 "data/maps/Route114_LanettesHouse/scripts.pory"
	lock
# 68 "data/maps/Route114_LanettesHouse/scripts.pory"
	applymovement 4, ParlourZine_PiplupJump
# 69 "data/maps/Route114_LanettesHouse/scripts.pory"
	playmoncry SPECIES_PIPLUP, CRY_MODE_NORMAL
# 70 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox ParlourZine_PiplupHelps, MSGBOX_AUTOCLOSE
# 71 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
	end


# 75 "data/maps/Route114_LanettesHouse/scripts.pory"
ParlourZine_PiplupJump:
# 76 "data/maps/Route114_LanettesHouse/scripts.pory"
	jump_in_place_left
# 76 "data/maps/Route114_LanettesHouse/scripts.pory"
	jump_in_place_left
# 77 "data/maps/Route114_LanettesHouse/scripts.pory"
	step_end

ParlourZine_Notes1::
# 86 "data/maps/Route114_LanettesHouse/scripts.pory"
	lock
# 87 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox ParlourZine_Notes1_Text, MSGBOX_AUTOCLOSE
# 88 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
	end


ParlourZine_Notes2::
# 99 "data/maps/Route114_LanettesHouse/scripts.pory"
	lock
# 100 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox ParlourZine_Notes2_Text, MSGBOX_AUTOCLOSE
# 101 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
	end


ParlourZine_PC::
# 113 "data/maps/Route114_LanettesHouse/scripts.pory"
	lock
# 114 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox ParlourZine_PC_Text, MSGBOX_AUTOCLOSE
# 115 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
	end


ParlourZine_Amy_Text_0:
# 16 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "… like the game you're playing right now!$"

ParlourZine_AmyHi::
# 23 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "AMY: Oh hi {PLAYER}! \n"
	.string "Welcome to the ParlourZine HQ! \p"
	.string "This is where the magic happens, we \n"
	.string "work very hard to showcase the best of \l"
	.string "the Parlour Discord Server…  $"

ParlourZine_RachelHi::
# 39 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "RACHEL: Hi, do you read ParlourZine? \p"
	.string "In any case, you should really read \n"
	.string "the editors' notes! \p"
	.string "I put so much work into those things and \n"
	.string "NOBODY READS THEM! $"

ParlourZine_GraceHi::
# 55 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "GRACE: Oh, {PLAYER}! \n"
	.string "Didn't expect to see you here! \p"
	.string "I joined the ParlourZine editor team! \p"
	.string "Did you know it was originally called \n"
	.string "Parlour Times and was a weekly thing? \p"
	.string "Now there's more time between issues \n"
	.string "but that means we can make them even \l"
	.string "cooler!$"

ParlourZine_PiplupHelps::
# 80 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "PIPLUP: Pipipip! \p"
	.string "Piplup seems very eager to help Rachel.$"

ParlourZine_Notes1_Text::
# 92 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Some notes for the next issue of \n"
	.string "ParlourZine. \p"
	.string "Sounds exciting! $"

ParlourZine_Notes2_Text::
# 105 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "The list of the contributors to the \n"
	.string "next ParlourZine issue. \p"
	.string "There are so many of them, this zine \n"
	.string "really is a big collaborative project!$"

ParlourZine_PC_Text::
# 119 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "The team's inbox is open. \p"
	.string "There are so many of them, this zine \n"
	.string "really is a big collaborative project!$"

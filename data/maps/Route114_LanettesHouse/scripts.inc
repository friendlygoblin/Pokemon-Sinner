# 1 "data/maps/Route114_LanettesHouse/scripts.pory"

# 2 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_MapScripts::
# 3 "data/maps/Route114_LanettesHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_LanettesHouse_OnTransition
# 4 "data/maps/Route114_LanettesHouse/scripts.pory"
	.byte 0

Route114_LanettesHouse_OnTransition::
# 11 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_LANDMARK_LANETTES_HOUSE
	end


ParlourZine_Lizzie::
# 16 "data/maps/Route114_LanettesHouse/scripts.pory"
	lock
# 17 "data/maps/Route114_LanettesHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 18 "data/maps/Route114_LanettesHouse/scripts.pory"
	waitmovement 0
# 19 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox ParlourZine_LizzieBeingInterviewed, MSGBOX_AUTOCLOSE
# 20 "data/maps/Route114_LanettesHouse/scripts.pory"
	applymovement 5, ParlourZine_LizzieNoticePlayer
# 21 "data/maps/Route114_LanettesHouse/scripts.pory"
	waitmovement 0
# 22 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox ParlourZine_LizzieWeWereFinishing, MSGBOX_AUTOCLOSE
# 23 "data/maps/Route114_LanettesHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 24 "data/maps/Route114_LanettesHouse/scripts.pory"
	waitmovement 0
# 25 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox ParlourZine_AmyWhyDontUAsk
# 26 "data/maps/Route114_LanettesHouse/scripts.pory"
	dynmultipush ParlourZine_Lizzie_Text_0, 1
# 27 "data/maps/Route114_LanettesHouse/scripts.pory"
	dynmultipush ParlourZine_Lizzie_Text_1, 2
# 28 "data/maps/Route114_LanettesHouse/scripts.pory"
	dynmultipush ParlourZine_Lizzie_Text_2, 3
# 29 "data/maps/Route114_LanettesHouse/scripts.pory"
	dynmultipush ParlourZine_Lizzie_Text_3, 4
# 30 "data/maps/Route114_LanettesHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 3, DYN_MULTICHOICE_CB_NONE
# 31 "data/maps/Route114_LanettesHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceRight
# 32 "data/maps/Route114_LanettesHouse/scripts.pory"
	waitmovement 0
# 33 "data/maps/Route114_LanettesHouse/scripts.pory"
	switch VAR_RESULT
# 34 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 1, ParlourZine_Lizzie_3
# 36 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 2, ParlourZine_Lizzie_4
# 38 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 3, ParlourZine_Lizzie_5
# 40 "data/maps/Route114_LanettesHouse/scripts.pory"
	case 4, ParlourZine_Lizzie_6
# 43 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox ParlourZine_QuestionAboutSoup, MSGBOX_AUTOCLOSE
ParlourZine_Lizzie_1:
# 45 "data/maps/Route114_LanettesHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 46 "data/maps/Route114_LanettesHouse/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 47 "data/maps/Route114_LanettesHouse/scripts.pory"
	waitmovement 0
# 48 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox ParlourZine_AmyThatsAll, MSGBOX_AUTOCLOSE
# 49 "data/maps/Route114_LanettesHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 50 "data/maps/Route114_LanettesHouse/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox ParlourZine_LizzieIllLeave, MSGBOX_AUTOCLOSE
# 52 "data/maps/Route114_LanettesHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ParlourZine_PlayerMoveAside
# 53 "data/maps/Route114_LanettesHouse/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route114_LanettesHouse/scripts.pory"
	applymovement 5, ParlourZine_LizzieLeaves
# 55 "data/maps/Route114_LanettesHouse/scripts.pory"
	waitmovement 0
# 56 "data/maps/Route114_LanettesHouse/scripts.pory"
	removeobject 5
# 57 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_PARLOURZINE_LIZZIE
# 58 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_LIZZIE_INTERVIEW_COMPLETED
# 59 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
	end

ParlourZine_Lizzie_3:
# 35 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox ParlourZine_QuestionAboutSoup, MSGBOX_AUTOCLOSE
	goto ParlourZine_Lizzie_1

ParlourZine_Lizzie_4:
# 37 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox ParlourZine_QuestionAboutStone, MSGBOX_AUTOCLOSE
	goto ParlourZine_Lizzie_1

ParlourZine_Lizzie_5:
# 39 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox ParlourZine_QuestionAboutSins, MSGBOX_AUTOCLOSE
	goto ParlourZine_Lizzie_1

ParlourZine_Lizzie_6:
# 41 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox ParlourZine_QuestionAboutShoes, MSGBOX_AUTOCLOSE
	goto ParlourZine_Lizzie_1


# 114 "data/maps/Route114_LanettesHouse/scripts.pory"
ParlourZine_PlayerMoveAside:
# 115 "data/maps/Route114_LanettesHouse/scripts.pory"
	walk_up
# 116 "data/maps/Route114_LanettesHouse/scripts.pory"
	face_down
# 117 "data/maps/Route114_LanettesHouse/scripts.pory"
	step_end

# 120 "data/maps/Route114_LanettesHouse/scripts.pory"
ParlourZine_LizzieNoticePlayer:
# 121 "data/maps/Route114_LanettesHouse/scripts.pory"
	emote_exclamation_mark
# 122 "data/maps/Route114_LanettesHouse/scripts.pory"
	delay_16
# 123 "data/maps/Route114_LanettesHouse/scripts.pory"
	walk_in_place_right
# 124 "data/maps/Route114_LanettesHouse/scripts.pory"
	step_end

# 127 "data/maps/Route114_LanettesHouse/scripts.pory"
ParlourZine_LizzieLeaves:
# 128 "data/maps/Route114_LanettesHouse/scripts.pory"
	walk_right
# 128 "data/maps/Route114_LanettesHouse/scripts.pory"
	walk_right
# 129 "data/maps/Route114_LanettesHouse/scripts.pory"
	walk_down
# 129 "data/maps/Route114_LanettesHouse/scripts.pory"
	walk_down
# 129 "data/maps/Route114_LanettesHouse/scripts.pory"
	walk_down
# 130 "data/maps/Route114_LanettesHouse/scripts.pory"
	step_end

ParlourZine_Amy::
# 134 "data/maps/Route114_LanettesHouse/scripts.pory"
	lock
# 135 "data/maps/Route114_LanettesHouse/scripts.pory"
	faceplayer
# 136 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox ParlourZine_AmyHi
# 137 "data/maps/Route114_LanettesHouse/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 138 "data/maps/Route114_LanettesHouse/scripts.pory"
	waitmovement 0
# 139 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox ParlourZine_Amy_Text_0, MSGBOX_AUTOCLOSE
# 140 "data/maps/Route114_LanettesHouse/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 141 "data/maps/Route114_LanettesHouse/scripts.pory"
	waitmovement 0
# 142 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
	end


ParlourZine_Rachel::
# 155 "data/maps/Route114_LanettesHouse/scripts.pory"
	lock
# 156 "data/maps/Route114_LanettesHouse/scripts.pory"
	faceplayer
# 157 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox ParlourZine_RachelHi, MSGBOX_AUTOCLOSE
# 158 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
	end


ParlourZine_Grace::
# 171 "data/maps/Route114_LanettesHouse/scripts.pory"
	lock
# 172 "data/maps/Route114_LanettesHouse/scripts.pory"
	faceplayer
# 173 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox ParlourZine_GraceHi, MSGBOX_AUTOCLOSE
# 174 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
	end


ParlourZine_Piplup::
# 190 "data/maps/Route114_LanettesHouse/scripts.pory"
	lock
# 191 "data/maps/Route114_LanettesHouse/scripts.pory"
	applymovement 4, ParlourZine_PiplupJump
# 192 "data/maps/Route114_LanettesHouse/scripts.pory"
	playmoncry SPECIES_PIPLUP, CRY_MODE_NORMAL
# 193 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox ParlourZine_PiplupHelps, MSGBOX_AUTOCLOSE
# 194 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
	end


# 198 "data/maps/Route114_LanettesHouse/scripts.pory"
ParlourZine_PiplupJump:
# 199 "data/maps/Route114_LanettesHouse/scripts.pory"
	jump_in_place_left
# 199 "data/maps/Route114_LanettesHouse/scripts.pory"
	jump_in_place_left
# 200 "data/maps/Route114_LanettesHouse/scripts.pory"
	step_end

ParlourZine_Notes1::
# 209 "data/maps/Route114_LanettesHouse/scripts.pory"
	lock
# 210 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox ParlourZine_Notes1_Text, MSGBOX_AUTOCLOSE
# 211 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
	end


ParlourZine_Notes2::
# 222 "data/maps/Route114_LanettesHouse/scripts.pory"
	lock
# 223 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox ParlourZine_Notes2_Text, MSGBOX_AUTOCLOSE
# 224 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
	end


ParlourZine_PC::
# 236 "data/maps/Route114_LanettesHouse/scripts.pory"
	lock
# 237 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox ParlourZine_PC_Text, MSGBOX_AUTOCLOSE
# 238 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
	end


ParlourZine_Lizzie_Text_0:
# 26 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Question about soup$"

ParlourZine_Lizzie_Text_1:
# 27 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Question about stone$"

ParlourZine_Lizzie_Text_2:
# 28 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Question about sins$"

ParlourZine_Lizzie_Text_3:
# 29 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Question about shoes$"

ParlourZine_Amy_Text_0:
# 139 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "… like the game you're playing right now!$"

ParlourZine_LizzieBeingInterviewed::
# 64 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "LIZZIE: Thanks for having me, Amy. \p"
	.string "It's an honour of being featured in \n"
	.string "ParlourZine!$"

ParlourZine_QuestionAboutSoup::
# 70 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "LIZZIE: What soup I would like to be? \p"
	.string "Soup!$"

ParlourZine_QuestionAboutStone::
# 75 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "LIZZIE: What stone I would like to be? \p"
	.string "I think I'll pick cobblestone.$"

ParlourZine_QuestionAboutSins::
# 80 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "LIZZIE: What is my biggest sin? \p"
	.string "Being fucking gay.$"

ParlourZine_QuestionAboutShoes::
# 85 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "LIZZIE: Weirdest thing I've ever \n"
	.string "found in my shoe? \p"
	.string "A dead Rattata for sure.$"

ParlourZine_LizzieWeWereFinishing::
# 91 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "LIZZIE: Hi, {PLAYER}! \p"
	.string "I was finishing my interview with Amy, \n"
	.string "I hope you'll read it in ParlourZine!$"

ParlourZine_AmyWhyDontUAsk::
# 97 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "AMY: Hey {PLAYER}, since you're here, \n"
	.string "is there a question you want to ask \l"
	.string "Lizzie before they leave?$"

ParlourZine_AmyThatsAll::
# 103 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "AMY: Thank you for everything, Lizzie! \p"
	.string "And {PLAYER}, for the final question.$"

ParlourZine_LizzieIllLeave::
# 108 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "LIZZIE: Well, if you have everything \n"
	.string "you need, I'll be on my way now. \p"
	.string "I'll see you both in Mirror City!$"

ParlourZine_AmyHi::
# 146 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "AMY: Oh hi {PLAYER}! \n"
	.string "Welcome to the ParlourZine HQ! \p"
	.string "This is where the magic happens, we \n"
	.string "work very hard to showcase the best \l"
	.string "of the Parlour Discord Server…  $"

ParlourZine_RachelHi::
# 162 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "RACHEL: Hi, do you read ParlourZine? \p"
	.string "In any case, you should really read \n"
	.string "the editors' notes! \p"
	.string "I put so much work into those things and \n"
	.string "NOBODY READS THEM! $"

ParlourZine_GraceHi::
# 178 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "GRACE: Oh, {PLAYER}! \n"
	.string "Didn't expect to see you here! \p"
	.string "I joined the ParlourZine editor team! \p"
	.string "Did you know it was originally called \n"
	.string "Parlour Times and was a weekly thing? \p"
	.string "Now there's more time between issues \n"
	.string "but that means we can make them even \l"
	.string "cooler!$"

ParlourZine_PiplupHelps::
# 203 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "PIPLUP: Pipipip! \p"
	.string "Piplup seems very eager to help Rachel.$"

ParlourZine_Notes1_Text::
# 215 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Some notes for the next issue of \n"
	.string "ParlourZine. \p"
	.string "Sounds exciting! $"

ParlourZine_Notes2_Text::
# 228 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "The list of the contributors to the \n"
	.string "next ParlourZine issue. \p"
	.string "There are so many of them, this zine \n"
	.string "really is a big collaborative project!$"

ParlourZine_PC_Text::
# 242 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "The team's inbox is open. \p"
	.string "There are so many messages, this zine \n"
	.string "really is a big collaborative project!$"

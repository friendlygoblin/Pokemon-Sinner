# 1 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 2 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_MapScripts::
# 3 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 5 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Blackboard::
# 6 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lockall
# 7 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges, MSGBOX_DEFAULT
# 8 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 9 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 10 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 11 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic::
# 12 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	message RustboroCity_PokemonSchool_Text_ReadWhichTopic
# 13 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 14 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	multichoicegrid 8, 1, MULTI_STATUS_INFO, 3, FALSE
# 15 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	switch VAR_RESULT
# 16 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 0, RustboroCity_PokemonSchool_EventScript_Poison
# 17 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 1, RustboroCity_PokemonSchool_EventScript_Paralysis
# 18 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 2, RustboroCity_PokemonSchool_EventScript_Sleep
# 19 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 3, RustboroCity_PokemonSchool_EventScript_Burn
# 20 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 4, RustboroCity_PokemonSchool_EventScript_Freeze
# 21 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 5, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
# 22 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
# 23 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 24 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 25 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Poison::
# 26 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainPoison, MSGBOX_DEFAULT
# 27 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 28 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 29 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 30 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Paralysis::
# 31 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainParalysis, MSGBOX_DEFAULT
# 32 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 33 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 34 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 35 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Sleep::
# 36 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainSleep, MSGBOX_DEFAULT
# 37 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 38 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 39 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 40 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Burn::
# 41 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainBurn, MSGBOX_DEFAULT
# 42 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 43 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 44 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 45 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Freeze::
# 46 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainFreeze, MSGBOX_DEFAULT
# 47 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 48 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 49 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 50 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ExitTopicSelect::
# 51 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	releaseall
# 52 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 53 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 54 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_GameboyKid1::
# 55 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_TradingRightNow, MSGBOX_NPC
# 56 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 57 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 58 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_GameboyKid2::
# 59 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot, MSGBOX_NPC
# 60 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 61 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 62 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_RichBoy::
# 63 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems, MSGBOX_NPC
# 64 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 65 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 66 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Lass::
# 67 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself, MSGBOX_NPC
# 68 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 69 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 70 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_SchoolKidM::
# 71 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry, MSGBOX_NPC
# 72 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 73 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 74 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_StudentNotebook::
# 75 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentsNotes, MSGBOX_SIGN
# 76 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 77 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 78 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Teacher::
# 79 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 80 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 81 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_RECEIVED_QUICK_CLAW, RustboroCity_PokemonSchool_EventScript_GaveQuickClaw
# 82 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast
# 83 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest
# 84 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw, MSGBOX_DEFAULT
# 85 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 86 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 87 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 88 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 89 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 90 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_RECEIVED_QUICK_CLAW
# 91 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 92 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 93 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 94 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast::
# 95 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast
# 96 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 97 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	return
# 98 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 99 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest::
# 100 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest
# 101 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 102 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	return
# 103 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 104 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_GaveQuickClaw::
# 105 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainQuickClaw, MSGBOX_DEFAULT
# 106 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 107 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 108 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 109 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 110 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 111 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 112 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest:
# 113 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 114 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 115 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 116 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 117 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_down
# 118 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 119 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 120 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 121 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 122 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_left
# 123 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 124 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 125 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 126 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 127 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 128 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_8
# 129 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 130 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 131 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 132 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 133 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 134 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 135 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	step_end
# 136 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 137 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast:
# 138 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 139 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 140 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 141 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 142 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 143 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 144 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_down
# 145 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 146 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 147 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 148 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 149 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_left
# 150 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 151 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 152 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 153 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 154 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 155 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_8
# 156 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 157 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 158 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 159 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 160 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 161 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 162 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	step_end
# 163 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 164 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges:
# 165 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The blackboard lists status changes\n"
# 166 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "that may affect POKéMON in battle.$"
# 167 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 168 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ReadWhichTopic:
# 169 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Which topic do you want to read?$"
# 170 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 171 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainPoison:
# 172 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON is poisoned, it will\n"
# 173 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "steadily lose HP.\p"
# 174 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The effects of poison remain after\n"
# 175 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a battle.\p"
# 176 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A poisoned POKéMON's HP will drop\n"
# 177 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "while it is traveling.\p"
# 178 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Heal a poisoning using an ANTIDOTE.$"
# 179 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 180 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainParalysis:
# 181 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON becomes paralyzed,\n"
# 182 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "its Speed drops.\p"
# 183 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It may also not be able to move while\n"
# 184 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "it is in battle.\p"
# 185 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Paralysis remains after battle.\n"
# 186 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Cure it using a Paralyz Heal.$"
# 187 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 188 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainSleep:
# 189 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON falls asleep, it will be\n"
# 190 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "unable to attack.\p"
# 191 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A POKéMON may wake up on its own,\n"
# 192 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "but if a battle ends while it is\l"
# 193 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "sleeping, it will stay asleep.\p"
# 194 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Wake it up using an Awakening.$"
# 195 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 196 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainBurn:
# 197 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A burn reduces Attack power, and it\n"
# 198 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "steadily reduces the victim's HP.\p"
# 199 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A burn lingers after battle.\n"
# 200 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Cure a burn using a Burn Heal.$"
# 201 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 202 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainFreeze:
# 203 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON is frozen, it becomes\n"
# 204 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "completely helpless.\p"
# 205 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It will remain frozen after battle.\n"
# 206 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Thaw it out using an Ice Heal.$"
# 207 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 208 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw:
# 209 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Students who don't study get a little\n"
# 210 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "taste of my Quick Claw.\p"
# 211 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Whether or not you are a good student \n"
# 212 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "will be evident from the way you use\l"
# 213 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "this item.$"
# 214 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 215 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainQuickClaw:
# 216 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A POKéMON holding the Quick Claw will\n"
# 217 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "occasionally speed up and get to move\l"
# 218 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "before its opponent.\p"
# 219 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "There are many other items that are\n"
# 220 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "meant to be held by POKéMON.\p"
# 221 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Just those alone will give you many\n"
# 222 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "topics to study!$"
# 223 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 224 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_TradingRightNow:
# 225 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON have stats that determine a \n"
# 226 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "bunch of things in battle, like who \l"
# 227 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "hits first. \p"
# 228 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "There are moves that alter stats, they \n"
# 229 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "can be super useful!$"
# 230 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 231 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot:
# 232 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "There are so many POKéMON Types, and\n"
# 233 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "they all interact with each other!\p"
# 234 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "For example, sending a Fire Type against \n"
# 235 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a water type isn't the best idea…"
# 236 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 237 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems:
# 238 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON can hold items, but they\n"
# 239 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "don't know what to do with man-made\l"
# 240 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "items like Potion and Antidote.$"
# 241 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 242 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself:
# 243 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "You know how some POKéMON moves can\n"
# 244 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "confuse a POKéMON?\p"
# 245 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A confused POKéMON will sometimes\n"
# 246 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "attack itself without meaning to.\p"
# 247 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "But once it leaves battle, it will\n"
# 248 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "return to normal.$"
# 249 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 250 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry:
# 251 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A POKéMON holding a Berry will heal\n"
# 252 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "itself…\p"
# 253 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "There are many kinds of items that\n"
# 254 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON can hold…\p"
# 255 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Boy, it sure is hard taking notes\n"
# 256 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "down…$"
# 257 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 258 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentsNotes:
# 259 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's this student's notebook…\p"
# 260 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON are to be caught using\n"
# 261 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Poké Balls.\p"
# 262 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Up to six POKéMON can accompany\n"
# 263 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a Trainer.\p"
# 264 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A Trainer is someone who catches\n"
# 265 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON, raises them, and battles\l"
# 266 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "with them.$"

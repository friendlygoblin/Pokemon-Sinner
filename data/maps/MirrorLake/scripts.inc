MirrorLake_MapScripts::
	.byte 0


MirrorLake_Route11Sign::
# 8 "data/maps/MirrorLake/scripts.pory"
	lock
# 9 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_Route11Sign_Text_0
# 10 "data/maps/MirrorLake/scripts.pory"
	release
	end


MirrorLake_Route12Sign::
# 15 "data/maps/MirrorLake/scripts.pory"
	lock
# 16 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_Route12Sign_Text_0
# 17 "data/maps/MirrorLake/scripts.pory"
	release
	end


MirrorLake_Girl1::
# 22 "data/maps/MirrorLake/scripts.pory"
	lock
# 23 "data/maps/MirrorLake/scripts.pory"
	faceplayer
# 24 "data/maps/MirrorLake/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MirrorLake_Girl1_2
# 28 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_Girl1_Text_1
MirrorLake_Girl1_1:
# 30 "data/maps/MirrorLake/scripts.pory"
	release
	end

MirrorLake_Girl1_2:
# 25 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_Girl1_Text_0
	goto MirrorLake_Girl1_1


MirrorLake_Boy1::
# 35 "data/maps/MirrorLake/scripts.pory"
	lock
# 36 "data/maps/MirrorLake/scripts.pory"
	faceplayer
# 37 "data/maps/MirrorLake/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MirrorLake_Boy1_2
# 41 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_Boy1_Text_1
MirrorLake_Boy1_1:
# 43 "data/maps/MirrorLake/scripts.pory"
	release
	end

MirrorLake_Boy1_2:
# 38 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_Boy1_Text_0
	goto MirrorLake_Boy1_1


MirrorLake_Gir2::
# 48 "data/maps/MirrorLake/scripts.pory"
	lock
# 49 "data/maps/MirrorLake/scripts.pory"
	faceplayer
# 50 "data/maps/MirrorLake/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MirrorLake_Gir2_2
# 54 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_Gir2_Text_1
MirrorLake_Gir2_1:
# 56 "data/maps/MirrorLake/scripts.pory"
	release
	end

MirrorLake_Gir2_2:
# 51 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_Gir2_Text_0
	goto MirrorLake_Gir2_1


MirrorLake_Boy2::
# 61 "data/maps/MirrorLake/scripts.pory"
	lock
# 62 "data/maps/MirrorLake/scripts.pory"
	faceplayer
# 63 "data/maps/MirrorLake/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MirrorLake_Boy2_2
# 67 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_Boy2_Text_1
MirrorLake_Boy2_1:
# 69 "data/maps/MirrorLake/scripts.pory"
	release
	end

MirrorLake_Boy2_2:
# 64 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_Boy2_Text_0
	goto MirrorLake_Boy2_1


MirrorLake_LittleGirl::
# 74 "data/maps/MirrorLake/scripts.pory"
	lock
# 75 "data/maps/MirrorLake/scripts.pory"
	faceplayer
# 76 "data/maps/MirrorLake/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MirrorLake_LittleGirl_2
# 80 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_LittleGirl_Text_1
MirrorLake_LittleGirl_1:
# 82 "data/maps/MirrorLake/scripts.pory"
	release
	end

MirrorLake_LittleGirl_2:
# 77 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_LittleGirl_Text_0
	goto MirrorLake_LittleGirl_1


MirrorLake_Yapgob::
# 87 "data/maps/MirrorLake/scripts.pory"
	lock
# 88 "data/maps/MirrorLake/scripts.pory"
	faceplayer
# 89 "data/maps/MirrorLake/scripts.pory"
	checktrainerflag TRAINER_YAPGOB
	goto_if 1, MirrorLake_Yapgob_2
# 93 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_Yapgob_Text_1, MSGBOX_AUTOCLOSE
# 94 "data/maps/MirrorLake/scripts.pory"
	trainerbattle_no_intro TRAINER_YAPGOB, MirrorLake_Yapgob_Text_2
# 95 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_Yapgob_Text_3
MirrorLake_Yapgob_1:
# 97 "data/maps/MirrorLake/scripts.pory"
	release
	end

MirrorLake_Yapgob_2:
# 90 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_Yapgob_Text_0
	goto MirrorLake_Yapgob_1


MirrorLake_AmyAbiInvestigating::
# 102 "data/maps/MirrorLake/scripts.pory"
	lock
# 103 "data/maps/MirrorLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrorLake_PlayerWalkUp
# 104 "data/maps/MirrorLake/scripts.pory"
	waitmovement 0
# 107 "data/maps/MirrorLake/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceRight
# 108 "data/maps/MirrorLake/scripts.pory"
	waitmovement 0
# 109 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_AmyAbiInvestigating_Text_0, MSGBOX_AUTOCLOSE
# 112 "data/maps/MirrorLake/scripts.pory"
	applymovement 3, MirrorLake_AmyNoticePlayer
# 113 "data/maps/MirrorLake/scripts.pory"
	waitmovement 0
# 114 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_AmyHiPlayer, MSGBOX_AUTOCLOSE
# 115 "data/maps/MirrorLake/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceLeft
# 116 "data/maps/MirrorLake/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceRight
# 117 "data/maps/MirrorLake/scripts.pory"
	waitmovement 0
# 118 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_AmyAbiInvestigating_Text_1, MSGBOX_AUTOCLOSE
# 119 "data/maps/MirrorLake/scripts.pory"
	applymovement 7, WalkInPlaceDown
# 120 "data/maps/MirrorLake/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 121 "data/maps/MirrorLake/scripts.pory"
	waitmovement 7
# 122 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_AbiWereInvestigating, MSGBOX_AUTOCLOSE
# 123 "data/maps/MirrorLake/scripts.pory"
	applymovement 3, WalkInPlaceDown
# 124 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_SolveItForParlourZine, MSGBOX_AUTOCLOSE
# 125 "data/maps/MirrorLake/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceLeft
# 126 "data/maps/MirrorLake/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceRight
# 127 "data/maps/MirrorLake/scripts.pory"
	waitmovement 0
# 128 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_AbiLeaveYouToIt, MSGBOX_AUTOCLOSE
# 129 "data/maps/MirrorLake/scripts.pory"
	applymovement 7, WalkInPlaceDown
# 130 "data/maps/MirrorLake/scripts.pory"
	waitmovement 0
# 131 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_AbiTellMeAllAboutIt, MSGBOX_AUTOCLOSE
# 134 "data/maps/MirrorLake/scripts.pory"
	applymovement 7, MirrorLake_AbiLeaves1
# 135 "data/maps/MirrorLake/scripts.pory"
	waitmovement 0
# 136 "data/maps/MirrorLake/scripts.pory"
	removeobject 7
# 137 "data/maps/MirrorLake/scripts.pory"
	setflag FLAG_MIRRORLAKE_ABI
# 138 "data/maps/MirrorLake/scripts.pory"
	applymovement 3, WalkInPlaceDown
# 139 "data/maps/MirrorLake/scripts.pory"
	waitmovement 0
# 140 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_AmyAbiInvestigating_Text_2, MSGBOX_AUTOCLOSE
# 141 "data/maps/MirrorLake/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_LOOK_AROUND
# 142 "data/maps/MirrorLake/scripts.pory"
	setvar VAR_MIRRORLAKE_INVESTIGATION, 1
# 143 "data/maps/MirrorLake/scripts.pory"
	setvar VAR_MIRRORLAKE_ABIEXIT, 1
# 145 "data/maps/MirrorLake/scripts.pory"
	release
	end


MirrorLake_Amy::
# 150 "data/maps/MirrorLake/scripts.pory"
	lock
# 151 "data/maps/MirrorLake/scripts.pory"
	faceplayer
# 152 "data/maps/MirrorLake/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MirrorLake_Amy_2
# 164 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_Amy_Text_0
MirrorLake_Amy_1:
# 166 "data/maps/MirrorLake/scripts.pory"
	release
	end

MirrorLake_Amy_2:
# 153 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_AmyFindAnything, MSGBOX_AUTOCLOSE
# 154 "data/maps/MirrorLake/scripts.pory"
	applymovement 3, MirrorLake_AmyShocked
# 155 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_AmyDavidBowie, MSGBOX_AUTOCLOSE
# 156 "data/maps/MirrorLake/scripts.pory"
	fadescreen FADE_TO_BLACK
# 157 "data/maps/MirrorLake/scripts.pory"
	removeobject 3
# 158 "data/maps/MirrorLake/scripts.pory"
	playse SE_EXIT
# 159 "data/maps/MirrorLake/scripts.pory"
	waitse
# 160 "data/maps/MirrorLake/scripts.pory"
	setflag FLAG_MIRRORLAKE_AMY
# 161 "data/maps/MirrorLake/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto MirrorLake_Amy_1


MirrorLake_AbiCatchUp1::
# 171 "data/maps/MirrorLake/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MirrorLake_AbiCatchUp1_1
# 187 "data/maps/MirrorLake/scripts.pory"
	setvar VAR_MIRRORLAKE_ABIEXIT, 1
# 188 "data/maps/MirrorLake/scripts.pory"
	release
	end

MirrorLake_AbiCatchUp1_1:
# 172 "data/maps/MirrorLake/scripts.pory"
	lock
# 173 "data/maps/MirrorLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 174 "data/maps/MirrorLake/scripts.pory"
	waitmovement 0
# 175 "data/maps/MirrorLake/scripts.pory"
	addobject 8
# 176 "data/maps/MirrorLake/scripts.pory"
	applymovement 8, MirrorLake_AbiCatchUpToPlayer1
# 177 "data/maps/MirrorLake/scripts.pory"
	waitmovement 0
# 178 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_AbiSoWhatWasIt, MSGBOX_AUTOCLOSE
# 179 "data/maps/MirrorLake/scripts.pory"
	applymovement 8, MirrorLake_AbiLeavesAgain1
# 180 "data/maps/MirrorLake/scripts.pory"
	waitmovement 0
# 181 "data/maps/MirrorLake/scripts.pory"
	removeobject 8
# 182 "data/maps/MirrorLake/scripts.pory"
	setvar VAR_MIRRORLAKE_ABIEXIT, 1
# 183 "data/maps/MirrorLake/scripts.pory"
	release
	end


MirrorLake_AbiCatchUp2::
# 194 "data/maps/MirrorLake/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MirrorLake_AbiCatchUp2_1
# 210 "data/maps/MirrorLake/scripts.pory"
	setvar VAR_MIRRORLAKE_ABIEXIT, 1
# 211 "data/maps/MirrorLake/scripts.pory"
	release
	end

MirrorLake_AbiCatchUp2_1:
# 195 "data/maps/MirrorLake/scripts.pory"
	lock
# 196 "data/maps/MirrorLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 197 "data/maps/MirrorLake/scripts.pory"
	waitmovement 0
# 198 "data/maps/MirrorLake/scripts.pory"
	addobject 8
# 199 "data/maps/MirrorLake/scripts.pory"
	applymovement 8, MirrorLake_AbiCatchUpToPlayer2
# 200 "data/maps/MirrorLake/scripts.pory"
	waitmovement 0
# 201 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_AbiSoWhatWasIt, MSGBOX_AUTOCLOSE
# 202 "data/maps/MirrorLake/scripts.pory"
	applymovement 8, MirrorLake_AbiLeavesAgain2
# 203 "data/maps/MirrorLake/scripts.pory"
	waitmovement 0
# 204 "data/maps/MirrorLake/scripts.pory"
	removeobject 8
# 205 "data/maps/MirrorLake/scripts.pory"
	setvar VAR_MIRRORLAKE_ABIEXIT, 1
# 206 "data/maps/MirrorLake/scripts.pory"
	release
	end


# 216 "data/maps/MirrorLake/scripts.pory"
MirrorLake_PlayerWalkUp:
# 217 "data/maps/MirrorLake/scripts.pory"
	walk_up
# 217 "data/maps/MirrorLake/scripts.pory"
	walk_up
# 217 "data/maps/MirrorLake/scripts.pory"
	walk_up
# 218 "data/maps/MirrorLake/scripts.pory"
	step_end

# 221 "data/maps/MirrorLake/scripts.pory"
MirrorLake_AmyNoticePlayer:
# 222 "data/maps/MirrorLake/scripts.pory"
	emote_exclamation_mark
# 223 "data/maps/MirrorLake/scripts.pory"
	face_down
# 224 "data/maps/MirrorLake/scripts.pory"
	step_end

# 227 "data/maps/MirrorLake/scripts.pory"
MirrorLake_AbiLeaves1:
# 228 "data/maps/MirrorLake/scripts.pory"
	walk_up
# 229 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 229 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 229 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 229 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 229 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 229 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 229 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 230 "data/maps/MirrorLake/scripts.pory"
	step_end

# 233 "data/maps/MirrorLake/scripts.pory"
MirrorLake_AmyShocked:
# 234 "data/maps/MirrorLake/scripts.pory"
	emote_exclamation_mark
# 235 "data/maps/MirrorLake/scripts.pory"
	step_end

# 238 "data/maps/MirrorLake/scripts.pory"
MirrorLake_AbiCatchUpToPlayer1:
# 239 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 239 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 240 "data/maps/MirrorLake/scripts.pory"
	walk_down
# 240 "data/maps/MirrorLake/scripts.pory"
	walk_down
# 241 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 241 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 241 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 241 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 241 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 242 "data/maps/MirrorLake/scripts.pory"
	step_end

# 245 "data/maps/MirrorLake/scripts.pory"
MirrorLake_AbiCatchUpToPlayer2:
# 246 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 246 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 247 "data/maps/MirrorLake/scripts.pory"
	walk_down
# 247 "data/maps/MirrorLake/scripts.pory"
	walk_down
# 247 "data/maps/MirrorLake/scripts.pory"
	walk_down
# 248 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 248 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 248 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 248 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 248 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 249 "data/maps/MirrorLake/scripts.pory"
	step_end

# 252 "data/maps/MirrorLake/scripts.pory"
MirrorLake_AbiLeavesAgain1:
# 253 "data/maps/MirrorLake/scripts.pory"
	walk_down
# 254 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 254 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 255 "data/maps/MirrorLake/scripts.pory"
	step_end

# 258 "data/maps/MirrorLake/scripts.pory"
MirrorLake_AbiLeavesAgain2:
# 259 "data/maps/MirrorLake/scripts.pory"
	walk_up
# 260 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 260 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 261 "data/maps/MirrorLake/scripts.pory"
	step_end

MirrorLake_Route11Sign_Text_0:
# 9 "data/maps/MirrorLake/scripts.pory"
	.string "{DOWN_ARROW}: Route 11.\p"
	.string "To Nightingale City.$"

MirrorLake_Route12Sign_Text_0:
# 16 "data/maps/MirrorLake/scripts.pory"
	.string "{RIGHT_ARROW}: Route 12.\p"
	.string "To Mirror City.$"

MirrorLake_Girl1_Text_0:
# 25 "data/maps/MirrorLake/scripts.pory"
	.string "The strange noises stopped!\p"
	.string "I can finally read by the lake again in\n"
	.string "peace!$"

MirrorLake_Girl1_Text_1:
# 28 "data/maps/MirrorLake/scripts.pory"
	.string "I usually come here to read by the lake\n"
	.string "but the strange noises are making the\l"
	.string "place really spooky.$"

MirrorLake_Boy1_Text_0:
# 38 "data/maps/MirrorLake/scripts.pory"
	.string "The lake is back to its normal level of\n"
	.string "mystery!$"

MirrorLake_Boy1_Text_1:
# 41 "data/maps/MirrorLake/scripts.pory"
	.string "This lake has always been mysterious,\n"
	.string "but it's been even worse lately.$"

MirrorLake_Gir2_Text_0:
# 51 "data/maps/MirrorLake/scripts.pory"
	.string "So, what was it?$"

MirrorLake_Gir2_Text_1:
# 54 "data/maps/MirrorLake/scripts.pory"
	.string "I think the noise might come from the\n"
	.string "waterfall.\p"
	.string "But you need to Surf to investigate…$"

MirrorLake_Boy2_Text_0:
# 64 "data/maps/MirrorLake/scripts.pory"
	.string "Oh, it wasn't that weird person after\n"
	.string "all?$"

MirrorLake_Boy2_Text_1:
# 67 "data/maps/MirrorLake/scripts.pory"
	.string "There's a strange girl hanging out on a\n"
	.string "tiny island in the middle of the lake.\p"
	.string "I wonder if she's responsible for the\n"
	.string "weird sounds.$"

MirrorLake_LittleGirl_Text_0:
# 77 "data/maps/MirrorLake/scripts.pory"
	.string "So it really was a musician?\p"
	.string "I knew it!$"

MirrorLake_LittleGirl_Text_1:
# 80 "data/maps/MirrorLake/scripts.pory"
	.string "You know, it sounds more like music than\n"
	.string "noise.\p"
	.string "Maybe a musician's behind it all!$"

MirrorLake_Yapgob_Text_0:
# 90 "data/maps/MirrorLake/scripts.pory"
	.string "The TLDP challenge in Mirror City?\p"
	.string "Yes, yes! I'll be there!$"

MirrorLake_Yapgob_Text_1:
# 93 "data/maps/MirrorLake/scripts.pory"
	.string "YAPGOB: The strange noises?\p"
	.string "No, that's not me…\p"
	.string "I wish!$"

MirrorLake_Yapgob_Text_2:
# 94 "data/maps/MirrorLake/scripts.pory"
	.string "Did I still spook you?$"

MirrorLake_Yapgob_Text_3:
# 95 "data/maps/MirrorLake/scripts.pory"
	.string "I love to hang out on my little island to\n"
	.string "listen to music in peace.\p"
	.string "I'm not bothering anyone.$"

MirrorLake_AmyAbiInvestigating_Text_0:
# 109 "data/maps/MirrorLake/scripts.pory"
	.string "AMY: … no idea what-$"

MirrorLake_AmyAbiInvestigating_Text_1:
# 118 "data/maps/MirrorLake/scripts.pory"
	.string "ABIGAIL: Oh we've met before, Amy.$"

MirrorLake_AmyAbiInvestigating_Text_2:
# 140 "data/maps/MirrorLake/scripts.pory"
	.string "AMY: Do let me know if you find\n"
	.string "anything!$"

MirrorLake_Amy_Text_0:
# 164 "data/maps/MirrorLake/scripts.pory"
	.string "AMY: If we crack this case, the next\n"
	.string "ParlourZine issue's gonna be legendary!$"

MirrorLake_AmyHiPlayer::
# 264 "data/maps/MirrorLake/scripts.pory"
	.string "AMY: {PLAYER}! What brings you here?\p"
	.string "This is Abigail, from the Last Dinner \n"
	.string "Party!  $"

MirrorLake_AbiWereInvestigating::
# 270 "data/maps/MirrorLake/scripts.pory"
	.string "ABIGAIL: I was on my way to Mirror \n"
	.string "City when I heard strange sounds \l"
	.string "coming from the lake. \p"
	.string "Amy arrived shortly after I did.$"

MirrorLake_SolveItForParlourZine::
# 277 "data/maps/MirrorLake/scripts.pory"
	.string "AMY: I need to crack this case for \n"
	.string "ParlourZine, our readers love a good\l"
	.string "mystery! \p"
	.string "Maybe asking around would be a good \n"
	.string "start… $"

MirrorLake_AbiLeaveYouToIt::
# 285 "data/maps/MirrorLake/scripts.pory"
	.string "ABIGAIL: Now that the investigations \n"
	.string "are in good hands, I'll leave you to it!$"

MirrorLake_AbiTellMeAllAboutIt::
# 290 "data/maps/MirrorLake/scripts.pory"
	.string "{PLAYER}… you'll tell me all about it \n"
	.string "in Mirror City, won't you?$"

MirrorLake_AmyFindAnything::
# 295 "data/maps/MirrorLake/scripts.pory"
	.string "AMY: So, find anything? \p"
	.string "A musician's… ghost? Are you sure? $"

MirrorLake_AmyDavidBowie::
# 300 "data/maps/MirrorLake/scripts.pory"
	.string "DAVID BOWIE?? \p"
	.string "This is HUGE, {PLAYER}! \p"
	.string "I better run back to ParlourZine HQ \n"
	.string "stat! \p"
	.string "Thanks, good luck, goodbye! $"

MirrorLake_AbiSoWhatWasIt::
# 308 "data/maps/MirrorLake/scripts.pory"
	.string "ABIGAIL: Hey, wait! \p"
	.string "I heard the noise stopped, did you \n"
	.string "have anything to do with it? \p"
	.string "… … … \p"
	.string "David Bowie?! \p"
	.string "Really? You're not messsing with me, \n"
	.string "are you?\p"
	.string "No way, do you have any idea how much \n"
	.string "he influenced us as a band? \p"
	.string "I have to tell the others, thanks for \n"
	.string "catching me up!$"

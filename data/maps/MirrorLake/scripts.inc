MirrorLake_MapScripts::
# 2 "data/maps/MirrorLake/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MirrorLake_Visited
	.byte 0


MirrorLake_Visited::
# 6 "data/maps/MirrorLake/scripts.pory"
	setflag FLAG_VISITED_MOSSDEEP_CITY
# 7 "data/maps/MirrorLake/scripts.pory"
	setvar VAR_GODZILLAND_PORYGON, 0
	return


MirrorLake_Route11Sign::
# 16 "data/maps/MirrorLake/scripts.pory"
	lock
# 17 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_Route11Sign_Text_0
# 18 "data/maps/MirrorLake/scripts.pory"
	release
	end


MirrorLake_Route12Sign::
# 23 "data/maps/MirrorLake/scripts.pory"
	lock
# 24 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_Route12Sign_Text_0
# 25 "data/maps/MirrorLake/scripts.pory"
	release
	end


MirrorLake_Girl1::
# 30 "data/maps/MirrorLake/scripts.pory"
	lock
# 31 "data/maps/MirrorLake/scripts.pory"
	faceplayer
# 32 "data/maps/MirrorLake/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MirrorLake_Girl1_2
# 36 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_Girl1_Text_1
MirrorLake_Girl1_1:
# 38 "data/maps/MirrorLake/scripts.pory"
	release
	end

MirrorLake_Girl1_2:
# 33 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_Girl1_Text_0
	goto MirrorLake_Girl1_1


MirrorLake_Boy1::
# 43 "data/maps/MirrorLake/scripts.pory"
	lock
# 44 "data/maps/MirrorLake/scripts.pory"
	faceplayer
# 45 "data/maps/MirrorLake/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MirrorLake_Boy1_2
# 49 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_Boy1_Text_1
MirrorLake_Boy1_1:
# 51 "data/maps/MirrorLake/scripts.pory"
	release
	end

MirrorLake_Boy1_2:
# 46 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_Boy1_Text_0
	goto MirrorLake_Boy1_1


MirrorLake_Gir2::
# 56 "data/maps/MirrorLake/scripts.pory"
	lock
# 57 "data/maps/MirrorLake/scripts.pory"
	faceplayer
# 58 "data/maps/MirrorLake/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MirrorLake_Gir2_2
# 62 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_Gir2_Text_1
MirrorLake_Gir2_1:
# 64 "data/maps/MirrorLake/scripts.pory"
	release
	end

MirrorLake_Gir2_2:
# 59 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_Gir2_Text_0
	goto MirrorLake_Gir2_1


MirrorLake_Boy2::
# 69 "data/maps/MirrorLake/scripts.pory"
	lock
# 70 "data/maps/MirrorLake/scripts.pory"
	faceplayer
# 71 "data/maps/MirrorLake/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MirrorLake_Boy2_2
# 75 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_Boy2_Text_1
MirrorLake_Boy2_1:
# 77 "data/maps/MirrorLake/scripts.pory"
	release
	end

MirrorLake_Boy2_2:
# 72 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_Boy2_Text_0
	goto MirrorLake_Boy2_1


MirrorLake_LittleGirl::
# 82 "data/maps/MirrorLake/scripts.pory"
	lock
# 83 "data/maps/MirrorLake/scripts.pory"
	faceplayer
# 84 "data/maps/MirrorLake/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MirrorLake_LittleGirl_2
# 88 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_LittleGirl_Text_1
MirrorLake_LittleGirl_1:
# 90 "data/maps/MirrorLake/scripts.pory"
	release
	end

MirrorLake_LittleGirl_2:
# 85 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_LittleGirl_Text_0
	goto MirrorLake_LittleGirl_1


MirrorLake_Yapgob::
# 95 "data/maps/MirrorLake/scripts.pory"
	lock
# 96 "data/maps/MirrorLake/scripts.pory"
	faceplayer
# 97 "data/maps/MirrorLake/scripts.pory"
	checktrainerflag TRAINER_YAPGOB
	goto_if 1, MirrorLake_Yapgob_2
# 101 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_Yapgob_Text_1, MSGBOX_AUTOCLOSE
# 102 "data/maps/MirrorLake/scripts.pory"
	trainerbattle_no_intro TRAINER_YAPGOB, MirrorLake_Yapgob_Text_2
# 103 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_Yapgob_Text_3
MirrorLake_Yapgob_1:
# 105 "data/maps/MirrorLake/scripts.pory"
	release
	end

MirrorLake_Yapgob_2:
# 98 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_Yapgob_Text_0
	goto MirrorLake_Yapgob_1


MirrorLake_AmyAbiInvestigating::
# 110 "data/maps/MirrorLake/scripts.pory"
	lock
# 111 "data/maps/MirrorLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrorLake_PlayerWalkUp
# 112 "data/maps/MirrorLake/scripts.pory"
	waitmovement 0
# 115 "data/maps/MirrorLake/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceRight
# 116 "data/maps/MirrorLake/scripts.pory"
	waitmovement 0
# 117 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_AmyAbiInvestigating_Text_0, MSGBOX_AUTOCLOSE
# 120 "data/maps/MirrorLake/scripts.pory"
	applymovement 3, MirrorLake_AmyNoticePlayer
# 121 "data/maps/MirrorLake/scripts.pory"
	waitmovement 0
# 122 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_AmyHiPlayer, MSGBOX_AUTOCLOSE
# 123 "data/maps/MirrorLake/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceLeft
# 124 "data/maps/MirrorLake/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceRight
# 125 "data/maps/MirrorLake/scripts.pory"
	waitmovement 0
# 126 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_AmyAbiInvestigating_Text_1, MSGBOX_AUTOCLOSE
# 127 "data/maps/MirrorLake/scripts.pory"
	applymovement 7, WalkInPlaceDown
# 128 "data/maps/MirrorLake/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 129 "data/maps/MirrorLake/scripts.pory"
	waitmovement 7
# 130 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_AbiWereInvestigating, MSGBOX_AUTOCLOSE
# 131 "data/maps/MirrorLake/scripts.pory"
	applymovement 3, WalkInPlaceDown
# 132 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_SolveItForParlourZine, MSGBOX_AUTOCLOSE
# 133 "data/maps/MirrorLake/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceLeft
# 134 "data/maps/MirrorLake/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceRight
# 135 "data/maps/MirrorLake/scripts.pory"
	waitmovement 0
# 136 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_AbiLeaveYouToIt, MSGBOX_AUTOCLOSE
# 137 "data/maps/MirrorLake/scripts.pory"
	applymovement 7, WalkInPlaceDown
# 138 "data/maps/MirrorLake/scripts.pory"
	waitmovement 0
# 139 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_AbiTellMeAllAboutIt, MSGBOX_AUTOCLOSE
# 142 "data/maps/MirrorLake/scripts.pory"
	applymovement 7, MirrorLake_AbiLeaves1
# 143 "data/maps/MirrorLake/scripts.pory"
	waitmovement 0
# 144 "data/maps/MirrorLake/scripts.pory"
	removeobject 7
# 145 "data/maps/MirrorLake/scripts.pory"
	setflag FLAG_MIRRORLAKE_ABI
# 146 "data/maps/MirrorLake/scripts.pory"
	applymovement 3, WalkInPlaceDown
# 147 "data/maps/MirrorLake/scripts.pory"
	waitmovement 0
# 148 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_AmyAbiInvestigating_Text_2, MSGBOX_AUTOCLOSE
# 149 "data/maps/MirrorLake/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_LOOK_AROUND
# 150 "data/maps/MirrorLake/scripts.pory"
	setvar VAR_MIRRORLAKE_INVESTIGATION, 1
# 151 "data/maps/MirrorLake/scripts.pory"
	setvar VAR_MIRRORLAKE_ABIEXIT, 1
# 153 "data/maps/MirrorLake/scripts.pory"
	release
	end


MirrorLake_Amy::
# 158 "data/maps/MirrorLake/scripts.pory"
	lock
# 159 "data/maps/MirrorLake/scripts.pory"
	faceplayer
# 160 "data/maps/MirrorLake/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MirrorLake_Amy_2
# 172 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_Amy_Text_0
MirrorLake_Amy_1:
# 174 "data/maps/MirrorLake/scripts.pory"
	release
	end

MirrorLake_Amy_2:
# 161 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_AmyFindAnything, MSGBOX_AUTOCLOSE
# 162 "data/maps/MirrorLake/scripts.pory"
	applymovement 3, MirrorLake_AmyShocked
# 163 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_AmyDavidBowie, MSGBOX_AUTOCLOSE
# 164 "data/maps/MirrorLake/scripts.pory"
	fadescreen FADE_TO_BLACK
# 165 "data/maps/MirrorLake/scripts.pory"
	removeobject 3
# 166 "data/maps/MirrorLake/scripts.pory"
	playse SE_EXIT
# 167 "data/maps/MirrorLake/scripts.pory"
	waitse
# 168 "data/maps/MirrorLake/scripts.pory"
	setflag FLAG_MIRRORLAKE_AMY
# 169 "data/maps/MirrorLake/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto MirrorLake_Amy_1


MirrorLake_AbiCatchUp1::
# 179 "data/maps/MirrorLake/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MirrorLake_AbiCatchUp1_1
# 195 "data/maps/MirrorLake/scripts.pory"
	setvar VAR_MIRRORLAKE_ABIEXIT, 1
# 196 "data/maps/MirrorLake/scripts.pory"
	release
	end

MirrorLake_AbiCatchUp1_1:
# 180 "data/maps/MirrorLake/scripts.pory"
	lock
# 181 "data/maps/MirrorLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 182 "data/maps/MirrorLake/scripts.pory"
	waitmovement 0
# 183 "data/maps/MirrorLake/scripts.pory"
	addobject 8
# 184 "data/maps/MirrorLake/scripts.pory"
	applymovement 8, MirrorLake_AbiCatchUpToPlayer1
# 185 "data/maps/MirrorLake/scripts.pory"
	waitmovement 0
# 186 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_AbiSoWhatWasIt, MSGBOX_AUTOCLOSE
# 187 "data/maps/MirrorLake/scripts.pory"
	applymovement 8, MirrorLake_AbiLeavesAgain1
# 188 "data/maps/MirrorLake/scripts.pory"
	waitmovement 0
# 189 "data/maps/MirrorLake/scripts.pory"
	removeobject 8
# 190 "data/maps/MirrorLake/scripts.pory"
	setvar VAR_MIRRORLAKE_ABIEXIT, 1
# 191 "data/maps/MirrorLake/scripts.pory"
	release
	end


MirrorLake_AbiCatchUp2::
# 202 "data/maps/MirrorLake/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MirrorLake_AbiCatchUp2_1
# 218 "data/maps/MirrorLake/scripts.pory"
	setvar VAR_MIRRORLAKE_ABIEXIT, 1
# 219 "data/maps/MirrorLake/scripts.pory"
	release
	end

MirrorLake_AbiCatchUp2_1:
# 203 "data/maps/MirrorLake/scripts.pory"
	lock
# 204 "data/maps/MirrorLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 205 "data/maps/MirrorLake/scripts.pory"
	waitmovement 0
# 206 "data/maps/MirrorLake/scripts.pory"
	addobject 8
# 207 "data/maps/MirrorLake/scripts.pory"
	applymovement 8, MirrorLake_AbiCatchUpToPlayer2
# 208 "data/maps/MirrorLake/scripts.pory"
	waitmovement 0
# 209 "data/maps/MirrorLake/scripts.pory"
	msgbox MirrorLake_AbiSoWhatWasIt, MSGBOX_AUTOCLOSE
# 210 "data/maps/MirrorLake/scripts.pory"
	applymovement 8, MirrorLake_AbiLeavesAgain2
# 211 "data/maps/MirrorLake/scripts.pory"
	waitmovement 0
# 212 "data/maps/MirrorLake/scripts.pory"
	removeobject 8
# 213 "data/maps/MirrorLake/scripts.pory"
	setvar VAR_MIRRORLAKE_ABIEXIT, 1
# 214 "data/maps/MirrorLake/scripts.pory"
	release
	end


# 224 "data/maps/MirrorLake/scripts.pory"
MirrorLake_PlayerWalkUp:
# 225 "data/maps/MirrorLake/scripts.pory"
	walk_up
# 225 "data/maps/MirrorLake/scripts.pory"
	walk_up
# 225 "data/maps/MirrorLake/scripts.pory"
	walk_up
# 226 "data/maps/MirrorLake/scripts.pory"
	step_end

# 229 "data/maps/MirrorLake/scripts.pory"
MirrorLake_AmyNoticePlayer:
# 230 "data/maps/MirrorLake/scripts.pory"
	emote_exclamation_mark
# 231 "data/maps/MirrorLake/scripts.pory"
	face_down
# 232 "data/maps/MirrorLake/scripts.pory"
	step_end

# 235 "data/maps/MirrorLake/scripts.pory"
MirrorLake_AbiLeaves1:
# 236 "data/maps/MirrorLake/scripts.pory"
	walk_up
# 237 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 237 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 237 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 237 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 237 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 237 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 237 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 238 "data/maps/MirrorLake/scripts.pory"
	step_end

# 241 "data/maps/MirrorLake/scripts.pory"
MirrorLake_AmyShocked:
# 242 "data/maps/MirrorLake/scripts.pory"
	emote_exclamation_mark
# 243 "data/maps/MirrorLake/scripts.pory"
	step_end

# 246 "data/maps/MirrorLake/scripts.pory"
MirrorLake_AbiCatchUpToPlayer1:
# 247 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 247 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 248 "data/maps/MirrorLake/scripts.pory"
	walk_down
# 248 "data/maps/MirrorLake/scripts.pory"
	walk_down
# 249 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 249 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 249 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 249 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 249 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 250 "data/maps/MirrorLake/scripts.pory"
	step_end

# 253 "data/maps/MirrorLake/scripts.pory"
MirrorLake_AbiCatchUpToPlayer2:
# 254 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 254 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 255 "data/maps/MirrorLake/scripts.pory"
	walk_down
# 255 "data/maps/MirrorLake/scripts.pory"
	walk_down
# 255 "data/maps/MirrorLake/scripts.pory"
	walk_down
# 256 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 256 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 256 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 256 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 256 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 257 "data/maps/MirrorLake/scripts.pory"
	step_end

# 260 "data/maps/MirrorLake/scripts.pory"
MirrorLake_AbiLeavesAgain1:
# 261 "data/maps/MirrorLake/scripts.pory"
	walk_down
# 262 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 262 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 263 "data/maps/MirrorLake/scripts.pory"
	step_end

# 266 "data/maps/MirrorLake/scripts.pory"
MirrorLake_AbiLeavesAgain2:
# 267 "data/maps/MirrorLake/scripts.pory"
	walk_up
# 268 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 268 "data/maps/MirrorLake/scripts.pory"
	walk_right
# 269 "data/maps/MirrorLake/scripts.pory"
	step_end

MirrorLake_Route11Sign_Text_0:
# 17 "data/maps/MirrorLake/scripts.pory"
	.string "{DOWN_ARROW}: Route 11.\p"
	.string "To Nightingale City.$"

MirrorLake_Route12Sign_Text_0:
# 24 "data/maps/MirrorLake/scripts.pory"
	.string "{RIGHT_ARROW}: Route 12.\p"
	.string "To Mirror City.$"

MirrorLake_Girl1_Text_0:
# 33 "data/maps/MirrorLake/scripts.pory"
	.string "The strange noises stopped!\p"
	.string "I can finally read by the lake again in\n"
	.string "peace!$"

MirrorLake_Girl1_Text_1:
# 36 "data/maps/MirrorLake/scripts.pory"
	.string "I usually come here to read by the lake\n"
	.string "but the strange noises are making the\l"
	.string "place really spooky.$"

MirrorLake_Boy1_Text_0:
# 46 "data/maps/MirrorLake/scripts.pory"
	.string "The lake is back to its normal level of\n"
	.string "mystery!$"

MirrorLake_Boy1_Text_1:
# 49 "data/maps/MirrorLake/scripts.pory"
	.string "This lake has always been mysterious,\n"
	.string "but it's been even worse lately.$"

MirrorLake_Gir2_Text_0:
# 59 "data/maps/MirrorLake/scripts.pory"
	.string "So, what was it?$"

MirrorLake_Gir2_Text_1:
# 62 "data/maps/MirrorLake/scripts.pory"
	.string "I think the noise might come from the\n"
	.string "waterfall.\p"
	.string "But you need to Surf to investigate…$"

MirrorLake_Boy2_Text_0:
# 72 "data/maps/MirrorLake/scripts.pory"
	.string "Oh, it wasn't that weird person after\n"
	.string "all?$"

MirrorLake_Boy2_Text_1:
# 75 "data/maps/MirrorLake/scripts.pory"
	.string "There's a strange girl hanging out on a\n"
	.string "tiny island in the middle of the lake.\p"
	.string "I wonder if she's responsible for the\n"
	.string "weird sounds.$"

MirrorLake_LittleGirl_Text_0:
# 85 "data/maps/MirrorLake/scripts.pory"
	.string "So it really was a musician?\p"
	.string "I knew it!$"

MirrorLake_LittleGirl_Text_1:
# 88 "data/maps/MirrorLake/scripts.pory"
	.string "You know, it sounds more like music than\n"
	.string "noise.\p"
	.string "Maybe a musician's behind it all!$"

MirrorLake_Yapgob_Text_0:
# 98 "data/maps/MirrorLake/scripts.pory"
	.string "The TLDP challenge in Mirror City?\p"
	.string "Yes, yes! I'll be there!$"

MirrorLake_Yapgob_Text_1:
# 101 "data/maps/MirrorLake/scripts.pory"
	.string "YAPGOB: The strange noises?\p"
	.string "No, that's not me…\p"
	.string "I wish!$"

MirrorLake_Yapgob_Text_2:
# 102 "data/maps/MirrorLake/scripts.pory"
	.string "Did I still spook you?$"

MirrorLake_Yapgob_Text_3:
# 103 "data/maps/MirrorLake/scripts.pory"
	.string "I love to hang out on my little island to\n"
	.string "listen to music in peace.\p"
	.string "I'm not bothering anyone.$"

MirrorLake_AmyAbiInvestigating_Text_0:
# 117 "data/maps/MirrorLake/scripts.pory"
	.string "AMY: … no idea what-$"

MirrorLake_AmyAbiInvestigating_Text_1:
# 126 "data/maps/MirrorLake/scripts.pory"
	.string "ABIGAIL: Oh we've met before, Amy.$"

MirrorLake_AmyAbiInvestigating_Text_2:
# 148 "data/maps/MirrorLake/scripts.pory"
	.string "AMY: Do let me know if you find\n"
	.string "anything!$"

MirrorLake_Amy_Text_0:
# 172 "data/maps/MirrorLake/scripts.pory"
	.string "AMY: If we crack this case, the next\n"
	.string "ParlourZine issue's gonna be legendary!$"

MirrorLake_AmyHiPlayer::
# 272 "data/maps/MirrorLake/scripts.pory"
	.string "AMY: {PLAYER}! What brings you here?\p"
	.string "This is Abigail, from the Last Dinner \n"
	.string "Party!  $"

MirrorLake_AbiWereInvestigating::
# 278 "data/maps/MirrorLake/scripts.pory"
	.string "ABIGAIL: I was on my way to Mirror \n"
	.string "City when I heard strange sounds \l"
	.string "coming from the lake. \p"
	.string "Amy arrived shortly after I did.$"

MirrorLake_SolveItForParlourZine::
# 285 "data/maps/MirrorLake/scripts.pory"
	.string "AMY: I need to crack this case for \n"
	.string "ParlourZine, our readers love a good\l"
	.string "mystery! \p"
	.string "Maybe asking around would be a good \n"
	.string "start… $"

MirrorLake_AbiLeaveYouToIt::
# 293 "data/maps/MirrorLake/scripts.pory"
	.string "ABIGAIL: Now that the investigations \n"
	.string "are in good hands, I'll leave you to it!$"

MirrorLake_AbiTellMeAllAboutIt::
# 298 "data/maps/MirrorLake/scripts.pory"
	.string "{PLAYER}… you'll tell me all about it \n"
	.string "in Mirror City, won't you?$"

MirrorLake_AmyFindAnything::
# 303 "data/maps/MirrorLake/scripts.pory"
	.string "AMY: So, find anything? \p"
	.string "A musician's… ghost? Are you sure? $"

MirrorLake_AmyDavidBowie::
# 308 "data/maps/MirrorLake/scripts.pory"
	.string "DAVID BOWIE?? \p"
	.string "This is HUGE, {PLAYER}! \p"
	.string "I better run back to ParlourZine HQ \n"
	.string "stat! \p"
	.string "Thanks, good luck, goodbye! $"

MirrorLake_AbiSoWhatWasIt::
# 316 "data/maps/MirrorLake/scripts.pory"
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

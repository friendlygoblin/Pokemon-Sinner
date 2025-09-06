CandlewaxCity_ConcertHall_Lobby_MapScripts::
	.byte 0


HozierHall_PlaceRora1::
# 6 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	lock
# 7 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	applymovement 3, PlaceRora1
# 8 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	waitmovement 0
# 9 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 10 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	goto HozierHall_Rora
	return


HozierHall_PlaceRora2::
# 14 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	lock
# 15 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	applymovement 3, PlaceRora2
# 16 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	waitmovement 0
# 17 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 18 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	goto HozierHall_Rora
	return


HozierHall_Rora::
# 22 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	msgbox RoraRecognisesPlayer, MSGBOX_AUTOCLOSE
# 23 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	delay 30
# 24 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 25 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	waitmovement 0
# 26 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	delay 30
# 27 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	msgbox RoraStolenPokemon, MSGBOX_AUTOCLOSE
# 28 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	applymovement 3, RoraLeavesHozierHall
# 29 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	waitmovement 0
# 30 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	removeobject 3
# 31 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	setflag FLAG_RORA_HOZIER_HALL
# 32 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	setvar VAR_RORA_HOZIER_HALL, 1
# 33 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	releaseall
	end


WarpToHozierRoom::
# 38 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	lock
# 39 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	msgbox WarpToHozierRoom_Text_0, MSGBOX_YESNO
# 40 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WarpToHozierRoom_2
# 44 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 45 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	waitmovement 0
WarpToHozierRoom_1:
# 47 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	releaseall
	end

WarpToHozierRoom_2:
# 41 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	warp MAP_CANDLEWAX_CITY_CONCERT_HALL, 7, 11
	goto WarpToHozierRoom_1


# 51 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
PlaceRora1:
# 52 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	walk_right
# 53 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	walk_down
# 53 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	walk_down
# 53 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	walk_down
# 53 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	walk_down
# 53 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	walk_down
# 53 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	walk_down
# 54 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	face_player
# 55 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	step_end

# 58 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
PlaceRora2:
# 59 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	walk_down
# 59 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	walk_down
# 59 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	walk_down
# 59 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	walk_down
# 59 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	walk_down
# 59 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	walk_down
# 60 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	face_player
# 61 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	step_end

# 64 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
RoraLeavesHozierHall:
# 65 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	walk_down
# 66 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	step_end

HozierHall_Nina::
# 96 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	lock
# 97 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	faceplayer
# 98 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	checktrainerflag TRAINER_HOZIER
	goto_if 1, HozierHall_Nina_2
# 102 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	msgbox NinaIntro_Hozier
# 103 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	trainerbattle_no_intro TRAINER_NINA, NinaDefeated_Hozier
# 104 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	msgbox NinaPostBattle_Hozier
HozierHall_Nina_1:
# 107 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	releaseall
	end

HozierHall_Nina_2:
# 99 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	msgbox NinaPostBattle_Hozier
	goto HozierHall_Nina_1


HozierHall_Steff::
# 130 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	lock
# 131 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	faceplayer
# 132 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	checktrainerflag TRAINER_HOZIER
	goto_if 1, HozierHall_Steff_2
# 136 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	msgbox SteffIntro_Hozier, MSGBOX_AUTOCLOSE
# 137 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	trainerbattle_no_intro TRAINER_STEFF, SteffDefeated_Hozier
# 138 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	msgbox SteffPostBattle_Hozier
HozierHall_Steff_1:
# 140 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	releaseall
	end

HozierHall_Steff_2:
# 133 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	msgbox SteffPostBattle_Hozier
	goto HozierHall_Steff_1


HozierHall_Wren::
# 160 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	lock
# 161 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	faceplayer
# 162 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	checktrainerflag TRAINER_HOZIER
	goto_if 1, HozierHall_Wren_2
# 166 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	msgbox WrenIntro_Hozier, MSGBOX_AUTOCLOSE
# 167 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	trainerbattle_no_intro TRAINER_WREN, WrenDefeated_Hozier
# 168 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	msgbox WrenPostBattle_Hozier
HozierHall_Wren_1:
# 170 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	releaseall
	end

HozierHall_Wren_2:
# 163 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	msgbox WrenPostBattle_Hozier
	goto HozierHall_Wren_1


WarpToHozierRoom_Text_0:
# 39 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	.string "Proceed to the challenge room?$"

RoraRecognisesPlayer::
# 69 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	.string "???: Hey! I recognise you! \p"
	.string "You were at the Two-Legged Dog, back \n"
	.string "in Prelude Town, right? \p"
	.string "AURORA: Sorry, I'm Aurora, I play the \n"
	.string "keys for The Last Dinner Party. \p"
	.string "We opened tonight's show for Hozier, \n"
	.string "I'm surprised we didn't see you there. $"

RoraStolenPokemon::
# 79 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	.string "…\p"
	.string "A stolen POKéMON? \p"
	.string "I see, well that was very brave of you \n"
	.string "to go rescue it by yourself! \p"
	.string "I think I see what Abi saw in you.\p"
	.string "We're not accepting any more challenges \n"
	.string "tonight, but I think Hozier is. \p"
	.string "If what you told me is true, then I think \n"
	.string "you have your chances. \p"
	.string "You could train with the other trainers \n"
	.string "in here, if you don't feel ready yet. \p"
	.string "Good luck!$"

NinaIntro_Hozier::
# 111 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	.string "NINA: The Last Dinner Party were so \n"
	.string "good! \p"
	.string "They were the best openers Hozier could \n"
	.string "ask for!$"

NinaDefeated_Hozier::
# 118 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	.string "It's already over?$"

NinaPostBattle_Hozier::
# 122 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	.string "NINA: I'm sad Hozier didn't play \n"
	.string "NFWMB. \p"
	.string "It's my favourite song of his! \p"
	.string "I know he never plays it but still…$"

SteffIntro_Hozier::
# 144 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	.string "STEFF: The show was so good, I sang so\n"
	.string "loud I almost passed out… \p"
	.string "But I would do it again! $"

SteffDefeated_Hozier::
# 150 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	.string "Put me back in it…$"

SteffPostBattle_Hozier::
# 154 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	.string "STEFF: I don't want to leave just yet. \p"
	.string "If I leave it'll be over for real.$"

WrenIntro_Hozier::
# 174 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	.string "WREN: Oh the show was so magical!\p"
	.string "I got to see two of my favourite \n"
	.string "artists in one night! \p"
	.string "I'm floating like a feather on \n"
	.string "the sea! $"

WrenDefeated_Hozier::
# 182 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	.string "Now I'm feeling as heavy as the world…$"

WrenPostBattle_Hozier::
# 186 "data/maps/CandlewaxCity_ConcertHall_Lobby/scripts.pory"
	.string "WREN: Hozier played my favourite \n"
	.string "song! \p"
	.string "I feel lighter than I have in so much \n"
	.string "time!$"

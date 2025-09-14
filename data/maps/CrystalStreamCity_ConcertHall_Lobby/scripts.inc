CrystalStreamCity_ConcertHall_Lobby_MapScripts::
	.byte 0


CSCCH_ChappellNotHere::
# 4 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	lock
# 5 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	faceplayer
# 6 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	msgbox CSCCH_ExplainChappellNotHere, MSGBOX_AUTOCLOSE
# 7 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 8 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	releaseall
	end


ChappellHall_Steff::
# 24 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	lock
# 25 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	faceplayer
# 26 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	checktrainerflag TRAINER_CHAPPELL
	goto_if 1, ChappellHall_Steff_2
# 30 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	msgbox SteffIntro_Chappell, MSGBOX_AUTOCLOSE
# 31 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	trainerbattle_no_intro TRAINER_STEFF_2, ChappellHall_Steff_Text_0
# 32 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	msgbox SteffPostBattle_Chappell, MSGBOX_AUTOCLOSE
ChappellHall_Steff_1:
# 34 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	releaseall
	end

ChappellHall_Steff_2:
# 27 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	msgbox SteffPostBattle_Chappell, MSGBOX_AUTOCLOSE
	goto ChappellHall_Steff_1


ChappellHall_Norah::
# 54 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	lock
# 55 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	faceplayer
# 56 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	checktrainerflag TRAINER_CHAPPELL
	goto_if 1, ChappellHall_Norah_2
# 60 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	msgbox NorahIntro_Chappell, MSGBOX_AUTOCLOSE
# 61 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	trainerbattle_no_intro TRAINER_NORAH, ChappellHall_Norah_Text_1
# 62 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	msgbox NorahPostBattle_Chappell, MSGBOX_AUTOCLOSE
ChappellHall_Norah_1:
# 64 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	releaseall
	end

ChappellHall_Norah_2:
# 57 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	msgbox ChappellHall_Norah_Text_0, MSGBOX_AUTOCLOSE
	goto ChappellHall_Norah_1


ChappellHall_Chantal::
# 80 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	lock
# 81 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	faceplayer
# 82 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	checktrainerflag TRAINER_CHAPPELL
	goto_if 1, ChappellHall_Chantal_2
# 86 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	msgbox ChantalIntro_Chappell, MSGBOX_AUTOCLOSE
# 87 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	trainerbattle_no_intro TRAINER_NORAH, ChappellHall_Chantal_Text_1
# 88 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	msgbox ChantalPostBattle_Chappell, MSGBOX_AUTOCLOSE
ChappellHall_Chantal_1:
# 90 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	releaseall
	end

ChappellHall_Chantal_2:
# 83 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	msgbox ChappellHall_Chantal_Text_0, MSGBOX_AUTOCLOSE
	goto ChappellHall_Chantal_1


ChappellHall_Steff_Text_0:
# 31 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	.string "How exciting!$"

ChappellHall_Norah_Text_0:
# 57 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	.string "NORAH: You won against Chappell Roan??\p"
	.string "Wow, you really slay!$"

ChappellHall_Norah_Text_1:
# 61 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	.string "Is the show starting yet?$"

ChappellHall_Chantal_Text_0:
# 83 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	.string "CHANTAL: You beat Chappell Roan?\p"
	.string "Did she give you an autograph?$"

ChappellHall_Chantal_Text_1:
# 87 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	.string "Would she sign it even if I lose?$"

CSCCH_ExplainChappellNotHere::
# 12 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	.string "Hi, if you're here to challenge Chappell \n"
	.string "Roan, I'm afraid she's unavailable at \l"
	.string "the moment. \p"
	.string "I'm sure why, she said something about\n"
	.string "investigating the Crystal Stream issue. \p"
	.string "She was headed to the Sunday Cave, to \n"
	.string "the north of Route 6 if you want to \l"
	.string "find her.$"

SteffIntro_Chappell::
# 38 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	.string "STEFF: Oh, {PLAYER}! \p"
	.string "I managed to get a ticket to see  \n"
	.string "Chappell Roan! \p"
	.string "How have you been since you challenged \n"
	.string "Hozier? \p"
	.string "Let's catch up over a battle! $"

SteffPostBattle_Chappell::
# 47 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	.string "STEFF: I'm so excited to see Chappell!\n"
	.string "Roan! \p"
	.string "I hope she plays Hot To Go! $"

NorahIntro_Chappell::
# 68 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	.string "NORAH: I can't wait to see Chappell! \p"
	.string "I travelled from pretty far away to \n"
	.string "see her! $"

NorahPostBattle_Chappell::
# 74 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	.string "NORAH: I'm so impatient, I just know\n"
	.string "the show's gonna be insane! $"

ChantalIntro_Chappell::
# 94 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	.string "CHANTAL: Do you think Chappell will \n"
	.string "sign my record if I win against her? $"

ChantalPostBattle_Chappell::
# 99 "data/maps/CrystalStreamCity_ConcertHall_Lobby/scripts.pory"
	.string "CHANTAL: I have way too many versions\n"
	.string "of Midwest Princess, but they're all \l"
	.string "worth it! $"

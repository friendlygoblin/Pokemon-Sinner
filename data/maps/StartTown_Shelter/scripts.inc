StartTown_Shelter_MapScripts::
	.byte 0


Shelter_Staff::
# 4 "data/maps/StartTown_Shelter/scripts.pory"
	lock
# 5 "data/maps/StartTown_Shelter/scripts.pory"
	compare VAR_BDI_DOG, 2
	goto_if_eq Shelter_Staff_2
# 16 "data/maps/StartTown_Shelter/scripts.pory"
	msgbox Shelter_Staff_Text_0
Shelter_Staff_1:
# 18 "data/maps/StartTown_Shelter/scripts.pory"
	release
	end

Shelter_Staff_2:
# 6 "data/maps/StartTown_Shelter/scripts.pory"
	special IsFennekinInParty
# 7 "data/maps/StartTown_Shelter/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Shelter_Staff_5
# 12 "data/maps/StartTown_Shelter/scripts.pory"
	msgbox Shelter_StaffRoraCalledNoFennekin, MSGBOX_AUTOCLOSE
	goto Shelter_Staff_1

Shelter_Staff_5:
# 8 "data/maps/StartTown_Shelter/scripts.pory"
	msgbox Shelter_StaffRoraCalled, MSGBOX_AUTOCLOSE
# 9 "data/maps/StartTown_Shelter/scripts.pory"
	call Shelter_PickFennekin
	goto Shelter_Staff_1


Shelter_PickFennekin::
# 23 "data/maps/StartTown_Shelter/scripts.pory"
	special ChoosePartyMon
# 24 "data/maps/StartTown_Shelter/scripts.pory"
	waitstate
# 25 "data/maps/StartTown_Shelter/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Shelter_PickFennekin_1
# 30 "data/maps/StartTown_Shelter/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 31 "data/maps/StartTown_Shelter/scripts.pory"
	compare VAR_RESULT, SPECIES_FENNEKIN
	goto_if_eq Shelter_PickFennekin_4
# 67 "data/maps/StartTown_Shelter/scripts.pory"
	msgbox Shelter_ThatsNotTheRightOne, MSGBOX_AUTOCLOSE
	return

Shelter_PickFennekin_1:
# 26 "data/maps/StartTown_Shelter/scripts.pory"
	setvar VAR_BDI_DOG, 3
# 27 "data/maps/StartTown_Shelter/scripts.pory"
	msgbox Shelter_StaffKeepFennekin, MSGBOX_AUTOCLOSE
	return

Shelter_PickFennekin_4:
# 32 "data/maps/StartTown_Shelter/scripts.pory"
	msgbox Shelter_CuteLittleOne
# 33 "data/maps/StartTown_Shelter/scripts.pory"
	dynmultipush Shelter_PickFennekin_Text_0, SPECIES_CHARMANDER
# 34 "data/maps/StartTown_Shelter/scripts.pory"
	dynmultipush Shelter_PickFennekin_Text_1, SPECIES_SQUIRTLE
# 35 "data/maps/StartTown_Shelter/scripts.pory"
	dynmultipush Shelter_PickFennekin_Text_2, SPECIES_CHIKORITA
# 36 "data/maps/StartTown_Shelter/scripts.pory"
	dynmultipush Shelter_PickFennekin_Text_3, SPECIES_CYNDAQUIL
# 37 "data/maps/StartTown_Shelter/scripts.pory"
	dynmultipush Shelter_PickFennekin_Text_4, SPECIES_TOTODILE
# 38 "data/maps/StartTown_Shelter/scripts.pory"
	dynmultipush Shelter_PickFennekin_Text_5, SPECIES_TREECKO
# 39 "data/maps/StartTown_Shelter/scripts.pory"
	dynmultipush Shelter_PickFennekin_Text_6, SPECIES_TURTWIG
# 40 "data/maps/StartTown_Shelter/scripts.pory"
	dynmultipush Shelter_PickFennekin_Text_7, SPECIES_CHIMCHAR
# 41 "data/maps/StartTown_Shelter/scripts.pory"
	dynmultipush Shelter_PickFennekin_Text_8, SPECIES_PIPLUP
# 42 "data/maps/StartTown_Shelter/scripts.pory"
	dynmultipush Shelter_PickFennekin_Text_9, SPECIES_SNIVY
# 43 "data/maps/StartTown_Shelter/scripts.pory"
	dynmultipush Shelter_PickFennekin_Text_10, SPECIES_OSHAWOTT
# 44 "data/maps/StartTown_Shelter/scripts.pory"
	dynmultipush Shelter_PickFennekin_Text_11, SPECIES_TEPIG
# 45 "data/maps/StartTown_Shelter/scripts.pory"
	dynmultipush Shelter_PickFennekin_Text_12, SPECIES_CHESPIN
# 46 "data/maps/StartTown_Shelter/scripts.pory"
	dynmultipush Shelter_PickFennekin_Text_13, SPECIES_FROAKIE
# 47 "data/maps/StartTown_Shelter/scripts.pory"
	dynmultipush Shelter_PickFennekin_Text_14, SPECIES_NONE
# 48 "data/maps/StartTown_Shelter/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 3, DYN_MULTICHOICE_CB_NONE
# 49 "data/maps/StartTown_Shelter/scripts.pory"
	compare VAR_RESULT, SPECIES_NONE
	goto_if_eq Shelter_PickFennekin_8
# 53 "data/maps/StartTown_Shelter/scripts.pory"
	special DeleteChosenPartyMon
# 54 "data/maps/StartTown_Shelter/scripts.pory"
	givemon VAR_RESULT, 5, gender = MON_MALE
# 55 "data/maps/StartTown_Shelter/scripts.pory"
	msgbox Shelter_StaffGoGetIt, MSGBOX_AUTOCLOSE
# 56 "data/maps/StartTown_Shelter/scripts.pory"
	applymovement 3, ShelterStaff_GoToBackAndReturn
# 57 "data/maps/StartTown_Shelter/scripts.pory"
	waitmovement 0
# 58 "data/maps/StartTown_Shelter/scripts.pory"
	playmoncry VAR_RESULT, CRY_MODE_NORMAL
# 59 "data/maps/StartTown_Shelter/scripts.pory"
	waitmoncry
# 60 "data/maps/StartTown_Shelter/scripts.pory"
	playfanfare MUS_CAUGHT
# 61 "data/maps/StartTown_Shelter/scripts.pory"
	msgbox Shelter_PickFennekin_Text_15
Shelter_PickFennekin_7:
# 64 "data/maps/StartTown_Shelter/scripts.pory"
	setvar VAR_BDI_DOG, 3
	return

Shelter_PickFennekin_8:
# 50 "data/maps/StartTown_Shelter/scripts.pory"
	msgbox Shelter_StaffKeepFennekin, MSGBOX_AUTOCLOSE
	goto Shelter_PickFennekin_7


# 72 "data/maps/StartTown_Shelter/scripts.pory"
ShelterStaff_GoToBackAndReturn:
# 73 "data/maps/StartTown_Shelter/scripts.pory"
	walk_right
# 74 "data/maps/StartTown_Shelter/scripts.pory"
	walk_up
# 75 "data/maps/StartTown_Shelter/scripts.pory"
	set_invisible
# 76 "data/maps/StartTown_Shelter/scripts.pory"
	delay_16
# 76 "data/maps/StartTown_Shelter/scripts.pory"
	delay_16
# 76 "data/maps/StartTown_Shelter/scripts.pory"
	delay_16
# 77 "data/maps/StartTown_Shelter/scripts.pory"
	set_visible
# 78 "data/maps/StartTown_Shelter/scripts.pory"
	walk_down
# 79 "data/maps/StartTown_Shelter/scripts.pory"
	walk_left
# 80 "data/maps/StartTown_Shelter/scripts.pory"
	face_down
# 81 "data/maps/StartTown_Shelter/scripts.pory"
	step_end

Shelter_Staff_Text_0:
# 16 "data/maps/StartTown_Shelter/scripts.pory"
	.string "I love my job here, I get to take care of\n"
	.string "cute POKéMON all day!$"

Shelter_PickFennekin_Text_0:
# 33 "data/maps/StartTown_Shelter/scripts.pory"
	.string "Charmander$"

Shelter_PickFennekin_Text_1:
# 34 "data/maps/StartTown_Shelter/scripts.pory"
	.string "Squirtle$"

Shelter_PickFennekin_Text_2:
# 35 "data/maps/StartTown_Shelter/scripts.pory"
	.string "Chikorita$"

Shelter_PickFennekin_Text_3:
# 36 "data/maps/StartTown_Shelter/scripts.pory"
	.string "Cyndaquil$"

Shelter_PickFennekin_Text_4:
# 37 "data/maps/StartTown_Shelter/scripts.pory"
	.string "Totodile$"

Shelter_PickFennekin_Text_5:
# 38 "data/maps/StartTown_Shelter/scripts.pory"
	.string "Treecko$"

Shelter_PickFennekin_Text_6:
# 39 "data/maps/StartTown_Shelter/scripts.pory"
	.string "Turtwig$"

Shelter_PickFennekin_Text_7:
# 40 "data/maps/StartTown_Shelter/scripts.pory"
	.string "Chimchar$"

Shelter_PickFennekin_Text_8:
# 41 "data/maps/StartTown_Shelter/scripts.pory"
	.string "Piplup$"

Shelter_PickFennekin_Text_9:
# 42 "data/maps/StartTown_Shelter/scripts.pory"
	.string "Snivy$"

Shelter_PickFennekin_Text_10:
# 43 "data/maps/StartTown_Shelter/scripts.pory"
	.string "Oshawott$"

Shelter_PickFennekin_Text_11:
# 44 "data/maps/StartTown_Shelter/scripts.pory"
	.string "Tepig$"

Shelter_PickFennekin_Text_12:
# 45 "data/maps/StartTown_Shelter/scripts.pory"
	.string "Chespin$"

Shelter_PickFennekin_Text_13:
# 46 "data/maps/StartTown_Shelter/scripts.pory"
	.string "Froakie$"

Shelter_PickFennekin_Text_14:
# 47 "data/maps/StartTown_Shelter/scripts.pory"
	.string "None, thanks!$"

Shelter_PickFennekin_Text_15:
# 61 "data/maps/StartTown_Shelter/scripts.pory"
	.string "Here you go, take care!$"

Shelter_StaffRoraCalled::
# 85 "data/maps/StartTown_Shelter/scripts.pory"
	.string "Hi {PLAYER}, I got a call from Aurora \n"
	.string "from The Last Dinner Party about you \l"
	.string "bringing a POKéMON here? \p"
	.string "Look, you can leave it here but we \n"
	.string "don't have endless space so you'll \l"
	.string "have to take another one with you. \p"
	.string "Now, show me the little one.$"

Shelter_StaffRoraCalledNoFennekin::
# 95 "data/maps/StartTown_Shelter/scripts.pory"
	.string "Hi {PLAYER}, I got a call from Aurora \n"
	.string "from The Last Dinner Party about you \l"
	.string "bringing a POKéMON here? \p"
	.string "Where is it, do you not have it with \n"
	.string "you?$"

Shelter_StaffKeepFennekin::
# 103 "data/maps/StartTown_Shelter/scripts.pory"
	.string "So you've decided to keep this \n"
	.string "POKéMON? \p"
	.string "I think it's a good idea, it'll be \n"
	.string "happy with you.$"

Shelter_ThatsNotTheRightOne::
# 110 "data/maps/StartTown_Shelter/scripts.pory"
	.string "Um, it doesn't look like what Aurora \n"
	.string "talked about. \p"
	.string "Are you sure that's the one?$"

Shelter_CuteLittleOne::
# 116 "data/maps/StartTown_Shelter/scripts.pory"
	.string "Aw, it's so cute! \p"
	.string "Okay, now which POKéMON will you take \n"
	.string "to make room here?$"

Shelter_StaffGoGetIt::
# 122 "data/maps/StartTown_Shelter/scripts.pory"
	.string "Okay, I'll go get him for you! $"

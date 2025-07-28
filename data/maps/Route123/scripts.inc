# 1 "data/maps/Route123/scripts.pory"

# 2 "data/maps/Route123/scripts.pory"
Route123_MapScripts::
# 3 "data/maps/Route123/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route123_OnTransition
# 4 "data/maps/Route123/scripts.pory"
	.byte 0
# 5 "data/maps/Route123/scripts.pory"

# 6 "data/maps/Route123/scripts.pory"
Route123_OnTransition:
# 7 "data/maps/Route123/scripts.pory"
	special SetRoute123Weather
# 8 "data/maps/Route123/scripts.pory"
	end
# 9 "data/maps/Route123/scripts.pory"

# 10 "data/maps/Route123/scripts.pory"
Route123_EventScript_GigaDrainGirl::
# 11 "data/maps/Route123/scripts.pory"
	lock
# 12 "data/maps/Route123/scripts.pory"
	faceplayer
# 13 "data/maps/Route123/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_GIGA_DRAIN, Route123_EventScript_ReceivedGigaDrain
# 14 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_LoveGrassMonsHaveAny, MSGBOX_DEFAULT
# 15 "data/maps/Route123/scripts.pory"
	special IsGrassTypeInParty
# 16 "data/maps/Route123/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route123_EventScript_NoGrassMons
# 17 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_YouLikeGrassMonsTooHaveThis, MSGBOX_DEFAULT
# 18 "data/maps/Route123/scripts.pory"
	giveitem ITEM_TM_GIGA_DRAIN
# 19 "data/maps/Route123/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 20 "data/maps/Route123/scripts.pory"
	setflag FLAG_RECEIVED_TM_GIGA_DRAIN
# 21 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CheckTreesWithMyGrassMon, MSGBOX_DEFAULT
# 22 "data/maps/Route123/scripts.pory"
	release
# 23 "data/maps/Route123/scripts.pory"
	end
# 24 "data/maps/Route123/scripts.pory"

# 25 "data/maps/Route123/scripts.pory"
Route123_EventScript_NoGrassMons::
# 26 "data/maps/Route123/scripts.pory"
	release
# 27 "data/maps/Route123/scripts.pory"
	end
# 28 "data/maps/Route123/scripts.pory"

# 29 "data/maps/Route123/scripts.pory"
Route123_EventScript_ReceivedGigaDrain::
# 30 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CheckTreesWithMyGrassMon, MSGBOX_DEFAULT
# 31 "data/maps/Route123/scripts.pory"
	release
# 32 "data/maps/Route123/scripts.pory"
	end
# 33 "data/maps/Route123/scripts.pory"

# 34 "data/maps/Route123/scripts.pory"
Route123_EventScript_RouteSign::
# 35 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_RouteSign, MSGBOX_SIGN
# 36 "data/maps/Route123/scripts.pory"
	end
# 37 "data/maps/Route123/scripts.pory"

# 38 "data/maps/Route123/scripts.pory"
Route123_EventScript_RouteSignMtPyre::
# 39 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_RouteSignMtPyre, MSGBOX_SIGN
# 40 "data/maps/Route123/scripts.pory"
	end
# 41 "data/maps/Route123/scripts.pory"

# 42 "data/maps/Route123/scripts.pory"
Route123_EventScript_BerryMastersHouseSign::
# 43 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_BerryMastersHouse, MSGBOX_SIGN
# 44 "data/maps/Route123/scripts.pory"
	end
# 45 "data/maps/Route123/scripts.pory"

# 46 "data/maps/Route123/scripts.pory"
Route123_EventScript_Wendy::
# 47 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_WENDY, Route123_Text_WendyIntro, Route123_Text_WendyDefeat
# 48 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_WendyPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/Route123/scripts.pory"
	end
# 50 "data/maps/Route123/scripts.pory"

# 51 "data/maps/Route123/scripts.pory"
Route123_EventScript_Braxton::
# 52 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_BRAXTON, Route123_Text_BraxtonIntro, Route123_Text_BraxtonDefeat
# 53 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_BraxtonPostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/Route123/scripts.pory"
	end
# 55 "data/maps/Route123/scripts.pory"

# 56 "data/maps/Route123/scripts.pory"
Route123_EventScript_Violet::
# 57 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_VioletPostBattle, MSGBOX_AUTOCLOSE
# 58 "data/maps/Route123/scripts.pory"
	end
# 59 "data/maps/Route123/scripts.pory"

# 60 "data/maps/Route123/scripts.pory"
Route123_EventScript_Cameron::
# 61 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_CAMERON_1, Route123_Text_CameronIntro, Route123_Text_CameronDefeat, Route123_EventScript_RegisterCameron
# 62 "data/maps/Route123/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 63 "data/maps/Route123/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route123_EventScript_RematchCameron
# 64 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronPostBattle, MSGBOX_DEFAULT
# 65 "data/maps/Route123/scripts.pory"
	release
# 66 "data/maps/Route123/scripts.pory"
	end
# 67 "data/maps/Route123/scripts.pory"

# 68 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterCameron::
# 69 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 70 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronRegister, MSGBOX_DEFAULT
# 72 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_CAMERON_1
# 73 "data/maps/Route123/scripts.pory"
	release
# 74 "data/maps/Route123/scripts.pory"
	end
# 75 "data/maps/Route123/scripts.pory"

# 76 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchCameron::
# 77 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_CAMERON_1, Route123_Text_CameronRematchIntro, Route123_Text_CameronRematchDefeat
# 78 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronPostRematch, MSGBOX_AUTOCLOSE
# 79 "data/maps/Route123/scripts.pory"
	end
# 80 "data/maps/Route123/scripts.pory"

# 81 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jacki::
# 82 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JACKI_1, Route123_Text_JackiIntro, Route123_Text_JackiDefeat, Route123_EventScript_RegisterJacki
# 83 "data/maps/Route123/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 84 "data/maps/Route123/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route123_EventScript_RematchJacki
# 85 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiPostBattle, MSGBOX_DEFAULT
# 86 "data/maps/Route123/scripts.pory"
	release
# 87 "data/maps/Route123/scripts.pory"
	end
# 88 "data/maps/Route123/scripts.pory"

# 89 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterJacki::
# 90 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 91 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 92 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiRegister, MSGBOX_DEFAULT
# 93 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_JACKI_1
# 94 "data/maps/Route123/scripts.pory"
	release
# 95 "data/maps/Route123/scripts.pory"
	end
# 96 "data/maps/Route123/scripts.pory"

# 97 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchJacki::
# 98 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_JACKI_1, Route123_Text_JackiRematchIntro, Route123_Text_JackiRematchDefeat
# 99 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiPostRematch, MSGBOX_AUTOCLOSE
# 100 "data/maps/Route123/scripts.pory"
	end
# 101 "data/maps/Route123/scripts.pory"

# 102 "data/maps/Route123/scripts.pory"
Route123_EventScript_Miu::
# 103 "data/maps/Route123/scripts.pory"
	trainerbattle_double TRAINER_MIU_AND_YUKI, Route123_Text_MiuIntro, Route123_Text_MiuDefeat, Route123_Text_MiuNotEnoughMons
# 104 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_MiuPostBattle, MSGBOX_AUTOCLOSE
# 105 "data/maps/Route123/scripts.pory"
	end
# 106 "data/maps/Route123/scripts.pory"

# 107 "data/maps/Route123/scripts.pory"
Route123_EventScript_Yuki::
# 108 "data/maps/Route123/scripts.pory"
	trainerbattle_double TRAINER_MIU_AND_YUKI, Route123_Text_YukiIntro, Route123_Text_YukiDefeat, Route123_Text_YukiNotEnoughMons
# 109 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_YukiPostBattle, MSGBOX_AUTOCLOSE
# 110 "data/maps/Route123/scripts.pory"
	end
# 111 "data/maps/Route123/scripts.pory"

# 112 "data/maps/Route123/scripts.pory"
Route123_EventScript_Kindra::
# 113 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_KINDRA, Route123_Text_KindraIntro, Route123_Text_KindraDefeat
# 114 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_KindraPostBattle, MSGBOX_AUTOCLOSE
# 115 "data/maps/Route123/scripts.pory"
	end
# 116 "data/maps/Route123/scripts.pory"

# 117 "data/maps/Route123/scripts.pory"
Route123_EventScript_Frederick::
# 118 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_FREDRICK, Route123_Text_FrederickIntro, Route123_Text_FrederickDefeat
# 119 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FrederickPostBattle, MSGBOX_AUTOCLOSE
# 120 "data/maps/Route123/scripts.pory"
	end
# 121 "data/maps/Route123/scripts.pory"

# 122 "data/maps/Route123/scripts.pory"
Route123_EventScript_Alberto::
# 123 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_ALBERTO, Route123_Text_AlbertoIntro, Route123_Text_AlbertoDefeat
# 124 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_AlbertoPostBattle, MSGBOX_AUTOCLOSE
# 125 "data/maps/Route123/scripts.pory"
	end
# 126 "data/maps/Route123/scripts.pory"

# 127 "data/maps/Route123/scripts.pory"
Route123_EventScript_Ed::
# 128 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_ED, Route123_Text_EdIntro, Route123_Text_EdDefeat
# 129 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_EdPostBattle, MSGBOX_AUTOCLOSE
# 130 "data/maps/Route123/scripts.pory"
	end
# 131 "data/maps/Route123/scripts.pory"

# 132 "data/maps/Route123/scripts.pory"
Route123_EventScript_Kayley::
# 133 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_KAYLEY, Route123_Text_KayleyIntro, Route123_Text_KayleyDefeat
# 134 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_KayleyPostBattle, MSGBOX_AUTOCLOSE
# 135 "data/maps/Route123/scripts.pory"
	end
# 136 "data/maps/Route123/scripts.pory"

# 137 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jonas::
# 138 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JONAS, Route123_Text_JonasIntro, Route123_Text_JonasDefeat
# 139 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JonasPostBattle, MSGBOX_AUTOCLOSE
# 140 "data/maps/Route123/scripts.pory"
	end
# 141 "data/maps/Route123/scripts.pory"

# 142 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jazmyn::
# 143 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JAZMYN, Route123_Text_JazmynIntro, Route123_Text_JazmynDefeat
# 144 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JazmynPostBattle, MSGBOX_AUTOCLOSE
# 145 "data/maps/Route123/scripts.pory"
	end
# 146 "data/maps/Route123/scripts.pory"

# 147 "data/maps/Route123/scripts.pory"
Route123_EventScript_Davis::
# 148 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_DAVIS, Route123_Text_DavisIntro, Route123_Text_DavisDefeat
# 149 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_DavisPostBattle, MSGBOX_AUTOCLOSE
# 150 "data/maps/Route123/scripts.pory"
	end
# 151 "data/maps/Route123/scripts.pory"

# 152 "data/maps/Route123/scripts.pory"
Route123_EventScript_Fernando::
# 153 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_FERNANDO_1, Route123_Text_FernandoIntro, Route123_Text_FernandoDefeat, Route123_EventScript_RegisterFernando
# 154 "data/maps/Route123/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 155 "data/maps/Route123/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route123_EventScript_RematchFernando
# 156 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoPostBattle, MSGBOX_DEFAULT
# 157 "data/maps/Route123/scripts.pory"
	release
# 158 "data/maps/Route123/scripts.pory"
	end
# 159 "data/maps/Route123/scripts.pory"

# 160 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterFernando::
# 161 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 162 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 163 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoRegister, MSGBOX_DEFAULT
# 164 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_FERNANDO_1
# 165 "data/maps/Route123/scripts.pory"
	release
# 166 "data/maps/Route123/scripts.pory"
	end
# 167 "data/maps/Route123/scripts.pory"

# 168 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchFernando::
# 169 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_FERNANDO_1, Route123_Text_FernandoRematchIntro, Route123_Text_FernandoRematchDefeat
# 170 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoPostRematch, MSGBOX_AUTOCLOSE
# 171 "data/maps/Route123/scripts.pory"
	end
# 172 "data/maps/Route123/scripts.pory"

# 173 "data/maps/Route123/scripts.pory"
Route123_Text_LoveGrassMonsHaveAny:
# 174 "data/maps/Route123/scripts.pory"
	.string "I love GRASS-type POKéMON!\p"
# 175 "data/maps/Route123/scripts.pory"
	.string "Do you have any GRASS-type POKéMON?$"
# 176 "data/maps/Route123/scripts.pory"

# 177 "data/maps/Route123/scripts.pory"
Route123_Text_YouLikeGrassMonsTooHaveThis:
# 178 "data/maps/Route123/scripts.pory"
	.string "Oh?\p"
# 179 "data/maps/Route123/scripts.pory"
	.string "You like GRASS-type POKéMON, too,\n"
# 180 "data/maps/Route123/scripts.pory"
	.string "don't you?\p"
# 181 "data/maps/Route123/scripts.pory"
	.string "I'm so happy, you can have this!\n"
# 182 "data/maps/Route123/scripts.pory"
	.string "It's a token of our friendship.$"
# 183 "data/maps/Route123/scripts.pory"

# 184 "data/maps/Route123/scripts.pory"
Route123_Text_CheckTreesWithMyGrassMon:
# 185 "data/maps/Route123/scripts.pory"
	.string "I check trees with my GRASS-type\n"
# 186 "data/maps/Route123/scripts.pory"
	.string "POKéMON. I'm like a tree doctor.$"
# 187 "data/maps/Route123/scripts.pory"

# 188 "data/maps/Route123/scripts.pory"
Route123_Text_RouteSign:
# 189 "data/maps/Route123/scripts.pory"
	.string "{RIGHT_ARROW} ROUTE 123\n"
# 190 "data/maps/Route123/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 118$"
# 191 "data/maps/Route123/scripts.pory"

# 192 "data/maps/Route123/scripts.pory"
Route123_Text_RouteSignMtPyre:
# 193 "data/maps/Route123/scripts.pory"
	.string "{UP_ARROW} MT. PYRE\n"
# 194 "data/maps/Route123/scripts.pory"
	.string "“Forbidden to the faint of heart.”$"
# 195 "data/maps/Route123/scripts.pory"

# 196 "data/maps/Route123/scripts.pory"
Route123_Text_BerryMastersHouse:
# 197 "data/maps/Route123/scripts.pory"
	.string "BERRY MASTER'S HOUSE$"

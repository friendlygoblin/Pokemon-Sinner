Route1_Bis_MapScripts::
	.byte 0


Route1_BugCatcher::
# 4 "data/maps/Route1_Bis/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 5 "data/maps/Route1_Bis/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end


Route12_MapScripts::
	.byte 0


Route12_VictoryRoadSign::
# 4 "data/maps/Route12/scripts.pory"
	lock
# 5 "data/maps/Route12/scripts.pory"
	msgbox Route12_VictoryRoadSign_Text_0, MSGBOX_AUTOCLOSE
# 6 "data/maps/Route12/scripts.pory"
	release
	end


Route12_VictoryRoadSign_Text_0:
# 5 "data/maps/Route12/scripts.pory"
	.string "{UP_ARROW}: Victory Road\p"
	.string "To Mirror City!$"

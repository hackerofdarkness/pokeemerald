Route124_MapScripts:: @ 81F656C
	map_script 3, Route124_MapScript1_1F6572
	.byte 0

Route124_MapScript1_1F6572: @ 81F6572
	checkflag FLAG_SYS_WEATHER_CTRL
	call_if 1, Route124_EventScript_27207A
	end

Route124_EventScript_1F657C:: @ 81F657C
	msgbox Route124_Text_1F6739, 3
	end

Route124_EventScript_1F6585:: @ 81F6585
	trainerbattle 0, TRAINER_SPENCER, 0, Route124_Text_2A09B1, Route124_Text_2A0A02
	msgbox Route124_Text_2A0A20, 6
	end

Route124_EventScript_1F659C:: @ 81F659C
	trainerbattle 0, TRAINER_ROLAND, 0, Route124_Text_2A0A84, Route124_Text_2A0ACC
	msgbox Route124_Text_2A0AD9, 6
	end

Route124_EventScript_1F65B3:: @ 81F65B3
	trainerbattle 2, TRAINER_JENNY_1, 0, Route124_Text_2A0B37, Route124_Text_2A0B7C, Route124_EventScript_1F65DF
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, 1
	goto_eq Route124_EventScript_1F65FE
	msgbox Route124_Text_2A0B9A, 4
	release
	end

Route124_EventScript_1F65DF:: @ 81F65DF
	special sub_80B4808
	waitmovement 0
	msgbox Route124_Text_2A0C14, 4
	setvar VAR_0x8004, 449
	special SetMatchCallRegisteredFlag
	setorcopyvar VAR_0x8000, 449
	callstd 8
	release
	end

Route124_EventScript_1F65FE:: @ 81F65FE
	trainerbattle 5, TRAINER_JENNY_1, 0, Route124_Text_2A0C60, Route124_Text_2A0CA0
	msgbox Route124_Text_2A0CBE, 6
	end

Route124_EventScript_1F6615:: @ 81F6615
	trainerbattle 0, TRAINER_GRACE, 0, Route124_Text_2A0D0A, Route124_Text_2A0D3D
	msgbox Route124_Text_2A0D66, 6
	end

Route124_EventScript_1F662C:: @ 81F662C
	trainerbattle 0, TRAINER_CHAD, 0, Route124_Text_2A0DA0, Route124_Text_2A0DFF
	msgbox Route124_Text_2A0E1E, 6
	end

Route124_EventScript_1F6643:: @ 81F6643
	trainerbattle 6, TRAINER_LILA_AND_ROY_1, 0, Route124_Text_2A0E87, Route124_Text_2A0EFE, Route124_Text_2A0F8C, Route124_EventScript_1F6673
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, 1
	goto_eq Route124_EventScript_1F668C
	msgbox Route124_Text_2A0F3A, 4
	release
	end

Route124_EventScript_1F6673:: @ 81F6673
	msgbox Route124_Text_2A109F, 4
	setvar VAR_0x8004, 687
	special SetMatchCallRegisteredFlag
	setorcopyvar VAR_0x8000, 687
	callstd 8
	release
	end

Route124_EventScript_1F668C:: @ 81F668C
	trainerbattle 7, TRAINER_LILA_AND_ROY_1, 0, Route124_Text_2A111E, Route124_Text_2A11B2, Route124_Text_2A1255
	msgbox Route124_Text_2A1203, 6
	end

Route124_EventScript_1F66A7:: @ 81F66A7
	trainerbattle 6, TRAINER_LILA_AND_ROY_1, 0, Route124_Text_2A0FD1, Route124_Text_2A1012, Route124_Text_2A10E5, Route124_EventScript_1F66D7
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, 1
	goto_eq Route124_EventScript_1F66F0
	msgbox Route124_Text_2A103E, 4
	release
	end

Route124_EventScript_1F66D7:: @ 81F66D7
	msgbox Route124_Text_2A109F, 4
	setvar VAR_0x8004, 687
	special SetMatchCallRegisteredFlag
	setorcopyvar VAR_0x8000, 687
	callstd 8
	release
	end

Route124_EventScript_1F66F0:: @ 81F66F0
	trainerbattle 7, TRAINER_LILA_AND_ROY_1, 0, Route124_Text_2A129A, Route124_Text_2A12DD, Route124_Text_2A1384
	msgbox Route124_Text_2A130F, 6
	end

Route124_EventScript_1F670B:: @ 81F670B
	trainerbattle 0, TRAINER_DECLAN, 0, Route124_Text_2A13BD, Route124_Text_2A142C
	msgbox Route124_Text_2A144F, 6
	end

Route124_EventScript_1F6722:: @ 81F6722
	trainerbattle 0, TRAINER_ISABELLA, 0, Route124_Text_2A148E, Route124_Text_2A14BC
	msgbox Route124_Text_2A14ED, 6
	end

Route124_Text_1F6739: @ 81F6739
	.string "HUNTER’S HOUSE$"


ZaurakCity_MapScripts::
	map_script 1, ZaurakCity_MapScript1
	.byte 0

ZaurakCity_MapScript1: @ 81E8EA8
	setflag FLAG_VISITED_ZAURAK_CITY
	checkflag FLAG_0x074
	call_if 1, ZaurakCity_EventScript_1E8ECC
	end

ZaurakCity_EventScript_1E8ECC:: @ 81E8ECC
	setvar VAR_0x4051, 1
	return
	
	
ZaurakCity_Sign1:: @ 81E8EEA
	msgbox ZaurakCity_Sign_Text1, 3
	end
	
ZaurakCity_Sign2:: @ 81E8EEA
	msgbox ZaurakCity_Sign_Text2, 3
	end	

ZaurakCity_Sign3:: @ 81E8EEA
	msgbox ZaurakCity_Sign_Text3, 3
	end	
	
ZaurakCity_Sign4:: @ 81E8EEA
	msgbox ZaurakCity_Sign_Text4, 3
	end	

ZaurakCity_Dialogue1:: @ 81E8EEA
	msgbox ZaurakCity_Dialogue_Text1, 2
	end

ZaurakCity_Dialogue2:: @ 81E8EEA
	msgbox ZaurakCity_Dialogue_Text2, 2
	end
	
ZaurakCity_Dialogue3:: @ 81E8EEA
	msgbox ZaurakCity_Dialogue_Text3, 2
	end

ZaurakCity_Dialogue4:: @ 81E8EEA
	msgbox ZaurakCity_Dialogue_Text4, 2
	end

ZaurakCity_Dialogue5:: @ 81E8EEA
	msgbox ZaurakCity_Dialogue_Text5, 2
	end

ZaurakCity_Dialogue6:: @ 81E8EEA
	msgbox ZaurakCity_Dialogue_Text6, 2
	end	

ZaurakCity_Dialogue7:: @ 81E8EEA
	msgbox ZaurakCity_Dialogue_Text7, 2
	end	

ZaurakCity_ForcebackText_Script::
	msgbox ZaurakCity_ForcebackText, 2
	applymovement 8, ZaurakCity_ForcebackLookDown
	end
	
ZaurakCity_ForceBackScript1:: @ 81E903F
	lockall
	applymovement 8, ZaurakCity_ForcebackLookDown
	applymovement 255, ZaurakCity_ForcebackMovementPlayer2
	waitmovement 0
	msgbox ZaurakCity_ForcebackText, 4
	closemessage
	applymovement 255, ZaurakCity_ForcebackMovementPlayer1
	waitmovement 0
	releaseall
	end	
	
ZaurakCity_ForceBackScript2:: @ 81E903F
	lockall
	applymovement 255, ZaurakCity_ForcebackMovementPlayer2
	applymovement 8, ZaurakCity_ForcebackMovementGuy
	waitmovement 0
	msgbox ZaurakCity_ForcebackText, 4
	closemessage
	applymovement 8, ZaurakCity_ForcebackMovementGuyBackToPos
	applymovement 255, ZaurakCity_ForcebackMovementPlayer1
	waitmovement 0
	releaseall
	end		

ZaurakCity_ForcebackMovementPlayer1: @ 81E9182
	walk_left
	step_end	
	
ZaurakCity_ForcebackMovementPlayer2: @ 81E9182
	face_up
	step_end	

 	
ZaurakCity_ForcebackLookDown:
	
ZaurakCity_ForcebackMovementGuy: @ 81E9185
	walk_down
	step_end

ZaurakCity_ForcebackMovementGuyBackToPos: @ 81E918B
	walk_up
	face_down
	step_end	
	
ZaurakCity_Sign_Text1: @ 81E94DA
	.string "Zaurak Hospital\n"
	.string "“Elara’s finest doctors & nurses.”$"
	
ZaurakCity_Sign_Text2: @ 81E94DA
	.string "“Zaurak City Apartment Complex”$"

ZaurakCity_Sign_Text3: @ 81E94DA
	.string "Zaurak City Hotel\n"
	.string "“Stay with us, and feel at home.”$"
	
ZaurakCity_Sign_Text4: @ 81E94DA
	.string "Zaurak City\n"
	.string "“The city of modern medicine.”$"	
	
ZaurakCity_Dialogue_Text1:
	.string "Hey. If you are going into the\n"
	.string "restaurant. Don’t tell Rordon\p"
	.string "that I’m out here.$"
	
ZaurakCity_Dialogue_Text2:
	.string "I lost my keys. I can’t get back\n"
	.string "into my apartment now.$"
	
ZaurakCity_Dialogue_Text3:
	.string "I’ve lived in Zaurak City for over 50\n"
	.string "years. Watching the city grow. And the \p"
	.string "young folk, like you, work for the future.\n"
	.string "It warms my old heart.$"
	
ZaurakCity_Dialogue_Text4:	
	.string "My sister’s visit to the doctor\n"
	.string "went better than I expected.$"
	
ZaurakCity_Dialogue_Text5:
	.string "Hi {PLAYER}. Are your studies going well?$"

ZaurakCity_Dialogue_Text6:
	.string "Doctor Tennant gave me some candy\n"
	.string "for being nice during my examination.$"
	
ZaurakCity_Dialogue_Text7:	
	.string "Man! I ate so much. Chef Rordon’s \n"
	.string "food is absolutely amazing.$"
	
ZaurakCity_ForcebackText: @ 81E9313
	.string "Doctor Tennant told me he needs you\n"
	.string "to come by his office as soon as\p"
	.string "possible. You better go talk to him.$"
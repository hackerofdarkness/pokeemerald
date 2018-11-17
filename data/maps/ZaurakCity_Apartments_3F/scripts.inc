ZaurakCity_Apartments_3F_MapScripts::
	.byte 0

ZaurakCity_Apartment_Sign1:: @ 81E8EEA
	lockall
	msgbox ZaurakCity_Apartment_Sign_Text1, 3
	releaseall
	end

ZaurakCity_Apartment_Sign2:: @ 81E8EEA
	lockall
	checkplayergender
	compare VAR_RESULT, 0
	call_if 1, ZaurakCity_Apartment_Sign_Female
	compare VAR_RESULT, 1
	call_if 1, ZaurakCity_Apartment_Sign_Male
	releaseall
	end
	
ZaurakCity_Apartment_Sign_Female::
	lockall
	msgbox ZaurakCity_Apartment_Sign_Text2_F, 3
	releaseall
	end

ZaurakCity_Apartment_Sign_Male::
	lockall
	msgbox ZaurakCity_Apartment_Sign_Text2_M, 3
	releaseall
	end	
	
ZaurakCity_Apartment_Sign3:: @ 81E8EEA
	lockall
	msgbox ZaurakCity_Apartment_Sign_Text3, 3
	releaseall
	end	
	
ZaurakCity_Apartment_Sign_Text1:
	.string "{PLAYER}’s Apartment.$"
	
ZaurakCity_Apartment_Sign_Text2_F:
	.string "Kate’s Apartment.$"

ZaurakCity_Apartment_Sign_Text2_M:
	.string "Casper’s Apartment.$"	
	
ZaurakCity_Apartment_Sign_Text3:
	.string "Lukas’ Apartment.$"	
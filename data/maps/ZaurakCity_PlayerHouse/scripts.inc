ZaurakCity_PlayerHouse_MapScripts::
	map_script 1, ZaurakCity_PlayerHouse_ForceBack_MapScript1
	
	.byte 0

ZaurakCity_PlayerHouse_ForceBack_MapScript1::
	checkflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG  
	call_if 1, ZaurakCity_PlayerHouse_LiftForceBack
	return
	
ZaurakCity_PlayerHouse_Letter:: @ 81E8ECC
	lockall
	msgbox ZaurakCity_Playerhouse_LetterText, 3
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
	goto ZaurakCity_PlayerHouse_LiftForceBack
	releaseall
	end
	
ZaurakCity_PlayerHouse_Fridge::
	msgbox ZaurakCity_PlayerHouse_FridgeText
	end
	
ZaurakCity_PlayerHouse_Bookshelf::
	msgbox ZaurakCity_PlayerHouse_BookshelfText
	end
	
	

	
ZaurakCity_PlayerHouse_ForceBack::
	lockall
	msgbox ZaurakCity_PlayerHouse_ForceBackText, 2
	closemessage
	applymovement 255, ZaurakCity_PlayerHouse_ForcebackPlayer
	waitmovement 0
	releaseall
	end

ZaurakCity_PlayerHouse_LiftForceBack::
	setvar VAR_TEMP_0, 1
	end
	
ZaurakCity_PlayerHouse_ForcebackPlayer::
	walk_up
	step_end
	
ZaurakCity_PlayerHouse_ForceBackText:
	.string "I should read the letter on the desk.$"
	
ZaurakCity_Playerhouse_LetterText:
	.string "Dear {PLAYER}.\p"
	.string	"You have done well in your finals, and\n"
	.string	"I can inform you that you’ve passed,\p"
	.string "You have but one task before you are\n" 
	.string "a fully fledged doctor.  Come see me\p"
	.string "at my office in the hospital at your \n"
	.string "earliest convenience.\p"
	.string "Doctor Matt C. Tennant.$"
	
ZaurakCity_PlayerHouse_BookshelfText:
	.string "There are several books about medicine, \n"
	.string "anatomy and even some fantasy books.$"
	end	

ZaurakCity_PlayerHouse_FridgeText:
	.string "It’s full of ice coffee and instameals.$"
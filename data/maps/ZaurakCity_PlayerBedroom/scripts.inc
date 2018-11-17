ZaurakCity_PlayerBedroom_MapScripts::
	map_script 1, ZaurakCity_PlayerBedroom_MapScript1
	.byte 0
	
ZaurakCity_PlayerBedroom_MapScript1::
	checkflag FLAG_SYS_B_DASH 
	call_if 0, ZaurakCity_PlayerBedroom_AllowRun
	return

ZaurakCity_PlayerBedroom_AllowRun::
	setflag FLAG_SYS_B_DASH 
	end
	
ZaurakCity_PlayerBedroom_Drawer::
	msgbox ZaurakCity_PlayerBedroom_DrawerText, 3
	end
	
ZaurakCity_PlayerBedroom_Cupboard::
	msgbox ZaurakCity_PlayerBedroom_CupboardText, 3
	end

ZaurakCity_PlayerBedroom_Clock::
	msgbox ZaurakCity_PlayerBedroom_ClockText, 3
	end
	
ZaurakCity_PlayerBedroom_Console::
	msgbox ZaurakCity_PlayerBedroom_ConsoleText, 3
	end

ZaurakCity__PlayerBedroom_PC:: @ 81E8EEA
	msgbox ZaurakCity_PlayerBedroom_PCText, 3
	end
	
ZaurakCity__PlayerBedroom_Book:: @ 81E8EEA
	msgbox ZaurakCity_PlayerBedroom_BookText, 3
	end
	
ZaurakCity_PlayerBedroom_DrawerText:
	.string "It’s full of clothes.$"
		
ZaurakCity_PlayerBedroom_CupboardText:
	.string "Lots of papers and books are\n"
	.string "stuffed in here.$"
	
ZaurakCity_PlayerBedroom_ClockText:
	.string "Broken. For now.$"
	
ZaurakCity_PlayerBedroom_ConsoleText:
	.string "A gamecube. You’ve probably played this\n"
	.string "for hundreds of hours at this point.$"
	
ZaurakCity_PlayerBedroom_BookText:
	.string "’’The Human Anatomy’’\n"
	.string "It’s one of your many schoolbooks.$"

ZaurakCity_PlayerBedroom_PCText:
	.string "It’s a computer.$"
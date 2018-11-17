ZaurakCity_Hospital_2F_MapScripts::
	.byte 0

ZaurakCity_Hospital_2F_Sign::
	msgbox ZaurakCity_Hospital_2F_Sign1Text2, 3
	end		

ZaurakCity_Hospital_2F_Nurse::
	msgbox ZaurakCity_Hospital_2F_NurseText, 2
	face_down
	end

ZaurakCity_Hospital_2F_ForceBack::
	msgbox ZaurakCity_Hospital_2F_NurseText, 2
	end

ZaurakCity_Hospital_2F_ReturnToPos:
	walk_up
	face_right
	step_end
	
ZaurakCity_Hospital_2F_Sign1Text2:
	.string "2nd Floor\n"
	.string "Surgery and Operations.$"
	
ZaurakCity_Hospital_2F_NurseText: 
	.string "You can’t go in here.$"
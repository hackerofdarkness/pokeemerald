ZaurakCity_Hospital_4F_MapScripts::
	.byte 0

ZaurakCity_Hospital_4F_Floor::
	msgbox ZaurakCity_Hospital_4F_FloorText, 3
	end
	
ZaurakCity_Hospital_4F_DoNotDisturb::
	msgbox ZaurakCity_Hospital_4F_DNDText, 2
	end

ZaurakCity_Hospital_4F_Dialogue1::
	msgbox ZaurakCity_Hospital_4F_DialogueText1, 2
	end
	
ZaurakCity_Hospital_4F_Dialogue2::
	msgbox ZaurakCity_Hospital_4F_DialogueText2, 2
	applymovement 3, ZaurakCity_Hospital_4F_LookLeft
	end

ZaurakCity_Hospital_4F_Dialogue3::
	msgbox ZaurakCity_Hospital_4F_DialogueText3, 2
	applymovement 2, ZaurakCity_Hospital_4F_LookLeft
	end	

ZaurakCity_Hospital_4F_LookLeft:
	face_right
	step_end
	
ZaurakCity_Hospital_4F_DNDText:
	.string "I shouldn’t disturb the doctors.$"
	
ZaurakCity_Hospital_4F_FloorText:
	.string "4th Floor\p"
	.string "Consultations.$"
	
ZaurakCity_Hospital_4F_DialogueText1:
	.string "Hello {PLAYER}. Tennant is still \n"
	.string "waiting for you on the next floor.$"
	
ZaurakCity_Hospital_4F_DialogueText2:
	.string "I came here with my son for his check-up.$"

ZaurakCity_Hospital_4F_DialogueText3:
	.string "I still don’t like going for check-ups.$"

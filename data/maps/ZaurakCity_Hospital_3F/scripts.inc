ZaurakCity_Hospital_3F_MapScripts::
	.byte 0
	
ZaurakCity_Hospital_3F_Sign::
	msgbox ZaurakCity_Hospital_3F_SignText, 2
	end

ZaurakCity_Hospital_3F_Book1::
	msgbox ZaurakCity_Hospital_3F_BookText1, 3
	end

ZaurakCity_Hospital_3F_Book2::
	msgbox ZaurakCity_Hospital_3F_BookText2, 3
	end
	
ZaurakCity_Hospital_3F_Kaylee::
	msgbox ZaurakCity_Hospital_3F_KayleeDialogue, 2
	applymovement 3, ZaurakCity_Hospital_3F_FaceRight
	end

ZaurakCity_Hospital_3F_Oliver::
	msgbox ZaurakCity_Hospital_3F_OliverDialogue, 2
	applymovement 4, ZaurakCity_Hospital_3F_FaceLeft
	end
	
ZaurakCity_Hospital_3F_Marie::
	msgbox ZaurakCity_Hospital_3F_MarieDialogue, 2
	end

ZaurakCity_Hospital_3F_Eddie::
	msgbox ZaurakCity_Hospital_3F_EddieDialogue, 2
	applymovement 2, ZaurakCity_Hospital_3F_FaceDown
	end	

ZaurakCity_Hospital_3F_FaceRight:
	face_right
	step_end

ZaurakCity_Hospital_3F_FaceDown:
	face_down
	step_end
	
ZaurakCity_Hospital_3F_FaceLeft:
	face_left
	step_end
	
ZaurakCity_Hospital_3F_SignText:
	.string "3rd Floor\n"
	.string "Classrooms.$"
	
ZaurakCity_Hospital_3F_KayleeDialogue:
	.string "Oliver seems very excited, even though\n"
	.string "he didn’t pass.$"

ZaurakCity_Hospital_3F_OliverDialogue:
	.string "EXAM’S OVER, WOOOOOOOOO!$"

ZaurakCity_Hospital_3F_MarieDialogue:	
	.string "Congratulations with your exam.\n"
	.string "It has been fun teaching you guys.$"

ZaurakCity_Hospital_3F_EddieDialogue:
	.string "I heard the last exam is even tougher.\n"
	.string "Not sure if I’m up for it.$"
	
ZaurakCity_Hospital_3F_BookText1:
	.string "I think this is Oliver’s textbook.$"

ZaurakCity_Hospital_3F_BookText2:
	.string "There a newspaper clipout in here. \p"
	.string "BEWARE!\n" 
	.string "Tall grass holds agitated Pokémon.$"	
	
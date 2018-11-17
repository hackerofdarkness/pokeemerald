ZaurakCity_Hospital_1F_MapScripts::
	.byte 0

ZaurakCity_Hospital_1F_Sign::
	msgbox ZaurakCity_Hospital_1F_SignText, 3
	end	

ZaurakCity_Hospital_1F_Dialogue1::
	msgbox ZaurakCity_Hospital_1F_DialogueText1, 2
	end	

ZaurakCity_Hospital_1F_Dialogue2::
	msgbox ZaurakCity_Hospital_1F_DialogueText2, 2
	end		
	
ZaurakCity_Hospital_1F_Dialogue3::
	msgbox ZaurakCity_Hospital_1F_DialogueText3, 2
	applymovement 4, ZaurakCity_Hospital_1F_LookUp
	end

ZaurakCity_Hospital_1F_Dialogue4::
	msgbox ZaurakCity_Hospital_1F_DialogueText4, 2
	applymovement 5, ZaurakCity_Hospital_1F_LookUp
	end	
	
ZaurakCity_Hospital_1F_Heal::	
	setvar VAR_0x800B, 1
	call OldaleTown_PokemonCenter_1F_EventScript_27191E
	waitmessage
	waitbuttonpress
	release
	end
	
ZaurakCity_Hospital_1F_LookUp:
	face_up
	step_end
	
ZaurakCity_Hospital_1F_SignText:
	.string "1st Floor\n"
	.string "Emergency Room$"
	
ZaurakCity_Hospital_1F_DialogueText1:
	.string "Hey {PLAYER}. Dr. Tennant is on\n"
	.string "the top floor waiting for you.$"
	
ZaurakCity_Hospital_1F_DialogueText2:
	.string "I heard your exam went well.\p"
	.string "Won’t be long before you’ll be helping\n"
	.string "us out in the Emergency Room.$"
	
ZaurakCity_Hospital_1F_DialogueText3:	
	.string "I’m using the PC. Wait your turn!$"
	
	ZaurakCity_Hospital_1F_DialogueText4:	
	.string "The nurse is treating my Pokémon.\n"
	.string "You’ll have to wait.$"
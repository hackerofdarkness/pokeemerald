ZaurakCity_HospitalElevator_MapBorder::
	.incbin "data/layouts/ZaurakCity_HospitalElevator/border.bin"

ZaurakCity_HospitalElevator_MapBlockdata::
	.incbin "data/layouts/ZaurakCity_HospitalElevator/map.bin"

	.align 2
ZaurakCity_HospitalElevator_Layout::
	.4byte 5
	.4byte 6
	.4byte ZaurakCity_HospitalElevator_MapBorder
	.4byte ZaurakCity_HospitalElevator_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_BattleFrontier


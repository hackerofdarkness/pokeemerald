ZaurakCity_Hospital_4F_MapBorder::
	.incbin "data/layouts/ZaurakCity_Hospital_4F/border.bin"

ZaurakCity_Hospital_4F_MapBlockdata::
	.incbin "data/layouts/ZaurakCity_Hospital_4F/map.bin"

	.align 2
ZaurakCity_Hospital_4F_Layout::
	.4byte 24
	.4byte 10
	.4byte ZaurakCity_Hospital_4F_MapBorder
	.4byte ZaurakCity_Hospital_4F_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_Facility


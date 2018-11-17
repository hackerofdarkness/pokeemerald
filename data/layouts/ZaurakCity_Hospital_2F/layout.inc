ZaurakCity_Hospital_2F_MapBorder::
	.incbin "data/layouts/ZaurakCity_Hospital_2F/border.bin"

ZaurakCity_Hospital_2F_MapBlockdata::
	.incbin "data/layouts/ZaurakCity_Hospital_2F/map.bin"

	.align 2
ZaurakCity_Hospital_2F_Layout::
	.4byte 24
	.4byte 10
	.4byte ZaurakCity_Hospital_2F_MapBorder
	.4byte ZaurakCity_Hospital_2F_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_Facility


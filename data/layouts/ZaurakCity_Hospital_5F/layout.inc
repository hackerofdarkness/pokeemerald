ZaurakCity_Hospital_5F_MapBorder::
	.incbin "data/layouts/ZaurakCity_Hospital_5F/border.bin"

ZaurakCity_Hospital_5F_MapBlockdata::
	.incbin "data/layouts/ZaurakCity_Hospital_5F/map.bin"

	.align 2
ZaurakCity_Hospital_5F_Layout::
	.4byte 24
	.4byte 10
	.4byte ZaurakCity_Hospital_5F_MapBorder
	.4byte ZaurakCity_Hospital_5F_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_Facility


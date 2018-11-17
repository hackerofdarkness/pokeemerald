ZaurakCity_MapBorder::
	.incbin "data/layouts/ZaurakCity/border.bin"

ZaurakCity_MapBlockdata::
	.incbin "data/layouts/ZaurakCity/map.bin"

	.align 2
ZaurakCity_Layout::
	.4byte 38
	.4byte 38
	.4byte ZaurakCity_MapBorder
	.4byte ZaurakCity_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Rustboro


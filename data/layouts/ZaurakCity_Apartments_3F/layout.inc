ZaurakCity_Apartments_3F_MapBorder::
	.incbin "data/layouts/ZaurakCity_Apartments_3F/border.bin"

ZaurakCity_Apartments_3F_MapBlockdata::
	.incbin "data/layouts/ZaurakCity_Apartments_3F/map.bin"

	.align 2
ZaurakCity_Apartments_3F_Layout::
	.4byte 12
	.4byte 8
	.4byte ZaurakCity_Apartments_3F_MapBorder
	.4byte ZaurakCity_Apartments_3F_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding


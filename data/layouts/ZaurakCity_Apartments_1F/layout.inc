ZaurakCity_Apartments_1F_MapBorder::
	.incbin "data/layouts/ZaurakCity_Apartments_1F/border.bin"

ZaurakCity_Apartments_1F_MapBlockdata::
	.incbin "data/layouts/ZaurakCity_Apartments_1F/map.bin"

	.align 2
ZaurakCity_Apartments_1F_Layout::
	.4byte 12
	.4byte 8
	.4byte ZaurakCity_Apartments_1F_MapBorder
	.4byte ZaurakCity_Apartments_1F_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding


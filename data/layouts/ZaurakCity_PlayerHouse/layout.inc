ZaurakCity_PlayerHouse_MapBorder::
	.incbin "data/layouts/ZaurakCity_PlayerHouse/border.bin"

ZaurakCity_PlayerHouse_MapBlockdata::
	.incbin "data/layouts/ZaurakCity_PlayerHouse/map.bin"

	.align 2
ZaurakCity_PlayerHouse_Layout::
	.4byte 10
	.4byte 10
	.4byte ZaurakCity_PlayerHouse_MapBorder
	.4byte ZaurakCity_PlayerHouse_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_BrendansMaysHouse


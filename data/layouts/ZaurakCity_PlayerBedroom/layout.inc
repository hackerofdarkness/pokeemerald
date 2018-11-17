ZaurakCity_PlayerBedroom_MapBorder::
	.incbin "data/layouts/ZaurakCity_PlayerBedroom/border.bin"

ZaurakCity_PlayerBedroom_MapBlockdata::
	.incbin "data/layouts/ZaurakCity_PlayerBedroom/map.bin"

	.align 2
ZaurakCity_PlayerBedroom_Layout::
	.4byte 9
	.4byte 8
	.4byte ZaurakCity_PlayerBedroom_MapBorder
	.4byte ZaurakCity_PlayerBedroom_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_BrendansMaysHouse


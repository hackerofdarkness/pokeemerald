NewMap8_MapBorder::
	.incbin "data/layouts/NewMap8/border.bin"

NewMap8_MapBlockdata::
	.incbin "data/layouts/NewMap8/map.bin"

	.align 2
NewMap8_Layout::
	.4byte 20
	.4byte 20
	.4byte NewMap8_MapBorder
	.4byte NewMap8_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg


NewMap5_MapBorder::
	.incbin "data/layouts/NewMap5/border.bin"

NewMap5_MapBlockdata::
	.incbin "data/layouts/NewMap5/map.bin"

	.align 2
NewMap5_Layout::
	.4byte 20
	.4byte 20
	.4byte NewMap5_MapBorder
	.4byte NewMap5_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg


NewMap6_MapBorder::
	.incbin "data/layouts/NewMap6/border.bin"

NewMap6_MapBlockdata::
	.incbin "data/layouts/NewMap6/map.bin"

	.align 2
NewMap6_Layout::
	.4byte 20
	.4byte 20
	.4byte NewMap6_MapBorder
	.4byte NewMap6_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg


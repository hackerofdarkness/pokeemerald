NewMap9_MapBorder::
	.incbin "data/layouts/NewMap9/border.bin"

NewMap9_MapBlockdata::
	.incbin "data/layouts/NewMap9/map.bin"

	.align 2
NewMap9_Layout::
	.4byte 20
	.4byte 20
	.4byte NewMap9_MapBorder
	.4byte NewMap9_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg


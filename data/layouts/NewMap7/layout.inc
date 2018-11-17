NewMap7_MapBorder::
	.incbin "data/layouts/NewMap7/border.bin"

NewMap7_MapBlockdata::
	.incbin "data/layouts/NewMap7/map.bin"

	.align 2
NewMap7_Layout::
	.4byte 20
	.4byte 20
	.4byte NewMap7_MapBorder
	.4byte NewMap7_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg


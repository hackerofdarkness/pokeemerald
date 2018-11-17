ZaurakCity_Hospital_3F_MapBorder::
	.incbin "data/layouts/ZaurakCity_Hospital_3F/border.bin"

ZaurakCity_Hospital_3F_MapBlockdata::
	.incbin "data/layouts/ZaurakCity_Hospital_3F/map.bin"

	.align 2
ZaurakCity_Hospital_3F_Layout::
	.4byte 24
	.4byte 10
	.4byte ZaurakCity_Hospital_3F_MapBorder
	.4byte ZaurakCity_Hospital_3F_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_PokemonSchool


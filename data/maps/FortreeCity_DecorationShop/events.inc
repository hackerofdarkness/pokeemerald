FortreeCity_DecorationShop_EventObjects: @ 85310B0
	object_event 1, EVENT_OBJ_GFX_POKEFAN_M, 0, 6, 5, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, 0, 0, FortreeCity_DecorationShop_EventScript_21800E, 0
	object_event 2, EVENT_OBJ_GFX_GIRL_3, 0, 0, 4, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, FortreeCity_DecorationShop_EventScript_218017, 0
	object_event 3, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 1, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, FortreeCity_DecorationShop_EventScript_218020, 0
	object_event 4, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 6, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, FortreeCity_DecorationShop_EventScript_21804C, 0

FortreeCity_DecorationShop_MapWarps: @ 8531110
	warp_def 3, 5, 0, 8, MAP_FORTREE_CITY
	warp_def 4, 5, 0, 8, MAP_FORTREE_CITY

FortreeCity_DecorationShop_MapEvents:: @ 8531120
	map_events FortreeCity_DecorationShop_EventObjects, FortreeCity_DecorationShop_MapWarps, 0x0, 0x0


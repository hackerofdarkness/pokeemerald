ZaurakCity_EventObjects::
	object_event 1, EVENT_OBJ_GFX_COOK, 0, 7, 7, 3, MOVEMENT_TYPE_NONE, 0, 0, FALSE, 0, ZaurakCity_Dialogue1, 0
	object_event 2, EVENT_OBJ_GFX_MAN_4, 0, 27, 11, 3, MOVEMENT_TYPE_NONE, 0, 0, FALSE, 0, ZaurakCity_Dialogue2, 0
	object_event 3, EVENT_OBJ_GFX_EXPERT_M, 0, 22, 21, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, FALSE, 0, ZaurakCity_Dialogue3, 0
	object_event 4, EVENT_OBJ_GFX_GIRL_1, 0, 17, 18, 3, MOVEMENT_TYPE_NONE, 0, 0, FALSE, 0, ZaurakCity_Dialogue4, 0
	object_event 5, EVENT_OBJ_GFX_WOMAN_2, 0, 18, 22, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 0, 0, FALSE, 0, ZaurakCity_Dialogue5, 0
	object_event 6, EVENT_OBJ_GFX_LITTLE_GIRL, 0, 18, 18, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, FALSE, 0, ZaurakCity_Dialogue6, 0
	object_event 7, EVENT_OBJ_GFX_FAT_MAN, 0, 25, 26, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, FALSE, 0, ZaurakCity_Dialogue7, 0
	object_event 8, EVENT_OBJ_GFX_MAN_2, 0, 37, 20, 3, MOVEMENT_TYPE_NONE, 0, 0, FALSE, 0, ZaurakCity_ForcebackText_Script, 0

ZaurakCity_MapWarps::
	warp_def 4, 7, 3, 0, MAP_ZAURAK_CITY
	warp_def 10, 7, 3, 0, MAP_ZAURAK_CITY
	warp_def 11, 14, 3, 0, MAP_ZAURAK_CITY
	warp_def 20, 14, 3, 0, MAP_ZAURAK_CITY_HOSPITAL_1F
	warp_def 31, 11, 3, 0, MAP_ZAURAK_CITY_APARTMENTS_1F
	warp_def 6, 29, 3, 0, MAP_ZAURAK_CITY
	warp_def 27, 26, 3, 0, MAP_ZAURAK_CITY
	warp_def 32, 26, 3, 0, MAP_ZAURAK_CITY

ZaurakCity_MapCoordEvents::
	coord_event 37, 21, 3, VAR_0x4051, 0, ZaurakCity_ForceBackScript1
	coord_event 37, 22, 3, VAR_0x4051, 0, ZaurakCity_ForceBackScript2

ZaurakCity_MapBGEvents::
	bg_event 24, 14, 3, BG_EVENT_PLAYER_FACING_ANY, ZaurakCity_Sign1
	bg_event 28, 12, 3, BG_EVENT_PLAYER_FACING_ANY, ZaurakCity_Sign2
	bg_event 12, 29, 3, BG_EVENT_PLAYER_FACING_ANY, ZaurakCity_Sign3
	bg_event 34, 19, 3, BG_EVENT_PLAYER_FACING_ANY, ZaurakCity_Sign4

ZaurakCity_MapEvents::
	map_events ZaurakCity_EventObjects, ZaurakCity_MapWarps, ZaurakCity_MapCoordEvents, ZaurakCity_MapBGEvents

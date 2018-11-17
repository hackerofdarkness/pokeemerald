ZaurakCity_Hospital_3F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_TEALA, 0, 9, 2, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, FALSE, 0, ZaurakCity_Hospital_3F_Marie, 0
	object_event 2, EVENT_OBJ_GFX_BOY_3, 0, 3, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, ZaurakCity_Hospital_3F_Eddie, 0
	object_event 3, EVENT_OBJ_GFX_GIRL_2, 0, 2, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, FALSE, 0, ZaurakCity_Hospital_3F_Kaylee, 0
	object_event 4, EVENT_OBJ_GFX_BOY_2, 0, 4, 3, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, FALSE, 0, ZaurakCity_Hospital_3F_Oliver, 0

ZaurakCity_Hospital_3F_MapWarps::
	warp_def 22, 1, 3, 1, MAP_ZAURAK_CITY_HOSPITAL_4F
	warp_def 16, 1, 3, 1, MAP_ZAURAK_CITY_HOSPITAL_2F
	warp_def 19, 1, 3, 0, MAP_ZAURAK_CITY_HOSPITAL_ELEVATOR

ZaurakCity_Hospital_3F_MapBGEvents::
	bg_event 14, 1, 3, BG_EVENT_PLAYER_FACING_ANY, ZaurakCity_Hospital_3F_Sign
	bg_event 12, 5, 3, BG_EVENT_PLAYER_FACING_ANY, ZaurakCity_Hospital_3F_Book1
	bg_event 10, 8, 3, BG_EVENT_PLAYER_FACING_ANY, ZaurakCity_Hospital_3F_Book2

ZaurakCity_Hospital_3F_MapEvents::
	map_events ZaurakCity_Hospital_3F_EventObjects, ZaurakCity_Hospital_3F_MapWarps, 0x0, ZaurakCity_Hospital_3F_MapBGEvents

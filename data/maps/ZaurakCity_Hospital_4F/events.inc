ZaurakCity_Hospital_4F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_UNION_ROOM_NURSE, 0, 11, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, ZaurakCity_Hospital_4F_Dialogue1, 0
	object_event 2, EVENT_OBJ_GFX_BOY_1, 0, 23, 7, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, FALSE, 0, ZaurakCity_Hospital_4F_Dialogue3, 0
	object_event 3, EVENT_OBJ_GFX_POKEFAN_F, 0, 23, 8, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, FALSE, 0, ZaurakCity_Hospital_4F_Dialogue2, 0

ZaurakCity_Hospital_4F_MapWarps::
	warp_def 16, 1, 3, 0, MAP_ZAURAK_CITY_HOSPITAL_5F
	warp_def 22, 1, 3, 0, MAP_ZAURAK_CITY_HOSPITAL_3F
	warp_def 19, 1, 3, 0, MAP_ZAURAK_CITY_HOSPITAL_ELEVATOR

ZaurakCity_Hospital_4F_MapBGEvents::
	bg_event 1, 7, 3, BG_EVENT_PLAYER_FACING_ANY, ZaurakCity_Hospital_4F_DoNotDisturb
	bg_event 3, 7, 3, BG_EVENT_PLAYER_FACING_ANY, ZaurakCity_Hospital_4F_DoNotDisturb
	bg_event 5, 7, 3, BG_EVENT_PLAYER_FACING_ANY, ZaurakCity_Hospital_4F_DoNotDisturb
	bg_event 7, 7, 3, BG_EVENT_PLAYER_FACING_ANY, ZaurakCity_Hospital_4F_DoNotDisturb
	bg_event 9, 7, 3, BG_EVENT_PLAYER_FACING_ANY, ZaurakCity_Hospital_4F_DoNotDisturb
	bg_event 14, 1, 3, BG_EVENT_PLAYER_FACING_ANY, ZaurakCity_Hospital_4F_Floor

ZaurakCity_Hospital_4F_MapEvents::
	map_events ZaurakCity_Hospital_4F_EventObjects, ZaurakCity_Hospital_4F_MapWarps, 0x0, ZaurakCity_Hospital_4F_MapBGEvents

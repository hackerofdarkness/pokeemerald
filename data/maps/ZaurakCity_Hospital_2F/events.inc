ZaurakCity_Hospital_2F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_UNION_ROOM_NURSE, 0, 11, 8, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, FALSE, 0, ZaurakCity_Hospital_2F_Nurse, 0
	object_event 2, EVENT_OBJ_GFX_UNION_ROOM_NURSE, 0, 11, 9, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, FALSE, 0, ZaurakCity_Hospital_2F_Nurse, 0

ZaurakCity_Hospital_2F_MapWarps::
	warp_def 22, 1, 3, 4, MAP_ZAURAK_CITY_HOSPITAL_1F
	warp_def 16, 1, 3, 1, MAP_ZAURAK_CITY_HOSPITAL_3F
	warp_def 19, 1, 3, 0, MAP_ZAURAK_CITY_HOSPITAL_ELEVATOR

ZaurakCity_Hospital_2F_MapBGEvents::
	bg_event 14, 1, 3, BG_EVENT_PLAYER_FACING_ANY, ZaurakCity_Hospital_2F_Sign

ZaurakCity_Hospital_2F_MapEvents::
	map_events ZaurakCity_Hospital_2F_EventObjects, ZaurakCity_Hospital_2F_MapWarps, 0x0, ZaurakCity_Hospital_2F_MapBGEvents

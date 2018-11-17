ZaurakCity_Hospital_1F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_NURSE, 0, 3, 2, 3, MOVEMENT_TYPE_NONE, 0, 0, FALSE, 0, ZaurakCity_Hospital_1F_Heal, 0
	object_event 2, EVENT_OBJ_GFX_SCIENTIST_1, 0, 14, 3, 3, MOVEMENT_TYPE_WANDER_AROUND, 0, 0, FALSE, 0, ZaurakCity_Hospital_1F_Dialogue2, 0
	object_event 3, EVENT_OBJ_GFX_SCIENTIST_2, 0, 10, 4, 3, MOVEMENT_TYPE_WANDER_AROUND, 0, 0, FALSE, 0, ZaurakCity_Hospital_1F_Dialogue1, 0
	object_event 4, EVENT_OBJ_GFX_MANIAC, 0, 6, 2, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, FALSE, 0, ZaurakCity_Hospital_1F_Dialogue3, 0
	object_event 5, EVENT_OBJ_GFX_HIKER, 0, 3, 4, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, FALSE, 0, ZaurakCity_Hospital_1F_Dialogue4, 0

ZaurakCity_Hospital_1F_MapWarps::
	warp_def 11, 11, 3, 3, MAP_ZAURAK_CITY
	warp_def 10, 19, 3, 3, MAP_ZAURAK_CITY
	warp_def 12, 11, 3, 3, MAP_ZAURAK_CITY
	warp_def 19, 1, 3, 0, MAP_ZAURAK_CITY_HOSPITAL_ELEVATOR
	warp_def 22, 1, 3, 0, MAP_ZAURAK_CITY_HOSPITAL_2F

ZaurakCity_Hospital_1F_MapBGEvents::
	bg_event 9, 1, 3, BG_EVENT_PLAYER_FACING_ANY, NULL

ZaurakCity_Hospital_1F_MapEvents::
	map_events ZaurakCity_Hospital_1F_EventObjects, ZaurakCity_Hospital_1F_MapWarps, 0x0, ZaurakCity_Hospital_1F_MapBGEvents

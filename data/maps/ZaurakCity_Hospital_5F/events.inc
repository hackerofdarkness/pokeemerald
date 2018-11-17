ZaurakCity_Hospital_5F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_PROF_BIRCH, 0, 0, 5, 15, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, FALSE, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_SCIENTIST_1, 0, 18, 6, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, FALSE, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_UNION_ROOM_NURSE, 0, 22, 6, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, FALSE, 0, NULL, 0

ZaurakCity_Hospital_5F_MapWarps::
	warp_def 16, 1, 3, 0, MAP_ZAURAK_CITY_HOSPITAL_4F

ZaurakCity_Hospital_5F_MapCoordEvents::
	coord_event 4, 2, 3, VAR_TEMP_0, 0, NULL
	coord_event 4, 3, 3, VAR_TEMP_0, 0, NULL
	coord_event 4, 4, 3, VAR_TEMP_0, 0, NULL
	coord_event 4, 5, 3, VAR_TEMP_0, 0, NULL
	coord_event 4, 6, 3, VAR_TEMP_0, 0, NULL
	coord_event 4, 7, 3, VAR_TEMP_0, 0, NULL
	coord_event 4, 8, 3, VAR_TEMP_0, 0, NULL
	coord_event 4, 9, 3, VAR_TEMP_0, 0, NULL

ZaurakCity_Hospital_5F_MapEvents::
	map_events ZaurakCity_Hospital_5F_EventObjects, ZaurakCity_Hospital_5F_MapWarps, ZaurakCity_Hospital_5F_MapCoordEvents, 0x0

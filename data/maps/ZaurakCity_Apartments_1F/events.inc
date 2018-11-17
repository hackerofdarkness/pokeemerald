ZaurakCity_Apartments_1F_MapWarps::
	warp_def 5, 7, 3, 4, MAP_ZAURAK_CITY
	warp_def 6, 7, 3, 4, MAP_ZAURAK_CITY
	warp_def 1, 1, 3, 0, MAP_ZAURAK_CITY_APARTMENTS_2F

ZaurakCity_Apartments_1F_MapBGEvents::
	bg_event 3, 1, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 6, 1, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 9, 1, 3, BG_EVENT_PLAYER_FACING_ANY, NULL

ZaurakCity_Apartments_1F_MapEvents::
	map_events 0x0, ZaurakCity_Apartments_1F_MapWarps, 0x0, ZaurakCity_Apartments_1F_MapBGEvents

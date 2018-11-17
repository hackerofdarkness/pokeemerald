ZaurakCity_Apartments_2F_MapWarps::
	warp_def 1, 1, 3, 2, MAP_ZAURAK_CITY_APARTMENTS_1F
	warp_def 10, 1, 3, 0, MAP_ZAURAK_CITY_APARTMENTS_3F

ZaurakCity_Apartments_2F_MapBGEvents::
	bg_event 3, 1, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 6, 1, 3, BG_EVENT_PLAYER_FACING_ANY, NULL

ZaurakCity_Apartments_2F_MapEvents::
	map_events 0x0, ZaurakCity_Apartments_2F_MapWarps, 0x0, ZaurakCity_Apartments_2F_MapBGEvents

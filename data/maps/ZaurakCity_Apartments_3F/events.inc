ZaurakCity_Apartments_3F_MapWarps::
	warp_def 10, 1, 3, 1, MAP_ZAURAK_CITY_APARTMENTS_2F
	warp_def 1, 1, 3, 0, MAP_ZAURAK_CITY_PLAYER_HOUSE

ZaurakCity_Apartments_3F_MapBGEvents::
	bg_event 0, 1, 3, BG_EVENT_PLAYER_FACING_ANY, ZaurakCity_Apartment_Sign1
	bg_event 3, 1, 3, BG_EVENT_PLAYER_FACING_ANY, ZaurakCity_Apartment_Sign2
	bg_event 6, 1, 3, BG_EVENT_PLAYER_FACING_ANY, ZaurakCity_Apartment_Sign3

ZaurakCity_Apartments_3F_MapEvents::
	map_events 0x0, ZaurakCity_Apartments_3F_MapWarps, 0x0, ZaurakCity_Apartments_3F_MapBGEvents

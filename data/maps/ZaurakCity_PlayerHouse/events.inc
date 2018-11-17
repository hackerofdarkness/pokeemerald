ZaurakCity_PlayerHouse_EventObjects::
	object_event 1, EVENT_OBJ_GFX_SEEDOT_DOLL, 0, 2, 5, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, FALSE, 0, ZaurakCity_PlayerHouse_Letter, FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG

ZaurakCity_PlayerHouse_MapWarps::
	warp_def 4, 9, 3, 1, MAP_ZAURAK_CITY_APARTMENTS_3F
	warp_def 5, 9, 3, 1, MAP_ZAURAK_CITY_APARTMENTS_3F
	warp_def 5, 3, 3, 0, MAP_ZAURAK_CITY_PLAYER_BEDROOM

ZaurakCity_PlayerHouse_MapCoordEvents::
	coord_event 4, 9, 3, VAR_TEMP_0, 0, ZaurakCity_PlayerHouse_ForceBack
	coord_event 5, 9, 3, VAR_TEMP_0, 0, ZaurakCity_PlayerHouse_ForceBack

ZaurakCity_PlayerHouse_MapBGEvents::
	bg_event 0, 1, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 6, 4, 3, BG_EVENT_PLAYER_FACING_ANY, ZaurakCity_PlayerHouse_Bookshelf
	bg_event 7, 4, 3, BG_EVENT_PLAYER_FACING_ANY, ZaurakCity_PlayerHouse_Bookshelf
	bg_event 8, 4, 3, BG_EVENT_PLAYER_FACING_ANY, ZaurakCity_PlayerHouse_Bookshelf
	bg_event 9, 4, 3, BG_EVENT_PLAYER_FACING_ANY, ZaurakCity_PlayerHouse_Bookshelf

ZaurakCity_PlayerHouse_MapEvents::
	map_events ZaurakCity_PlayerHouse_EventObjects, ZaurakCity_PlayerHouse_MapWarps, ZaurakCity_PlayerHouse_MapCoordEvents, ZaurakCity_PlayerHouse_MapBGEvents

ZaurakCity_PlayerBedroom_MapWarps::
	warp_def 1, 6, 3, 2, MAP_ZAURAK_CITY_PLAYER_HOUSE

ZaurakCity_PlayerBedroom_MapBGEvents::
	bg_event 1, 1, 3, BG_EVENT_PLAYER_FACING_ANY, ZaurakCity_PlayerBedroom_Drawer
	bg_event 2, 1, 3, BG_EVENT_PLAYER_FACING_ANY, ZaurakCity_PlayerBedroom_Drawer
	bg_event 3, 1, 3, BG_EVENT_PLAYER_FACING_ANY, ZaurakCity_PlayerBedroom_Cupboard
	bg_event 4, 1, 3, BG_EVENT_PLAYER_FACING_ANY, ZaurakCity_PlayerBedroom_Clock
	bg_event 6, 1, 3, BG_EVENT_PLAYER_FACING_ANY, ZaurakCity_PlayerBedroom_Console
	bg_event 7, 1, 3, BG_EVENT_PLAYER_FACING_ANY, ZaurakCity__PlayerBedroom_Book
	bg_event 8, 1, 3, BG_EVENT_PLAYER_FACING_ANY, ZaurakCity__PlayerBedroom_PC

ZaurakCity_PlayerBedroom_MapEvents::
	map_events 0x0, ZaurakCity_PlayerBedroom_MapWarps, 0x0, ZaurakCity_PlayerBedroom_MapBGEvents

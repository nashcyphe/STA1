///////////////////////////////////////////////////////////////////////////////
//
// GAME_CFG.h
//
// Runtime configuration file for general engine parameters
//
// -- M Douglas
//
///////////////////////////////////////////////////////////////////////////////


// Location of Mission files
char MISSIONS_DIRECTORY[256] = ".\missions";
char AI_DIRECTORY[256] = ".\AI";

// Game tracking information.
char WATCH_LOCATION[512] = "\\NULL";
char WATCH_VERSION[64] = "v0_0";

// Location of buttons in interface.
int BUTTON_LOCATION_TRANSPORT					= -1;
int BUTTON_LOCATION_RESEARCH_UPGRADE			= -1;
int BUTTON_LOCATION_MOVE						= 1;
int BUTTON_LOCATION_ATTACK						= 2;
int BUTTON_LOCATION_STOP						= 3;
int BUTTON_LOCATION_ORDER_REPAIR				= 4;
int BUTTON_LOCATION_ORDERS						= 5;
int BUTTON_LOCATION_ORDER_STAND_DOWN			= 6;
int BUTTON_LOCATION_TRANSPORT_SPECIAL			= 8;
int BUTTON_LOCATION_HARVEST						= 7;
int BUTTON_LOCATION_RECREW						= 7;
int BUTTON_LOCATION_UPGRADE						= 9;
int BUTTON_LOCATION_BUILD						= 10;
int	BUTTON_LOCATION_RALLY_POINT					= 11;

int BUTTON_LOCATION_ORDER_GREEN_ALERT			= 1;
int BUTTON_LOCATION_ORDER_YELLOW_ALERT			= 2;
int BUTTON_LOCATION_ORDER_RED_ALERT				= 3;
int BUTTON_LOCATION_ORDER_PATROL				= 4;
int BUTTON_LOCATION_ORDER_SCOUT					= 5;
int BUTTON_LOCATION_ORDER_SEARCH_AND_DESTROY	= 6;
int BUTTON_LOCATION_ORDER_GUARD					= 7;
int BUTTON_LOCATION_ORDER_DECOMMISION			= 10;
int BUTTON_LOCATION_ORDER_SELF_DESTRUCT			= 11;
int BUTTON_LOCATION_CANCEL						= 11;
int BUTTON_LOCATION_BACK						= 12;

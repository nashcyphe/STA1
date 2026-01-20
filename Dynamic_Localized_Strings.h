///////////////////////////////////////////////////////////////////////////////
//
// String_Table_Entry
// -------------------
// English keys with corresponding translations
//

// DONT CHANGE THE NEXT 5 LINES
struct String_Table_Entry
{
	char key_string[256];				// The names of the build list
	char translation_string[256];		// How important to build form this list
};
// GOOD, YOU DIDN'T CHANGE THEM!


// How many strings do we allow?
#define MAX_STRINGS 500

// Set this to 0 to have all untranslated strings displayed as "UNTRANSLATED"
// Set it to 1 to have it use the English when it can't find a translation
#define ENGLISH 1

//
// dynamic_strings
// 
// A list of all strings that need to be translated on the fly
//
String_Table_Entry translations[MAX_STRINGS] =
{
// Officers can differ between races so they get special treatment.
	"GUI_CP_OFFICERS_RES",		"officers",
	"GUI_CP_BORGOFF_RES",		"power nodes",
	"GUI_CP_ROMOFF_RES",		"centurions",
	"GUI_SD_DEF_OFF_LABEL",		"OFFICERS",
	"GUI_SD_BORG_OFF_LABEL",	"NODES",
	"GUI_SD_ROM_OFF_LABEL",	"CENTURIONS",
	"GUI_SD_TEXT_OFF_REQ",		"This vessel requires",
	"GUI_SD_TEXT_OFF_OP",		"officers to operate.",
	"GUI_SD_TEXT_BORGOFF_OP",	"power nodes to operate.",
	"GUI_SD_TEXT_ROMOFF_OP",	"centurions to operate.",
	"GUI_RD_OFFICERS_TOOLTIP",	"Officers",
	"GUI_RD_OFFICERS_VTOOLTIP",	"Officers: The number of officers in use / 
the number of officers available.
Officer are required for most ships
and stations in the fleet.",
	"GUI_RD_BORGOFF_TOOLTIP",	"Power Nodes",
	"GUI_RD_BORGOFF_VTOOLTIP",	"Power Nodes: The number of power nodes in use / 
the number of power nodes available.
Power Nodes are required for most ships
and stations in the collective.",
	"GUI_RD_ROMOFF_TOOLTIP",	"Centurions",
	"GUI_RD_ROMOFF_VTOOLTIP",	"Centurions: The number of Centurions in use / 
the number of Centurions available.
Centurions are required for most ships
and stations in the empire.",

	"GUI_CP_UPGRADE_TOOLTIP",	"^Upgrade Officers [Obselete]",
	"GUI_CP_UPGRADE_VTOOLTIP",	"^Upgrade Officers: Build a new officers quarter to
allow the fleet to have more ships and stations. [Obselete]",

// Cinematic View Tooltips.
	"GUI_CV_MIN_TOOLTIP",		"Double click to return to strategic mode.",
	"GUI_CV_MAIN_TOOLTIP",		"Main Menu: Opens the main menu to change options
abort the mission, save the current game, or
load a previously saved game.",
	"GUI_CV_COMM_TOOLTIP",		"Comm Menu: Opens the multiplayer options menu
to change alliances, modify chat settings, and give
resources or units to other players.",

// Control Panel Button Tooltip and Verbose Tooltip Parts
	"GUI_CP_TOOLTIP_SEPARATE",	":",
	"GUI_CP_CLASS_SEPARATE",	"-",
	"GUI_CP_AMOUNT_SEPARATE",	"/",
	"GUI_CP_START_EXTRA",		"(",
	"GUI_CP_END_EXTRA",			")",
	"GUI_CP_SENTENCE_END",		".",
	"GUI_CP_PERCENT",			"%%",
	"GUI_CP_DILITHIUM_RES",		"dilithium",
	"GUI_CP_CREW_RES",			"crew",
	"GUI_CP_REQUIRE",			"needs:",

// Control Panel Button Tooltip and Verbose Tooltips.
	"GUI_CP_MOVE_TOOLTIP",		"^Move",
	"GUI_CP_MOVE_VTOOLTIP",		"^Move: Order this vessel to set a course for a
new location.",
	"GUI_CP_ATTACK_TOOLTIP",	"^Attack",
	"GUI_CP_ATTACK_VTOOLTIP",	"^Attack: Order this vessel to attack a target or
go to a location and attack any enemys
there.",
	"GUI_CP_STOP_TOOLTIP",		"^Stop",
	"GUI_CP_STOP_VTOOLTIP",		"^Stop: Order this vessel to stop its current action
and return to normal status.",
	"GUI_CP_TRANS_TOOLTIP",		"^Transport",
	"GUI_CP_TRANS_VTOOLTIP",	"^Transport: Send a boarding party over to another
vessel.  On enemy vessels, the boarding party will
fight the crew and take the ship over if no crew
remains.  It will reinforce crew on friendly vessels.",
	"GUI_CP_STRANS_TOOLTIP",	"Special Transport <SHIFT+^T> [Obselete]",
	"GUI_CP_STRANS_VTOOLTIP",	"Special Transport <SHIFT+^T>: Transport a special flag to
another vessel. [Obselete]",
	"GUI_CP_RECREW_TOOLTIP",	"^Recrew",
	"GUI_CP_RECREW_VTOOLTIP",	"^Recrew: Reinforce the crew of the station with
crew taken from the crew pool.",
	"GUI_CP_ORDER_TOOLTIP",		"^Orders",
	"GUI_CP_ORDER_VTOOLTIP",	"^Orders: Go to the orders menu to issue more detailed
commands.",
	"GUI_CP_SDOWN_TOOLTIP",		"Stand Down <SHIFT+^S>",
	"GUI_CP_SDOWN_VTOOLTIP",	"Stand Down <SHIFT+^S>: Order the vessel to stop its current
action and perform no further actions until it is so
ordered.",
	"GUI_CP_REPAIR_TOOLTIP",	"^Repair and Recrew",
	"GUI_CP_REPAIR_VTOOLTIP",	"^Repair and Recrew: Send the vessel to the nearest
shipyard for faster repair and recrewing from
the crew pool.",
	"GUI_CP_GUARD_TOOLTIP",		"G^uard",
	"GUI_CP_GUARD_VTOOLTIP",	"G^uard: Follow and protect another vessel.",
	"GUI_CP_PATROL_TOOLTIP",	"^Patrol",
	"GUI_CP_PATROL_VTOOLTIP",	"^Patrol: Patrol an area of space.  To make more
complex patrol routes use the TAB key to lay down
waypoints.",
	"GUI_CP_SCOUT_TOOLTIP",		"^Scout",
	"GUI_CP_SCOUT_VTOOLTIP",	"^Scout: Search unexplored areas of the map.",
	"GUI_CP_SANDD_TOOLTIP",		"Search and ^Destroy",
	"GUI_CP_SANDD_VTOOLTIP",	"Search and ^Destroy: Search for enemy vessels and
destroy them.  This is particularly useful for cleaning
up remaining enemy forces.",
	"GUI_CP_DECOM_TOOLTIP",		"Decommission <SHIFT+^D>",
	"GUI_CP_DECOM_VTOOLTIP",	"Decommission <SHIFT+^D>: Disassemble and recover resources from
a ship or station.  Ships must return to a repair
bay to be decommissioned.",
	"GUI_CP_GALERT_TOOLTIP",	"Green Alert <SHIFT+^G>",
	"GUI_CP_GALERT_VTOOLTIP",	"Green Alert <SHIFT+^G>: If discovered by enemy forces, retreat
from the engagement.",
	"GUI_CP_YALERT_TOOLTIP",	"Yellow Alert <SHIFT+^Y>",
	"GUI_CP_YALERT_VTOOLTIP",	"Yellow Alert <SHIFT+^Y>: Proceed with orders unless the enemy
engages first.  If engaged, destroy the enemy
forces.",
	"GUI_CP_RALERT_TOOLTIP",	"Red Alert <SHIFT+^R>",
	"GUI_CP_RALERT_VTOOLTIP",	"Red Alert <SHIFT+^R>: Engage the enemy upon sight.",
	"GUI_CP_BUILD_TOOLTIP",		"^Build",
	"GUI_CP_BUILD_VTOOLTIP",	"^Build: Go to the construction menu to select ships
and stations to build.",
	"GUI_CP_HARVEST_TOOLTIP",	"Harvest ^Dilithium",
	"GUI_CP_HARVEST_VTOOLTIP",	"Harvest ^Dilithium: Find the nearest dilithium moon
and begin mining operations.",
	"GUI_CP_RALLY_TOOLTIP",		"Set Rally ^Point",
	"GUI_CP_RALLY_VTOOLTIP",	"Set Rally ^Point: Choose a location where vessels
constructed or repaired at this station will collect
after exiting the station.",
	"GUI_CP_RUPGRADE_TOOLTIP",	"Upgrade Research [Obselete]",
	"GUI_CP_RUPGRADE_VTOOLTIP",	"Upgrade Research: Upgrade for more advanced research. [Obselete]",
	"GUI_CP_RESEARCH_TOOLTIP",	"Research <^B>",
	"GUI_CP_RESEARCH_VTOOLTIP",	"Research <^B>: Go to the research menu to construct pods
that allow the use of special weapons.",
	"GUI_CP_BACK_TOOLTIP",		"^Back",
	"GUI_CP_BACK_VTOOLTIP",		"^Back: Return to the main menu.",
	"GUI_CP_CANCEL_TOOLTIP",	"Cancel <SHIFT+^C>",
	"GUI_CP_CANCEL_VTOOLTIP",	"Cancel <SHIFT+^C>: Cancel construction and regain the resources.",

// Ship Display Tooltips and Verbose Tooltips, these have a good amount of
// dynamic information so they are broken in to little parts.
	"GUI_SD_RACE_VESSEL",		"vessel",
	"GUI_SD_RACE_REPAIR_BA",	"crew have below average repair ability.",
	"GUI_SD_RACE_REPAIR_A",		"crew have average repair ability.",
	"GUI_SD_RACE_REPAIR_AA",	"crew have above average repair ability.",
	"GUI_SD_RACE_BOARD_BA",		"crew have below average strength when boarding
or defending against boarding parties.",
	"GUI_SD_RACE_BOARD_A",		"crew have average strength when boarding
or defending against boarding parties.",
	"GUI_SD_RACE_BOARD_AA",		"crew have above average strength when boarding
or defending against boarding parties.",
	"GUI_SD_REPAIR_SYS_ENG",	"Engines",
	"GUI_SD_REPAIR_SYS_LS",		"Life Support",
	"GUI_SD_REPAIR_SYS_WPN",	"Weapon Control",
	"GUI_SD_REPAIR_SYS_SHLD",	"Shield Generator",
	"GUI_SD_REPAIR_SYS_SENS",	"Sensors",
	"GUI_SD_REPAIR_SYSX_ENG",	"Engines are",
	"GUI_SD_REPAIR_SYSX_LS",	"Life Support is",
	"GUI_SD_REPAIR_SYSX_WPN",	"Weapon Control is",
	"GUI_SD_REPAIR_SYSX_SHLD",	"Shield Generator is",
	"GUI_SD_REPAIR_SYSX_SENS",	"Sensors are",
	"GUI_SD_REPAIR_FUNC_SYS",	"fully functional.",
	"GUI_SD_REPAIR_REP_SYS",	"under repair",
	"GUI_SD_REPAIR_LEFT_SYS",	"%% left",
	"GUI_SD_REPAIR_DIS_SYS",	"disabled.",
	"GUI_SD_REPAIR_NA_SYS",		"not available on this class.",
	"GUI_SD_BAR_SHIELD",		"Shields at",
	"GUI_SD_BAR_ENERGY",		"Special energy at",
	"GUI_SD_BAR_DLTH_FRIEGHT",	"Freighter is",
	"GUI_SD_BAR_DLTH_PERFULL",	"%% full.",
	"GUI_SD_BAR_DLTH_INF",		"Moon has infinite dilithium.",
	"GUI_SD_BAR_DLTH_MOON",		"Moon has",
	"GUI_SD_BAR_DLTH_LEFT",		"dilithium left.",
	"GUI_SD_BAR_DLTHX_PERFULL",	"%% full with",
	"GUI_SD_BAR_DLTHX_LEFT",	"dilithium left out of",
	"GUI_SD_BAR_RESEARCH",		"Research",
	"GUI_SD_BAR_CONST",			"Construction",
	"GUI_SD_BAR_PERCOMP",		"%% complete.",
	"GUI_SD_BAR_NO_RESEARCH",	"There is no current research.",
	"GUI_SD_BAR_NO_CONST",		"There is no current construction.",
	"GUI_SD_BAR_PERCOMPX",		"%% complete.  There is approximately",
	"GUI_SD_BAR_SECREMAIN",		"seconds remaining.",
	"GUI_SD_TEXT_VESSEL",		"Vessel Identification",
	"GUI_SD_TEXT_CREW_LABEL",	"CREW",
	"GUI_SD_TEXT_DERELICT",		"Derelict",
	"GUI_SD_TEXT_CREW",			"Crew",
	"GUI_SD_TEXT_CREW_MIN",		"is at minimal operating level.",
	"GUI_SD_TEXT_CREW_RED",		"is at reduced operating level.",
	"GUI_SD_TEXT_CREW_NOR",		"is at normal operating level.",
	"GUI_SD_TEXT_DERELICT_ADV",	"Transport crew on to this vessel to reactivate
ship systems.",
	"GUI_SD_TEXT_CREW_FIRE_UP",	"Crew has been directed to increase fire rate
at the expense of other systems.",
	"GUI_SD_TEXT_CREW_FIRE_DN",	"Weapon fire rate is impaired.",
	"GUI_SD_TEXT_CREW_REP_UP",	"Crew has been directed to increase repair rate
at the expense of other systems.",
	"GUI_SD_TEXT_CREW_REP_DN",	"Repair rate is impaired.",
	"GUI_WI_ANALYSIS",			"Analysis of",
	"GUI_WI_GRAVMINE",			"Gravity mines have been detected on the hull.",
	"GUI_WI_SPY",				"Unofficial transmission detected, indicating spy aboard.",

// Resource Panel Tooltips and Verbose Tooltips.
	"GUI_RD_CREW_TOOLTIP",		"Crew",
	"GUI_RD_CREW_VTOOLTIP",		"Crew: Available crew that is not in
active service.  Crew is used in the
construction and recrewing of ships
and stations.",
	"GUI_RD_DILITHIUM_TOOLTIP",	"Dilithium",
	"GUI_RD_DILITHIUM_VTOOLTIP","Dilithium: Current dilithium store.
Dilithium is required for warp core
operation and is also traded for other
required resources to construct ships
and stations.",

// Objectives Pop Up.
	"GUI_POP_OBJ_BUTTON",		"OK",
	"GUI_POP_OBJ_TOOLTIP",		"Return to the game.",

// Comm Pop Up.
	"GUI_POP_COMM_TITLE",		"COMMS/ALLIANCES",
	"GUI_POP_COMM_PLAYER",		"PLAYER",
	"GUI_POP_COMM_CHAT",		"CHAT",
	"GUI_POP_COMM_TEAM",		"TEAM",
	"GUI_POP_COMM_ALLIANCE",	"ALLIANCE",
	"GUI_POP_COMM_MESSAGE",		"Chat to:",
	"GUI_POP_COMM_GIVE",		"GIVING",
	"GUI_POP_COMM_ALLIEDV",		"Allied Victory",
	"GUI_POP_COMM_LATENCY",		"High Latency",
	"GUI_POP_COMM_TEAM_PREFIX",	"Team",
	"GUI_POP_COMM_NAME_TT",		"Player name, click to select as current player.",
	"GUI_POP_COMM_CHAT_TT",		"Determines if you wish to send chat messages to this player.",
	"GUI_POP_COMM_ENEMY_TT",	"I don't like you :(",
	"GUI_POP_COMM_NEUTRAL_TT",	"Who cares :P",
	"GUI_POP_COMM_ALLY_TT",		"I like you :)",
	"GUI_POP_COMM_SELECT_TT",	"Currently selected player.",
	"GUI_POP_COMM_CHAT_ALL",	"ALL",
	"GUI_POP_COMM_CHAT_ALL_TT",	"Send chat messages to all players in the current game.",
	"GUI_POP_COMM_CHAT_ALY",	"ALLIES",
	"GUI_POP_COMM_CHAT_ALY_TT",	"Send chat messages to all your allies in the current game.",
	"GUI_POP_COMM_CHAT_EMY",	"ENEMIES",
	"GUI_POP_COMM_CHAT_EMY_TT",	"Send chat messages to all your enemies in the current game.",
	"GUI_POP_COMM_CHAT_PVT",	"PRIVATE",
	"GUI_POP_COMM_CHAT_PVT_TT",	"Send chat messages to the currently selected player.",
	"GUI_POP_COMM_GIVE_UNT",	"UNITS",
	"GUI_POP_COMM_GIVE_UNT_TT",	"Give currently selected units to the currently selected player.",
	"GUI_POP_COMM_GIVE_DLT",	"DILITHIUM",
	"GUI_POP_COMM_GIVE_DLT_TT",	"Give dilithium to the currently selected player.",
	"GUI_POP_COMM_GIVE_CRW",	"CREW",
	"GUI_POP_COMM_GIVE_CRW_TT",	"Give crew to the currently selected player.",
	"GUI_POP_COMM_DLTH_UP",		"Increase dilithium.",
	"GUI_POP_COMM_DLTH_DN",		"Decrease dilithium.",
	"GUI_POP_COMM_CREW_UP",		"Increase crew.",
	"GUI_POP_COMM_CREW_DN",		"Decrease crew.",
	"GUI_POP_COMM_ALLIEDV_TT",	"When active an allied victory is sufficient to win the game.",
	"GUI_POP_COMM_LATENCY_TT",	"Tick this box when playing over laggy Internet connections.",
	"GUI_POP_COMM_DONE",		"DONE",
	"GUI_POP_COMM_MSG_GAVE",	"You gave",
	"GUI_POP_COMM_MSG_DLTH_TO",	"dilithium to",
	"GUI_POP_COMM_MSG_GAVE_U",	"gave you",
	"GUI_POP_COMM_MSG_CREW_TO",	"crew to",
	"GUI_POP_COMM_MSG_CONSDR",	"You now consider",
	"GUI_POP_COMM_MSG_CON_U",	"now considers you",
	"GUI_POP_COMM_MSG_ENEMY",	"an enemy.",
	"GUI_POP_COMM_MSG_NEUTRAL",	"neutral.",
	"GUI_POP_COMM_MSG_ALLY",	"an ally.",
	"GUI_POP_COMM_MSG_UNITS",	"You gave units to",
	"GUI_POP_COMM_MSG_UNITS_U",	"gave you units.",

// Drop Player Pop Up.
	"GUI_POP_DROP_WAIT",		"Waiting for players for",
	"GUI_POP_DROP_SECONDS",		"seconds:",
	"GUI_POP_DROP_BUTTON",		"DROP",
	"GUI_POP_DROP_TOOLTIP",		"WARNING: This will drop all currently listed players from the game.",

// Pause Game Pop Up
	"GUI_POP_PAUSE_TEXT",		"GAME PAUSED",
	"GUI_POP_PAUSE_CONTINUE",	"CONTINUE",
	"GUI_POP_PAUSE_TOOLTIP",	"Unpause the game."
};

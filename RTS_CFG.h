///////////////////////////////////////////////////////////////////////////////
//
// RTS_CFG.h
//
// Runtime configuration file for real-time topdown strategy elements added
// to the engine.
//
// By the Mad Dr. I.  4/98.
//
///////////////////////////////////////////////////////////////////////////////

//
// Include the ART only parameters
//
#include "ART_CFG.h"

///////////////////////////////////////////////////////////////////////////////
// Interface Settings
///////////////////////////////////////////////////////////////////////////////

// CAMERA CONTROL
float OVERVIEW_MAX_ZOOM = 4.0;
float OVERVIEW_INIT_ZOOM = 1.5;
float OVERVIEW_MIN_ZOOM = 1.0;
float OVERVIEW_PARABOLA_FOCUS = 200.0;
float OVERVIEW_MAX_HEIGHT  = 700.0;
float OVERVIEW_INIT_HEIGHT = 450.0;
float OVERVIEW_MIN_HEIGHT  =  10.0;
float OVERVIEW_INIT_ROTATION = 0.0;
int SCROLL_BORDER_WIDTH = 2;
float SCROLL_COEFFICIENT = 90000.0;
float FASTSCROLL_COEFFICIENT = 0.005;
float ZOOM_SCROLL_COEFFICIENT = 0.1;
float ROTATION_SCROLL_COEFFICIENT = 0.01;
float CINEMATIC_ROTATION_COEFFECIENT = 0.035;
float KEYBOARD_SCROLL_RATE = 6.0;
int SCROLL_ACCELERATION = 2;				// Multiplier for each "step"
int TIME_SCALE = 1;							// How fast to ramp up over time
float MAX_SCROLL_SPEED = 10.0;				// The max speed we want to scroll
float INITIAL_SCROLL_SPEED = 0.5;			// Initial speed
int FAST_SCROLL_ACCELERATION = 10;
int FAST_TIME_SCALE = 10;
float FAST_MAX_SCROLL_SPEED = 5.0;
float FAST_INITIAL_SCROLL_SPEED = 0.5;

// SHIP SELECTION
int USE_LIGHTING_FOR_SELECTION = 0;			// Whether to use lighting or selection box.
int SELECTION_RECTANGLE_COMMIT_AREA = 100;	// Define the area of the rectangle we need to form for the selection
											// rectangle to become the current action.

float STATION_PLACEMENT_GRID_SIZE = 50.0;	// The size of the grid squares in the placement map.

// PANEL PROPERTIES
int RESOURCE_PANEL_PRIORITY = 8;
int CINEMATIC_PANEL_PRIORITY = -2;
int CONTROL_PANEL_PRIORITY = 2;
int CURSOR_SIMULATE_PRIORITY = -10;
int CURSOR_RENDER_PRIORITY = 10;
int RADAR_PANEL_PRIORITY = 4;
int OVERVIEW_PANEL_PRIORITY = -7;
int VIDEO_PANEL_PRIORITY = -3;
int SELECTION_PRIORITY = -5;
int INFO_PANEL_PRIORITY = 0;
int SPEED_PANEL_PRIORITY = 6;
int OBJECTIVES_PANEL_PRIORITY = 7;
int SNAP_TO_DISTANCE = 10;					// Distance where the panels snap to another panel or the edge.
int UNHIDE_DISTANCE = 15;					// Distance at which the interface auto-hide pops up.

// CHAT
int SCROLL_INTERVAL = 300;					// Interval for scrolling top line.
int DEFAULT_CHAT_TEXT_HEIGHT = 15;			// How much space between lines?

// GRID ACTION FX
float GRID_FX_GROWTH_RATE = 0.83;
float GRID_FX_MAX_SIZE = 50.0;
float GRID_FX_MIN_SIZE = 2.0;
float GRID_FX_GROWTH_INTERVAL = 0.01;		// In seconds. Time to pass between growth.
float GRID_FX_ROTATION_SPEED = 2.0;
int GRID_FX_MIN_SEGMENTS = 8;
int GRID_FX_MAX_SEGMENTS = 36;

// DEBUG DISPLAY
int SHOW_QUADTREE = 0;						// Should we show the quadtree decompsition?
int SHOW_FOOTPRINTS_IN_EDIT_MODE = 0;		// Should we show footprints in edit mode?
int DEBUG_VECTORS_3D = 0;
int DEBUG_SHOW_AI_PATHS = 0;
int DEBUG_SHOW_AI_PATHS_RUNNING = 0;
int DEBUG_SHOW_CURVES = 1;
int DEBUG_SHOW_OBJ_POSTS = 1;
int DEBUG_SHOW_OBJ_POSTS_RUNNING = 0;
int DEBUG_SHOW_LOCAL_BOUNDING_BOX = 0;
int DEBUG_SHOW_OBJECT_BOUNDING_BOX = 0;
int DEBUG_SHOW_LOCAL_BOUNDING_SPHERE = 0;
int DEBUG_SHOW_OBJECT_BOUNDING_SPHERE = 0;
int DEBUG_SHOW_BOUNDING_SQUARE = 0;
int DEBUG_DRAW = 0;

// INVALID PARAMETERS
// These are no longer used to my knowledge:
int INTERFACE_DISPLAY = 0;						// INVALID
float SELECTION_CIRCLE_VERTICAL_OFFSET = -20;	// INVALID: How much above (or below) the ship to draw the selection circle.
float SELECTION_CIRCLE_SIZE_MULTIPLIER = 0.4;	// INVALID: How big a circle to draw.

///////////////////////////////////////////////////////////////////////////////
// Other...
///////////////////////////////////////////////////////////////////////////////

//
// DIFFICULTY SETTINGS
//

// AI special weapon fire rate
float EASY_SPECIAL_WEAPON_FIRE_MODIFIER = 2.0;
float DEFAULT_SPECIAL_WEAPON_FIRE_MODIFIER = 1.0;
float HARD_SPECIAL_WEAPON_FIRE_MODIFIER = 0.2;

// Build cost multiplier handicap for hard AI
float HARD_AI_COST_AND_SPEED_HANDICAP = 0.4;
float MEDIUM_AI_COST_AND_SPEED_HANDICAP = 0.8;

// Percent chance that AI fleets will cloak for long moves in Instant Action
// and Multiplayer AI (provided they can!)
float HARD_AI_CLOAK_PERCENT = 75;
float MEDIUM_AI_CLOAK_PERCENT = 50;
float EASY_AI_CLOAK_PERCENT = 25;


// At what range of a move command will AI cloak in Instant Action and MP?
float cfg_MIN_MOVE_DISTANCE_FOR_CLOAK = 1500.0;

// Damage coefficients for incoming damage for user in single player
float EASY_DAMAGE = 0.5;
float HARD_DAMAGE = 2.0;

// ------------------
// Storm3D parameters
// ------------------

// Number of Z-sort buckets used by Storm3D renderer
int ST3D_NUM_ZSORT_BUCKETS = 16384;
int ST3D_SHOW_LIGHT_SOURCE_INFO=0;
int ST3D_PRELOAD_TEXTURES = 1;

//
// DAMAGE MODEL
//

// Are we using the hitpoint system for damage allocation?
int USE_SYSTEM_HITPOINTS = 1;
int SYSTEM_HITPOINTS_BONUS = 0;
float SHIELD_DAMAGE_PROTECTION = 1.0;

// The default for pre-loading is off for debug, on for release.
// If you want it different, uncomment these two.

// Should we demand load all ODFs?
int DEMAND_LOAD_ODFS = 1;

// Should we show the framerate in the upper left corner?
int  FRAMERATE_DISPLAY = 0; 


//       A    AAAAA
//      A A     A
//     A   A    A
//     AAAAA    A
//     A   A    A
//     A   A  AAAAA

// STRATEGIC AI

// Show visual representation of goal types for grid cells for this team
// (put -1 for none)
int DEBUG_GOALS_FOR_TEAM = 2;

// COMBAT

// To determine if we've got enough ships that we're in a damned morass
float MORASS_SIZE = 100.0;
int MORASS_SHIP_LIMIT = 1;
int MORASS_FRIENDS_LIMIT = 1;

// Instead of standing perfectly still, should we circle in place near our
// weapon range?
int CIRCLE_IN_PLACE_DURING_COMBAT = 0;
float CIRCLE_RADIUS_DIVISOR = 6.0;

// PATHING

// How quickly do we rotate away from collision (1.57 is very quick)
float MAX_PREVENTION_ROTATION = 0.6;

// Cost of OFF-MAP pathing
int OFF_MAP_PATHING_COST = 90000;

// Path Planning
float HIGHEST_QUADTREE_GRID_RESOLUTION = 50.0;

// Should we use the full on path planning?
int USE_PATH_PLANNING = 1;

// A value for terrain impassability
int IMPASSABLE_TERRAIN = -1;

// Default value for terrain cost
int DEFAULT_TERRAIN_VALUE = 100;

// What is a value above which we don't let people path into a region
int CANNOT_PATH_INTO_COST = 200;

// Do we want the extra special rubber banding effect to make paths nicer?
int PERFORM_RUBBER_BANDING = 1;

// Do formation moves relative to chase ship or relative to map position
int FORMATIONS_RELATIVE_TO_SHIP = 0;

// In certain combat modes, we go extra slow
float COMBAT_SLOWDOWN = 1.0;

// The leader of a formation should slow his ass down
float FORMATION_LEADER_SLOWDOWN = 0.9;

// Pathing cost for nebulae
float NEBULAE_PATHING_COST = 198.0;

// Extra distance for pathing around nebulae
float NEBULAE_PATHING_SAFETY_COEFFICIENT = 1.8;

// Pathing cost for asteroid belts
float ASTEROID_BELT_PATHING_COST = 201.0;

// Distance for pathing around asteroid belts
float ASTEROID_BELT_PATHING_DISTANCE = 150.0;

// Pathing cost for blackholes
float BLACKHOLE_PATHING_COST = IMPASSABLE_TERRAIN;

// Extra distance for pathing around blackholes
float BLACKHOLE_PATHING_SAFETY_COEFFICIENT = 1.5;

// Do we default to formation move, or non-formation group move
int DEFAULT_TO_FORMATION_MOVE = 0;

// STRATEGIC AI PARAMETERS
float AI_GRID_SIZE = 400.0;
#define EASY_AI "AI_Easy_Script.dsl"
#define MEDIUM_AI "AI_Medium_Script.dsl"
#define HARD_AI "AI_Hard_Script.dsl"

// Ship combat configuration
float SHIP_COMBAT_FLOOR = 10.0;
float SHIP_COMBAT_CEILING = 67.0;
float ANCHOR_PURSUIT_POINT_ANGLE = (3.14159/6);
float ANCHOR_RADIUS = 4.0;
float ANCHOR_PURSUIT_FORCE = 1.0;
float CENTER_OF_COMBAT_PERSISTENCE_CUTOFF = 6 * ANCHOR_RADIUS;
float DOGFIGHT_RANGE = 70.0;

//
// COLLISION AVOIDANCE & PATH FOLLOWING STUFF
//

// How far apart should ships be when moving in formation
float FORMATION_SPACING = 100.0;

// How much the last cycle's collision avoidance force should factor into
// this cycle's.  Must be less than 1.0, and should likely not be very close
// to 1.0.
float OLD_AVOIDANCE_FORCE_WEIGHT = 0.7;

//Obstacle avoidance is off by default
int OBSTACLE_AVOIDANCE = 0;

// How far ahead to project a collision
float COLLISION_LOOK_AHEAD_TIME = 1.4;

// How much wider than reality to pretend objects are for collision avoidance
float COLLISION_SAFETY_MARGIN = 1.2;

// We're adding a special repulsion on the y-axis for collision avoidance.
float Y_REPULSION = 0.5;

// When we're following a scripted 3D path, we know to advance to the next
// point when we're within this radius of the current point
float PATH_POINT_RADIUS = 35.0;
float PATH_POINT_RADIUS_SQUARED = PATH_POINT_RADIUS * PATH_POINT_RADIUS;

// In order for scripted maneuvers to look good, we need to speed up the
// maneuvering ship, and slow down the target ship
float SCRIPTED_ATTACK_SPEED_UP = 1.2;
float SCRIPTED_ATTACK_TARGET_SLOW_DOWN = 0.6;

// We need an epsilon value for sending units to the right or bottom of the map
// to keep our position strictly LESS than the edge value
float MAP_EDGE_EPSILON = 0.1;

// We actually start keeping ships from the edge this many meters out
float MAP_EDGE_BUFFER = 100.0;

//
//     GAMEPLAY
//

// Transporter parameters.
float TRANSPORTER_RANGE = 500.0;
float TRANSPORTER_DELAY = 1.0;
float TRANSPORTER_ACTION_DELAY = 1.0;
int   TRANSPORTER_MAX = 5;

//fraction of the the build time it takes to decommission
float DECONSTRUCT_PERCENT_TIME = 0.3;

// Weapon parameters.
float BEAM_MISS_LIFETIME = 0.1;

// Use team color for normal weapons?
int NORMAL_WEAPON_TEAM_COLOR = 0;

// resource gathering parameters
int cfgMaxDilithium = 999999;
int cfgMaxOfficers = 100;
int cfgMaxCrew = 99999;
int cfgStartingDilithium = 3500;
int cfgStartingCrew = 4000;

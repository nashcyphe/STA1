
//
//     GRAPHICS
//

// Camera stuff.
float SMOOTH_CAMERA_TIME = 2.0;
int MOVIE_CAMERA = 0;
float CAMERA_MIN_ZOOM = 0.5;				// coeficient, nominally 0.5
float CAMERA_MAX_ZOOM = 100.0;				// coeficient, nominally 100.0

// Storm3D chunk manager parameters.
int   ST3D_CHUNK_MANAGER_MAX_CHUNKS = 1500;
float ST3D_CHUNK_DENSITY = 0.8;
float ST3D_CHUNK_MAX_LIFETIME = 2.75;
float ST3D_CHUNK_MAX_ANGULAR_VELOCITY = 4.0;
float ST3D_CHUNK_MAX_VELOCITY = 70.0;


// Starfield parameters
#define STARFIELD_GEOMETRY_NAME "mbgstars.sod"
float STARFIELD_GEOMETRY_SCALE = STAR_FAR_CLIP_PLANE*0.02;


// Clipping planes
float NEAR_CLIPPING_PLANE = 5.0;			// meters from eyepoint.  Nominally 1.0
float FAR_CLIPPING_PLANE = 1400.0;			// meters from eyepoint.
float CINERACTIVE_FAR_CLIPPING_PLANE = 1000.0;	// meters from eyepoint

// Clipping planes for the cinematic camera 
float CINEMATIC_NEAR_CLIPPING_PLANE = 10.0;	// meters from eyepoint.  Nominally 1.0
float CINEMATIC_FAR_CLIPPING_PLANE = 300.0;	// meters from eyepoint.  

// Special clipping planes for special effects
float STAR_FAR_CLIP_PLANE = 80000.0;
float GRID_FAR_CLIP_PLANE = 10000.0;

// Number of representations for various starfield objects.
int STARFIELD_BACKGROUND_STAR_NUM_REPRESENTATIONS=1;
int STARFIELD_MEDIUM_STAR_NUM_REPRESENTATIONS=1;
int STARFIELD_CLOSE_STAR_NUM_REPRESENTATIONS=1;

//
// Configuration 0 for a SLOW machine
//

// Configure the main and cinematic views
int DETAIL_0_cinematic_show_grid = 0;
int DETAIL_0_cinematic_show_background = 0;
int DETAIL_0_cinematic_show_stars = 0;
int DETAIL_0_cinematic_show_ordnance = 1;
int DETAIL_0_main_show_grid = 1;
int DETAIL_0_main_show_background = 0;
int DETAIL_0_main_show_stars = 1;
int DETAIL_0_main_show_ordnance = 1;

// Clipping planes
float DETAIL_0_NEAR_CLIPPING_PLANE = 5.0;			// meters from eyepoint.  Nominally 1.0
float DETAIL_0_FAR_CLIPPING_PLANE = 1000.0;			// meters from eyepoint.  

// Clipping planes for the cinematic camera 
float DETAIL_0_CINEMATIC_NEAR_CLIPPING_PLANE = 10.0;	// meters from eyepoint.  Nominally 1.0
float DETAIL_0_CINEMATIC_FAR_CLIPPING_PLANE = 300.0;	// meters from eyepoint.  

// Special clipping planes for special effects
float DETAIL_0_STAR_FAR_CLIP_PLANE = 80000.0;
float DETAIL_0_GRID_FAR_CLIP_PLANE = 10000.0;

// Starfield object LOD specific parameters
int   DETAIL_0_STARFIELD_BACKGROUND_STAR_COUNT = 100;
float DETAIL_0_STARFIELD_BACKGROUND_STAR_MAX_DISTANCE = 20000.0;
float DETAIL_0_STARFIELD_BACKGROUND_STAR_DISTANCE_VARIATION = 14000.0;
float DETAIL_0_STARFIELD_BACKGROUND_STAR_MAX_SIZE = 75.0;
float DETAIL_0_STARFIELD_BACKGROUND_STAR_SIZE_VARIATION = 35.0;

int   DETAIL_0_STARFIELD_MEDIUM_STAR_COUNT = 3;
float DETAIL_0_STARFIELD_MEDIUM_STAR_MAX_DISTANCE = 10000.0;
float DETAIL_0_STARFIELD_MEDIUM_STAR_DISTANCE_VARIATION = 3000.0;
float DETAIL_0_STARFIELD_MEDIUM_STAR_MAX_SIZE = 200.0;
float DETAIL_0_STARFIELD_MEDIUM_STAR_SIZE_VARIATION = 30.0;

int   DETAIL_0_STARFIELD_CLOSE_STAR_COUNT =1;
float DETAIL_0_STARFIELD_CLOSE_STAR_MAX_DISTANCE = 10000.0;
float DETAIL_0_STARFIELD_CLOSE_STAR_DISTANCE_VARIATION = 3000.0;
float DETAIL_0_STARFIELD_CLOSE_STAR_MAX_SIZE = 500.0;
float DETAIL_0_STARFIELD_CLOSE_STAR_SIZE_VARIATION = 40.0;



//
// Configuration 1 for a slightly faster machine
//

// Configure the main and cinematic views
int DETAIL_1_cinematic_show_grid = 1;
int DETAIL_1_cinematic_show_background = 1;
int DETAIL_1_cinematic_show_stars = 0;
int DETAIL_1_cinematic_show_ordnance = 1;
int DETAIL_1_main_show_grid = 1;
int DETAIL_1_main_show_background = 1;
int DETAIL_1_main_show_stars = 1;
int DETAIL_1_main_show_ordnance = 1;

// Clipping planes
float DETAIL_1_NEAR_CLIPPING_PLANE = 5.0;			// meters from eyepoint.  Nominally 1.0
float DETAIL_1_FAR_CLIPPING_PLANE = 1000.0;			// meters from eyepoint.  

// Clipping planes for the cinematic camera 
float DETAIL_1_CINEMATIC_NEAR_CLIPPING_PLANE = 10.0;	// meters from eyepoint.  Nominally 1.0
float DETAIL_1_CINEMATIC_FAR_CLIPPING_PLANE = 300.0;	// meters from eyepoint.  

// Special clipping planes for special effects
float DETAIL_1_STAR_FAR_CLIP_PLANE = 80000.0;
float DETAIL_1_GRID_FAR_CLIP_PLANE = 10000.0;

// Levels of detail based on depth
float DETAIL_1_LOD_0_DISTANCE = 300;
float DETAIL_1_LOD_1_DISTANCE = 150;
float DETAIL_1_LOD_2_DISTANCE = 75;


float DETAIL_1_CINEMATIC_LOD_0_DISTANCE = 2;
float DETAIL_1_CINEMATIC_LOD_1_DISTANCE = 1;
float DETAIL_1_CINEMATIC_LOD_2_DISTANCE = 0;

// Don't show the background or the grid
DETAIL_1_cinematic_show_background = 0;
DETAIL_1_cinematic_show_grid = 0;

// Starfield object statistics 
int DETAIL_1_STARFIELD_BACKGROUND_STAR_COUNT = 400;
float DETAIL_1_STARFIELD_BACKGROUND_STAR_MAX_DISTANCE = 20000.0;
float DETAIL_1_STARFIELD_BACKGROUND_STAR_DISTANCE_VARIATION = 14000.0;
float DETAIL_1_STARFIELD_BACKGROUND_STAR_MAX_SIZE = 75.0;
float DETAIL_1_STARFIELD_BACKGROUND_STAR_SIZE_VARIATION = 35.0;

int DETAIL_1_STARFIELD_MEDIUM_STAR_COUNT = 5;
float DETAIL_1_STARFIELD_MEDIUM_STAR_MAX_DISTANCE = 10000.0;
float DETAIL_1_STARFIELD_MEDIUM_STAR_DISTANCE_VARIATION = 3000.0;
float DETAIL_1_STARFIELD_MEDIUM_STAR_MAX_SIZE = 200.0;
float DETAIL_1_STARFIELD_MEDIUM_STAR_SIZE_VARIATION = 30.0;

int DETAIL_1_STARFIELD_CLOSE_STAR_COUNT =2;
float DETAIL_1_STARFIELD_CLOSE_STAR_MAX_DISTANCE = 10000.0;
float DETAIL_1_STARFIELD_CLOSE_STAR_DISTANCE_VARIATION = 3000.0;
float DETAIL_1_STARFIELD_CLOSE_STAR_MAX_SIZE = 500.0;
float DETAIL_1_STARFIELD_CLOSE_STAR_SIZE_VARIATION = 40.0;


//
// Configuration 2 for a medium machine
//

// Configure the main and cinematic views
int DETAIL_2_cinematic_show_grid = 1;
int DETAIL_2_cinematic_show_background = 1;
int DETAIL_2_cinematic_show_stars = 0;
int DETAIL_2_cinematic_show_ordnance = 1;
int DETAIL_2_main_show_grid = 1;
int DETAIL_2_main_show_background = 1;
int DETAIL_2_main_show_stars = 1;
int DETAIL_2_main_show_ordnance = 1;

// Clipping planes
float DETAIL_2_NEAR_CLIPPING_PLANE = 5.0;			// meters from eyepoint.  Nominally 1.0
float DETAIL_2_FAR_CLIPPING_PLANE = 1000.0;			// meters from eyepoint.  

// Clipping planes for the cinematic camera 
float DETAIL_2_CINEMATIC_NEAR_CLIPPING_PLANE = 10.0;	// meters from eyepoint.  Nominally 1.0
float DETAIL_2_CINEMATIC_FAR_CLIPPING_PLANE = 300.0;	// meters from eyepoint.  

// Special clipping planes for special effects
float DETAIL_2_STAR_FAR_CLIP_PLANE = 80000.0;
float DETAIL_2_GRID_FAR_CLIP_PLANE = 10000.0;

// Levels of detail based on depth
float DETAIL_2_LOD_0_DISTANCE = 650;
float DETAIL_2_LOD_1_DISTANCE = 250;
float DETAIL_2_LOD_2_DISTANCE = 100;

float DETAIL_2_CINEMATIC_LOD_0_DISTANCE = 200;
float DETAIL_2_CINEMATIC_LOD_1_DISTANCE = 100;
float DETAIL_2_CINEMATIC_LOD_2_DISTANCE = 50;

// Starfield object statistics 
int DETAIL_2_STARFIELD_BACKGROUND_STAR_COUNT = 750;
float DETAIL_2_STARFIELD_BACKGROUND_STAR_MAX_DISTANCE = 20000.0;
float DETAIL_2_STARFIELD_BACKGROUND_STAR_DISTANCE_VARIATION = 14000.0;
float DETAIL_2_STARFIELD_BACKGROUND_STAR_MAX_SIZE = 75.0;
float DETAIL_2_STARFIELD_BACKGROUND_STAR_SIZE_VARIATION = 35.0;

int DETAIL_2_STARFIELD_MEDIUM_STAR_COUNT = 10;
float DETAIL_2_STARFIELD_MEDIUM_STAR_MAX_DISTANCE = 10000.0;
float DETAIL_2_STARFIELD_MEDIUM_STAR_DISTANCE_VARIATION = 3000.0;
float DETAIL_2_STARFIELD_MEDIUM_STAR_MAX_SIZE = 200.0;
float DETAIL_2_STARFIELD_MEDIUM_STAR_SIZE_VARIATION = 30.0;

int DETAIL_2_STARFIELD_CLOSE_STAR_COUNT =3;
float DETAIL_2_STARFIELD_CLOSE_STAR_MAX_DISTANCE = 10000.0;
float DETAIL_2_STARFIELD_CLOSE_STAR_DISTANCE_VARIATION = 3000.0;
float DETAIL_2_STARFIELD_CLOSE_STAR_MAX_SIZE = 500.0;
float DETAIL_2_STARFIELD_CLOSE_STAR_SIZE_VARIATION = 40.0;



//
// Configuration 3 for a fast machine
//

// Configure the main and cinematic views
int DETAIL_3_cinematic_show_grid = 1;
int DETAIL_3_cinematic_show_background = 1;
int DETAIL_3_cinematic_show_stars = 0;
int DETAIL_3_cinematic_show_ordnance = 1;
int DETAIL_3_main_show_grid = 1;
int DETAIL_3_main_show_background = 1;
int DETAIL_3_main_show_stars = 1;
int DETAIL_3_main_show_ordnance = 1;

// Clipping planes
float DETAIL_3_NEAR_CLIPPING_PLANE = 5.0;			// meters from eyepoint.  Nominally 1.0
float DETAIL_3_FAR_CLIPPING_PLANE = 1000.0;			// meters from eyepoint.  

// Clipping planes for the cinematic camera 
float DETAIL_3_CINEMATIC_NEAR_CLIPPING_PLANE = 10.0;	// meters from eyepoint.  Nominally 1.0
float DETAIL_3_CINEMATIC_FAR_CLIPPING_PLANE = 300.0;	// meters from eyepoint.  

// Special clipping planes for special effects
float DETAIL_3_STAR_FAR_CLIP_PLANE = 80000.0;
float DETAIL_3_GRID_FAR_CLIP_PLANE = 10000.0;

// Levels of detail based on depth
float DETAIL_3_LOD_0_DISTANCE = 650;
float DETAIL_3_LOD_1_DISTANCE = 250;
float DETAIL_3_LOD_2_DISTANCE = 100;

float DETAIL_3_CINEMATIC_LOD_0_DISTANCE = 200;
float DETAIL_3_CINEMATIC_LOD_1_DISTANCE = 100;
float DETAIL_3_CINEMATIC_LOD_2_DISTANCE = 50;

// Starfield object statistics 
int DETAIL_3_STARFIELD_BACKGROUND_STAR_COUNT = 750;
float DETAIL_3_STARFIELD_BACKGROUND_STAR_MAX_DISTANCE = 20000.0;
float DETAIL_3_STARFIELD_BACKGROUND_STAR_DISTANCE_VARIATION = 14000.0;
float DETAIL_3_STARFIELD_BACKGROUND_STAR_MAX_SIZE = 75.0;
float DETAIL_3_STARFIELD_BACKGROUND_STAR_SIZE_VARIATION = 35.0;

int DETAIL_3_STARFIELD_MEDIUM_STAR_COUNT = 10;
float DETAIL_3_STARFIELD_MEDIUM_STAR_MAX_DISTANCE = 10000.0;
float DETAIL_3_STARFIELD_MEDIUM_STAR_DISTANCE_VARIATION = 3000.0;
float DETAIL_3_STARFIELD_MEDIUM_STAR_MAX_SIZE = 200.0;
float DETAIL_3_STARFIELD_MEDIUM_STAR_SIZE_VARIATION = 30.0;

int DETAIL_3_STARFIELD_CLOSE_STAR_COUNT =3;
float DETAIL_3_STARFIELD_CLOSE_STAR_MAX_DISTANCE = 10000.0;
float DETAIL_3_STARFIELD_CLOSE_STAR_DISTANCE_VARIATION = 3000.0;
float DETAIL_3_STARFIELD_CLOSE_STAR_MAX_SIZE = 500.0;
float DETAIL_3_STARFIELD_CLOSE_STAR_SIZE_VARIATION = 40.0;



//
// Configuration 4 for a very fast machine
//

// Configure the main and cinematic views
int DETAIL_4_cinematic_show_grid = 1;
int DETAIL_4_cinematic_show_background = 1;
int DETAIL_4_cinematic_show_stars = 0;
int DETAIL_4_cinematic_show_ordnance = 1;
int DETAIL_4_main_show_grid = 1;
int DETAIL_4_main_show_background = 1;
int DETAIL_4_main_show_stars = 1;
int DETAIL_4_main_show_ordnance = 1;

// Clipping planes
float DETAIL_4_NEAR_CLIPPING_PLANE = 5.0;			// meters from eyepoint.  Nominally 1.0
float DETAIL_4_FAR_CLIPPING_PLANE = 1000.0;			// meters from eyepoint.  

// Clipping planes for the cinematic camera 
float DETAIL_4_CINEMATIC_NEAR_CLIPPING_PLANE = 10.0;	// meters from eyepoint.  Nominally 1.0
float DETAIL_4_CINEMATIC_FAR_CLIPPING_PLANE = 300.0;	// meters from eyepoint.  

// Special clipping planes for special effects
float DETAIL_4_STAR_FAR_CLIP_PLANE = 80000.0;
float DETAIL_4_GRID_FAR_CLIP_PLANE = 10000.0;

// Levels of detail based on depth
float DETAIL_4_LOD_0_DISTANCE = 650;
float DETAIL_4_LOD_1_DISTANCE = 250;
float DETAIL_4_LOD_2_DISTANCE = 100;

float DETAIL_4_CINEMATIC_LOD_0_DISTANCE = 200;
float DETAIL_4_CINEMATIC_LOD_1_DISTANCE = 100;
float DETAIL_4_CINEMATIC_LOD_2_DISTANCE = 50;

// Starfield object statistics 
int DETAIL_4_STARFIELD_BACKGROUND_STAR_COUNT = 750;
float DETAIL_4_STARFIELD_BACKGROUND_STAR_MAX_DISTANCE = 20000.0;
float DETAIL_4_STARFIELD_BACKGROUND_STAR_DISTANCE_VARIATION = 14000.0;
float DETAIL_4_STARFIELD_BACKGROUND_STAR_MAX_SIZE = 75.0;
float DETAIL_4_STARFIELD_BACKGROUND_STAR_SIZE_VARIATION = 35.0;

int DETAIL_4_STARFIELD_MEDIUM_STAR_COUNT = 10;
float DETAIL_4_STARFIELD_MEDIUM_STAR_MAX_DISTANCE = 10000.0;
float DETAIL_4_STARFIELD_MEDIUM_STAR_DISTANCE_VARIATION = 3000.0;
float DETAIL_4_STARFIELD_MEDIUM_STAR_MAX_SIZE = 200.0;
float DETAIL_4_STARFIELD_MEDIUM_STAR_SIZE_VARIATION = 30.0;

int DETAIL_4_STARFIELD_CLOSE_STAR_COUNT =3;
float DETAIL_4_STARFIELD_CLOSE_STAR_MAX_DISTANCE = 10000.0;
float DETAIL_4_STARFIELD_CLOSE_STAR_DISTANCE_VARIATION = 3000.0;
float DETAIL_4_STARFIELD_CLOSE_STAR_MAX_SIZE = 500.0;
float DETAIL_4_STARFIELD_CLOSE_STAR_SIZE_VARIATION = 40.0;



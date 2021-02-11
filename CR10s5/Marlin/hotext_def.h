#pragma once

#ifndef __MARLIN_FIRMWARE__
#define __MARLIN_FIRMWARE__
#endif

//
// Prefix header to acquire configurations
//
#include <stdint.h>

#include "Configuration.h"

/*Store all known hotend PID, thermistor values here*/ 
#if ENABLED(Creality_mk8) 
#define TEMP_SENSOR_0 1
#endif

#if ENABLED(E3D_v6) 
#define TEMP_SENSOR_0 5
#endif

#if ENABLED(E3D_volcano) 
#define TEMP_SENSOR_0 5
#endif

#if ENABLED(E3D_hemera)
#define TEMP_SENSOR_0 5
#endif

#if ENABLED(E3D_titanaero_hotend)
#define TEMP_SENSOR_0 5 // using's E3D's thermistor
#endif

#if ENABLED(Slice_moquito) 
#define TEMP_SENSOR_0 5 // using's E3D's thermistor
#endif

#if ENABLED (Sidewinder_x1hotend)
#define TEMP_SENSOR_0 1
#endif

/*Store all known heated bed thermistor here*/
#if ENABLED (Creality_e3)
#define TEMP_SENSOR_BED 1 
#endif

#if ENABLED (Sidewinder_x1bed)
#define TEMP_SENSOR_BED 1
#endif

/*Store all known hotend data here*/

#if ENABLED (Ender_regular)
#define e__steps 93
#endif

#if ENABLED (Ender_regular_metal)
#define e__steps 97.3
#endif

#if ENABLED (Ender_metaldualdrive)
#define e__steps 140
#endif

#if ENABLED (E3D_hemera_extruder)
#define e__steps 409
#endif


#if ENABLED (BMG_regular)
#define e__steps 140
#endif

#if ENABLED (BMG_dualdrive)
#define e__steps 415
#endif

#if ENABLED (Zesty_nimble)
#define e__steps 2700
#endif

#if ENABLED (SEEMECNCEZRSTRUDER)
#define e__steps 94.86
#endif

#if ENABLED (E3D_titanaero_extruder)
#define e__steps 837
#endif

// ----------------------------------------------------------------------------
// 3x2.h
//
//
// Authors:
// Peter Polidoro polidorop@janelia.hhmi.org
// ----------------------------------------------------------------------------
#ifndef PELLET_DISPENSER_3X2_CONSTANTS_H
#define PELLET_DISPENSER_3X2_CONSTANTS_H
#include "Constants.h"


#if defined(__MK20DX256__)

namespace pellet_dispenser
{
namespace constants
{
enum{TMC26X_COUNT=3};

extern const size_t cs_pins[TMC26X_COUNT];

// Interrupts

// Units

// Properties
// Property values must be long, double, bool, long[], double[], bool[], char[], ConstantString *, (ConstantString *)[]
extern const double steps_per_position_unit_default[step_dir_controller::constants::CHANNEL_COUNT];

extern const long current_scale_default[TMC26X_COUNT];

extern const long microsteps_per_step_default[TMC26X_COUNT];

// Parameters

// Functions

// Callbacks

// Errors
}
}
#endif
#endif

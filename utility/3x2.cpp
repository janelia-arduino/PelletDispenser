// ----------------------------------------------------------------------------
// 3x2.cpp
//
//
// Authors:
// Peter Polidoro polidorop@janelia.hhmi.org
// ----------------------------------------------------------------------------
#include "3x2.h"


#if defined(__MK20DX256__)

namespace pellet_dispenser
{
namespace constants
{
const size_t cs_pins[TMC26X_COUNT] = {9,8,7};

// Interrupts

// Units

// Properties
const double steps_per_position_unit_default[step_dir_controller::constants::CHANNEL_COUNT] =
  {
    steps_per_position_unit_element_default,
    steps_per_position_unit_element_default,
    steps_per_position_unit_element_default,
  };

const long current_scale_default[TMC26X_COUNT] =
  {
    20,
    20,
    20
  };

const long microsteps_per_step_default[TMC26X_COUNT] =
  {
    microsteps_per_step_subset[MICROSTEPS_PER_STEP_SUBSET_LENGTH - 1].l,
    microsteps_per_step_subset[MICROSTEPS_PER_STEP_SUBSET_LENGTH - 1].l,
    microsteps_per_step_subset[MICROSTEPS_PER_STEP_SUBSET_LENGTH - 1].l,
  };

// Parameters

// Functions

// Callbacks

// Errors
}
}
#endif

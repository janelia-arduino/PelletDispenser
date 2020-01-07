// ----------------------------------------------------------------------------
// 5x3.cpp
//
//
// Authors:
// Peter Polidoro peterpolidoro@gmail.com
// ----------------------------------------------------------------------------
#include "5x3.h"


#if defined(__MK64FX512__)

namespace pellet_dispenser
{
namespace constants
{
// Pins

// Units
// Properties
const long steps_per_position_units_default[stepper_controller::constants::CHANNEL_COUNT_MAX] =
{
  2520, // microsteps/mm = (24steps/rev)*(256microsteps/step)/((0.048in/rev)*(25.4mm/in))
  8063, // microsteps/mm = (200steps/rev)*(256microsteps/step)/((0.250in/rev)*(25.4mm/in))
  8063, // microsteps/mm = (200steps/rev)*(256microsteps/step)/((0.250in/rev)*(25.4mm/in))
};

const long velocity_max_default[stepper_controller::constants::CHANNEL_COUNT_MAX] =
{
  7,
  200,
  200,
};

const long velocity_min_default[stepper_controller::constants::CHANNEL_COUNT_MAX] =
{
  1,
  2,
  2,
};

const long acceleration_max_default[stepper_controller::constants::CHANNEL_COUNT_MAX] =
{
  1200,
  1000,
  1000,
};

const long home_velocity_default[stepper_controller::constants::CHANNEL_COUNT_MAX] =
{
  -7,
  -20,
  -20,
};

const bool invert_driver_direction_default[stepper_controller::constants::CHANNEL_COUNT_MAX] =
{
  true,
  false,
  false,
};

const long run_current_default[stepper_controller::constants::CHANNEL_COUNT_MAX] =
{
  run_current_0_element_default,
  run_current_1_2_element_default,
  run_current_1_2_element_default,
};

const long hold_current_default[stepper_controller::constants::CHANNEL_COUNT_MAX] =
{
  hold_current_0_element_default,
  hold_current_1_2_element_default,
  hold_current_1_2_element_default,
};

const long hold_delay_default[stepper_controller::constants::CHANNEL_COUNT_MAX] =
{
  hold_delay_element_default,
  hold_delay_element_default,
  hold_delay_element_default,
};

const long stage_position_min_default[stepper_controller::constants::CHANNEL_COUNT_MAX] =
{
  0,
  0,
  0,
};

const long stage_position_max_default[stepper_controller::constants::CHANNEL_COUNT_MAX] =
{
  20,
  80,
  80,
};

const long buzz_position_default[stepper_controller::constants::CHANNEL_COUNT_MAX] =
{
  10,
  33,
  64,
};

const long load_position_default[stepper_controller::constants::CHANNEL_COUNT_MAX] =
{
  1,
  33,
  64,
};

const long next_deliver_position_default[stepper_controller::constants::CHANNEL_COUNT_MAX] =
{
  10,
  33,
  64,
};

// Parameters

// Functions

// Callbacks

// Errors
}
}
#endif

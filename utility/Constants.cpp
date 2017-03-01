// ----------------------------------------------------------------------------
// Constants.cpp
//
//
// Authors:
// Peter Polidoro polidorop@janelia.hhmi.org
// ----------------------------------------------------------------------------
#include "Constants.h"


namespace pellet_dispenser
{
namespace constants
{
CONSTANT_STRING(device_name,"pellet_dispenser");

CONSTANT_STRING(firmware_name,"PelletDispenser");
// Use semantic versioning http://semver.org/
const modular_server::FirmwareInfo firmware_info =
  {
    .name_ptr=&firmware_name,
    .version_major=1,
    .version_minor=0,
    .version_patch=0,
  };

// Interrupts

// Units
CONSTANT_STRING(percent_unit,"%");

// Properties
extern const double steps_per_position_unit_element_default = 200;

CONSTANT_STRING(current_scale_property_name,"currentScale");
const long current_scale_min = 1;
const long current_scale_max = 100;

CONSTANT_STRING(microsteps_per_step_property_name,"microstepsPerStep");
modular_server::SubsetMemberType microsteps_per_step_subset[MICROSTEPS_PER_STEP_SUBSET_LENGTH] =
  {
    {.l=1},
    {.l=2},
    {.l=4},
    {.l=8},
    {.l=16},
    {.l=32},
    {.l=64},
    {.l=128},
    {.l=256},
  };

// Parameters

// Functions

// Callbacks

// Errors
}
}

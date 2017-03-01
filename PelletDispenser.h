// ----------------------------------------------------------------------------
// PelletDispenser.h
//
//
// Authors:
// Peter Polidoro polidorop@janelia.hhmi.org
// ----------------------------------------------------------------------------
#ifndef PELLET_DISPENSER_H
#define PELLET_DISPENSER_H
#include "Flash.h"
#include <EEPROM.h>
#include "Streaming.h"
#include "ArduinoJson.h"
#include "JsonSanitizer.h"
#include "JsonStream.h"
#include "Array.h"
#include "Vector.h"
#include "MemoryFree.h"
#include "ConstantVariable.h"
#include "SavedVariable.h"
#include "Functor.h"
#include "IndexedContainer.h"
#include "FunctorCallbacks.h"

#include "SPI.h"
#include "TMC429.h"
#include "TMC26X.h"

#include "ModularServer.h"
#include "ModularDevice.h"
#include "StepDirController.h"

#include "utility/Constants.h"


class PelletDispenser : public StepDirController
{
public:
  PelletDispenser();
  virtual void setup();

  virtual void reinitialize();

protected:
  virtual double stepsToPositionUnits(const size_t channel, const double steps);
  virtual double positionUnitsToSteps(const size_t channel, const double position_units);

private:
  modular_server::Property properties_[pellet_dispenser::constants::PROPERTY_COUNT_MAX];
  modular_server::Parameter parameters_[pellet_dispenser::constants::PARAMETER_COUNT_MAX];
  modular_server::Function functions_[pellet_dispenser::constants::FUNCTION_COUNT_MAX];
  modular_server::Callback callbacks_[pellet_dispenser::constants::CALLBACK_COUNT_MAX];

  TMC26X tmc26xs_[pellet_dispenser::constants::TMC26X_COUNT];

  // Handlers
  void setCurrentScaleHandler(const size_t driver);
  void preSetMicrostepsPerStepHandler(const size_t driver);
  void postSetMicrostepsPerStepHandler(const size_t driver);

};

#endif

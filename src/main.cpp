#include <Arduino.h>
#include <Preferences.h>
#include "main.h"

Preferences preferences;

void setup()
{
  if (IS_DEBUG_MODE)
    Serial.begin(115200);

  setupTemp();
  setupVoltage();
  setupLeds();
  setupRelay();
}

void loop()
{
  is18VoltsDetected(VOLT_SENSE_1_PIN);
  is18VoltsDetected(VOLT_SENSE_2_PIN);
  is18VoltsDetected(VOLT_SENSE_3_PIN);
  is18VoltsDetected(VOLT_SENSE_4_PIN);

  readTemperature();
  setNewTemperature();
}

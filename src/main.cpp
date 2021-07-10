#include <Arduino.h>
#include <ArduinoLog.h>
#include <IRremote.h>
#include "config.hpp"

namespace ir = config::ir;

void setup() {
  Serial.begin(115200);
  Log.begin(LOG_LEVEL_NOTICE, &Serial);
  pinMode(23, OUTPUT_OPEN_DRAIN);
  IrSender.setSendPin(23);
}

void loop() {
  // put your main code here, to run repeatedly:
  IrSender.write(&ir::YAMAHA_VOL_INC);
  delay(800);
  IrSender.write(&ir::YAMAHA_VOL_DEC);
  delay(800);
}

#include <Arduino.h>
#include <ArduinoLog.h>
#include <IRremote.h>
#include "config.hpp"
#include "IRCodes.hpp"

void setup() {
  Serial.begin(115200);
  Log.begin(LOG_LEVEL_NOTICE, &Serial);
  pinMode(23, OUTPUT_OPEN_DRAIN);
}

void loop() {
  // put your main code here, to run repeatedly:
  IrSender.write(&IR::YAMAHA_VOL_INC);
  delay(500);
  IrSender.write(&IR::YAMAHA_VOL_DEC);
  delay(500);
}

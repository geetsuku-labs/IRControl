#include <Arduino.h>
#include <ArduinoLog.h>
#include <IRremote.h>

void setup() {
  Serial.begin(115200);
  Log.begin(LOG_LEVEL_NOTICE, &Serial);
  pinMode(23, OUTPUT_OPEN_DRAIN);
  IrSender.setSendPin(23);
}

void loop() {
  // put your main code here, to run repeatedly:
  IrSender.sendNECMSB(0x7E8154AB, 32, false);
  delay(5000);
}

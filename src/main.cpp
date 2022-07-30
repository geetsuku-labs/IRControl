#include <Arduino.h>
#include <ArduinoLog.h>
#include <IRremote.hpp>
#include "config.hpp"
#include "IRCodes.hpp"

namespace {
    void serialSetup(HardwareSerial &serial, unsigned long baud) {
        serial.begin(baud);
        serial.println(F("Booting PVE Control..."));
    }
} // namespace

void setup() {
    serialSetup(Serial, 115200);
    LOG::setup();
    pinMode(IR_SEND_PIN, OUTPUT_OPEN_DRAIN);
}

void loop() {
  // put your main code here, to run repeatedly:
    IrSender.write(&IR::YAMAHA_VOL_INC);
    delay(500);
    IrSender.write(&IR::YAMAHA_VOL_DEC);
    delay(500);
}

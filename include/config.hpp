#pragma once

#include <Arduino.h>
#include <IRremoteInt.h>
#include "credentials.hpp"

namespace MODULE
{
    namespace UART0
    {
        HardwareSerial      &PORT = Serial;
        const unsigned long  BAUD = 115200;
    };
    
    namespace LED0
    {
        const uint8_t  PIN = 23;
        const uint8_t  MODE = OPEN_DRAIN;
    };

    namespace IP
    {
        const char    *HOSTNAME = "irremote";
        const uint16_t OTA_PORT = 8266;
    };

    namespace LOGGER
    {
        using namespace MODULE::UART0;
        const int       LEVEL  = LOG_LEVEL;
    };

    namespace IR
    {
        using namespace MODULE::LED0;
        IRData   YAMAHA_POWER    = {   NEC,   0x7EU,   0x2AU, 0x0, 0x0, IRDATA_FLAGS_EMPTY, 0x0, NULL};
        IRData   YAMAHA_VOL_INC  = {   NEC,   0x7AU,   0x1AU, 0x0, 0x0, IRDATA_FLAGS_EMPTY, 0x0, NULL};
        IRData   YAMAHA_VOL_DEC  = {   NEC,   0x7AU,   0x1BU, 0x0, 0x0, IRDATA_FLAGS_EMPTY, 0x0, NULL};
        IRData   YAMAHA_VOL_MUTE = {   NEC,   0x7AU,   0x1CU, 0x0, 0x0, IRDATA_FLAGS_EMPTY, 0x0, NULL};
        IRData   YAMAHA_HDMI1    = { ONKYO, 0x857AU, 0x3847U, 0x0, 0x0, IRDATA_FLAGS_EMPTY, 0x0, NULL};
        IRData   YAMAHA_HDMI2    = { ONKYO, 0x857AU, 0x354AU, 0x0, 0x0, IRDATA_FLAGS_EMPTY, 0x0, NULL};
        IRData   YAMAHA_HDMI3    = { ONKYO, 0x857AU, 0x324DU, 0x0, 0x0, IRDATA_FLAGS_EMPTY, 0x0, NULL};
        IRData   YAMAHA_HDMI4    = { ONKYO, 0x857AU, 0x2F50U, 0x0, 0x0, IRDATA_FLAGS_EMPTY, 0x0, NULL};
        IRData   YAMAHA_HDMI5    = { ONKYO, 0x857AU, 0x0F70U, 0x0, 0x0, IRDATA_FLAGS_EMPTY, 0x0, NULL};
        IRData   YAMAHA_HDMI6    = { ONKYO, 0x857AU, 0x0C73U, 0x0, 0x0, IRDATA_FLAGS_EMPTY, 0x0, NULL};
        IRData   YAMAHA_SCENE1   = { ONKYO, 0x857AU, 0x7F00U, 0x0, 0x0, IRDATA_FLAGS_EMPTY, 0x0, NULL};
        IRData   YAMAHA_SCENE2   = { ONKYO, 0x857AU, 0x7C03U, 0x0, 0x0, IRDATA_FLAGS_EMPTY, 0x0, NULL};
        IRData   YAMAHA_SCENE3   = { ONKYO, 0x857AU, 0x7906U, 0x0, 0x0, IRDATA_FLAGS_EMPTY, 0x0, NULL};
        IRData   YAMAHA_SCENE4   = { ONKYO, 0x857AU, 0x7609U, 0x0, 0x0, IRDATA_FLAGS_EMPTY, 0x0, NULL};

    };

};

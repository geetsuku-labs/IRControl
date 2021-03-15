#ifndef CONFIG_HPP
#define CONFIG_HPP

#include <Arduino.h>
#include <IRremoteInt.h>
#include "credentials.hpp"

namespace config
{
    namespace ip
    {
        const char    *HOSTNAME = "remote";
        const uint16_t OTA_PORT = 8266;
    };

    namespace ir
    {
              IRData   YAMAHA_POWER   = { NEC, 0x7EU, 0x2AU, 0x0, 0x0, IRDATA_FLAGS_EMPTY, 0x0, NULL};
              IRData   YAMAHA_VOL_INC = { NEC, 0x7AU, 0x1AU, 0x0, 0x0, IRDATA_FLAGS_EMPTY, 0x0, NULL};
              IRData   YAMAHA_VOL_DEC = { NEC, 0x7AU, 0x1BU, 0x0, 0x0, IRDATA_FLAGS_EMPTY, 0x0, NULL};
    };
};

#endif

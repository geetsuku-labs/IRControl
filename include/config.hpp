#ifndef CONFIG_HPP
#define CONFIG_HPP

#include <Arduino.h>
#include "credentials.hpp"

namespace config
{
    namespace ip
    {
        const char    *HOSTNAME = "remote";
        const uint16_t OTA_PORT = 8266;
    };
};

#endif
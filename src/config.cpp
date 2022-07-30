#include "config.hpp"

Print&          LOG::SINK      = Serial;
int             LOG::LEVEL     = CORE_DEBUG_LEVEL;

char     const* IP::HOSTNAME = "remote";
uint16_t        IP::OTA_PORT = 8266;

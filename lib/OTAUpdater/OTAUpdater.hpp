#pragma once

#include <ArduinoOTA.h>
#include <ESPmDNS.h>

class OTAUpdaterClass
{
    public:
        void init(const int16_t port);
        void pause();
        void resume();
        inline void handle()
        {
            ArduinoOTA.handle();
        }

    private:
        const char *_hostname;
        int16_t     _port;
};

extern OTAUpdaterClass OTAUpdater;

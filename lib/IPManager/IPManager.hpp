#pragma once

#include <ETH.h>
#include <WiFiMulti.h>

static const int HOSTNAME_LEN_MAX = 32;
extern void onWiFiEvent(WiFiEvent_t event);

class IPManagerClass
{
public:
    void  setHostname(char* hostname);
    char* getHostname() { return _hostname; };
    void  beginETH();
    void  beginWiFi(const char *ssid, const char *passphrase);
    void  wait();
private:
    char _hostname[HOSTNAME_LEN_MAX];
};

extern IPManagerClass IPManager;

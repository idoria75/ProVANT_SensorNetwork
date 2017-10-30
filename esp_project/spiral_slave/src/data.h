#pragma once
#include <Arduino.h>
#include <ArduinoJson.h>

struct dataStruct {
    String networkName = "";
    String hostName = "";
    String macAddress = "";
    String networkIP = "0.0.0.0";

    String BSSID = "";
    float RSSI = 0.0f;

    unsigned int upTime = 500;
    unsigned int freeHeap = 0;

    double lat = -10.5965396;
    double lon = -20.5484408;

    unsigned int contador = 1;
};

class Data
{
public:
    void print();

    String jsonToString();

    static Data& self();

    ~Data();

    void updateJson(char * msg);
    //void updateJson(uint8_t * msg);

    dataStruct* data;
    JsonObject* root;

private:

    void jsonSet(const char* key, const char* value);
    void updateJson();
    
    Data& operator = (Data& other) = delete;
    Data(const Data& other) = delete;
    Data();
};

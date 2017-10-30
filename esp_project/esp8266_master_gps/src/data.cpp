#include "data.h"
#include "debug.h"

Data::Data() :
    data(new dataStruct)
{
    debug("Starting Data.");
    print();
}

void Data::jsonSet(const char* key, const char* value)
{
    root[0][key] = value;
}

void Data::updateJson()
{
    StaticJsonBuffer<1024> jsonBuffer;
    root = &jsonBuffer.createObject();
    jsonSet("Sensor", data->hostName.c_str());
    //Serial.println(global_teste);
    JsonArray& gpsJson = root->createNestedArray("gps");
    gpsJson.add(double_with_n_digits(data->upTime, 7));
    gpsJson.add(double_with_n_digits(data->lat, 7));
    gpsJson.add(double_with_n_digits(data->lon, 7));

}

void Data::updateJson(String msg){
    StaticJsonBuffer<1024> jsonBuffer;
    //debug("%s", msg.c_str());
    root = &jsonBuffer.parseObject(msg);
    if(root->success()){
        //debug("success");
        data->upTime = root[0]["gps"][0].as<float>();
        data->lat = root[0]["gps"][1].as<float>();
        data->lon = root[0]["gps"][2].as<float>();
    } else
        debug("Parsing failed");
}

void Data::print()
{
    updateJson();
    String string1;
    string1.concat("{\"sensor\":\"gps\",\"time\":");
    string1.concat(gpsData);
    string1.concat("]}");
    updateJson(string1);
    String string;
    string.concat("\n\rNetwork name : ");
    string.concat(data->networkName);
    string.concat("\n\rHost name : ");
    string.concat(data->hostName);
    string.concat("\n\rMAC address : ");
    string.concat(data->macAddress);
    string.concat("\n\rNetwork IP : ");
    string.concat(data->networkIP);

    string.concat("\n\rRSSI : ");
    string.concat(data->RSSI);
    string.concat(" dBm");

    string.concat("\n\rFree memory : ");
    string.concat(data->freeHeap);
    string.concat("\n\rupTime : ");
    string.concat(data->upTime);
    string.concat(" ms");

    root->prettyPrintTo(Serial);

}

String Data::jsonToString()
{
    String jsonData;
    updateJson();
    root->printTo(jsonData);
    return jsonData;
}

Data& Data::self()
{
    static Data self;
    return self;
}

Data::~Data()
{
}

void Data::setGPSString(String gps)
{
    gpsData = gps;
}

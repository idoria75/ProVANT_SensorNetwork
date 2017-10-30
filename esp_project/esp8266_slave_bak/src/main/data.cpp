#include "data.h"
#include "debug.h"
#include <FS.h>

File f;

int open_once = 1;
long i =1;


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

    JsonArray& gpsJson = root->createNestedArray("gps");
    gpsJson.add(double_with_n_digits(data->upTime, 7));
    gpsJson.add(double_with_n_digits(data->lat, 7));
    gpsJson.add(double_with_n_digits(data->lon, 7));

}

void Data::updateJson(char * msg){
    StaticJsonBuffer<1024> jsonBuffer;
    DynamicJsonBuffer jsonBuffer2;

    //debug("MESSAGE RECEIVED: %s", msg);
    JsonObject& root2 = jsonBuffer2.parseObject(msg); 
    
    String teste;
    String patrick;
    root2.printTo(teste);
    if(root2.success()){
        //debug("SUCCESS");

        const char * sensor = root2["sensor"];
        long time_a = root2["time"];
        double lat = (double)root2["data"][0];
        double lon = (double)root2["data"][1];


        f = SPIFFS.open("/f.txt", "a");
        if (!f) {
            Serial.println("file open failed");
        }

        i++;
       
        //Serial.println("====== Writing to SPIFFS file =========");
        
        f.print(i);
        f.print(": ");
        f.print(sensor);
        f.print(", ");
        f.print(time_a /*data->upTime*/);
        f.print(", ");
        f.print(lat, 7);
        f.print(", ");
        f.print(lon, 7);
        f.print(", ");
        f.println(data->RSSI);

        f.close(); 

        data->upTime = time_a;
        data->lat = lat;//root[0]["gps"][1].as<float>();
        data->lon = lon;//root[0]["gps"][2].as<float>();

    } else
        debug("Parsing failed");
}


void Data::print()
{
    updateJson();

    //Funciona de dentro da classe somente
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
    debug("%s", jsonData.c_str());
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

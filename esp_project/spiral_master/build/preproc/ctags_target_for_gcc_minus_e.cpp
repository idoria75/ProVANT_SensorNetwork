# 1 "/usr/src/esp_project/esp8266_master_gps/src/connection.cpp"
# 1 "/usr/src/esp_project/esp8266_master_gps/src/connection.cpp"

# 3 "/usr/src/esp_project/esp8266_master_gps/src/connection.cpp" 2
# 4 "/usr/src/esp_project/esp8266_master_gps/src/connection.cpp" 2

Connection::Connection() :
    WiFiMulti(new ESP8266WiFiMulti), isMaster(false), wifiAdded(false)
{
}

void Connection::addWifi(String ssid, String password = String())
{
    wifiAdded = true;
    if(password.length() != 0){
        WiFiMulti->addAP(ssid.c_str(), password.c_str());
    }
    else{
        WiFiMulti->addAP(ssid.c_str());
    }
}

ESP8266WiFiClass* Connection::wifi()
{
    return &WiFi;
}

bool Connection::getStatus()
{
    return WiFiMulti->run() == WL_CONNECTED;
}

bool Connection::run()
{
    data->networkName = wifi()->SSID().c_str();
    data->macAddress = wifi()->macAddress().c_str();
    data->hostName = wifi()->hostname().c_str();
    data->networkIP = wifi()->localIP().toString().c_str();
    data->RSSI = wifi()->RSSI();
    data->BSSID = wifi()->BSSIDstr().c_str();
    if(wifiAdded)
        return getStatus();
    return false;
}

void Connection::setData(dataStruct* d)
{
    data = d;
}

bool Connection::scanForNetwork(const char *ssid)
{
    int numRedes = wifi()->scanNetworks();
    do {sprintf(_debug_buffer, "[%s:%d]: " "Scan Done" "\n\r", __PRETTY_FUNCTION__, 52); Serial.print(_debug_buffer);} while(0);
    for (int i = 0; (i < numRedes) && !isMaster; i++) {
        if(wifi()->SSID(i) == ssid) {
            isMaster = true;
        }
    }
    return isMaster;
}

Connection& Connection::self()
{
    static Connection self;
    return self;
}

Connection::~Connection()
{
};
# 1 "/usr/src/esp_project/esp8266_master_gps/src/main.ino"
# 2 "/usr/src/esp_project/esp8266_master_gps/src/main.ino" 2
# 3 "/usr/src/esp_project/esp8266_master_gps/src/main.ino" 2
# 4 "/usr/src/esp_project/esp8266_master_gps/src/main.ino" 2
# 5 "/usr/src/esp_project/esp8266_master_gps/src/main.ino" 2


//#include "ota.h"
# 9 "/usr/src/esp_project/esp8266_master_gps/src/main.ino" 2



ESP8266WiFiGenericClass p;


TinyGPSPlus gps;


String gpsData;

char latitude[20];
char longitude[20];
char timegps[20];


String displayInfo()
 {
   String string;
   if (gps.location.isValid())
   {

    dtostrf(gps.location.lat(), 8, 7, latitude);
    dtostrf(gps.location.lng(), 8, 7, longitude);
    dtostrf(gps.time.value(), 8, 7, timegps);

    string.concat(timegps);
    string.concat(",\"data\":[");
    string.concat(latitude);
    string.concat(",");
    string.concat(longitude);


   }
   else
   {

    string.concat("00000000");
    string.concat(",\"data\":[");
    string.concat("0.0");
    string.concat(",");
    string.concat("0.0");

     Serial.print(((reinterpret_cast<const __FlashStringHelper *>((__extension__({static const char __c[] __attribute__((section(".irom.text"))) = ("INVALID"); &__c[0];}))))));
   }

  return string;
 }



void hardwareInit()
{
    Serial.begin(115200);


    Serial.print(((reinterpret_cast<const __FlashStringHelper *>((__extension__({static const char __c[] __attribute__((section(".irom.text"))) = ("Testing TinyGPS++ library v. "); &__c[0];})))))); Serial.println(TinyGPSPlus::libraryVersion());
    do {sprintf(_debug_buffer, "[%s:%d]: " "Starting Hardware." "\n\r", __PRETTY_FUNCTION__, 66); Serial.print(_debug_buffer);} while(0);
    pinMode(D4, 0x01);
}

Thread printDataThread = Thread();
Thread connectionThread = Thread();
Thread serverClientThread = Thread();
ThreadController groupOfThreads = ThreadController();

//SETUP
void setup()
{

    p.setOutputPower(0);

    hardwareInit();

    //Start data thread
    Data::self();
    printDataThread.onRun([]() {
        Data::self().setGPSString(gpsData);
        const static unsigned long startTime = micros();
        Data::self().data->freeHeap = ESP.getFreeHeap();
        Data::self().data->upTime = (micros() - startTime)/1e3;
        Data::self().print();
    });
    /* The data thread must run twice the serverClientThread because
     * of Json memory problem, when running serverClientThread::run
     * json data get lost
     */
    printDataThread.setInterval(100);

    //Start connection manager thread
    Connection::self();
    ServerClient::self();
    Connection::self().setData(Data::self().data);

        do {sprintf(_debug_buffer, "[%s:%d]: " "Master Mode" "\n\r", __PRETTY_FUNCTION__, 103); Serial.print(_debug_buffer);} while(0);
        const static char* apname = "provant";
        const static IPAddress ip(192, 168, 0, 1 );
        const static IPAddress gateway(192, 168, 1, 1);
        const static IPAddress subnet(255, 255, 255, 0);
        Connection::self().wifi()->softAPConfig(ip, gateway, subnet);
        Connection::self().wifi()->softAP(apname);
        ServerClient::self().setServer();

    connectionThread.onRun([]() {
        if(Connection::self().run()) {
            digitalWrite(D4, !digitalRead(D4));
        }
    });
    connectionThread.setInterval(10);

    //Start serverClient thread
    ServerClient::self().begin();
    serverClientThread.onRun([]() {
        ServerClient::self().setData(Data::self().data);
        ServerClient::self().run();
    });
    //if(ServerClient::self().isServer())
        serverClientThread.setInterval(100);
    //else
    //    serverClientThread.setInterval(1);

    //Add all threads in ThreadController
    groupOfThreads.add(&printDataThread);
    groupOfThreads.add(&connectionThread);
    groupOfThreads.add(&serverClientThread);

}

//LOOP
void loop()
{
  groupOfThreads.run();
    //BEGIN GPS READ

  while (Serial.available() > 0)
    if (gps.encode(Serial.read()))
    gpsData = displayInfo();

  if (millis() > 5000 && gps.charsProcessed() < 10)
  {
    Serial.println(((reinterpret_cast<const __FlashStringHelper *>((__extension__({static const char __c[] __attribute__((section(".irom.text"))) = ("No GPS detected: check wiring."); &__c[0];}))))));
    while(true);
  }

  //END GPS READ

  yield();
}

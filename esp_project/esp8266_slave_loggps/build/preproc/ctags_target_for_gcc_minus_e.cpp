# 1 "/usr/src/esp_project/esp8266_slave_loggps/src/connection.cpp"
# 1 "/usr/src/esp_project/esp8266_slave_loggps/src/connection.cpp"
# 2 "/usr/src/esp_project/esp8266_slave_loggps/src/connection.cpp" 2
# 3 "/usr/src/esp_project/esp8266_slave_loggps/src/connection.cpp" 2

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
    do {sprintf(_debug_buffer, "[%s:%d]: " "Scan Done" "\n\r", __PRETTY_FUNCTION__, 51); Serial.print(_debug_buffer);} while(0);
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
# 1 "/usr/src/esp_project/esp8266_slave_loggps/src/main.ino"
# 2 "/usr/src/esp_project/esp8266_slave_loggps/src/main.ino" 2
# 3 "/usr/src/esp_project/esp8266_slave_loggps/src/main.ino" 2
# 4 "/usr/src/esp_project/esp8266_slave_loggps/src/main.ino" 2
# 5 "/usr/src/esp_project/esp8266_slave_loggps/src/main.ino" 2
# 6 "/usr/src/esp_project/esp8266_slave_loggps/src/main.ino" 2



# 10 "/usr/src/esp_project/esp8266_slave_loggps/src/main.ino" 2



ESP8266WiFiGenericClass p;

int flag_mode = 0;

FtpServer ftpSrv;

void blink_repeat(int b, int delay_time)
{
    //Serial.print("Number of times to blink: ");
    //Serial.println(b);
    for(int a = b; a > 0; a--){
        //Serial.println(a);
        digitalWrite(D4, 0x0);
        delay(delay_time);
        digitalWrite(D4, 0x1);
        delay(delay_time);
    }
}
void blink_config(int a)
{
    bool state = false;
    blink_repeat(20,30);
    digitalWrite(D4, 0x1);
    delay(2000);
    blink_repeat(a,200);
    delay(2000);
    //blink_repeat(1,2000);
}

void hardwareInit()
{

    Serial.begin(115200);

    Serial.println("INICIO");

    SPIFFS.begin();

    p.setOutputPower(0);


    // Next lines have to be done ONLY ONCE!!!!!When SPIFFS is formatted ONCE you can comment these lines out!!
    pinMode(D2, 0x00);
    pinMode(D1, 0x00);
    pinMode(D4, 0x01);
    flag_mode = 0;
    Serial.print("digitalRead D1: ");
    Serial.println(digitalRead(D1));
    Serial.print("digitalRead D2: ");
    Serial.println(digitalRead(D2));
    //delay(5000);
    Serial.print("FLAG MODES: 0: Normal Operation; 1: SPIFFS Format; 2: FTP Server; Operation mode = ");
    //Serial.print("***TEST MODE***");
    if(digitalRead(D1) == 1 and !digitalRead(D2)){ //If D1 == 0, format
        Serial.println("1");
        blink_config(1);
        flag_mode = 1;
        Serial.println("Please wait 30 secs for SPIFFS to be formatted");
        SPIFFS.format();
        blink_repeat(20, 1000);
        Serial.println("SPIFFS formatted");
        Serial.println("SPIFFS Setup Ended");
    }
    else if(digitalRead(D2) == 1 and !digitalRead(D1)){
        flag_mode = 2;
        Serial.println("2");
        blink_config(2);
        Serial.println("MODO SERVIDOR, flag_mode = 2");
        ftpSrv.begin("esp8266", "esp8266"); // username, password for ftp. Set ports in ESP8266FtpServer.h (default 21, 50009 for PASV)
    }
    if(flag_mode == 0){
        blink_repeat(1,1000);
        Serial.println("0");
    }
    do {sprintf(_debug_buffer, "[%s:%d]: " "Starting Hardware." "\n\r", __PRETTY_FUNCTION__, 87); Serial.print(_debug_buffer);} while(0);



}

Thread connectionThread = Thread();
Thread serverClientThread = Thread();
Thread printDataThread = Thread();
ThreadController groupOfThreads = ThreadController();

void setup()
{
    hardwareInit();

    do {sprintf(_debug_buffer, "[%s:%d]: " "IVAN 3" "\n\r", __PRETTY_FUNCTION__, 102); Serial.print(_debug_buffer);} while(0);

    int t2 = 0;
    int t1 = millis();

    //if(flag_mode == 0){
    //Start connection manager thread
    Connection::self();
    ServerClient::self();
    Connection::self().setData(Data::self().data);
    do {sprintf(_debug_buffer, "[%s:%d]: " "Scanning for provant network..." "\n\r", __PRETTY_FUNCTION__, 112); Serial.print(_debug_buffer);} while(0);
    //while(not(Connection::self().scanForNetwork("provant"))){
        //blink_repeat(2, 10);
    //}

    //if(Connection::self().scanForNetwork("provant")) {
        //debug("provant network found, set Slave Mode");
    Connection::self().addWifi("provant");
    ServerClient::self().setClient(String("192.168.0.1"), 80);

    while (WiFi.status() != WL_CONNECTED) {
        delay(50);
        Serial.print(".");
    }

    //}
    //debug("provant network found, set Slave Mode");
    // Connection::self().addWifi("provant");
    // ServerClient::self().setClient(String("192.168.0.1"), 80);
    //}
    t2 = millis() - t1;
    Serial.print("TEMPO DECORRIDO: ");
    Serial.println(t2);


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
    //    serverClientThread.setInterval(1000);
    //else
        serverClientThread.setInterval(10);

    //Start data thread
    Data::self();
    printDataThread.onRun([]() {
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

    //Add all threads in ThreadController
    groupOfThreads.add(&connectionThread);
    groupOfThreads.add(&serverClientThread);
    groupOfThreads.add(&printDataThread);
    //}

}

void loop()
{
    // if(flag_mode == 0){
    //     groupOfThreads.run();
    // }
    if(flag_mode == 1 or flag_mode == 0){
        groupOfThreads.run();
    }
    if(flag_mode == 2){
        //groupOfThreads.run();
        ftpSrv.handleFTP();
    }
    yield();
}

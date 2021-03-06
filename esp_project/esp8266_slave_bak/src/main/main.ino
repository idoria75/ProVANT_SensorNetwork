#include <Arduino.h>
#include <Thread.h>
#include <ThreadController.h>
#include <FS.h>
#include "ESP8266FtpServer.h"

#include "debug.h"
#include "connection.h"
#include "serverclient.h"

#define LED D4

ESP8266WiFiGenericClass p;
 
int flag_mode = 0;

FtpServer ftpSrv;

void blink_repeat(int b, int delay_time)
{   
    //Serial.print("Number of times to blink: ");
    //Serial.println(b);
    for(int a = b; a > 0; a--){
        //Serial.println(a);
        digitalWrite(LED, LOW);
        delay(delay_time);
        digitalWrite(LED, HIGH);
        delay(delay_time);
    }
}
void blink_config(int a)
{
    bool state = false;
    blink_repeat(20,30);
    digitalWrite(LED, HIGH);
    delay(2000);
    blink_repeat(a,200);
    delay(2000);
    //blink_repeat(1,2000);
}

void hardwareInit()
{

    Serial.begin(115200);

    SPIFFS.begin();
    
    p.setOutputPower(0);


    // Next lines have to be done ONLY ONCE!!!!!When SPIFFS is formatted ONCE you can comment these lines out!!
    pinMode(D2, INPUT);
    pinMode(D1, INPUT);
    pinMode(LED, OUTPUT);
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
    debug("Starting Hardware.");



}

Thread connectionThread = Thread();
Thread serverClientThread = Thread();
Thread printDataThread = Thread();
ThreadController groupOfThreads = ThreadController();

void setup()
{
    hardwareInit();

    debug("IVAN 3");

    //if(flag_mode == 0){
    //Start connection manager thread
    Connection::self();
    ServerClient::self();
    Connection::self().setData(Data::self().data);
    debug("Scanning for provant network...");
    if(Connection::self().scanForNetwork("provant")) {
       // spin_lock = true;
        debug("provant network found, set Slave Mode");
        Connection::self().addWifi("provant");
        ServerClient::self().setClient(String("192.168.0.1"), 80);
        //ServerClient::self().setClient(String("192.168.0.101"), 80);

    } 

    connectionThread.onRun([]() {
        if(Connection::self().run()) {
            digitalWrite(LED, !digitalRead(LED));
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
        groupOfThreads.run();
        ftpSrv.handleFTP();
    }
    yield();
}

#include <Arduino.h>
#line 1 "/usr/src/esp_project/esp_raw_slave/src/main.ino"
#line 1 "/usr/src/esp_project/esp_raw_slave/src/main.ino"
//#include <Arduino.h>
#include <ESP8266WiFi.h>

unsigned long t1 = 0;
unsigned long t2 = 0;


#line 8 "/usr/src/esp_project/esp_raw_slave/src/main.ino"
void setup();
#line 19 "/usr/src/esp_project/esp_raw_slave/src/main.ino"
void loop();
#line 8 "/usr/src/esp_project/esp_raw_slave/src/main.ino"
void setup(){
	Serial.begin(115200);
	Serial.println("Starting test");
	WiFi.begin("provant");
	t1 = micros();
	while (WiFi.status() != WL_CONNECTED) {delay(1);}
	t2 = micros();
	Serial.print("Tempo até fim de conexão: ");
	Serial.println(t2-t1);
}

void loop(){
	//Serial.println("Hello World");
}


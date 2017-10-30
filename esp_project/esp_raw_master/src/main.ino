#include <ESP8266WiFi.h>
#include <WiFiClient.h> 
#include <ESP8266WebServer.h>

/* Set these to your desired credentials. */
const char *ssid = "provant";

ESP8266WebServer server(80);

void handleRoot() {
	server.send(200, "text/html", "<h1>You are connected</h1>");
}

void setup() {

	Serial.begin(115200);
	Serial.println();
	Serial.println("Setting up soft AP");
	WiFi.softAP(ssid);
	Serial.println("AP UP");
	//IPAddress myIP = WiFi.softAPIP();
	//Serial.print("AP IP address: ");
	//Serial.println(myIP);
	//server.on("/", handleRoot);
	//server.begin();
	//Serial.println("HTTP server started");
}

void loop() {
	//server.handleClient();
}
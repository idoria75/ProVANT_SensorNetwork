# 1 "/usr/src/esp_project/esp_raw_master/src/main.ino"
# 1 "/usr/src/esp_project/esp_raw_master/src/main.ino"
# 2 "/usr/src/esp_project/esp_raw_master/src/main.ino" 2
# 3 "/usr/src/esp_project/esp_raw_master/src/main.ino" 2
# 4 "/usr/src/esp_project/esp_raw_master/src/main.ino" 2

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

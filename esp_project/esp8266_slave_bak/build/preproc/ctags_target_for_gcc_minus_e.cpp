# 1 "/tmp/arduino_modified_sketch_243337/Blink.ino"
# 1 "/tmp/arduino_modified_sketch_243337/Blink.ino"
/*
 ESP8266 Blink by Simon Peter
 Blink the blue LED on the ESP-01 module
 This example code is in the public domain
 
 The blue LED on the ESP-01 module is connected to GPIO1 
 (which is also the TXD pin; so we cannot use Serial.print() at the same time)
 
 Note that this sketch uses LED_BUILTIN to find the pin with the internal LED
*/

void setup() {
  pinMode(D3, 0x01); // Initialize the LED_BUILTIN pin as an output
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(D3, 0x0); // Turn the LED on (Note that LOW is the voltage level
                                    // but actually the LED is on; this is because 
                                    // it is acive low on the ESP-01)
  delay(100); // Wait for a second
  digitalWrite(D3, 0x1); // Turn the LED off by making the voltage HIGH
  delay(100); // Wait for two seconds (to demonstrate the active low LED)
}

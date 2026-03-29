#include <SoftwareSerial.h>

SoftwareSerial gpsSerial(4, 3); // RX, TX

void setup() {
  Serial.begin(9600);
  gpsSerial.begin(9600);
  Serial.println("GPS Tracking System");
}

void loop() {
  while (gpsSerial.available()) {
    char c = gpsSerial.read();
    Serial.print(c);
  }
}

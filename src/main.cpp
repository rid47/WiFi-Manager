#include <DNSServer.h>
#include <ESP8266WebServer.h>
#include <WiFiManager.h>        // https://github.com/tzapu/WiFiManager

void setup() {

  Serial.begin(115200);
  WiFiManager wifiManager;
  //wifiManager.resetSettings();
  wifiManager.autoConnect("Mushroom Device", "admin1234");
  Serial.println("Connected.");
}

void loop(){}

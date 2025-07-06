#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char auth[] = "token";
char ssid[] = "User";
char pass[] = "Pass";

BlynkTimer timer;

void setup() {
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass, "phanomconnect.ddns.net", 8020);
}

void loop() {
  Blynk.run();
  timer.run();
}

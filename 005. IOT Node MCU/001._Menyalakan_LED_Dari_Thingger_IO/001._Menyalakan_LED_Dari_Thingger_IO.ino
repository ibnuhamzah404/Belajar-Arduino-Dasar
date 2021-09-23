#define THINGER_SERIAL_DEBUG

#include <ThingerESP8266.h>
#include "arduino_secrets.h"

ThingerESP8266 thing("ibnuhamzah404", "none", "t0_cPjQi5W?qh_%%");

void setup() {
  // open serial for monitoring
  Serial.begin(115200);

  // set builtin led as output
  pinMode(LED_BUILTIN, OUTPUT);

  // add WiFi credentials
  thing.add_wifi("iPhone", "cahaya123");

  // digital pin control example (i.e. turning on/off a light, a relay, configuring a parameter, etc)
  thing["led"] << digitalPin(LED_BUILTIN);

  // resource output example (i.e. reading a sensor value)
  thing["millis"] >> outputValue(millis());

  // more details at http://docs.thinger.io/arduino/
}

void loop() {
  thing.handle();
}

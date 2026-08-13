// NeoPixel ring solid color
// Board: ESP32-S3 | Ring: WS2812 x8
// DIN -> GPIO5 (330R), power: external 5V, common GND

#include <Adafruit_NeoPixel.h> //ok

#define PIN 5
#define NUMPIXELS 8

Adafruit_NeoPixel ring(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  ring.begin();
  ring.setBrightness(255);

  for (int j = 0; j < NUMPIXELS; j++) {
  ring.clear();
  ring.setPixelColor(j, 127, 0, 255);
  ring.show();
  delay(200);
  }

  ring.show();
}

void loop() {
  // nothing here

}


#include <Adafruit_NeoPixel.h> //ok

#define PIN 5
#define NUMPIXELS 8

Adafruit_NeoPixel ring(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  ring.begin();
  ring.setBrightness(50);

  for (int j = 0; j < NUMPIXELS; j++) {
  ring.setPixelColor(j, 250, 183, 47);
  }

  ring.show();
}

void loop() {
  // nothing here

}


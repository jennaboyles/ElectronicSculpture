#include <Adafruit_CircuitPlayground.h>
// do NOT include the standard NeoPixel library

#define NEOPIX_PIN    A1  //change to whichever pin you have the D1 of your strip connected to
#define NUM_PIXELS    6   //change if you have more or less

Adafruit_CPlay_NeoPixel strip = Adafruit_CPlay_NeoPixel(NUM_PIXELS, NEOPIX_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  // initialize the Circuit Playground as usual
  // this will initialize the onboard NeoPixels as well
  CircuitPlayground.begin();

  // initialize external NeoPixel strip separately
  strip.begin();
}


void loop() {
 CircuitPlayground.clearPixels();
  // for the external NeoPixels, must use the Adafruit_CPlay_NeoPixel functions directly
  strip.clear();

  delay(500);

 for (int i = 0; i <= NUM_PIXELS; i++) {
  strip.setPixelColor(i, 0,   0,   255); //set to blue
    }

  strip.show();
}

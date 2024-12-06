// simple test for turning on external neopixels attached to a circuit playground express using one capactive touch input


#include <Adafruit_CircuitPlayground.h>
// do NOT include the standard NeoPixel library

#define CAP_THRESHOLD 10
#define DEBOUNCE 250

#define NEOPIX_PIN    A1  //change to whichever pin you have the D1 of your strip connected to
#define NUM_PIXELS    2   //change if you have more or less

// use Adafruit_CPlay_NeoPixel to create a separate external NeoPixel strip
Adafruit_CPlay_NeoPixel strip = Adafruit_CPlay_NeoPixel(NUM_PIXELS, NEOPIX_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
  // initialize external NeoPixel strip separately
  strip.begin();
}

void loop() {

  Serial.println(CircuitPlayground.readCap(2));
  delay(200); // slight delay in between readings

  // for the on board NeoPixels, use the CircuitPlayground functions
  CircuitPlayground.clearPixels();
  strip.clear();

 if (CircuitPlayground.readCap(2) < CAP_THRESHOLD) {
  
  CircuitPlayground.setPixelColor(1, 255,   0,   0); // set color at onboard neopixel for testing to Red

  for (int i = 0; i <= 2; i++) {  //change the range based on the number in your strip
  strip.setPixelColor(i, strip.Color(255,  0,  0)); //sets first two to red
    }

  } else {

  CircuitPlayground.setPixelColor(1, 0, 255,   0);   // set color at onboard neopixel for testing to Green

  for (int i = 0; i <= 2; i++) {  //change the range based on the number in your strip
  strip.setPixelColor(i, strip.Color(0,  255,  0)); //sets first two to green
  
  }

  }

  strip.show();
}

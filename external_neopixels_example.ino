#include <Adafruit_CircuitPlayground.h>
// do NOT include the standard NeoPixel library

#define NEOPIX_PIN    A1  //change to whichever pin you have the D1 of your strip connected to
#define NUM_PIXELS    6   //change if you have more or less
int myPixels[] = {0, 1, 2, 3, 4};;  // an array to reuse 5 pixels at a time (if you want to use this)

// use Adafruit_CPlay_NeoPixel to create a separate external NeoPixel strip
Adafruit_CPlay_NeoPixel strip = Adafruit_CPlay_NeoPixel(NUM_PIXELS, NEOPIX_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  CircuitPlayground.begin();

  // initialize external NeoPixel strip separately
  strip.begin();
}

void loop() {
  // for the on board NeoPixels, use the CircuitPlayground functions
  CircuitPlayground.clearPixels();
  
  // for the external NeoPixels, must use the Adafruit_CPlay_NeoPixel functions directly
  strip.clear();

 for (int i = 0; i <= 2; i++) {  //change the range based on the number in your strip
  strip.setPixelColor(i, strip.Color(255,  0,  0)); //sets first two to red
    }
 for (int i = 2; i <= 4; i++) {
  strip.setPixelColor(i, strip.Color(128, 128,  0)); //sets next two to yellow
    }
 for (int i = 4; i <= 6; i++) {
  strip.setPixelColor(i, strip.Color(0, 128, 128)); //set last two to blue
    }

  //for the external strip, must call show()
  strip.show();


//these are onboard LEDS
//you can use RGB to define color
  CircuitPlayground.setPixelColor(0, 255,   0,   0); //first neopixel on board set to red
  CircuitPlayground.setPixelColor(1, 128, 128,   0); // second neopixel set to yellow
  CircuitPlayground.setPixelColor(2,   0, 255,   0); // third neopixel set to green
  CircuitPlayground.setPixelColor(3,   0, 128, 128); // fourth neopixel set to light blue
  CircuitPlayground.setPixelColor(4,   0,   0, 255); // fifth pixel to...

  //or you can use hex code
  CircuitPlayground.setPixelColor(5, 0xFF0000); // set to red
  CircuitPlayground.setPixelColor(6, 0x808000); // yellow
  CircuitPlayground.setPixelColor(7, 0x00FF00); // green
  CircuitPlayground.setPixelColor(8, 0x008080); // light blue
  CircuitPlayground.setPixelColor(9, 0x0000FF); // dark blue
}

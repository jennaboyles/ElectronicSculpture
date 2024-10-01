///////////////////////////////////////////////////////////////////////////////
// Circuit Playground Digital In - Hello Digital
//
// Author: Carter Nelson
// MIT License (https://opensource.org/licenses/MIT)

#include <Adafruit_CircuitPlayground.h>

///////////////////////////////////////////////////////////////////////////////
void setup() {
  Serial.begin(115200);
  
  CircuitPlayground.begin();
  
  pinMode(A2, INPUT);
  pinMode(A3, OUTPUT);
}

///////////////////////////////////////////////////////////////////////////////
void loop() {
  int reading = digitalRead(A2);
 
  Serial.println(reading);
  
  delay(500);

   if (digitalRead(A2) == HIGH) {
    digitalWrite(A3, HIGH);
  }
  else {
    digitalWrite(A3, LOW);
  }

}

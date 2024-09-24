#include <Adafruit_CircuitPlayground.h>

void setup() {
  Serial.begin(115200);
  CircuitPlayground.begin();
  pinMode(A2, OUTPUT);
}

void loop() {
  digitalWrite(A2,HIGH);
  delay(500);
  digitalWrite(A2,LOW);
  delay(500);
}

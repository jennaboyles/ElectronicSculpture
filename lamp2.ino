
void setup() {

int i;
  for(i=0;i < 14;i++){
  pinMode(i, OUTPUT);
  }
}

void loop() {

int lampPin;
  for(lampPin=8;lampPin <=14;lampPin++){
  digitalWrite(lampPin,HIGH);
  delay(3000);
  digitalWrite(lampPin,LOW);
  delay(1000);
}

}


void setup() {

int i;  // for loop to initialize all digital pins as output
  for(i=0;i <= 13;i++){
  pinMode(i, OUTPUT);
  }
}


void loop() {

int lampPin;  //function for cycling through all lamps connected to the output pins. Turns on for 3 seconds off for 1.
  for(lampPin=0;lampPin <=13;lampPin++){
  digitalWrite(lampPin,HIGH);
  delay(3000); //in milliseconds = 3 seconds 
  digitalWrite(lampPin,LOW);
  delay(1000);
}

}

// Initial code below for individual lamps. 

// void loop() {
//   lamp1();
//   lamp2();
//   lamp3();
// }

// int lamp1(){
//   digitalWrite(13,HIGH); //high = on
//   delay(1000); //1 second
//   digitalWrite(13,LOW); // low = off
//   delay(1000);
// }

// int lamp2(){
//   digitalWrite(12,HIGH);
//   delay(1000);
//   digitalWrite(12,LOW);
//   delay(1000);
// }

// int lamp3(){
//   digitalWrite(11,HIGH);
//   delay(1000);
//   digitalWrite(11,LOW);
//   delay(1000);
// }

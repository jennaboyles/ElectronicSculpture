#include "Adafruit_Crickit.h"
#include "seesaw_servo.h" //needed for servo motor
#include "seesaw_motor.h" //needed for DC motor

Adafruit_Crickit crickit;
seesaw_Servo myservo(&crickit);  // create servo object to control a servo
seesaw_Servo myservo2(&crickit); // second servo
seesaw_Motor motor_a(&crickit);  // create DC motor object

void setup() {
  Serial.begin(115200);
  
  if(!crickit.begin()){
    Serial.println("ERROR!");
    while(1) delay(1);
  }
  else Serial.println("Crickit started");
  
  myservo.attach(CRICKIT_SERVO1);  // attaches the servo to CRICKIT_SERVO1 pin
  myservo2.attach(CRICKIT_SERVO2);  // attaches another servo to CRICKIT_SERVO2 pin
  motor_a.attach(CRICKIT_MOTOR_A1, CRICKIT_MOTOR_A2); // attach DC motor

}

void loop() {
  myservo.write(0);
  myservo2.write(90);
  motor_a.throttle(1);
  
  delay(1000);
  
  myservo.write(90);
  myservo2.write(180);
  motor_a.throttle(.5);
 
  delay(1000);
  myservo.write(180);
  myservo2.write(0);
  motor_a.throttle(0);
  
  delay(1000);
  myservo.write(90);
  myservo2.write(0);
  motor_a.throttle(.5);
  
  delay(1000);
  
}

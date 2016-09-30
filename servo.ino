#include <Servo.h>

Servo myservo;

int potpin = 0;
int servopin = 9;
int val; 

void setup() {
  myservo.attach(servopin);
}

void loop() {
  val = analogRead(potpin);
  val = map(val, 0, 1023, 0, 180);     
  myservo.write(val);                  
  //delay(15);     
} 

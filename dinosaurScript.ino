#include <Servo.h> 

Servo left;
Servo right;

void setup() 
{ 
  left.attach(9);
  left.write(45); // set servo to mid-point
  right.attach(10);
  right.write(45); // set servo to mid-point
} 

void loop() {
  //write the motors in opposite directions
  left.write(60);
  right.write(30);
  delay(1000);
  left.write(30);
  right.write(60);
  delay(1000);
} 

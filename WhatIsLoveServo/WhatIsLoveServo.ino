/*
  SweepTwoServos
  By Philip van Allen <philvanallen.com> for the VarSpeedServo.h library (October 2013)
  This example code is in the public domain
  
  Sweep two servos from 0-180, 180-0 in unison
  Uses the wait feature of the 2013 version of VarSpeedServo to start the first servo moving in the background
  and immediately starting a second servo moving and waiting for the second one to finish.
  
  Note that two servos will require more power than is available from the USB port - use an external power supply!
*/

#include <VarSpeedServo.h> 
 
VarSpeedServo myservo1;  // create servo object to control a servo 
                         // a maximum of eight servo objects can be created 
VarSpeedServo myservo2;

VarSpeedServo myservo3;
 
const int servoPin1 = 3; // the digital pin used for the first servo
const int servoPin2 = 4; // the digital pin used for the second servo
const int servoPin3 = 5; // the digital pin used for the second servo
 
void setup() { 
  myservo1.attach(servoPin1);  // attaches the servo on pin 9 to the servo object
  myservo1.write(0,255,true); // set the intial position of the servo, as fast as possible, run in background
  myservo2.attach(servoPin2);  // attaches the servo on pin 9 to the servo object
  myservo2.write(0,255,true);  // set the intial position of the servo, as fast as possible, wait until done
  myservo3.attach(servoPin3);  // attaches the servo on pin 9 to the servo object
  myservo3.write(0,255,true); //
  
  
  myservo1.write(90, 255, true);
  myservo2.write(90, 255, true);
  myservo3.write(90, 255, true);
} 

void loop() {
 
  myservo1.write(60, 255, true);
  myservo2.write(60, 255, true);
  myservo3.write(60, 255, true);
  delay(150);
  myservo1.write(90, 255, true);
  myservo2.write(90, 255, true);
  myservo3.write(90, 255, true);
 
} 

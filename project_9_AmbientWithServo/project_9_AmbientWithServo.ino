/*
  Ambient Light controlled LED 
*/

#include <Servo.h>     
Servo myservo;         // create servo object to control a servo 
                       // a maximum of eight servo objects can be created 
int pos = 0;            // variable to store the servo position 

int LED = 13;                     //Led pin
int val = 0;                      

void setup(){
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  
     pinMode(LED,OUTPUT);         
     Serial.begin(9600);        
}

void loop(){
     val = analogRead(0);         // read voltage value 
     Serial.println(val);        
     if(val<300){                // if the value is less than 1000，LED turns off
           myservo.write(180);
     }else{                        // if the value is more than 1000，LED turns on
         myservo.write(10);
     }
     delay(10);                   
}


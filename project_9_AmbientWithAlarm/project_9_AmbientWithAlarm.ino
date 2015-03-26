/*
  Ambient Light controlled LED 
*/

int val = 0;                      
float sinVal;
int toneVal;

// Variables will change :
boolean alarmState = false;             // ledState used to set the LED

unsigned long previousMillis = 0;        // will store last time LED was updated

// constants won't change :
const long interval = 1000;           // interval at which to blink (milliseconds)

void setup(){
     pinMode(8, OUTPUT);
     Serial.begin(9600);        
}

void alarm()
{
  for(int i=0; i< 10; i++){
  for(int x=0; x<180; x++){
            // convert degrees to radians then obtain value
            sinVal = (sin(x*(3.1412/180)));
            // generate a frequency from the sin value
            toneVal = 2000+(int(sinVal*1000));
            tone(8, toneVal);
            delay(2); 
     }   
  }
}

void loop(){
     val = analogRead(0);         // read voltage value 
     Serial.println(val);    
 
     if(val>100){                // if the value is less than 1000，LED turns off
          alarm();
     } else {
        noTone(8);
     }
        
     delay(10);                   
}


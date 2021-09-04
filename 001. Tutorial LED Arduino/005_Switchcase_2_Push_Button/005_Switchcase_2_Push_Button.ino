/*
  Button

  Turns on and off a light emitting diode(LED) connected to digital pin 13,
  when pressing a pushbutton attached to pin 2.

  The circuit:
  - LED attached from pin 13 to ground through 220 ohm resistor
  - pushbutton attached to pin 2 from +5V
  - 10K resistor attached to pin 2 from ground

  - Note: on most Arduinos there is already an LED on the board
    attached to pin 13.

  created 2005
  by DojoDave <http://www.0j0.org>
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Button
*/

// constants won't change. They're used here to set pin numbers:
int button = 7;
int nilaibutton;
int count;
int led1 = 13;
int led2 = 12;
void setup(){
  Serial.begin(9600);
  pinMode(button, INPUT);
 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT);
  
}


void loop() {
   nilaibutton = digitalRead(button);
 
   if(nilaibutton == 1){
    count+=1;
   
     Serial.println(count);
   }
   switch (count) {
      
    case 1:
         digitalWrite(led2, LOW);
        digitalWrite(led1, HIGH);
        
        delay(300);
       
      break;
    case 2:
    digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
        delay(300);
        
      break;
   
    default:
     count = 0;
      break;
  }

    
 
}

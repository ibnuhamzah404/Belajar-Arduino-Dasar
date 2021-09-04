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
int led = 13;

void setup(){
  Serial.begin(9600);
  pinMode(button, INPUT);
 pinMode(led, OUTPUT);
 
  
}


void loop() {
   nilaibutton = digitalRead(button);
    Serial.println(nilaibutton);
 
   if(nilaibutton == 1){
    count+=1;
 
    delay(300);

    if(count==1){
       digitalWrite(led, HIGH);
    }

    if(count==2){
         digitalWrite(led, LOW);
         count=0;
    }
  }

  
}

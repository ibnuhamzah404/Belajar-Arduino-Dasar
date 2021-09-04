Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@ibnuhamzah404 
ibnuhamzah404
/
Belajar-Arduino-Dasar
1
00
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
Settings
Belajar-Arduino-Dasar/001. Tutorial LED Arduino/001_Blink_3_LED.ino
@ibnuhamzah404
ibnuhamzah404 new
Latest commit 17cfd4c 10 hours ago
 History
 1 contributor
48 lines (40 sloc)  1.67 KB
  
/*
  Blink
  Turns an LED on for one second, then off for one second, repeatedly.
  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products
  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman
  This example code is in the public domain.
  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
    pinMode(13, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(200);                       // wait for a second
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                       // wait for a second
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
  delay(200);  
   digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                       // wait for a second
  digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
  delay(200);    
   
}

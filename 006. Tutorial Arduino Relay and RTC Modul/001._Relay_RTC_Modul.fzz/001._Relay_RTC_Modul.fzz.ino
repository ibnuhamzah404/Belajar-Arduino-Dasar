
#include <virtuabotixRTC.h>
virtuabotixRTC myRTC(6,7,8);
const int pinRelay = 12;


void setup(){
Serial.begin(9600);
pinMode(pinRelay, OUTPUT);
digitalWrite(pinRelay, HIGH); 
}
 
void loop(){
  myRTC.updateTime();
  if(myRTC.seconds % 2 == 0 ){
      Serial.println("Relay nyala");  
      Serial.println(myRTC.seconds);
      digitalWrite(pinRelay, LOW);   
  }else{
    digitalWrite(pinRelay, HIGH); 
    Serial.println("Relay mati"); 
    Serial.println(myRTC.seconds);    
  }
}

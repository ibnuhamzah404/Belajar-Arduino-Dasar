
int i;
int count;
void setup() {
   Serial.begin(9600);
   for(int i =7; i <= 13; i++){
    pinMode(i, OUTPUT); 
  }
}


void loop() {
  for( i=13; i >= 7; --i){
    digitalWrite(i, HIGH);  
    delay(count);                       
    digitalWrite(i, LOW);    
    delay(count);  
    if(i==13){
      for(int i=7; i <= 13; i++){
        digitalWrite(i, HIGH);   
        delay(count);                       
        digitalWrite(i, LOW);   
        delay(count);
        count+=10;
        Serial.println(count);     
      }   
    }
   }
}

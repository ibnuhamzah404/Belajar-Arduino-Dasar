
void setup() {
    pinMode(13, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);   
  delay(200);                      
  digitalWrite(13, LOW);    
  delay(200);                       
  digitalWrite(8, HIGH);   
  delay(200);                      
  digitalWrite(8, LOW);    
  delay(200);  
   digitalWrite(9, HIGH);   
  delay(200);                   
  digitalWrite(9, LOW);    
  delay(200);       
}

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
    digitalWrite(led, HIGH);
    delay(300);
  }

   if(nilaibutton == 0){
    digitalWrite(led, LOW);
    delay(300);
  }
}

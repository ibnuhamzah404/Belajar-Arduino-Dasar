
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

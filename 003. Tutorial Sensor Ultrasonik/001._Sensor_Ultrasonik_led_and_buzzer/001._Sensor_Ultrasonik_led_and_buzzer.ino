// Mengukur jarak dengan Sensor Ultrasonik HC-SR04
/* WWW.MASAHEN.COM */
 
#define echoPin 11 //Membuat variabel Echo ke-pin 11
#define trigPin 12 //Membuat variabel Trig ke-pin 12
#define led1 8
#define led2 7
#define buzzer 2


long duration, distance; //Membuat variabel untuk durasi dan jarak
 
void setup() {
  Serial.begin (9600); //Berfungsi untuk komunikasi serial dengan komputer
  pinMode(trigPin, OUTPUT); //Set varibel trigPin sebagai output
  pinMode(echoPin, INPUT); //Set variabel echoPin sebagai input
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
   pinMode(buzzer, OUTPUT);
}
 
void loop() {
 
  //Program agar Trig mengirim sinyal ultrasonik
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
 
  duration = pulseIn(echoPin, HIGH); //Echo menerima sinyal ultrasonik
  distance = (duration/2)/29.1; //Rumus mengubah durasi menjadi jarak (cm)

  if(distance<=10){
    for(int i = 0; i < 3; i++){
       digitalWrite(led1, HIGH);
         digitalWrite(buzzer, HIGH);
       delay(100);
        digitalWrite(led1, LOW);
          digitalWrite(buzzer, LOW);
           delay(100);
    }
   
  
  }else{
    digitalWrite(led1, LOW);
      digitalWrite(buzzer, LOW);
  }

   if(distance<=40){
      for(int i = 0; i < 5; i++){
       digitalWrite(led2, HIGH);
         digitalWrite(buzzer, HIGH);
       delay(100);
        digitalWrite(led2, LOW);
          digitalWrite(buzzer, LOW);
           delay(100);
    }
  }else{
    digitalWrite(led2, LOW);
      digitalWrite(buzzer, LOW);
  }
  Serial.println(distance); //Menampilkan jarak pada serial monitor
}

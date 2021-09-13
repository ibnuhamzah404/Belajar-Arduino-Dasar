// Mengukur jarak dengan Sensor Ultrasonik HC-SR04
/* WWW.MASAHEN.COM */
 
#define echoPin 11 //Membuat variabel Echo ke-pin 11
#define trigPin 12 //Membuat variabel Trig ke-pin 12
#define led1 8

 String s3;

long duration, distance; //Membuat variabel untuk durasi dan jarak
 
void setup() {
  Serial.begin (9600); //Berfungsi untuk komunikasi serial dengan komputer
  pinMode(trigPin, OUTPUT); //Set varibel trigPin sebagai output
  pinMode(echoPin, INPUT); //Set variabel echoPin sebagai input
  pinMode(led1, OUTPUT);

}


void kedipled(int distance, int jarak){
   
    if(distance <= jarak){
      Serial.println(distance);
      blinkled(1, 5, distance);      
    }else{
       digitalWrite(led1, LOW);
    }
  
}

void blinkled(int count, int dly, int distance){
    for(int i = 0; i <= count; i++){
      digitalWrite(led1, HIGH);
      delay(distance*dly);
      digitalWrite(led1, LOW);
      delay(distance*dly);
   }
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

  kedipled(distance, 10);
  kedipled(distance, 20);
  kedipled(distance, 30);
  kedipled(distance, 40);
  kedipled(distance, 50);
  kedipled(distance, 60);
  kedipled(distance, 70);
  kedipled(distance, 80);
  kedipled(distance, 90);
  kedipled(distance, 100);
}

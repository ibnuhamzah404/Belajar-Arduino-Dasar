//inialisasi pin sensor
const int pinSensor = A0;
//inialisasi pin buzzer
const int buzzer = 2;

int data;

//default/setting awal program
void setup()
{
 //inialisasi status I/O pin
 pinMode(pinSensor, INPUT);
 pinMode(buzzer, OUTPUT);
 //inialisasi baud rate serial monitor
 Serial.begin(9600);
}

//looping program
void loop()
{
 //data adalah hasil pembacaan output sensor
 data = analogRead(pinSensor);
 //menulis pada serial monitor data yang telah terbaca
 Serial.println(data);


 if (data <= 899)
 {
 //lampu led mati
 digitalWrite(buzzer, LOW);
 }

//jika nilai data lebih besar-sama dengan 900
 //atau kondisi gelap
 else if (data >= 900)
 {
    for(int i = 0; i<= 5; i++){
       digitalWrite(buzzer, HIGH);
       delay(100);
        digitalWrite(buzzer, LOW);
        delay(100);
       
    }
   
 
 //lampu led menyala
 
 }else{
  digitalWrite(buzzer, LOW);
 }
}

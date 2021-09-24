#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#define PIN_LED 5

const char* ssid = "RdNet_IBNU";
const char* pass = "bulansabit2020";

const char* host = "your-host";
int no = 1;



void setup() {
  Serial.begin(9600);
  pinMode(PIN_LED, OUTPUT);

  WiFi.hostname("NodeMCU");
  WiFi.begin(ssid, pass);
  
 

  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
     delay(500);
  }
  digitalWrite(PIN_LED,HIGH);
  Serial.println("WIfi berhasil terkoneksi");
  
  
}

void loop(){
  no = no +1;
  WiFiClient client;

  if(!client.connect(host, 80)){
    Serial.println("Koneksi Gagal");
    return;
  }
  //proses pengiriman data keserver
  
  String Link;
  HTTPClient ht;
  Link = "http://" + string(host) +"/Iot_NodeMCU/insert.php?data=";
  Link += String(no);
  ht.begin(client, Link);
  
  ht.GET();
  ht.end();
//  delay(1000);
}

int baris[8] = {8,9,10,11,12,13, A0, A1};
int kolom[4] = {2,3, 4,5};

void setup() {
  for(int i =0; i <8; i++){
    pinMode(baris[i], OUTPUT);
    digitalWrite(baris[0], HIGH);
  }

  for(int j  =0; j <4; j++){
   pinMode(kolom[j], OUTPUT);
  digitalWrite(kolom[j], LOW);
  }
 
 
}

void loop() {
  for(int z=0; z<8;z++){
    delay(100);  
    digitalWrite(kolom[0], HIGH);
    digitalWrite(kolom[1], HIGH);
     
    digitalWrite(baris[z], LOW);
    delay(200);
    digitalWrite(kolom[0], LOW);
    digitalWrite(kolom[1], HIGH);
    
    digitalWrite(baris[z], HIGH);
    if(z != 0){
      digitalWrite(kolom[0], HIGH);
      digitalWrite(kolom[1], HIGH);
      digitalWrite(kolom[2], HIGH);
      digitalWrite(kolom[3], HIGH);
      digitalWrite(baris[z-1], LOW);
    }else{
        digitalWrite(kolom[0], HIGH);
          
    } 
  }   
}

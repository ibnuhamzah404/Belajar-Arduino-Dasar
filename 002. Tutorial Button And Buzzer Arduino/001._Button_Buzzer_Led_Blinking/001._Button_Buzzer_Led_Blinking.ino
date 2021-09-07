const int BUTTON_PIN = 7; // Arduino pin connected to button's pin
const int BUZZER_PIN = 3; // Arduino pin connected to Buzzer's pin
const int led = 2;

int count = 0;
void setup() {
  Serial.begin(9600);                // initialize serial
  pinMode(BUTTON_PIN, INPUT_PULLUP); // set arduino pin to input pull-up mode
  pinMode(BUZZER_PIN, OUTPUT);       // set arduino pin to output mode
 pinMode(led, OUTPUT);  
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN); // read new state

  if (buttonState == LOW) {
    digitalWrite(BUZZER_PIN, HIGH);
    digitalWrite(led, HIGH);// turn on
    delay(100);
    digitalWrite(BUZZER_PIN, LOW); // turn on
    digitalWrite(led, LOW);
    delay(100); 
   
    
  }

  if (buttonState == HIGH) {
    digitalWrite(BUZZER_PIN, LOW);  // turn off
    digitalWrite(led, LOW);
  }
}

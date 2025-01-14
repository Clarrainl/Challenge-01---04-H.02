const int switchPin = 7;  
const int ledPin = 6;     
int switchState = 0;      

void setup() {
  pinMode(switchPin, INPUT);  
  pinMode(ledPin, OUTPUT);    

  digitalWrite(ledPin, LOW);  
}

void loop() {
  // LButton state:
  switchState = digitalRead(switchPin);

  // if button is pressed (HIGH), LED ON:
  if (switchState == HIGH) {
    digitalWrite(ledPin, HIGH);  // LED ON
    delay(5000);                 // Delay 5 segundos
    digitalWrite(ledPin, LOW);   // LED OFF after 5 seconds
  }
}

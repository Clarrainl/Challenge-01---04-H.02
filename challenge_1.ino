const int switchPin = 7;  
const int ledPin = 6;     
int switchState = 0;      

void setup() {
  
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT);

  digitalWrite(ledPin, HIGH);
}

void loop() {
  // Button state:
  switchState = digitalRead(switchPin);

  // if button is pressed (HIGH), LED ON:
  if (switchState == HIGH) {
    digitalWrite(ledPin, HIGH);  // LED ON
  } else {
    // if button is not pressed (LOW), LED OFF:
    digitalWrite(ledPin, LOW);   // LED OFF
  }
}



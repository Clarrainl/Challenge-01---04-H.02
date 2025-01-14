const int switchPin = 7;  
const int ledPin = 6;     

int switchState = 0;      
int lastSwitchState = 0;  
bool ledState = false;    

void setup() {
 
  pinMode(switchPin, INPUT);  
  pinMode(ledPin, OUTPUT);    
  
  digitalWrite(ledPin, LOW);
}

void loop() {
  // Button actual state:
  switchState = digitalRead(switchPin);

  // LOW to HIGH
  if (switchState == HIGH && lastSwitchState == LOW) {
    ledState = !ledState;              // LED toggle
    digitalWrite(ledPin, ledState);    // LED (ON/OFF)
    delay(50);                         // Delay
  }

  lastSwitchState = switchState;
}
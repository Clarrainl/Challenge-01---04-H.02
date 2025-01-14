const int potPin = A0;    
const int ledPin = 6;     
int potValue = 0;         
int pwmValue = 0;         

void setup() {
 
  Serial.begin(9600);

  pinMode(ledPin, OUTPUT);
}

void loop() {
  
  potValue = analogRead(potPin);

  pwmValue = map(potValue, 0, 1023, 0, 255);

  // Potentiometer value to serial monitor:
  Serial.print("Potentiometer Value: ");
  Serial.print(potValue);
  Serial.print(" | PWM Value: ");
  Serial.println(pwmValue);

  analogWrite(ledPin, pwmValue);

  // Delay:
  delay(50);
}

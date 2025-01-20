const int trigPin = 9;
const int echoPin = 10;
const int greenLed = 3;
const int yellowLed = 5;
const int redLed = 6;

void setup() {
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(redLed, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // Measure distance:
  long duration, distance;

  // Send a 10-microsecond pulse to the Trig pin:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the time it takes for the pulse to return:
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance in cm:
  distance = duration * 0.034 / 2; // Speed of sound: 0.034 cm/us

  // Print the distance on the serial monitor:
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Control LEDs based on distance:
  if (distance > 100) { // Greater than 1 meter
    digitalWrite(greenLed, HIGH);
    digitalWrite(yellowLed, LOW);
    digitalWrite(redLed, LOW);
  } else if (distance >= 20 && distance <= 100) { // Between 20 cm and 1 m
    digitalWrite(greenLed, LOW);
    digitalWrite(yellowLed, HIGH);
    digitalWrite(redLed, LOW);
  } else { // Less than 20 cm
    digitalWrite(greenLed, LOW);
    digitalWrite(yellowLed, HIGH);
    digitalWrite(redLed, HIGH);
  }

  // Delay one second:
  delay(1000);
}

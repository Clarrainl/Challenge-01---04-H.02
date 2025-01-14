const int button1 = 7;      
const int button2 = 5;      
const int led1 = 6;         
const int led2 = 4;         

int button1State = 0;       
int lastButton1State = 0;   

int button2State = 0;       
int lastButton2State = 0;   

bool ledsState = false;     

void setup() {
  
  pinMode(button1, INPUT);     
  pinMode(button2, INPUT);

  pinMode(led1, OUTPUT);      
  pinMode(led2, OUTPUT);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
}

void loop() {
  // Buttons actual state:
  button1State = digitalRead(button1);
  button2State = digitalRead(button2);

  // Button1 function:
  if (button1State == HIGH && lastButton1State == LOW) {
    ledsState = true;                 // LEDs ON
    digitalWrite(led1, HIGH);         // LED1 ON
    digitalWrite(led2, HIGH);         // LED2 ON
    delay(50);                        // Delay
  }

  // Button2 function:
  if (button2State == HIGH && lastButton2State == LOW) {
    ledsState = false;                // LEDs OFF
    digitalWrite(led1, LOW);          // LED1 OFF
    digitalWrite(led2, LOW);          // LED2 OFF
    delay(50);                        // Delay
  }

  lastButton1State = button1State;
  lastButton2State = button2State;
}

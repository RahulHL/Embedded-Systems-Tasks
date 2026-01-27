#define ESTOP_PIN 2   // INT0

#define LED1 8
#define LED2 9
#define LED3 10

volatile bool emergencyStop = false;

// ---------- Emergency Stop ISR ----------
void emergencyISR() {
  emergencyStop = true;

  // Immediately turn OFF all LEDs
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);

  // Halt system permanently
  while (1) {
    // System stopped until reset
  }
}

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);

  pinMode(ESTOP_PIN, INPUT_PULLUP);

  attachInterrupt(digitalPinToInterrupt(ESTOP_PIN),
                  emergencyISR,
                  FALLING);   // Button pressed
}

void loop() {
  // -------- Normal operation: blink LEDs --------
  digitalWrite(LED1, HIGH);
  delay(300);
  digitalWrite(LED1, LOW);

  digitalWrite(LED2, HIGH);
  delay(300);
  digitalWrite(LED2, LOW);

  digitalWrite(LED3, HIGH);
  delay(300);
  digitalWrite(LED3, LOW);
}

#define IR_PIN 2        // INT0
#define LED1_PIN 8      // Continuous blinking LED
#define LED2_PIN 9      // IR controlled LED

volatile bool objectDetected = false;

// Timer variables for LED1
unsigned long previousMillis = 0;
const unsigned long interval = 5000;
bool led1State = LOW;

// ---------- Interrupt Service Routine ----------
void IR_ISR() {
  // IR sensor gives LOW when object detected
  if (digitalRead(IR_PIN) == LOW) {
    objectDetected = true;
  } else {
    objectDetected = false;
  }
}

void setup() {
  pinMode(IR_PIN, INPUT);
  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);

  // Attach interrupt on any change (detect + release)
  attachInterrupt(digitalPinToInterrupt(IR_PIN), IR_ISR, CHANGE);
}

void loop() {

  // -------- LED 1: Blink every 5 seconds --------
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    led1State = !led1State;
    digitalWrite(LED1_PIN, led1State);
  }

  // -------- LED 2: Controlled by interrupt --------
  if (objectDetected) {
    digitalWrite(LED2_PIN, HIGH);
  } else {
    digitalWrite(LED2_PIN, LOW);
  }
}

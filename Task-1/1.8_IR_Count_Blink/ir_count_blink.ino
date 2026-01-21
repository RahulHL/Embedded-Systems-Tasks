#define IR_PIN 2
#define LED_PIN 13

int objectCount = 0;
int lastSensorState = HIGH;   // IR idle state (usually HIGH)

void setup() {
  pinMode(IR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int currentSensorState = digitalRead(IR_PIN);

  // Detect object (HIGH → LOW transition)
  if (lastSensorState == HIGH && currentSensorState == LOW) {
    objectCount++;          // Count detection
    delay(200);             // Debounce / object settle
  }

  lastSensorState = currentSensorState;

  // Blink LED equal to number of detections
  blinkLED(objectCount);

  // Reset count after blinking (optional, but recommended)
  objectCount = 0;
}

// -------- LED Blink Function --------
void blinkLED(int count) {
  for (int i = 0; i < count; i++) {
    digitalWrite(LED_PIN, HIGH);
    delay(300);
    digitalWrite(LED_PIN, LOW);
    delay(300);
  }
}

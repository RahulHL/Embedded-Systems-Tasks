#define IR_PIN 2        // INT0
#define LED_PIN 13

volatile unsigned int objectCount = 0;
volatile bool blinkRequest = false;

// ---------- Interrupt Service Routine ----------
void IR_ISR() {
  objectCount++;

  // Every 5 detections, request LED blink
  if (objectCount % 5 == 0) {
    blinkRequest = true;
  }
}

void setup() {
  pinMode(IR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

  // Trigger interrupt when object is detected (LOW)
  attachInterrupt(digitalPinToInterrupt(IR_PIN),
                  IR_ISR,
                  FALLING);
}

void loop() {
  // Main loop only USES the result, not detect events
  if (blinkRequest) {
    digitalWrite(LED_PIN, HIGH);
    delay(500);
    digitalWrite(LED_PIN, LOW);
    delay(500);

    blinkRequest = false;
  }

  // (Optional) objectCount can be displayed or logged here
}

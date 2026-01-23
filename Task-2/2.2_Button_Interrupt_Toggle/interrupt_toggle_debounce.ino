#define BUTTON_PIN 2    // INT0
#define LED_PIN 13

volatile bool ledState = LOW;
volatile unsigned long lastInterruptTime = 0;
const unsigned long debounceDelay = 200; // ms

// ---------- Interrupt Service Routine ----------
void buttonISR() {
  unsigned long currentTime = millis();

  // Debounce check (no delay used)
  if (currentTime - lastInterruptTime > debounceDelay) {
    ledState = !ledState;              // Toggle LED state
    digitalWrite(LED_PIN, ledState);
    lastInterruptTime = currentTime;
  }
}

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  attachInterrupt(digitalPinToInterrupt(BUTTON_PIN),
                  buttonISR,
                  FALLING);   // Button press
}

void loop() {
  // Nothing here — NO polling
}

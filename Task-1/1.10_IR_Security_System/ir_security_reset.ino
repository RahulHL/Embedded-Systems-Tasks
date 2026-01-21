#define IR_PIN 2
#define RESET_BUTTON 3
#define LED_PIN 13

bool alarmTriggered = false;

void setup() {
  pinMode(IR_PIN, INPUT);
  pinMode(RESET_BUTTON, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {

  int irState = digitalRead(IR_PIN);
  int resetState = digitalRead(RESET_BUTTON);

  // IR sensor triggers alarm (LOW when object detected)
  if (irState == LOW) {
    alarmTriggered = true;
  }

  // Reset button clears alarm (LOW when pressed)
  if (resetState == LOW) {
    alarmTriggered = false;
    digitalWrite(LED_PIN, LOW);
    delay(200);   // debounce
  }

  // Alarm action: blink LED continuously
  if (alarmTriggered) {
    digitalWrite(LED_PIN, HIGH);
    delay(300);
    digitalWrite(LED_PIN, LOW);
    delay(300);
  }
}

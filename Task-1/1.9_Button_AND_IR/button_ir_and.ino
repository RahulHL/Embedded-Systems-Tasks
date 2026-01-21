#define IR_PIN 2
#define BUTTON_PIN 3
#define LED_PIN 13

void setup() {
  pinMode(IR_PIN, INPUT);                // IR sensor output
  pinMode(BUTTON_PIN, INPUT_PULLUP);     // Button with internal pull-up
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int irState = digitalRead(IR_PIN);
  int buttonState = digitalRead(BUTTON_PIN);

  // IR sensor: LOW when object detected
  // Button: LOW when pressed

  if (irState == LOW && buttonState == LOW) {
    digitalWrite(LED_PIN, HIGH);   // Both conditions true
  } else {
    digitalWrite(LED_PIN, LOW);
  }
}

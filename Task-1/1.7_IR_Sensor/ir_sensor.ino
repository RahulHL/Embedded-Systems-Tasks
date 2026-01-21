#define IR_PIN 2
#define LED_PIN 13

void setup() {
  pinMode(IR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int sensorState = digitalRead(IR_PIN);

  // Most IR sensors output LOW when object is detected
  if (sensorState == LOW) {
    digitalWrite(LED_PIN, HIGH);   // Object detected → LED ON
  } else {
    digitalWrite(LED_PIN, LOW);    // No object → LED OFF
  }
}

// Task 1.1 - LED Blink
// Blink LED with 1 second ON and 1 second OFF

int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000);            // 1 second ON
  digitalWrite(ledPin, LOW);
  delay(1000);            // 1 second OFF
}

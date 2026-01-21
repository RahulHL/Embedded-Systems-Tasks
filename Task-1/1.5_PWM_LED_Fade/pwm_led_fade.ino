#define LED_PIN 9   // PWM pin

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {

  // Fade from minimum (0) to maximum (255)
  for (int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(LED_PIN, brightness);
    delay(10);
  }

  // Fade from maximum (255) to minimum (0)
  for (int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(LED_PIN, brightness);
    delay(10);
  }
}

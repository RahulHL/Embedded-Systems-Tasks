#define LED_PIN 13       // PWM pin
#define BUTTON_PIN 4

int brightnessLevels[] = {80, 160, 255};
int levelIndex = 0;

int lastButtonState = HIGH;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  analogWrite(LED_PIN, brightnessLevels[levelIndex]);
}

void loop() {
  int currentButtonState = digitalRead(BUTTON_PIN);

  // Detect button press (HIGH -> LOW)
  if (lastButtonState == HIGH && currentButtonState == LOW) {

    levelIndex++;                 // Next brightness level
    if (levelIndex >= 3) {
      levelIndex = 0;             // Wrap around
    }

    analogWrite(LED_PIN, brightnessLevels[levelIndex]);
    delay(200);                   // Debounce delay
  }

  lastButtonState = currentButtonState;
}

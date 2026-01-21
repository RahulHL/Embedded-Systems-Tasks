#define RED 13
#define YELLOW 12
#define GREEN 11
#define BLUE 10
#define SKYBLUE 9
#define PURPLE 8

int leds[] = {RED, YELLOW, GREEN, BLUE, SKYBLUE, PURPLE};

void setup() {
  for (int i = 0; i < 6; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 6; i++) {
    digitalWrite(leds[i], HIGH);
    delay(500);
    digitalWrite(leds[i], LOW);   // ⭐ THIS WAS MISSING
  }
}

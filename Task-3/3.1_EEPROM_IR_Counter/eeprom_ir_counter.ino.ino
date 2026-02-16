#include <EEPROM.h>

#define IR_PIN 8

int objectCount = 0;
int lastSensorState = HIGH;

void setup() {
  pinMode(IR_PIN, INPUT);
  Serial.begin(9600);

  // Read saved count from EEPROM
  objectCount = EEPROM.read(0);

  Serial.print("Starting count from EEPROM: ");
  Serial.println(objectCount);
}

void loop() {
  int currentSensorState = digitalRead(IR_PIN);

  // Detect object (HIGH -> LOW transition)
  if (lastSensorState == HIGH && currentSensorState == LOW) {
    
    objectCount++;                 // Increment count
    EEPROM.write(0, objectCount); // Store in EEPROM

    Serial.print("Object detected! Count = ");
    Serial.println(objectCount);

    delay(300);  // debounce / allow object to pass
  }

  lastSensorState = currentSensorState;
}

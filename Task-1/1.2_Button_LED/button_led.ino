// LED ON when button pressed, OFF when released
// Arduino UNO

#define LED_PIN 13
#define BUTTON_PIN 4

void setup()
{
    pinMode(LED_PIN, OUTPUT);     // LED as output
    pinMode(BUTTON_PIN, INPUT);   // Button as input
}

void loop()
{
    int buttonState = digitalRead(BUTTON_PIN);

    if (buttonState == HIGH)      // Button pressed
    {
        digitalWrite(LED_PIN, HIGH);
    }
    else                          // Button released
    {
        digitalWrite(LED_PIN, LOW);
    }
}

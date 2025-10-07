#define PIN_LED_RGB 3

void setup() 
{
  pinMode(PIN_LED_RGB, OUTPUT);
}

void loop() 
{
  // Rapport cyclique = 0.25 (25 %)
  analogWrite(PIN_LED_RGB, 64);
}


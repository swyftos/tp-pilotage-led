#define PIN_LED_RGB 3
void setup() {
pinMode(PIN_LED_RGB, OUTPUT);
}
void loop() {
analogWrite(PIN_LED_RGB, 128);
}

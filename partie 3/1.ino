const int PIN_DIODE_R = 9;
const int PIN_DIODE_V = 10;
const int PIN_DIODE_B = 11;

void setup() 
{
  pinMode(PIN_DIODE_R, OUTPUT);
  pinMode(PIN_DIODE_V, OUTPUT);
  pinMode(PIN_DIODE_B, OUTPUT);
}

void loop() 
{
  // Rapport cyclique fixé à 25 % (valeur 64 sur 255)
  analogWrite(PIN_DIODE_R, 64);
  analogWrite(PIN_DIODE_V, 64);
  analogWrite(PIN_DIODE_B, 64);
}

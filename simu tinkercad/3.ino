
#define PIN_LED_ROUGE 9
#define PIN_LED_VERTE 10
#define PIN_LED_BLEUE 11

#define INTERRUPTEUR_ROUGE A0
#define INTERRUPTEUR_VERT A2
#define INTERRUPTEUR_BLEU A3

void setup() {

  pinMode(PIN_LED_ROUGE, OUTPUT);
  pinMode(PIN_LED_VERTE, OUTPUT);
  pinMode(PIN_LED_BLEUE, OUTPUT);

 
  pinMode(INTERRUPTEUR_ROUGE, INPUT);
  pinMode(INTERRUPTEUR_VERT, INPUT);
  pinMode(INTERRUPTEUR_BLEU, INPUT);
}

void loop() {

  int etatRouge = digitalRead(INTERRUPTEUR_ROUGE);
  int etatVert = digitalRead(INTERRUPTEUR_VERT);
  int etatBleu = digitalRead(INTERRUPTEUR_BLEU);


  analogWrite(PIN_LED_ROUGE, 255 * etatRouge);
  analogWrite(PIN_LED_VERTE, 255 * etatVert);
  analogWrite(PIN_LED_BLEUE, 255 * etatBleu);

  delay(20); 
}

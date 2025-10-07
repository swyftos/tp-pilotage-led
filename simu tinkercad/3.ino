// === Définition des broches ===
#define PIN_LED_ROUGE 9
#define PIN_LED_VERTE 10
#define PIN_LED_BLEUE 11

#define INTERRUPTEUR_ROUGE A0
#define INTERRUPTEUR_VERT A1
#define INTERRUPTEUR_BLEU A2

void setup() {
  // Configuration des LED en sortie
  pinMode(PIN_LED_ROUGE, OUTPUT);
  pinMode(PIN_LED_VERTE, OUTPUT);
  pinMode(PIN_LED_BLEUE, OUTPUT);

  // Configuration des interrupteurs en entrée
  pinMode(INTERRUPTEUR_ROUGE, INPUT);
  pinMode(INTERRUPTEUR_VERT, INPUT);
  pinMode(INTERRUPTEUR_BLEU, INPUT);
}

void loop() {
  // Lecture de l'état des interrupteurs (0 ou 1)
  int etatRouge = digitalRead(INTERRUPTEUR_ROUGE);
  int etatVert = digitalRead(INTERRUPTEUR_VERT);
  int etatBleu = digitalRead(INTERRUPTEUR_BLEU);

  // Pilotage des LED avec PWM (0 à 255)
  // Si interrupteur activé → LED allumée (255), sinon éteinte (0)
  analogWrite(PIN_LED_ROUGE, 255 * etatRouge);
  analogWrite(PIN_LED_VERTE, 255 * etatVert);
  analogWrite(PIN_LED_BLEUE, 255 * etatBleu);

  delay(20); // petite pause pour stabiliser la lecture
}

const int PIN_DIODE_R = 9;
const int PIN_DIODE_V = 10;
const int PIN_DIODE_B = 11;

int PIN_POT_R = A0;
int PIN_POT_V = A1;
int PIN_POT_B = A2;
int valeur_rouge, valeur_bleu, valeur_vert;


void setup() 
{
  // Paramètre la broche D3 comme étant une sortie
  pinMode(PIN_DIODE_R, OUTPUT);
  pinMode(PIN_DIODE_V, OUTPUT);
  pinMode(PIN_DIODE_B, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  // On paramètre le rapport cyclique du signal présent en D3
  // 128 correspond à un rapport cyclique de 128/255 
  // (cf. explications ci-dessous ou dans le sujet)
  valeur_rouge = analogRead(PIN_POT_R)/4;
  valeur_vert = analogRead(PIN_POT_V)/4;
  valeur_bleu = analogRead(PIN_POT_B)/4;

  analogWrite(PIN_DIODE_R, valeur_rouge);
  analogWrite(PIN_DIODE_V, valeur_vert);
  analogWrite(PIN_DIODE_B, valeur_bleu);
  Serial.println("R: " + String(valeur_rouge) + " V: " + String(valeur_vert) + " B: " + String(valeur_bleu) );
}

/*
la fonction qui paramètre la sortie D3 chargée d'alimenter la LED RGB est analogWrite(3, 128);

La valeur '3' indique le n° de la broche qui est pilotée. 
La valeur '128' permet de déterminer le rapport cyclique du signal rectangulaire généré.

Au sein de la carte ARDUINO, le rapport cyclique (qui théoriquement varie de 0 à 1) 
est codé sur 8 bits (256 valeurs possibles allant de 0 à 255).

Une valeur de 0 correspond donc à un rapport cyclique de 0 et une valeur de 255 à un rapport cyclique de 1.
*/

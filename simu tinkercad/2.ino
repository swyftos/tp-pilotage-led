#define PIN_LED_RGB 3

void setup() 
{
  // Paramètre la broche PIN_LED_RGB comme une sortie
  pinMode(PIN_LED_RGB, OUTPUT);
}

void loop() 
{
  // On paramètre le rapport cyclique du signal présent en PIN_LED_RGB
  // 128 correspond à un rapport cyclique de 128/255 
  // (cf. explications ci-dessous ou dans le sujet)
  analogWrite(PIN_LED_RGB, 128);
}

/*
la fonction qui paramètre la sortie D3 chargée d'alimenter la LED RGB est analogWrite(3, 128);

La valeur '3' indique le n° de la broche qui est pilotée. 
La valeur '128' permet de déterminer le rapport cyclique du signal rectangulaire généré.

Au sein de la carte ARDUINO, le rapport cyclique (qui théoriquement varie de 0 à 1) 
est codé sur 8 bits (256 valeurs possibles allant de 0 à 255).

Une valeur de 0 correspond donc à un rapport cyclique de 0 et une valeur de 255 à un rapport cyclique de 1.
*/

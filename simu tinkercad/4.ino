
#define PIN_LED_ROUGE 9
#define PIN_LED_VERTE 10
#define PIN_LED_BLEUE 11

#define POT_ROUGE A0
#define POT_VERT  A1
#define POT_BLEU  A2


const bool LED_ANODE_COMMUNE = false;

void setup() {
  pinMode(PIN_LED_ROUGE, OUTPUT);
  pinMode(PIN_LED_VERTE, OUTPUT);
  pinMode(PIN_LED_BLEUE, OUTPUT);

  pinMode(POT_ROUGE, INPUT);
  pinMode(POT_VERT,  INPUT);
  pinMode(POT_BLEU,  INPUT);

  Serial.begin(9600);
}

void loop() {
 
  int nR = analogRead(POT_ROUGE);
  int nV = analogRead(POT_VERT);
  int nB = analogRead(POT_BLEU);


  uint8_t r = nR >> 2;
  uint8_t g = nV >> 2;
  uint8_t b = nB >> 2;


  if (LED_ANODE_COMMUNE) {
    r = 255 - r;
    g = 255 - g;
    b = 255 - b;
  }


  analogWrite(PIN_LED_ROUGE, r);
  analogWrite(PIN_LED_VERTE, g);
  analogWrite(PIN_LED_BLEUE, b);


  Serial.print("R=");
  Serial.print(r);   Serial.print(" (");
  Serial.print((r * 100) / 255); Serial.print("%)  ");

  Serial.print("G=");
  Serial.print(g);   Serial.print(" (");
  Serial.print((g * 100) / 255); Serial.print("%)  ");

  Serial.print("B=");
  Serial.print(b);   Serial.print(" (");
  Serial.print((b * 100) / 255); Serial.println("%)");

  delay(50);
}

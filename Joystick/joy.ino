#define pinX A1
#define pinY A2
#define pinZBotao 2
int xRef, yRef;

void setup() {
  Serial.begin(57600);
  pinMode(pinZBotao, INPUT_PULLUP);
  xRef = analogRead(pinX);
  yRef = analogRead(pinY);
}

void loop() {
  int xVal = analogRead(pinX) - xRef;
  int yVal = analogRead(pinY) - yRef;
  int zVal = !digitalRead(pinZBotao);
  Serial.print("x:");
  Serial.print(xVal);
  Serial.print(" y: ");
  Serial.print(yVal);
  Serial.print(" botao: ");
  Serial.println(zVal);
  delay(100);
 }

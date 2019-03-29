#define analogPin A1

void setup() {
  Serial.begin(57600);
}

void loop() {
  int varA = analogRead(analogPin);
 Serial.println(varA);
 delay(200);
}

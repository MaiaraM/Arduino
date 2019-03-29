int count = 0;
void setup() {
  Serial.begin(57600);

}

void loop() {
 count++;
 Serial.print("contando ");
 Serial.println(count);
 delay(1000);

}

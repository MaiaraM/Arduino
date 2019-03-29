int led[4] = {3,5,6,9};

void setup() {
  for(int i=0 ; i<4; i++){
    pinMode(led[i], OUTPUT);
  }
  analogWrite(led[0], 50);
  analogWrite(led[1], 100);
  analogWrite(led[2], 150);
  analogWrite(led[3], 255);
}

void loop() {
}

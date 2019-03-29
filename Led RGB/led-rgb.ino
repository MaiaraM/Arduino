#define rPin 3
#define gPin 5
#define bPin 6

void setup() {
  pinMode(rPin, OUTPUT);
  pinMode(gPin, OUTPUT);
  pinMode(bPin, OUTPUT);
}

void loop() {
  for(int r=255; r>0; r-=4){
    for(int g=255; g>0; g-=4){
      for(int b=255; b>0; b-=4){
        analogWrite(rPin, r);
        analogWrite(rPin, g);
        analogWrite(rPin, b);
        delay(23);
      }
    }
  }
}

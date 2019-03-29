int led[4]={2,3,4,5};

void setup() {
  for(int i=0; i<4;i++){
     pinMode(led[i],OUTPUT);
  }
 
}

void loop() {
  for(int i=0; i<4;i++){
    digitalWrite(led[i], HIGH);
    delay(150);
    digitalWrite(led[i],LOW);
   delay(150);
  }

  digitalWrite(led[0], HIGH);
  digitalWrite(led[1], HIGH);
  digitalWrite(led[2], HIGH);
  digitalWrite(led[3], HIGH);
  delay(250);
   
  for(int i=5; i>0;i--){
    digitalWrite(led[i], LOW);
    delay(250);
    digitalWrite(led[i],HIGH);
   delay(250);
  }
    
}

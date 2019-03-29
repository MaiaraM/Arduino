
int led[4]={2,3,4,5};
long anterior = 0;   
long ligado = 100;


void setup() {
  for(int i=0; i<4;i++){
     pinMode(led[i],OUTPUT);
  }
 
}

void loop() {
  unsigned long milli = millis();

if (milli - anterior > ligado) { 
    anterior = milli;   
}
  for(int i=0; i<4;i++){
    if((milli - anterior) < ligado){
      digitalWrite(led[i], HIGH);
    }else{
      digitalWrite(led[i],LOW);
    }
  }
  
}

int leds[4] = {2,3,4,5};
 int i = 0;
long tempoSalvo = 0;
long espera = 250;
long estado = LOW;

void setup() {
    Serial.begin(9600);
  for(int i=0; i<4;i++){
    pinMode(leds[i],OUTPUT);
  }
}

void loop() {
  unsigned long tempoCorrido = millis();
    
  if(tempoCorrido-tempoSalvo >= espera){
    tempoSalvo = tempoCorrido;
      Serial.println(digitalRead(leds[i]));
      if(estado == HIGH){
         estado = LOW ;
      }else{
         estado = HIGH ;
      }
      for(int i=0;i<4;i++){
         digitalWrite(leds[i], estado);
      } 
  }
}

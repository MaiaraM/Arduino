int leds[4] = {2,3,4,5};
int i;
long tempoSalvo = 0;
long espera = 550;
long estado = LOW;

void setup() {
   i = 0;
  for(int i=0; i<4;i++){
    pinMode(leds[i],OUTPUT);
  }
}

void loop() {
  unsigned long tempoCorrido = millis();
   if(tempoCorrido-tempoSalvo >= espera){
        int i = random(0,5);
        tempoSalvo = tempoCorrido;
         if (estado == HIGH) {
             digitalWrite(leds[i], LOW);
         } else {
            digitalWrite(leds[i], HIGH);
        }
   }
}

#define botaoVerde 6
#define botaoPreto 7
int i =0;
int leds[4] = {2,3,4,5};

void setup() {
   for(int i=0; i<4;i++){
    pinMode(leds[i],OUTPUT);
  }
  pinMode(botaoVerde, INPUT_PULLUP);
  pinMode(botaoPreto, INPUT_PULLUP);
  digitalWrite(leds[i], 1);  
}

void loop() {
    if(digitalRead(botaoVerde) == 0){
      digitalWrite(leds[i], 0);
      i++;
      if(i>3){
        i=0;
      }
      digitalWrite(leds[i], 1);
      delay(500);
    }

    if(digitalRead(botaoPreto) == 0){
      digitalWrite(leds[i], 0);
      i--;
      if(i<0){
        i=3;
      }
      digitalWrite(leds[i], 1);
      delay(500);
    }

 
    
}

#define botaoVerde 6
#define botaoPreto 7
int leds[4] = {2,3,4,5};

void setup() {
  Serial.begin(9600);
   for(int i=0; i<4;i++){
    pinMode(leds[i],OUTPUT);
  }
  pinMode(botaoVerde, INPUT_PULLUP);
  pinMode(botaoPreto, INPUT_PULLUP);
  
}

void loop() {
    Serial.println(digitalRead(botaoVerde));
    Serial.println(digitalRead(botaoPreto));
    if(digitalRead(botaoVerde) == 0){
      digitalWrite(leds[0], 1);
      digitalWrite(leds[1], 1);
    }else{
      digitalWrite(leds[0], 0);
      digitalWrite(leds[1], 0);
    }

    if(digitalRead(botaoPreto)== 0){
       digitalWrite(leds[2], 1);
      digitalWrite(leds[3], 1);
    }else{
        digitalWrite(leds[2], 0);
      digitalWrite(leds[3], 0);
    }
    
}

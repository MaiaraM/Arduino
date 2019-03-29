#define pinX A1
#define pinY A2
#define pinZBotao 2

int leds [4] = {4,5,6,7};

int xRef, yRef;

void setup() {
 Serial.begin(57600);
  pinMode(pinZBotao, INPUT_PULLUP);
  
   for(int i=0; i<4;i++){
    pinMode(leds[i],OUTPUT);
  }
  
  xRef = analogRead(pinX);
  yRef = analogRead(pinY);

}

void loop() {

  int xVal = analogRead(pinX);
   Serial.print("x:");
   Serial.println(xVal);
  int zVal = !digitalRead(pinZBotao);   
  for(int i =0 ;i<4 ; i++){
     digitalWrite(leds[i], 1);
     delay(xVal);
     if(zVal){
      break;
     }
     digitalWrite(leds[i], 0);
  }
   
  int yVal = analogRead(pinY) - yRef;

 
}

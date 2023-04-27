int presencia, i = 0;
int pinSalidaLED = 9;
int pinEntradaDetector = 4;

void setup() {
  Serial.begin(9600);

  pinMode(pinEntradaDetector, INPUT);
  pinMode(pinSalidaLED, OUTPUT);

}

void loop() {
  presencia = digitalRead(4);
  Serial.print(presencia);
  delay(50);

  if(presencia==1){
    
    digitalWrite(pinSalidaLED, 1);
    
    
    }
    
  else{
    
      digitalWrite(pinSalidaLED, 0);
      
    }
  }


int presencia;
int pinSalidaLED = 9;
int pinEntradaDetector = 4;

//Arduino UNO
//Sensor PIR

void setup() {
  Serial.begin(9600);

  pinMode(pinEntradaDetector, INPUT); //El pinEntradaDetector será el pin por el cual ingresará la señal del PIR.
  pinMode(pinSalidaLED, OUTPUT); //El pinSalidaLED será el pin por el cual saldrá la señal para activar el LED o no.

}

void loop() {
  presencia = digitalRead(pinEntradaDetector); //Dato que ingresa del PIR. Si es 1 hay movimiento, si es 0 no hay movimiento.
  
  delay(100);

  if(presencia==1){
    digitalWrite(pinSalidaLED, 1); //Si el PIR detecta movimiento, mandará la señal 1 y se prenderá el led.
    Serial.print("\nHAY MOVIMIENTO");
    }
    
  else{
      digitalWrite(pinSalidaLED, 0); //SI el PIR no detecta movimiento, mandará la señal 0 y no se prenderá el LED.
      Serial.print("\nQUIETO");
    }
  }


int valor, i = 0;

void setup() {
  
  
  pinMode(8, OUTPUT);
  pinMode(4, INPUT);
  pinMode(9, OUTPUT);

}

void loop() {
  valor = digitalRead(4);

  if(valor==1){
    
    for(i; i<255; i++){
      analogWrite(9, i);
      delay(10);
    }

    
    }
    
  else{
    //analogWrite(9,0);
    for(i; i>=0; i--){
      analogWrite(9, i);
      delay(10);
    }
  }
}

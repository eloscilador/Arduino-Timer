// Declaramos las variables
unsigned short min, seg;


// Establacemos los pines de entrada/salida
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}


// Bucle del temporizador
void loop()
{
  delay(1000);
  seg++;
  
  if ( seg == 1 ){
    min++;
    seg = 0;
  }
  
  if ( min == 5 ){
    digitalWrite(3, HIGH);
  }
  if ( min == 10 ){
    digitalWrite(4, HIGH);
  }
  if ( min == 15 ){
    digitalWrite(5, HIGH);
  }
  if ( min == 20 ){
    digitalWrite(6, HIGH);
  }
  if ( min == 25 ){
    digitalWrite(7, HIGH);
    
    int index;
    for ( index = 3; index < 8; index++ ) {
      digitalWrite(index, LOW);
      delay(500);
      digitalWrite(index, HIGH);
    }
    
    delay(3000);
    for ( index=3; index < 8; index++ ) {
      digitalWrite(index, LOW);
    }
    
    min = 0;
  }
}

/*
 * ========================================================================== 
 * Baú da Eletrônica Componentes Eletrônicos www.baudaeletronica.com.br 
 * PROJETO 1 - LED Piscante
 * ==========================================================================
*/ 
int ledPin = 10; //LED conectado ao pino 10
void setup() {
  pinMode(ledPin, OUTPUT); 
}

void loop() {
  digitalWrite(ledPin, HIGH); //Liga o pino 10 e acende o LED 
  delay(1000);
  digitalWrite(ledPin, LOW); //Desliga o pino 10 e acende o LED 
  delay(1000);  
}

int Objeto = 0;
int Sensor = 5;

void setup() 
{
  pinMode(Sensor, INPUT); //Pino 7 do arduino como saída 
  Serial.begin(9600);     //Indica ao Arduino que vamos enviar e receber dados //com o mundo externo através da porta USB
}
void loop() 
{
  Objeto = digitalRead(Sensor); //Verifica sinal do sensor 
  if (Objeto == 0)
  { 
    Serial.println ("Nenhum objeto presente"); //Escreve mensagem no monitor 
  }
  else 
  {
    Serial.println("Objeto detectado"); //Escreve mensagem
  } 
}

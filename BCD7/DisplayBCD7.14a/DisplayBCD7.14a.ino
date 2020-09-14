int Pino_A = 9;   //Segmento A conectado ao pino 9 do Arduino
int Pino_B = 8;   //Segmento B conectado ao pino 8 do Arduino
int Pino_C = 5;   //Segmento C conectado ao pino 5 do Arduino
int Pino_D = 6;   //Segmento D conectado ao pino 6 do Arduino
int Pino_E = 7;   //Segmento E conectado ao pino 7 do Arduino
int Pino_F = 10;  //Segmento F conectado ao pino 10 do Arduino
int Pino_G = 11;  //Segmento G conectado ao pino 11 do Arduino
int Pino_PT = 4;  //Segmento PT conectado ao pino 4 do Arduino

void setup()
{
  pinMode(Pino_A, OUTPUT); //Pino 9 do arduino como saída
  pinMode(Pino_B, OUTPUT); //Pino 8 do arduino como saída
  pinMode(Pino_C, OUTPUT); //Pino 5 do arduino como saída
  pinMode(Pino_D, OUTPUT); //Pino 6 do arduino como saída
  pinMode(Pino_E, OUTPUT); //Pino 7 do arduino como saída
  pinMode(Pino_F, OUTPUT); //Pino 10 do arduino como saída
  pinMode(Pino_G, OUTPUT); //Pino 11 do arduino como saída
  pinMode(Pino_PT, OUTPUT); //Pino 4 do arduino como saída
}

void loop()
{
  digitalWrite(Pino_A, HIGH); //Acende segmento A
  digitalWrite(Pino_B, HIGH); //Acende segmento B
  digitalWrite(Pino_C, HIGH); //Acende segmento C
  digitalWrite(Pino_D, HIGH); //Acende segmento D
  digitalWrite(Pino_E, HIGH); //Acende segmento E
  digitalWrite(Pino_F, HIGH); //Acende segmento F
  digitalWrite(Pino_G, LOW);  //Apaga segmento G
  delay (1000);               //Aguarda 1 segundo para exibir novo número
  
  digitalWrite(Pino_A, LOW);  //Apaga segmento A
  digitalWrite(Pino_B, HIGH); //Acende segmento B
  digitalWrite(Pino_C, HIGH); //Acende segmento C
  digitalWrite(Pino_D, LOW);  //Apaga segmento D
  digitalWrite(Pino_E, LOW);  //Apaga segmento E
  digitalWrite(Pino_F, LOW);  //Apaga segmento F
  digitalWrite(Pino_G, LOW);  //Apaga segmento G
  delay (1000); //Aguarda 1 segundo para exibir novo número
  
  digitalWrite(Pino_A, HIGH); //Acende segmento A
  digitalWrite(Pino_B, HIGH); //Acende segmento B
  digitalWrite(Pino_C, LOW); //Apaga segmento C
  digitalWrite(Pino_D, HIGH); //Acende segmento D
  digitalWrite(Pino_E, HIGH); //Acende segmento E
  digitalWrite(Pino_F, LOW); //Apaga segmento F
  digitalWrite(Pino_G, HIGH); //Acende segmento G
  delay (1000);               //Aguarda 1 segundo para exibir novo número
  
  digitalWrite(Pino_A, HIGH); //Acende segmento A
  digitalWrite(Pino_B, HIGH); //Acende segmento B
  digitalWrite(Pino_C, HIGH); //Acende segmento C
  digitalWrite(Pino_D, HIGH); //Acende segmento D
  digitalWrite(Pino_E, LOW); //Apaga segmento E
  digitalWrite(Pino_F, LOW); //Apaga segmento F
  digitalWrite(Pino_G, HIGH); //Acende segmento G
  delay (1000); //Aguarda 1 segundo para exibir novo número
  
  digitalWrite(Pino_A, LOW); //Apaga segmento A
  digitalWrite(Pino_B, HIGH); //Acende segmento B
  digitalWrite(Pino_C, HIGH); //Acende segmento C
  digitalWrite(Pino_D, LOW); //Apaga segmento D
  digitalWrite(Pino_E, LOW); //Apaga segmento E
  digitalWrite(Pino_F, HIGH); //Acende segmento F
  digitalWrite(Pino_G, HIGH); //Acende segmento G
  delay (1000); //Aguarda 1 segundo para exibir novo número
  
  digitalWrite(Pino_A, HIGH); //Acende segmento A
  digitalWrite(Pino_B, LOW); //Apaga segmento B
  digitalWrite(Pino_C, HIGH); //Acende segmento C
  digitalWrite(Pino_D, HIGH); //Acende segmento D
  digitalWrite(Pino_E, LOW); //Apaga segmento E
  digitalWrite(Pino_F, HIGH); //Acende segmento F
  digitalWrite(Pino_G, HIGH); //Acende segmento G
  delay (1000); //Aguarda 1 segundo para exibir novo número
 
  digitalWrite(Pino_A, HIGH); //Acende segmento A
  digitalWrite(Pino_B, LOW); //Apaga segmento B
  digitalWrite(Pino_C, HIGH); //Acende segmento C
  digitalWrite(Pino_D, HIGH); //Acende segmento D
  digitalWrite(Pino_E, HIGH); //Acende segmento E
  digitalWrite(Pino_F, HIGH); //Acende segmento F
  digitalWrite(Pino_G, HIGH); //Acende segmento G
  delay (1000); //Aguarda 1 segundo para exibir novo número
  
  digitalWrite(Pino_A, HIGH); //Acende segmento A
  digitalWrite(Pino_B, HIGH); //Acende segmento B
  digitalWrite(Pino_C, HIGH); //Acende segmento C
  digitalWrite(Pino_D, LOW); //Apaga segmento D
  digitalWrite(Pino_E, LOW); //Apaga segmento E
  digitalWrite(Pino_F, LOW); //Apaga segmento F
  digitalWrite(Pino_G, LOW); //Apaga segmento G
  delay (1000); //Aguarda 1 segundo para exibir novo número
  
  digitalWrite(Pino_A, HIGH); //Acende segmento A
  digitalWrite(Pino_B, HIGH); //Acende segmento B
  digitalWrite(Pino_C, HIGH); //Acende segmento C
  digitalWrite(Pino_D, HIGH); //Acende segmento D
  digitalWrite(Pino_E, HIGH); //Acende segmento E
  digitalWrite(Pino_F, HIGH); //Acende segmento F
  digitalWrite(Pino_G, HIGH); //Acende segmento G
  delay (1000); //Aguarda 1 segundo para exibir novo número
 
  digitalWrite(Pino_A, HIGH); //Acende segmento A
  digitalWrite(Pino_B, HIGH); //Acende segmento B
  digitalWrite(Pino_C, HIGH); //Acende segmento C
  digitalWrite(Pino_D, HIGH); //Acende segmento D
  digitalWrite(Pino_E, LOW); //Apaga segmento E
  digitalWrite(Pino_F, HIGH); //Acende segmento F
  digitalWrite(Pino_G, HIGH); //Acende segmento G
  delay (1000); //Aguarda 1 segundo para exibir novo número
  
}

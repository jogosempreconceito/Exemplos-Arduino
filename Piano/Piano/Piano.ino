int Led_Vermelho = 11;  //LED Vermelho conectado ao pino 11
int Led_Amarelo = 10;   //LED Amarelo conectado ao pino 10
int Led_Verde = 9;      //LED Verde conectado ao pino 9
int Led_Azul = 8;       //LED Azul conectado ao pino 8
int Botao_1 = 7;        //Botão 1 conectado ao pino 7
int Botao_2 = 6;        //Botão 1 conectado ao pino 6
int Botao_3 = 5;        //Botão 1 conectado ao pino 5
int Botao_4 = 4;        //Botão 1 conectado ao pino 4
int Estado_Botao_1 = 0; //Variável para armazenar estado do botão 1
int Estado_Botao_2 = 0; //Variável para armazenar estado do botão 2
int Estado_Botao_3 = 0; //Variável para armazenar estado do botão 3
int Estado_Botao_4 = 0; //Variável para armazenar estado do botão 4
int Nota = 0;           //Variável para armazenar a nota musical
int Buzzer = 12;        //Buzzer conectado ao pino 12

void setup()
{
  pinMode(Led_Vermelho, OUTPUT);  //Pino 7 do arduino como saída
  pinMode(Led_Amarelo, OUTPUT);   //Pino 6 do arduino como saída
  pinMode(Led_Verde, OUTPUT);     //Pino 5 do arduino como saída
  pinMode(Led_Azul, OUTPUT);      //Pino 4 do arduino como saída
  pinMode(Botao_1, INPUT);        //Pino 3 do arduino como entrada
  pinMode(Botao_2, INPUT);        //Pino 2 do arduino como entrada
  pinMode(Botao_3, INPUT);        //Pino 1 do arduino como entrada
  pinMode(Botao_4, INPUT);        //Pino 0 do arduino como entrada
  pinMode(Buzzer, OUTPUT);        //Pino 11 do arduino como saída
}

void loop()
{
  Estado_Botao_1 = digitalRead(Botao_1); //Lê o estado do botão 1
  Estado_Botao_2 = digitalRead(Botao_2); //Lê o estado do botão 2
  Estado_Botao_3 = digitalRead(Botao_3); //Lê o estado do botão 3
  Estado_Botao_4 = digitalRead(Botao_4); //Lê o estado do botão 4
  
  if(Estado_Botao_1 && !Estado_Botao_2 && !Estado_Botao_3 && !Estado_Botao_4)
  { 
    Nota = 80;
    digitalWrite(Led_Vermelho, HIGH); 
  } 
 
  if(!Estado_Botao_1 && Estado_Botao_2 && !Estado_Botao_3 && !Estado_Botao_4)
  { 
    Nota = 160;
    digitalWrite(Led_Amarelo, HIGH); 
  } 
  
  if(!Estado_Botao_1 && !Estado_Botao_2 && Estado_Botao_3 && !Estado_Botao_4)
  { 
    Nota = 240;
    digitalWrite(Led_Verde, HIGH); 
  } 

 if(!Estado_Botao_1 && !Estado_Botao_2 && !Estado_Botao_3 && Estado_Botao_4)
 { 
    Nota = 320;
    digitalWrite(Led_Azul, HIGH); 
 } 
  
 if (Nota > 0) //LED Vermelho conectado ao pino 7
 { 
  digitalWrite(Buzzer, HIGH);
  delayMicroseconds(Nota);
  digitalWrite(Buzzer, LOW);
  delayMicroseconds(Nota);
  Nota = 0;
  digitalWrite(Led_Vermelho, LOW);
  digitalWrite(Led_Amarelo, LOW);
  digitalWrite(Led_Verde, LOW);
  digitalWrite(Led_Azul, LOW);
 }
}

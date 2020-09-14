int Pino_D0 = 4; 
int Pino_D1 = 7; 
int Pino_D2 = 6; 
int Pino_D3 = 5;

void setup() 
{
  pinMode(Pino_D0, OUTPUT); 
  pinMode(Pino_D1, OUTPUT); 
  pinMode(Pino_D2, OUTPUT); 
  pinMode(Pino_D3, OUTPUT);
}

void loop() 
{
  digitalWrite(Pino_D0, LOW); 
  digitalWrite(Pino_D1, LOW);
  digitalWrite(Pino_D2, LOW); 
  digitalWrite(Pino_D3, LOW); 
  delay (1000);
  
  digitalWrite(Pino_D0, HIGH); 
  digitalWrite(Pino_D1, LOW);
  digitalWrite(Pino_D2, LOW); 
  digitalWrite(Pino_D3, LOW); 
  delay (1000);
  
  digitalWrite(Pino_D0, LOW);
  digitalWrite(Pino_D1, HIGH);  
  digitalWrite(Pino_D2, LOW); 
  digitalWrite(Pino_D3, LOW); 
  delay (1000);
  
  digitalWrite(Pino_D0, HIGH); 
  digitalWrite(Pino_D1, HIGH);
  digitalWrite(Pino_D2, LOW); 
  digitalWrite(Pino_D3, LOW); 
  delay (1000);
  
  digitalWrite(Pino_D0, LOW); 
  digitalWrite(Pino_D1, LOW);
  digitalWrite(Pino_D2, HIGH); 
  digitalWrite(Pino_D3, LOW); 
  delay (1000);
  
  digitalWrite(Pino_D0, HIGH); 
  digitalWrite(Pino_D1, LOW);
  digitalWrite(Pino_D2, HIGH); 
  digitalWrite(Pino_D3, LOW); 
  delay (1000);
  
  digitalWrite(Pino_D0, LOW);
  digitalWrite(Pino_D1, HIGH);
  digitalWrite(Pino_D2, HIGH); 
  digitalWrite(Pino_D3, LOW); 
  delay (1000);
  
  digitalWrite(Pino_D0, HIGH); 
  digitalWrite(Pino_D1, HIGH);
  digitalWrite(Pino_D2, HIGH); 
  digitalWrite(Pino_D3, LOW); 
  delay (1000);
  
  digitalWrite(Pino_D0, LOW); 
  digitalWrite(Pino_D1, LOW);
  digitalWrite(Pino_D2, LOW); 
  digitalWrite(Pino_D3, HIGH); 
  delay (1000);
  
  digitalWrite(Pino_D0, HIGH); 
  digitalWrite(Pino_D1, LOW);
  digitalWrite(Pino_D2, LOW); 
  digitalWrite(Pino_D3, HIGH); 
  delay (1000);
}

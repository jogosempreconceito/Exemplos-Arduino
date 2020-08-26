#include "thermistor.h"
int pinNTC = A1;
float temperatura;
THERMISTOR thermistor(pinNTC, 10000, 3950, 10000);
void setup()
{
    Serial.begin(9600);
}
void loop()
{
    temperatura = thermistor.read();
    Serial.print("Temperatura: ");
    Serial.print(temperatura);
    Serial.println(" graus");
    Serial.println("");
    delay(1000);
}

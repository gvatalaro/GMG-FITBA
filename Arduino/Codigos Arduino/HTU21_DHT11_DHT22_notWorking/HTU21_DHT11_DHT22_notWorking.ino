#include <DHT.h>
#include <Wire.h>
#include "SparkFunHTU21D.h"
#include <dht11.h>

HTU21D myHumidity;
dht11 DHT11;

#define datapin 3 //dht22
#define DHT11PIN 4 //dht11

void setup()
{
  Serial.begin(9600);
  myHumidity.begin();
  Serial.print("Temperatura HTU21, DHT11, DHT22 y humedad HTU21, DHT11, DHT22");
  Serial.println("");
  delay(2000);
}

void loop()
{
  int readData = DHT.read22(datapin);
  int chk = DHT11.read(DHT11PIN);
  float t = DHT.temperature;
  float h = DHT.humidity;
  float humd = myHumidity.readHumidity();
  float temp = myHumidity.readTemperature();
  
  Serial.print("Time: ");
  Serial.print(" ");
  Serial.print(millis());
  Serial.print("   ");
  Serial.print(temp, 1);
  Serial.print(" ");
  Serial.print((float) DHT11.temperature, 2);
  Serial.print(" ");
  Serial.print(t);
  Serial.print("   ");
  Serial.print(humd, 1);
  Serial.print(" ");
  Serial.print((float)DHT11.humidity, 2);
  Serial.print(" ");
  Serial.print(h);
  Serial.print(" ");
  Serial.println();

}
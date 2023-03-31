#include <Wire.h>
#include "SparkFunHTU21D.h"

#include <dht11.h>
#define DHT11PIN 4

HTU21D myHumidity;
dht11 DHT11;

void  setup()
{
  Serial.begin(9600);
  myHumidity.begin();

  Serial.print("Temperatura y humedad HTU21");
  Serial.print(" ");
  Serial.print("Temperatura y humedad DHT11");
  Serial.println("");
  delay(2000);
}

void loop()
{
  float humd = myHumidity.readHumidity();
  float temp = myHumidity.readTemperature();
  int chk = DHT11.read(DHT11PIN);
  Serial.print("Time:");
  Serial.print(millis());
  Serial.print(" ");
  Serial.print(temp, 1);
  Serial.print(" ");
  Serial.print(humd, 1);
  Serial.print("  ");
  Serial.print((float)DHT11.temperature, 2);
  Serial.print(" ");
  Serial.print((float)DHT11.humidity, 2);
  Serial.println("");
  delay(10);
}
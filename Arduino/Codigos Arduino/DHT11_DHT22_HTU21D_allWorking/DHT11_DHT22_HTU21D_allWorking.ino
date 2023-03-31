#include "DHT.h"
#define DHT11PIN 2
#define DHT22PIN 3
#include <Wire.h>
#include "SparkFunHTU21D.h"

HTU21D myHumidity;

DHT dht11(DHT11PIN, DHT11 );
DHT dht22(DHT22PIN, DHT22 );

void setup() 
{
  Serial.begin(9600);
  Serial.println("By Giancarlo Vatalaro");
  delay(500);
  Serial.println("time,temp-dht11,temp-dht22,temp-htu21,hum-dht11,hum-dht22,hum-htu21");
  delay(500);
  myHumidity.begin();
  dht11.begin();
  dht22.begin();
}

void loop() 
{
  delay(2000);
  float h11 = dht11.readHumidity();
  float t11 = dht11.readTemperature();
  float h22 = dht22.readHumidity();
  float t22 = dht22.readTemperature();
  float humd = myHumidity.readHumidity();
  float temp = myHumidity.readTemperature();
  
  Serial.print(millis()/1000);
  Serial.print(",");
  Serial.print(t11);
  Serial.print(",");
  Serial.print(t22);
  Serial.print(",");
  Serial.print(temp);
  Serial.print(",");
  Serial.print(h11);
  Serial.print(",");
  Serial.print(h22);
  Serial.print(",");
  Serial.print(humd);
  Serial.println();
}
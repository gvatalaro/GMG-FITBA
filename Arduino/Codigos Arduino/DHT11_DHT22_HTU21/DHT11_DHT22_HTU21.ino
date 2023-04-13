//HTU21
# include <Wire.h>
#include "SparkFunHTU21D.h"
HTU21D myHumidity;

//DHT11 - DHT22
#include <dht.h>
#define data11 8  // Defines pin number to which the sensor is connected
#define data22 9 // Defines pin number to which the sensor is connected


dht DHT1; // Creats a DHT1 object DHT1 = DHT22
dht DHT2; // Creats a DHT2 object DHT2 = DHT11

void setup() 
{
	Serial.begin(9600);
  myHumidity.begin();
  Serial.print("Tiempo,T-DHT11,T-DHT22,T-HTU21,H-DHT11,H-DHT22,H-TU21");
  Serial.println("");  
}

void loop() 
{
  //HTU21
  float humd = myHumidity.readHumidity();
  float temp = myHumidity.readTemperature();
  //DHT11-DHT22
	int readData22 = DHT1.read22(data22); // DHT22
	int readData11 = DHT2.read11(data11); // DHT11
  float t11 = DHT2.temperature;
	float t22 = DHT1.temperature; // Gets the values of the temperature
  float h11 = DHT2.humidity;
  float h22 = DHT1.humidity; // Gets the values of the humidity

  Serial.print(millis()/100);
  Serial.print(",");
  Serial.print(t11);
  Serial.print(",");
  Serial.print(t22);
  Serial.print(",");
  Serial.print(temp, 1);
  Serial.print(",");
  Serial.print(h11);
  Serial.print(",");
  Serial.print(h22);
  Serial.print(",");
  Serial.print(humd, 1);
  Serial.println("");
  delay(100);
}
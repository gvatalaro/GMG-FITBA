#include <dht.h>

#define data22 8 // Defines pin number to which the sensor is connected
#define data11 9

dht DHT1; // Creats a DHT object
dht DHT2;

void setup() 
{
	Serial.begin(9600);
}

void loop() 
{
	//Uncomment whatever type you're using!
	int readData22 = DHT1.read22(data22); // DHT22/AM2302
	int readData11 = DHT2.read11(data11); // DHT11

  float t11 = DHT2.temperature;
	float t22 = DHT1.temperature; // Gets the values of the temperature
  float h11 = DHT2.humidity;
  float h22 = DHT1.humidity; // Gets the values of the humidity
  

  Serial.print("Temperatura DHT11 - DHT22 // Humedad DHT11 - DHT22");
  Serial.print(t11);
  Serial.print(" ");
  Serial.print(t22);
  Serial.print(" ");
  Serial.print(h11);
  Serial.print(" ");
  Serial.print(h22);
  Serial.println("");
  delay(1000);
}
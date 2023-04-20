// negro......GND
// rojo.......5v

// violeta....pin 2 
// amarillo...pin 3
// blanco.....pin 4

// naranja....pin 5
// verde......pin 6
// azul.......pin 7

#include "DHT.h"

//violea, amarillo y blanco = aproximadamente 1m/0,9m/0,8m = mas lejano, intermedio, mas cercano al arduino
#define DHT1PIN 2 // violeta....pin 2
#define DHT2PIN 3 // amarillo...pin 3
#define DHT3PIN 4 // blanco.....pin 4

//naranja, verde y azul = aproximadamente 1m/0,9m/0,8m = mas lejano, intermedio, mas cercano al arduino
#define DHT4PIN 5 // naranja....pin 5
#define DHT5PIN 6 // verde......pin 6 
#define DHT6PIN 7 // azul.......pin 7

#define DHTTYPE DHT11

DHT dht1(DHT1PIN, DHTTYPE);
DHT dht2(DHT2PIN, DHTTYPE);
DHT dht3(DHT3PIN, DHTTYPE);
DHT dht4(DHT4PIN, DHTTYPE);
DHT dht5(DHT5PIN, DHTTYPE);
DHT dht6(DHT6PIN, DHTTYPE);

long tiempoUltimaLectura = 0; // almacena el tiempo de la última lectura


void setup()
{
  Serial.begin(9600);
  Serial.println("Iniciando...");
  delay(500);
  Serial.println("By Giancarlo Vatalaro");
  delay(1000);
  Serial.println("time,temp-dht1,temp-dht2,temp-dht3,temp-dht4,temp-dht5,temp-dht6,humd-dht1,humd-dht2,humd-dht3,humd-dht4,humd-dht5,humd-dht6");
  dht1.begin();
  dht2.begin();
  dht3.begin();
  dht4.begin();
  dht5.begin();
  dht6.begin();
}

void loop()
{
  if(millis() - tiempoUltimaLectura > 2000)
  {
    float t1 = dht1.readTemperature();
    float t2 = dht2.readTemperature();
    float t3 = dht3.readTemperature();
    float t4 = dht4.readTemperature();
    float t5 = dht5.readTemperature();
    float t6 = dht6.readTemperature();
    float h1 = dht1.readHumidity();
    float h2 = dht2.readHumidity();
    float h3 = dht3.readHumidity();
    float h4 = dht4.readHumidity();
    float h5 = dht5.readHumidity();
    float h6 = dht6.readHumidity();

    Serial.print(millis()/10);
    
    //temperatura 1 al 6
    Serial.print(",");
    Serial.print(t1);
    Serial.print(",");
    Serial.print(t2);
    Serial.print(",");
    Serial.print(t3);
    Serial.print(",");
    Serial.print(t4);
    Serial.print(",");
    Serial.print(t5);
    Serial.print(",");
    Serial.print(t6);
    Serial.print(",");
    
    //humedad 1 al 6
    Serial.print(h1);
    Serial.print(",");
    Serial.print(h2);
    Serial.print(",");
    Serial.print(h3);
    Serial.print(",");
    Serial.print(h4);
    Serial.print(",");
    Serial.print(h5);
    Serial.print(",");
    Serial.print(h6);
    Serial.println();
    tiempoUltimaLectura = millis(); //actualiza el tiempo de la última lectura
  }
}
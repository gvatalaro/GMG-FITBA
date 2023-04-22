/*
todos los cables negros......GND
todos los cables rojo........5v

*riestra1
violeta....pin D2 
amarillo...pin D3
blanco.....pin D4

*riestra 2
naranja....pin D5
verde......pin D6
azul.......pin D7


*riestra 3
verde......pin D8
amarillo...pin D9
naranja....pin D10
*/


//incluye librería "DHT.h"
#include "DHT.h"

//riestra 1
//violea, amarillo y blanco = aproximadamente 1m/0,9m/0,8m = mas lejano, intermedio, mas cercano al arduino
#define DHT1PIN 2  // violeta....pin 2
#define DHT2PIN 3  // amarillo...pin 3
#define DHT3PIN 4  // blanco.....pin 4

//riestra 2
//naranja, verde y azul = aproximadamente 1m/0,9m/0,8m = mas lejano, intermedio, mas cercano al arduino
#define DHT4PIN 5  // naranja....pin 5
#define DHT5PIN 6  // verde......pin 6 
#define DHT6PIN 7  // azul.......pin 7

//riestra 3
//verde, amarillo, naranja = aproximadamente 1m/0,9m/0,8m = mas lejano, intermedio, mas cercano al arduino
#define DHT7PIN 8  // verde......pin 8
#define DHT8PIN 9  // amarillo...pin 9
#define DHT9PIN 10 // naranaja...pin 10

//DHTTYPE = DHT11
#define DHTTYPE DHT11

//tipo de objeto
DHT dht1(DHT1PIN, DHTTYPE);
DHT dht2(DHT2PIN, DHTTYPE);
DHT dht3(DHT3PIN, DHTTYPE);
DHT dht4(DHT4PIN, DHTTYPE);
DHT dht5(DHT5PIN, DHTTYPE);
DHT dht6(DHT6PIN, DHTTYPE);
DHT dht7(DHT7PIN, DHTTYPE);
DHT dht8(DHT8PIN, DHTTYPE);
DHT dht9(DHT9PIN, DHTTYPE);

//variable tiempoUltimaLectura para usar con millis()
long tiempoUltimaLectura = 0; // almacena el tiempo de la última lectura


void setup()
{
  Serial.begin(9600);
  Serial.println("Iniciando...");
  delay(500);
  Serial.println("By Giancarlo Vatalaro");
  delay(1000);
  Serial.println("time,temp-dht1,temp-dht2,temp-dht3,temp-dht4,temp-dht5,temp-dht6,temp-dht7,temp-dht8,temp-dht9,humd-dht1,humd-dht2,humd-dht3,humd-dht4,humd-dht5,humd-dht6,humd-dht7,humd-dht8,humd-dht9");
  dht1.begin();
  dht2.begin();
  dht3.begin();
  dht4.begin();
  dht5.begin();
  dht6.begin();
  dht7.begin();
  dht8.begin();
  dht9.begin();
}

void loop()
{
  if(millis() - tiempoUltimaLectura > 2000)
  {
    //crea variable t1,t2,t3... para almacenar valor de lectura de temperatura
    float t1 = dht1.readTemperature();
    float t2 = dht2.readTemperature();
    float t3 = dht3.readTemperature();
    float t4 = dht4.readTemperature();
    float t5 = dht5.readTemperature();
    float t6 = dht6.readTemperature();
    float t7 = dht7.readTemperature();
    float t8 = dht8.readTemperature();
    float t9 = dht9.readTemperature();
    
    //crea variable h1,h2,h3... para almacenar valor de lectura de humedad
    float h1 = dht1.readHumidity();
    float h2 = dht2.readHumidity();
    float h3 = dht3.readHumidity();
    float h4 = dht4.readHumidity();
    float h5 = dht5.readHumidity();
    float h6 = dht6.readHumidity();
    float h7 = dht7.readHumidity();
    float h8 = dht8.readHumidity();
    float h9 = dht9.readHumidity();

    //imprime el tiempo desde el inicio del programa cumpliendo función de "eje x"
    Serial.print(millis());
    
    //imprime los valores de temperatura 1 al 9
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
    Serial.print(t7);
    Serial.print(",");
    Serial.print(t8);
    Serial.print(",");
    Serial.print(t9);
    Serial.print(",");

    //imprime los valores de humedad 1 al 9
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
    Serial.print(",");
    Serial.print(h7);
    Serial.print(",");
    Serial.print(h8);
    Serial.print(",");
    Serial.print(h9);
    Serial.println();
    tiempoUltimaLectura = millis(); //actualiza el tiempo de la última lectura
  }
}
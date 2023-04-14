#include "DHT.h"

int a = 1000; //tiempo "delay()" entre lecturas

#define DHT1PIN 2
#define DHT2PIN 3
#define DHT3PIN 4
#define DHT4PIN 5
#define DHT5PIN 6
#define DHT6PIN 7
#define DHT7PIN 8
#define DHT8PIN 9
#define DHT9PON 10
#define DHT10PIN 11

#define DHTTYPE DHT11

DHT dht1(DHT1PIN, DHTTYPE);
DHT dht2(DHT2PIN, DHTTYPE);
DHT dht3(DHT3PIN, DHTTYPE);
DHT dht4(DHT4PIN, DHTTYPE);
DHT dht5(DHT5PIN, DHTTYPE);
DHT dht6(DHT6PIN, DHTTYPE);
DHT dht7(DHT7PIN, DHTTYPE);
DHT dht8(DHT8PIN, DHTTYPE);
DHT dht9(DHT9PON, DHTTYPE);
DHT dht10(DHT10PIN, DHTTYPE);


void setup()
{
  Serial.begin(9600);
  Serial.println("By Giancarlo Vatalaro");
  delay(1500);
  Serial.println("time,temp-dht1,temp-dht2,temp-dht3,temp-dht4,temp-dht5,temp-dht6,temp-dht7,temp-dht8,temp-dht9,temp-dht10,humd-dht1,humd-dht2,humd-dht3,humd-dht4,humd-dht5,humd-dht6,humd-dht7,humd-dht8,humd-dht9,humd-dht10");
  dht1.begin();
  dht2.begin();
  dht3.begin();
  dht4.begin();
  dht5.begin();
  dht6.begin();
  dht7.begin();
  dht8.begin();
  dht9.begin();
  dht10.begin();
}


void loop()
{
  delay(a);
  float t1 = dht1.readTemperature();
  float t2 = dht2.readTemperature();
  float t3 = dht3.readTemperature();
  float t4 = dht4.readTemperature();
  float t5 = dht5.readTemperature();
  float t6 = dht6.readTemperature();
  float t7 = dht7.readTemperature();
  float t8 = dht8.readTemperature();
  float t9 = dht9.readTemperature();
  float t10 = dht10.readTemperature();

  float h1 = dht1.readHumidity();
  float h2 = dht2.readHumidity();
  float h3 = dht3.readHumidity();
  float h4 = dht4.readHumidity();
  float h5 = dht5.readHumidity();
  float h6 = dht6.readHumidity();
  float h7 = dht7.readHumidity();
  float h8 = dht8.readHumidity();
  float h9 = dht9.readHumidity();
  float h10 = dht10.readHumidity();

  Serial.print(millis()/10);
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
  Serial.print(t10);
  Serial.print(",");

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
  Serial.print(",");
  Serial.print(h10);
  Serial.println();
}
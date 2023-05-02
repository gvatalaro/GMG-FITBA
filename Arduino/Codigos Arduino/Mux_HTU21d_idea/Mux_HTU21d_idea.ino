/*
mulplexor = mux
combinación de pines para seleccionar las salidas. Desde 0000 a 1111 del mux. En este caso funcionando como demux
todos los HTU21 deberían estar conectados al mismo clock y cada pinData de cada sensor debería ir individualmente a cada c0,c1,c2...c15 del mux
*/


#include <Wire.h> //.............incluye librería
#include <SparkFunHTU21D.h> //...incluye librería
HTU21D myHumidity; //............crea objeto HTU21D


int S0 = 6; //...define pines de salida para controlar el mux
int S1 = 5; //...define pines de salida para controlar el mux
int S2 = 4; //...define pines de salida para controlar el mux
int S3 = 3; //...define pines de salida para controlar el mux

int SIG = 2; // canal de comunicación. Evaluar si es necesario ya que es I²c. Creo que no, *IMPORTANTE PROBAR*. La entrada de datos debería ser el pin data del I²c

int a; // variable del if de lectura de temperaturas
int b; // variable del if de lectura de humedades


int seleccionCanal(byte canal) // función para seleccionar canal del mux usando bitRead
{
  digitalWrite(S0, bitRead(canal, 0));
  digitalWrite(S1, bitRead(canal, 1));
  digitalWrite(S2, bitRead(canal, 2));
  digitalWrite(S3, bitRead(canal, 3));
}


int lectura()
{
  Serial.print(",");
  seleccionCanal(a);
  for(a = 0; a < 15; a++) // recorre los 16 canales del mux buscando los 16 valores de temperatura
  {
    float temp = myHumidity.readTemperature(); // lee e imprime todos los valores de temperatura de los 16 sensores desde el c0...c15

    Serial.print(temp);
    Serial.print(",");
  }
  for(b = 0; b < 15; b++) // recorre los 16 canales del mux buscando los 16 valores de humedad
  {
    float humd = myHumidity.readHumidity(); // lee e imprime todos los valores de humedad de los 16 sensores desde el c0...c15
    
    Serial.print(humd);
    Serial.print(",");
  }

  if(a == 15 && b == 15) // reinicia las variables a y b luego de los if temperatura y humedad
  {
    a = 0;
    b = 0;
  }
}


void setup()
{
  Serial.begin(9600);
  myHumidity.begin();
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);

  pinMode(SIG, INPUT); //evaluar si es necesario ya que es I²c. Creo que no, *IMPORTANTE PROBAR*
  
  Serial.println("");
  Serial.print("By Giancarlo Vatalaro :)");
  Serial.println("");
  delay(1000);
}


void loop()
{
  Serial.print(millis()/1000); //imprime valor en segundos de cada lectura
  lectura(); // llama a la funcion lectura
  Serial.println(""); // imprime un salto de linea
}
//codigo para usar un MUX MULTIPLEXOR/DEMULTIPLEXOR
int S0 = 7;//CONFIGURACION DE PINES
int S1 = 6;
int S2 = 5;
int S3 = 4;
int SIG = A0;//ESTA VEZ SERA USADO COMO ENTRADA

int seleccion_canal(byte canal)//se usa int para retornar un valor, si se usa void no retorna
{
//   bitRead(x, n)
//    Parámetros
//    x: el número desde el que leer.
//    n: qué bit leer, comenzando en 0 para el bit menos significativo (más a la derecha).
  //bitRead escribe un numero binario de un Byte ejemplo bitRead(3)= bitRead(00000011)
  //si colocamos bitRead(3,2) 3 es el numero a leer y de ese se toma o leer el valor de la posicion 2 ejemplo 1
  digitalWrite(S0,bitRead(canal,0));
  digitalWrite(S1,bitRead(canal,1));
  digitalWrite(S2,bitRead(canal,2));
  digitalWrite(S3,bitRead(canal,3));
  
}

void setup()
{
  Serial.begin(9600);
  pinMode(S0,OUTPUT);//CONFIGURADOS COMO SALIDA PARA ACTIVAR EL CODIGO BINARIO
  pinMode(S1,OUTPUT);
  pinMode(S2,OUTPUT);
  pinMode(S3,OUTPUT);
  //pinMode(SIG,OUTPUT);

}

void loop() 
{
  //SE HACEN LAS COMBINACIONES BINARIAS DE CERO A 15 PARA ACTIVAR UNA CANAL
  //SE ACTIVA CANAL 
 seleccion_canal(0);
int bits = analogRead(A0);
Serial.println(bits);
delay(50);


}
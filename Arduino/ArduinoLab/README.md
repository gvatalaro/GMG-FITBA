# silo_gmg
Codigos del silo de laboratorio GMG

## Proyecto: (visualizar silo en Dash en tiempo real)

- Se modifico el programa de arduino para hacer pruebas con un sensor DHT22 (humedad y temperatura).
- Se creo 'adquisidor.py' para hacer la adquisicion leyendo directamente el puerto serie. 
- Se modifico Laboratorio_dash.py para que tome los datos en ASCII. 
- Se agregaron decimales a los sensores de temp y humedad.
- El archivo de adquisicion se cambio de espacios a csv para que funcione con Dash.

## Funcionamiento 
1.- Conectar el puerto usb del arduino y acomodar device si hace falta (harcodeado).
  $ ./adquisidor.py 

nota: se generan dos archivos "prueba.csv" (necesario para Dash) y "prueba.dat" (para igualar la salida de arduino).


2.- Correr el Laboratorio.
  $ python3 Laboratorio_DASH.py

3.- Abrir un browser en http://127.0.0.1:8050


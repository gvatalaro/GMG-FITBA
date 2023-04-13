#!/usr/bin/env python3
import serial
ser = serial.Serial('/dev/ttyACM0')  # open serial port
ser.baudrate = 9600
# print(ser.name)         # check which port was really used

while True:
     ser.flushInput()
     cc=ser.readline()
     decoded_bytes = cc[0:-2].decode("utf-8")
     decoded_bytes = decoded_bytes.rstrip(" ")
     print(decoded_bytes)
     fo = open("prueba.dat", "a")
     fo.write(decoded_bytes)
     fo.write("\n")
     fo.close()

     decoded_bytes = decoded_bytes.replace("  ",",")
     fo = open("prueba.csv", "a")
     fo.write(decoded_bytes)
     fo.write("\n")
     fo.close()

#include "DHT.h"

int a = 1000; //tiempo entre lecturas "delay()"

#define DHT1PIN 2
#define DHT2PIN 3
#define DHT3PIN 4
#define DHT4PIN 5
#define DHT5PIN 6
#define DHT6PIN 7
#define DHT7PIN 8
#define DHT8PIN 9
#define DHT9PIN 10
#define DHT10PIN 11
#define DHT11PIN 12
#define DHT12PIN 13
#define DHT13PIN 14
#define DHT14PIN 15
#define DHT15PIN 16
#define DHT16PIN 17
#define DHT17PIN 18
#define DHT18PIN 19
#define DHT19PIN 20
#define DHT20PIN 21
#define DHT21PIN 22
#define DHT22PIN 23
#define DHT23PIN 24
#define DHT24PIN 25
#define DHT25PIN 26
#define DHT26PIN 27
#define DHT27PIN 28
#define DHT28PIN 29
#define DHT29PIN 30
#define DHT30PIN 31
#define DHT31PIN 32
#define DHT32PIN 33
#define DHT33PIN 34
#define DHT34PIN 35
#define DHT35PIN 36
#define DHT36PIN 37
#define DHT37PIN 38
#define DHT38PIN 39
#define DHT39PIN 40
#define DHT40PIN 41
#define DHT41PIN 42
#define DHT42PIN 43
#define DHT43PIN 44
#define DHT44PIN 45
#define DHT45PIN 46
#define DHT46PIN 47
#define DHT47PIN 48
#define DHT48PIN 49
#define DHT49PIN 50
#define DHT50PIN 51
#define DHT51PIN 52
#define DHT52PIN 53
#define DHT53PIN 54


#define DHTTYPE DHT11


DHT dht1(DHT1PIN, DHTTYPE);
DHT dht2(DHT2PIN, DHTTYPE);
DHT dht3(DHT3PIN, DHTTYPE);
DHT dht4(DHT4PIN, DHTTYPE);
DHT dht5(DHT5PIN, DHTTYPE);
DHT dht6(DHT6PIN, DHTTYPE);
DHT dht7(DHT7PIN, DHTTYPE);
DHT dht8(DHT8PIN, DHTTYPE);
DHT dht9(DHT9PIN, DHTTYPE);
DHT dht10(DHT10PIN, DHTTYPE);
DHT dht11(DHT11PIN, DHTTYPE);
DHT dht12(DHT12PIN, DHTTYPE);
DHT dht13(DHT13PIN, DHTTYPE);
DHT dht14(DHT14PIN, DHTTYPE);
DHT dht15(DHT15PIN, DHTTYPE);
DHT dht16(DHT16PIN, DHTTYPE);
DHT dht17(DHT17PIN, DHTTYPE);
DHT dht18(DHT18PIN, DHTTYPE);
DHT dht19(DHT19PIN, DHTTYPE);
DHT dht20(DHT20PIN, DHTTYPE);
DHT dht21(DHT21PIN, DHTTYPE);
DHT dht22(DHT22PIN, DHTTYPE);
DHT dht23(DHT23PIN, DHTTYPE);
DHT dht24(DHT24PIN, DHTTYPE);
DHT dht25(DHT25PIN, DHTTYPE);
DHT dht26(DHT26PIN, DHTTYPE);
DHT dht27(DHT27PIN, DHTTYPE);
DHT dht28(DHT28PIN, DHTTYPE);
DHT dht29(DHT29PIN, DHTTYPE);
DHT dht30(DHT30PIN, DHTTYPE);
DHT dht31(DHT31PIN, DHTTYPE);
DHT dht32(DHT32PIN, DHTTYPE);
DHT dht33(DHT33PIN, DHTTYPE);
DHT dht34(DHT34PIN, DHTTYPE);
DHT dht35(DHT35PIN, DHTTYPE);
DHT dht36(DHT36PIN, DHTTYPE);
DHT dht37(DHT37PIN, DHTTYPE);
DHT dht38(DHT38PIN, DHTTYPE);
DHT dht39(DHT39PIN, DHTTYPE);
DHT dht40(DHT40PIN, DHTTYPE);
DHT dht41(DHT41PIN, DHTTYPE);
DHT dht42(DHT42PIN, DHTTYPE);
DHT dht43(DHT43PIN, DHTTYPE);
DHT dht44(DHT44PIN, DHTTYPE);
DHT dht45(DHT45PIN, DHTTYPE);
DHT dht46(DHT46PIN, DHTTYPE);
DHT dht47(DHT47PIN, DHTTYPE);
DHT dht48(DHT48PIN, DHTTYPE);
DHT dht49(DHT49PIN, DHTTYPE);
DHT dht50(DHT50PIN, DHTTYPE);
DHT dht51(DHT51PIN, DHTTYPE);
DHT dht52(DHT52PIN, DHTTYPE);
DHT dht53(DHT53PIN, DHTTYPE);


void setup()
{
  Serial.begin(9600);
  Serial.println("By Giancarlo Vatalaro");
  delay(1500);
  Serial.println("time,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15,t16,t17,t18,t19,t20,t21,t22,t23,t24,t25,t26,t27,t28,t29,t30,t31,t32,t33,t34,t35,t36,t37,t38,t39,t40,t41,t42,t43,t44,t45,t46,t47,t48,t49,50,t51,52,t53,h1,h2,h3,h4,h5,h6,h7,h8,h9,h10,h11,h12,h13,h14,h15,h16,h17,h18,h19,h20,h21,h22,h23,h24,h25,h26,h27,h28,h29,h30,h31,h32,h33,h34,h35,h36,h37,h38,h39,h40,h41,h42,h43,h44,h45,h46,h47,h48,h49,50,h51,h52,h53");
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
  dht11.begin();
  dht12.begin();
  dht13.begin();
  dht14.begin();
  dht15.begin();
  dht16.begin();
  dht17.begin();
  dht18.begin();
  dht19.begin();
  dht20.begin();
  dht21.begin();
  dht22.begin();
  dht23.begin();
  dht24.begin();
  dht25.begin();
  dht26.begin();
  dht27.begin();
  dht28.begin();
  dht29.begin();
  dht30.begin();
  dht31.begin();
  dht32.begin();
  dht33.begin();
  dht34.begin();
  dht35.begin();
  dht36.begin();
  dht37.begin();
  dht38.begin();
  dht39.begin();
  dht40.begin();
  dht41.begin();
  dht42.begin();
  dht43.begin();
  dht44.begin();
  dht45.begin();
  dht46.begin();
  dht47.begin();
  dht48.begin();
  dht49.begin();
  dht50.begin();
  dht51.begin();
  dht52.begin();
  dht53.begin();
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
  float t11 = dht11.readTemperature();
  float t12 = dht12.readTemperature();
  float t13 = dht13.readTemperature();
  float t14 = dht14.readTemperature();
  float t15 = dht15.readTemperature();
  float t16 = dht16.readTemperature();
  float t17 = dht17.readTemperature();
  float t18 = dht18.readTemperature();
  float t19 = dht19.readTemperature();
  float t20 = dht20.readTemperature();
  float t21 = dht21.readTemperature();
  float t22 = dht22.readTemperature();
  float t23 = dht23.readTemperature();
  float t24 = dht24.readTemperature();
  float t25 = dht25.readTemperature();
  float t26 = dht26.readTemperature();
  float t27 = dht27.readTemperature();
  float t28 = dht28.readTemperature();
  float t29 = dht29.readTemperature();
  float t30 = dht30.readTemperature();
  float t31 = dht31.readTemperature();
  float t32 = dht32.readTemperature();
  float t33 = dht33.readTemperature();
  float t34 = dht34.readTemperature();
  float t35 = dht35.readTemperature();
  float t36 = dht36.readTemperature();
  float t37 = dht37.readTemperature();
  float t38 = dht38.readTemperature();
  float t39 = dht39.readTemperature();
  float t40 = dht40.readTemperature();
  float t41 = dht41.readTemperature();
  float t42 = dht42.readTemperature();
  float t43 = dht43.readTemperature();
  float t44 = dht44.readTemperature();
  float t45 = dht45.readTemperature();
  float t46 = dht46.readTemperature();
  float t47 = dht47.readTemperature();
  float t48 = dht48.readTemperature();
  float t49 = dht49.readTemperature();
  float t50 = dht50.readTemperature();
  float t51 = dht51.readTemperature();
  float t52 = dht52.readTemperature();
  float t53 = dht53.readTemperature();
  

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
  float h11 = dht11.readHumidity();
  float h12 = dht12.readHumidity();
  float h13 = dht13.readHumidity();
  float h14 = dht14.readHumidity();
  float h15 = dht15.readHumidity();
  float h16 = dht16.readHumidity();
  float h17 = dht17.readHumidity();
  float h18 = dht18.readHumidity();
  float h19 = dht19.readHumidity();
  float h20 = dht20.readHumidity();
  float h21 = dht21.readHumidity();
  float h22 = dht22.readHumidity();
  float h23 = dht23.readHumidity();
  float h24 = dht24.readHumidity();
  float h25 = dht25.readHumidity();
  float h26 = dht26.readHumidity();
  float h27 = dht27.readHumidity();
  float h28 = dht28.readHumidity();
  float h29 = dht29.readHumidity();
  float h30 = dht30.readHumidity();
  float h31 = dht31.readHumidity();
  float h32 = dht32.readHumidity();
  float h33 = dht33.readHumidity();
  float h34 = dht34.readHumidity();
  float h35 = dht35.readHumidity();
  float h36 = dht36.readHumidity();
  float h37 = dht37.readHumidity();
  float h38 = dht38.readHumidity();
  float h39 = dht39.readHumidity();
  float h40 = dht40.readHumidity();
  float h41 = dht41.readHumidity();
  float h42 = dht42.readHumidity();
  float h43 = dht43.readHumidity();
  float h44 = dht44.readHumidity();
  float h45 = dht45.readHumidity();
  float h46 = dht46.readHumidity();
  float h47 = dht47.readHumidity();
  float h48 = dht48.readHumidity();
  float h49 = dht49.readHumidity();
  float h50 = dht50.readHumidity();
  float h51 = dht51.readHumidity();
  float h52 = dht52.readHumidity();
  float h53 = dht53.readHumidity();



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
  Serial.print(t11);
  Serial.print(",");
  Serial.print(t12);
  Serial.print(",");
  Serial.print(t13);
  Serial.print(",");
  Serial.print(t14);
  Serial.print(",");
  Serial.print(t15);
  Serial.print(",");
  Serial.print(t16);
  Serial.print(",");
  Serial.print(t17);
  Serial.print(",");
  Serial.print(t18);
  Serial.print(",");
  Serial.print(t19);
  Serial.print(",");
  Serial.print(t20);
  Serial.print(",");
  Serial.print(t21);
  Serial.print(",");
  Serial.print(t22);
  Serial.print(",");
  Serial.print(t23);
  Serial.print(",");
  Serial.print(t24);
  Serial.print(",");
  Serial.print(t25);
  Serial.print(",");
  Serial.print(t26);
  Serial.print(",");
  Serial.print(t27);
  Serial.print(",");
  Serial.print(t28);
  Serial.print(",");
  Serial.print(t29);
  Serial.print(",");
  Serial.print(t30);
  Serial.print(",");
  Serial.print(t31);
  Serial.print(",");
  Serial.print(t32);
  Serial.print(",");
  Serial.print(t33);
  Serial.print(",");
  Serial.print(t34);
  Serial.print(",");
  Serial.print(t35);
  Serial.print(",");
  Serial.print(t36);
  Serial.print(",");
  Serial.print(t37);
  Serial.print(",");
  Serial.print(t38);
  Serial.print(",");
  Serial.print(t39);
  Serial.print(",");
  Serial.print(t40);
  Serial.print(",");
  Serial.print(t41);
  Serial.print(",");
  Serial.print(t42);
  Serial.print(",");
  Serial.print(t43);
  Serial.print(",");
  Serial.print(t44);
  Serial.print(",");
  Serial.print(t45);
  Serial.print(",");
  Serial.print(t46);
  Serial.print(",");
  Serial.print(t47);
  Serial.print(",");
  Serial.print(t48);
  Serial.print(",");
  Serial.print(t49);
  Serial.print(",");
  Serial.print(t50);
  Serial.print(",");
  Serial.print(t51);
  Serial.print(",");
  Serial.print(t52);
  Serial.print(",");
  Serial.print(t53);
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
  Serial.print(",");
  Serial.print(h11);
  Serial.print(",");
  Serial.print(h12);
  Serial.print(",");
  Serial.print(h13);
  Serial.print(",");
  Serial.print(h14);
  Serial.print(",");
  Serial.print(h15);
  Serial.print(",");
  Serial.print(h16);
  Serial.print(",");
  Serial.print(h17);
  Serial.print(",");
  Serial.print(h18);
  Serial.print(",");
  Serial.print(h19);
  Serial.print(",");
  Serial.print(h20);
  Serial.print(",");
  Serial.print(h21);
  Serial.print(",");
  Serial.print(h22);
  Serial.print(",");
  Serial.print(h23);
  Serial.print(",");
  Serial.print(h24);
  Serial.print(",");
  Serial.print(h25);
  Serial.print(",");
  Serial.print(h26);
  Serial.print(",");
  Serial.print(h27);
  Serial.print(",");
  Serial.print(h28);
  Serial.print(",");
  Serial.print(h29);
  Serial.print(",");
  Serial.print(h30);
  Serial.print(",");
  Serial.print(h31);
  Serial.print(",");
  Serial.print(h32);
  Serial.print(",");
  Serial.print(h33);
  Serial.print(",");
  Serial.print(h34);
  Serial.print(",");
  Serial.print(h35);
  Serial.print(",");
  Serial.print(h36);
  Serial.print(",");
  Serial.print(h37);
  Serial.print(",");
  Serial.print(h38);
  Serial.print(",");
  Serial.print(h39);
  Serial.print(",");
  Serial.print(h40);
  Serial.print(",");
  Serial.print(h41);
  Serial.print(",");
  Serial.print(h42);
  Serial.print(",");
  Serial.print(h43);
  Serial.print(",");
  Serial.print(h44);
  Serial.print(",");
  Serial.print(h45);
  Serial.print(",");
  Serial.print(h46);
  Serial.print(",");
  Serial.print(h47);
  Serial.print(",");
  Serial.print(h48);
  Serial.print(",");
  Serial.print(h49);
  Serial.print(",");
  Serial.print(h50);
  Serial.print(",");
  Serial.print(h51);
  Serial.print(",");
  Serial.print(h52);
  Serial.print(",");
  Serial.print(h53);
  Serial.println();
}
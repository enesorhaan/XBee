#include <SoftwareSerial.h>
#define xBeeRxPin 10
#define xBeeTxPin 9
int deger3;
int deger4;
SoftwareSerial xBeeSerial(xBeeRxPin, xBeeTxPin);

void setup() { 
  Serial.begin(38400);
  
}void loop() {
  xBeeSerial.begin(38400); 
  deger3 = analogRead(A0);
  deger4 = analogRead(A2);
  
  String deger5 =  (String)deger3 + ";" + (String)deger4 ;
  Serial.println("string ifade: " + deger5);

  xBeeSerial.println(deger5);
  
  delay(200);
}

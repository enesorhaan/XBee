#include <SoftwareSerial.h>
#define xBeeRxPin 10
#define xBeeTxPin 9
SoftwareSerial xBeeSerial(xBeeRxPin, xBeeTxPin);
String d1,d2,d3;

void setup() {
  xBeeSerial.begin(38400);
  Serial.begin(38400);
}
void loop() { 
  if(xBeeSerial.available()>0){
    d1=xBeeSerial.readStringUntil('\n');
    //Serial.print(d1);
    d2 = d1.substring(0,d1.indexOf(59));
    d3 = d1.substring(d1.indexOf(59)+1);
    Serial.println("x ekseni: " + d2);
    Serial.println("y ekseni: " + d3);
  }  
}

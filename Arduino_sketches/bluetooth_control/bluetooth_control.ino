#include<SoftwareSerial.h>
SoftwareSerial BT(12,13);

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
BT.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
while(BT>available())
{
  char c=BT.read();
  Serial.println(c);
  if(c=='w')(Serial.println("forward");)
  if(c=='b')(Serial.println("backward");)
  if(c=='l')(Serial.println("left");)
  if(c=='r')(Serial.println("right");)
  if(c=='s')(Serial.println("stop");)
  }
}


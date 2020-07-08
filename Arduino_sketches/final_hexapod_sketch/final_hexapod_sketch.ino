#include <Servo.h>
#include <SoftwareSerial.h>
SoftwareSerial BT(12, 13); // TX,RX respectively...
Servo lift;
Servo front;
Servo rear;
char currstatus; //takes up the input character send trogh bluetooth app as command

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  BT.begin(9600);
  front.attach(9);
front.write(30);
delay(1000);
lift.attach(10);
lift.write(50);
delay(1000);
rear.attach(11);
rear.write(180);
delay(1000);
currstatus = 's'; // the initial stage we are keeping is of stop postion

}

void forward() {
  // to move forward
 lift.write(80);
delay(500);
front.write(0);
rear.write(160);
delay(500);
lift.write(50);
delay(500);
lift.write(20);
delay(500);
front.write(30);
rear.write(180);
delay(500);
lift.write(50);
delay(500);
}


void backward() {
  //to move backward
lift.write(80);
  delay(500);
  front.write(60);
  rear.write(180);
  delay(500);
  lift.write(50);
  delay(500);
  lift.write(20);
  delay(500);
  front.write(0);
  rear.write(180);
  delay(500);
  lift.write(50);
  delay(500);
  }
void Stop()
{
  // to bring servos to initial angle ie. 90
  lift.write(50);
  delay(100);
  front.write(30);
  delay(100);
  rear.write(180);
  delay(100);
}
void loop() {
  // put your main code here, to run repeatedly:
  while (BT.available())
  {
    currstatus = BT.read();
  }
  //now we are gonna consider only forward,backward,stop commands as input since our hexapod cant turn right/left.
  if (currstatus == 'w')
  {
    forward();
  }
  if (currstatus == 'b')
  {
    backward();
  }
  if (currstatus == 's')
  {
    Stop();
  }
}

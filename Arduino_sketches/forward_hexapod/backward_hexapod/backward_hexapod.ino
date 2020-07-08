#include<Servo.h>
#include<SoftwareSerial.h>
Servo lift;
Servo front;
Servo rear;

void setup() {
  // put your setup code here, to run once:


front.attach(9);
front.write(30);
delay(1000);
lift.attach(10);
lift.write(50);
delay(1000);
rear.attach(11);
rear.write(180);
delay(1000);

}

void loop() {
  // put your main code here, to run repeatedly:

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

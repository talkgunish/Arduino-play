#include <Servo.h> // includes the servo header file

Servo lift;
Servo rear;
Servo front;

void setup() //put your initial code here to run once
{
lift.attach(9); //attaches the servo on pin 9 to the servo object
rear.attach(10); //attaches the servo on pin 10 to the servo object
front.attach(11); //attaches the servo on pin 11 to the servo object

lift.write(90); // moving the initial servo posn to 90 degree
rear.write(90);
front.write(90);

delay(1000);
}
void loop() //put ypur code here to run continuosly{}

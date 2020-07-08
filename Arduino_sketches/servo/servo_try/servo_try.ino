#include<Servo.h>
Servo myServo;

int posn=0;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(posn=0;posn<=180;posn+=1){
    myServo.write(posn);
    delay(10);
  }

for(posn=180;posn>=0;posn-=1){
    myServo.write(posn);
    delay(10);
  } 

}


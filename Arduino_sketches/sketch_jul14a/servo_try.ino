#include<Servo.h>
Servo myServo;

int posn=0;

void setup() {
  myServo.attach(10);
}

void loop(){
  for(posn=0;posn<=180;posn+=1){
    myServo.write(posn);
    delay(10);
  }

for(posn=180;posn>=0;posn-=1){
    myServo.write(posn);
    delay(10);
  } 
}


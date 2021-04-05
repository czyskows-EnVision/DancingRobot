


#include <Servo.h>
#define SERVOS 4

Servo myservo[4]; // create servo object to control a servo

int pos = 30;    // variable to store the servo position

void setup() {
  myservo[0].attach(3);  // attaches the servo on pin 9 to the servo object
  myservo[1].attach(4);
  myservo[2].attach(5);
  myservo[3].attach(6);
}

void loop() {
for (pos = 30; pos <= 80; pos += 2) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo[1].write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 80; pos >= 130; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo[1].write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 130; pos <= 80; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo[2].write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 80; pos >= 30; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo[2].write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }

for(int j = 100; j > 60; j--){
  for(int i = 0 ; i < 3; i++){
  myservo[i].write(j);
  }
 }
 
 for(int k = 60; k < 100; k++){
  for(int i = 0 ; i < 3; i++){
  myservo[i].write(k);
 }
 }

for(int i = 60; i < 100; i++){
myservo[3].write(i);
delay(10);
}
for(int i = 100; i > 60; i--){
myservo[3].write(i);
delay(10);
}
 
 myservo[3].write(90);
 myservo[2].write(90);
 myservo[1].write(90);
 myservo[0].write(90);
 
}


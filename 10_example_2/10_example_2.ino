#include <Servo.h>
#define PIN_SERVO 10

Servo myservo;

void setup() {
  myservo.attach(PIN_SERVO); 
  myservo.write(90);
  delay(1000);
}

void loop() {

  myservo.write(60);
  delay(1000);
  myservo.write(40);
  delay(1000);
  myservo.write(20);
  delay(1000);
    // add code here.
}

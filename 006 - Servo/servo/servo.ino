// Lesson 9: Servo

#include <Servo.h>
Servo myServo;

// Pin for the servo signal
const int servoPin = 9;

void setup() {
  myServo.attach(servoPin);
  myServo.write(90); // move servo to center position -> 90º
}

void loop() {
  myServo.write(90);// move servos to center position -> 90º
  delay(500);
  myServo.write(30);// move servos to center position -> 30º
  delay(500);
  myServo.write(90);// move servos to center position -> 90º
  delay(500);
  myServo.write(150);// move servos to center position -> 120º
  delay(500);
}
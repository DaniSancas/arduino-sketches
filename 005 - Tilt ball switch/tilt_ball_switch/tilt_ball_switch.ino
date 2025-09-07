// Lesson 8: Ball switch

// Led to attach to (included one in this case)
const int ledPin = 13;
// Pin to send current to the sensor
const int titlBallPin = 2;

void setup() {
  // Initialize the ledPin as output
  pinMode(ledPin, OUTPUT);
  // Sensor as input
  pinMode(titlBallPin, INPUT);
  // Start by sending signal to the sensor
  digitalWrite(titlBallPin, HIGH);
}

void loop() {
  int digitalVal = digitalRead(titlBallPin);

  if (digitalVal == HIGH) {
    // If the sensor is not facing upwards, turn the led off
    digitalWrite(ledPin, LOW);
  } else {
    // The sensor is facing upwards, switch the led on
    digitalWrite(ledPin, HIGH);
  }
}

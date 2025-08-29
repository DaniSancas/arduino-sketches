// Lesson 5: Digital inputs

// Pin for the LED
#define ledPin 5
// Pin for switch on button
#define buttonAPin 9
// Pin for switch off button
#define buttonBPin 8

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonAPin, INPUT_PULLUP);
  pinMode(buttonBPin, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:

  // Button on pin 9 switches ON
  if(digitalRead(buttonAPin) == LOW)
  {
    digitalWrite(ledPin, HIGH);
  }
  // Button on pin 8 switches OFF
  if(digitalRead(buttonBPin) == LOW)
  {
    digitalWrite(ledPin, LOW);
  }
}

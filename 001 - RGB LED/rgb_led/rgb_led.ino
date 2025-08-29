// Lesson 4: RBG LED

// Define pins
#define BLUE 3
#define GREEN 5
#define RED 6

void setup() {
  // put your setup code here, to run once:
  
  // Prepare the 3 pins to send signal
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);

  // Start with a default color: pure red
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
}

int redValue;
int greenValue;
int blueValue;

void loop() {
  // put your main code here, to run repeatedly:

  #define delayTime 10 // miliseconds to wait for next color transition

  redValue = 255;
  greenValue = 0;
  blueValue = 0;

  for(int i = 0; i < 255; i++) {
    redValue -= 1;
    greenValue += 1;

    analogWrite(RED, redValue);
    analogWrite(GREEN, greenValue);
    delay(delayTime);
  }

  /*redValue = 0;
  greenValue = 255;
  blueValue = 0;*/

  for(int i = 0; i < 255; i++) {
    greenValue -= 1;
    blueValue += 1;

    analogWrite(GREEN, greenValue);
    analogWrite(BLUE, blueValue);
    delay(delayTime);
  }

  /*redValue = 0;
  greenValue = 0;
  blueValue = 255;*/

  for(int i = 0; i < 255; i++) {
    blueValue -= 1;
    redValue += 1;

    analogWrite(BLUE, blueValue);
    analogWrite(RED, redValue);
    delay(delayTime);
  }

}

// Lesson 6: Making sounds

// Active buzzer
#define BUZZER 12

void setup() {
  // put your setup code here, to run once:
  pinMode(BUZZER, OUTPUT);
  digitalWrite(BUZZER, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

  int sound_duration = 500;
  // Sound and silences progressively shorter
  for (int i = 0; i < 20; i++) {
    if (i < 5) {
      sound_duration = 500;
    } else if (i < 10) {
      sound_duration = 300;
    } else {
      sound_duration = 100;
    }

    // Activate the buzzer for the specified duration
    digitalWrite(BUZZER, HIGH);
    delay(sound_duration);
    // Deactivate the buzzer for the specified duration
    digitalWrite(BUZZER, LOW);
    delay(sound_duration);
  }

}

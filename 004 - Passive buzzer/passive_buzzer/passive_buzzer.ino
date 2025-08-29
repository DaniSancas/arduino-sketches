// Lesson 7: Passive buzzer

#include "pitches.h"

// Pin 8 as output for the buzzer
#define BUZZER 8
 
// notes in the melody:
int melody[] = {
  NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, 
  NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6
};
int duration = 500;  // 500 miliseconds
 
void setup() {
 
}
 
void loop() {  
  for (int thisNote = 0; thisNote < 8; thisNote++) {
    // output the voice, every note in the scale is 0.5 second
    tone(BUZZER, melody[thisNote], duration);

    // The note is played for 0.5s and then silence for another 0.5s
    delay(1000);
  }
   
  // restart after two seconds 
  delay(2000);
}

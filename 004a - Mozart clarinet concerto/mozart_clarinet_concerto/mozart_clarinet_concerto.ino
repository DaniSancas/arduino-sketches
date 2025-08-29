// Lesson 7 variant: Mozart clarinet concerto

#include "pitches.h"
#include "lengths.h"
#include "melody.h"

// Pin 8 as output for the buzzer
#define BUZZER 8

int tempo = 120;  // Quarter Note tempo
int size_of_melody = sizeof(melody) / sizeof(melody[0]);

int note_duration(float note) {
  int quarter = 60000 / tempo; // Duration of a quarter note in milliseconds
  return quarter * note; // Scale the duration based on the note type
}

void setup() {
 
}

void loop() {
  // Play the whole melody
  for (int thisNote = 0; thisNote < size_of_melody; thisNote++) {
    int pitch = melody[thisNote].pitch;
    int duration = note_duration(melody[thisNote].duration);

    if (pitch == 0) {
      noTone(BUZZER); // Silence
    } else {
      tone(BUZZER, pitch, duration);
    }

    // Wait the whole note duration before going for the next one
    delay(duration); 
  }

  // After the whole melody is played, wait for a moment
  delay(1000);
}

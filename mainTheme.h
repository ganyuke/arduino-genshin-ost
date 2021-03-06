/*****************************

Genshin Impact - The Wind and the Star Traveler
Yu-Peng Chen - "Genshin Impact Main Theme"
MIDI shamelessly stolen from:
https://flat.io/score/6060e656436b36585ea23a1d-genshin-impact-main-theme

*****************************/

const int mt_totalNotes = 95;

// I apologize ahead of time for this garbage formatting. This was the first MIDI file I manually converted.

const int mt_melody[] PROGMEM = {
  NOTE_C4,
  NOTE_F4, 
  NOTE_G4, 
  NOTE_A4, 
  NOTE_B4, 
  NOTE_C5,
  NOTE_A4,
  NOTE_G4,
  NOTE_F4,
  NOTE_G4,
  NOTE_D4,
  NOTE_F4,
  NOTE_G4,
  NOTE_D4,
  NOTE_F4,
  NOTE_F4,
  NOTE_G4,
  NOTE_E4,
  NOTE_D4,
  NOTE_C4,
  NOTE_D4,
  NOTE_A4,
  NOTE_C4,
  NOTE_F4,
  NOTE_G4,
  NOTE_A4,
  NOTE_B4,
  NOTE_C5,
  NOTE_B4,
  NOTE_A4,
  NOTE_G4,
  NOTE_A4,
  NOTE_G4,
  NOTE_G4,
  NOTE_F4,
  NOTE_G4,
  NOTE_D4,
  NOTE_D4,
  NOTE_E4,
  NOTE_F4,
  NOTE_F4,
  NOTE_G4,
  NOTE_E4,
  NOTE_D4,
  NOTE_C4,
  NOTE_D4,
  0,
  NOTE_A4,
  NOTE_B4,
  NOTE_C5,
  NOTE_C5,
  NOTE_D5,
  NOTE_B4,
  NOTE_A4,
  NOTE_G4,
  0,
  NOTE_A4,
  NOTE_E5,
  NOTE_B4,
  NOTE_C5,
  NOTE_B4,
  NOTE_A4,
  NOTE_G4,
  NOTE_A4,
  NOTE_G4,
  NOTE_F4,
  NOTE_G4,
  NOTE_D4,
  NOTE_C4,
  NOTE_D4,
  NOTE_A4,
  NOTE_A4,
  NOTE_B4,
  NOTE_C5,
  NOTE_C5,
  NOTE_D5,
  NOTE_B4,
  NOTE_A4,
  NOTE_G4,
  0,
  NOTE_A4,
  NOTE_G5,
  NOTE_B4,
  NOTE_C5,
  NOTE_B4,
  NOTE_A4,
  NOTE_G4,
  NOTE_A4,
  NOTE_G4,
  NOTE_G4,
  NOTE_F4,
  NOTE_G4,
  NOTE_D4,
  NOTE_C4,
  NOTE_D4,
};

const double mt_noteDurations[] PROGMEM = {
  2,
  1,
  4,
  4,
  1,
  8,
  8,
  4,
  4,
  1,
  4,
  4,
  2,
  1,
  1,
  4,
  4,
  2,
  1,
  4,
  2,
  .5,
  2,
  1,
  4,
  4,
  1,
  8,
  8,
  4,
  4,
  1,
  4,
  4,
  4,
  2,
  2,
  4,
  4,
  1,
  4,
  4,
  2,
  1,
  4,
  0.5,
  1,
  4,
  4,
  1,
  4,
  4,
  2,
  2,
  2,
  2,
  2,
  2,
  2,
  16,
  16,
  2,
  2,
  1,
  4,
  4,
  2,
  1,
  4,
  2,
  0.5,
  4,
  4,
  1,
  4,
  4,
  2,
  2,
  2,
  2,
  2,
  2,
  2,
  16,
  16,
  2,
  2,
  1,
  4,
  4,
  4,
  2,
  1,
  4,
  0.5
};

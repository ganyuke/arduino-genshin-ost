/*****************************

Genshin Impact - City of Winds and Idylls
Yu-Peng Chen - "Tender Strength"
MIDI shamelessly stolen from:
https://flat.io/score/5fe93f7f0c31c148ea93ab9e-tender-strength-genshin-impact

*****************************/

const int ts_totalNotes = 64;

const int ts_melody[] PROGMEM = {
  FS5, D5, B4, FS5, E5, 0,
  E5, CS5, NOTE_A4, E5, D5, 0,
  B4, CS5, D5, NOTE_A5, G5, G5, FS5, E5, D5, 0,
  FS5, D5, B4, FS5, E5, 0,
  E5, CS5, NOTE_A4, E5, D5, 0,
  B4, CS5, D5, NOTE_A5, G5, FS5, E5, D5, 0,
  FS6, D6, B5, FS6, E6, 0,
  E6, CS6, NOTE_A5, E6, D6, 0,
  B5, CS6, D6, NOTE_A6, G6, B5, CS6, CS6, D6
};

const double ts_noteDurations[] PROGMEM = {
  4, 4, 4, 2, 2, 4,
  4, 4, 4, 2, 2, 4,
  4, 4, 4, 2, 2, 2, 2, 2, 2, 4,
  4, 4, 4, 2, 2, 4,
  4, 4, 4, 2, 2, 4,
  4, 4, 4, 2, 2, 2, 2, 2, 4,
  4, 4, 4, 2, 2, 4, 
  4, 4, 4, 2, 2, 4,
  4, 4, 4, 4, 4, 4, 4, 0.8, 0.5
};

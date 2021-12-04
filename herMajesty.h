/*****************************

Genshin Impact - Realm of Tranquil Eternity
Yu-Peng Chen - "Her Legacy"
MIDI shamelessly stolen from:
https://flat.io/score/6120d78e89d0ba0012990d19-genshin-impact-kamisato-ayaka-the-homeward-heron-flute

*****************************/

const int hm_totalNotes = 155;

const int hm_melody[] PROGMEM = {
  B3, FS4, E4, FS4, NOTE_A4, B4, E4, FS4,
  B3, FS4, E4, FS4, NOTE_A4, B4, E4, FS4,
  B3, FS4, E4, FS4, NOTE_A4, B4, E4, FS4,
  B3, FS4, E4, FS4, NOTE_A4, B4, E4, FS4,
  B4, FS5, E5, FS5, NOTE_A5, 
  NOTE_A5, E5, FS5, NOTE_A5, E5,
  D5, B4, D5, E5, FS5, NOTE_A5, NOTE_A5, B5, FS5, 
  FS5, B5, B5, NOTE_A5, FS5, E5, D5, E5, FS5, E5, D5, B4, 
  FS5, E5, B4, NOTE_A4, B4, NOTE_A4, B4, FS4, B4, 
  FS4, B4, FS5, E5, FS5, NOTE_A5, FS5, E5, FS5, 
  NOTE_A5, E5, D5, B4, D5, E5, FS5, NOTE_A5, NOTE_A5, B5, FS5,
  FS5, B5, B5, NOTE_A5, FS5, E5, D5, E5, FS5, E5, D5, B4,
  FS5, E5, B4, NOTE_A4, B4, NOTE_A4, B4,
  CS5, D5, FS5, B5, 0, 
  B5, CS6, D6, CS6, B5, NOTE_A5, FS5, E5, FS5, B5,
  FS5, GS5, NOTE_A5, GS5, FS5, GS5, E5, FS5, 
  B4, CS5, D5, CS5, B4, NOTE_A4, E5, FS5, NOTE_A5, E5,
  D5, CS5, B4, NOTE_A4, B4, NOTE_A4, B4, FS4, CS5, D5, NOTE_A5
};

const double hm_noteDurations[] PROGMEM = {
  4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 2,
  4, 4, 4, 4, 2,
  4, 4, 4, 4, 2, 2, 2, 2, 0.8,
  4, 4, 1.33, 4, 4, 4, 4, 4, 2, 4, 4, 2,
  4, 4, 1, 16, 1.33, 4, 0.57, 4, 4,
  4, 4, 4, 2, 4, 4, 4, 4, 2,
  4, 2, 4, 4, 4, 4, 2, 2, 2, 4, 0.67,
  4, 4, 1.33, 4, 4, 4, 4, 4, 2, 4, 4, 2,
  4, 4, 1, 16, 1.33, 4, 0.5,
  16, 16, 16, 0.57, 4,
  4, 4, 2, 4, 4, 2, 4, 4, 2, 1,
  4, 4, 2, 4, 4, 1.33, 4, 0.67,
  4, 4, 2, 4, 4, 2, 2, 2, 2, 2,
  4, 4, 1, 16, 1.33, 4, 0.5, 16, 16, 16, 0.57
};

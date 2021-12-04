/*****************************

Genshin Impact - Vortex of Legends
Yu-Peng Chen - "Moonlike Smile"
MIDI shamelessly stolen from:
https://flat.io/score/606b789c84486210c360d72a-frost-parable-moonlike-smile

*****************************/

const int ms_totalNotes = 200;

const int ms_melody[] PROGMEM = {
  G5, AS4, G5, AS4, G5, AS4, GS5, AS4, G5, AS4, 
  G5, AS4, G5, AS4, DS5, F5, G5, AS4, G5, AS4, 
  G5, AS4, GS5, AS4, AS5, AS4, GS5, AS4, G5, AS4, 
  F5,
  DS5, AS4, DS5, AS4, DS5, AS4, F5, AS4, DS5, AS4, 
  DS5, AS4, DS5, AS4, 
  AS5, 
  DS5, AS4, DS5, F5, G5, F5, DS5, AS4, DS5, AS4, 
  DS5, F5, G5,
  F5, G5, F5,
  DS5, F5, G5, AS4, G5, AS4, G5, AS4, GS5, AS4, 
  G5, AS4, G5, AS4, G5, AS4, DS5, F5, G5, AS4, 
  G5, AS4, G5, AS4, GS5, AS4, AS5, AS4, DS6, AS4, 
  AS5, 
  GS5, AS5, GS5, 
  G5, F5, DS5, AS4, DS5, AS4, DS5, AS4, AS5, AS4, 
  DS6, DS5, AS5, GS5, G5, F5, DS5, AS4, DS5, AS4,
  DS5, F5, G5, F5, DS5, AS4, DS5, AS4, DS5, AS5, 
  GS5, G5, 
  F5, 
  AS5, CS5, AS5, CS5, AS5, CS5, 
  B5, 
  AS5, DS5, AS5, DS5, AS5, D5, FS5, GS5, AS5, DS5, 
  AS5, DS5, AS5, DS5, 
  B5, 
  CS6, FS5, FS6, FS5, CS6, 
  B5, CS6, B5, 
  AS5, GS5, FS5, CS5, FS5, CS5, FS5, CS5, 
  CS6, FS6, 
  CS6, B5, AS5, 
  GS5, AS5, GS5, 
  FS5, CS5, 
  FS5, CS5, FS5, GS5, AS5, GS5, 
  FS5, CS5,  FS5, CS5, FS5, 
  CS6, B5, AS5, GS5, FS5, FS5,
  CS4, AS4, CS4, AS4, C4, FS3
};

const double ms_noteDurations[] PROGMEM = {
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  2,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4,
  2,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4,
  16, 16, 16,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4,
  16, 16, 16,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4,
  2,
  4, 4, 4, 4, 4, 4,
  2,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4,
  2,
  4, 4, 4, 4, 4,
  16, 16, 16,
  4, 4, 4, 4, 4, 4, 4, 4,
  2, 2,
  4, 4, 4,
  16, 16, 16,
  4, 4, 
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 1.5, 
  4, 3.5, 3, 2, 2, 0.8
};

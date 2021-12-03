/*****************************

Genshin Impact - Jade Moon Upon a Sea of Clouds
Yu-Peng Chen - "Winding River"
MIDI shamelessly stolen from:
https://flat.io/score/607ba37f5c1e7679277f1c35-winding-river-genshin-impact-violin-instrumental

*****************************/

const int wr_totalNotes = 52;

const int wr_melody[] = {
  E4, G4, A4, B4, A4, 0, 
  B4, A4, G4, FS4, B3, FS4, 0,
  E4, G4, A4, B4, A4, 0,
  B4, A4, G4, FS4, FS4, D5, D5, 0,
  E5, D5, B4, E4, B4, 0,
  A4, G4, FS4, D4, B3, FS4, FS4, 0,
  E4, G4, A4, B4, A4, 0,
  B4, A4, FS4, D4, E4
};

const double wr_noteDurations[] = {
  2, 2, 1.33, 4, 1, 2,
  4, 4, 2, 2, 1.33, 0.8, 1,
  2, 2, 1.33, 4, 1, 2,
  4, 4, 2, 2, 1.33, 4, 1, 1,
  2, 2, 1.33, 4, 1, 2,
  4, 4, 2, 2, 1.33, 4, 1, 1,
  2, 2, 1.33, 4, 1, 2,
  4, 4, 1.33, 4, 1
};

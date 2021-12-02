
#define B3  247
#define D4  294
#define E4  330
#define FS4 370
#define G4  392
#define A4  440
#define B4  494
#define D5  587
#define E5  659

#define CS5 554
#define F5  698
#define FS5 740
#define G5  784
#define GS5 831
#define A5  880
#define B5  988
#define C6  1047
#define CS6 1109
#define D6  1175
#define E6  1319
#define FS6 1480
#define G6  1568
#define A6  1760

#define ELEMENTCOUNT(x)  (sizeof(x) / sizeof(x[0])) 
// fixes error about "wagressive-loop-optmizations" or something, idk.
// https://forum.arduino.cc/t/beginner-for-loop-with-warning-waggressive-loop-optimizations/355463/6

/*****************************

"The Homeward Heron" (Kamisato Ayaka's Character Teaser)
MIDI shamelessly stolen from:
https://flat.io/score/6120d78e89d0ba0012990d19-genshin-impact-kamisato-ayaka-the-homeward-heron-flute

*****************************/

int melody[] = {
  B3, FS4, E4, FS4, A4, B4, E4, FS4,
  B3, FS4, E4, FS4, A4, B4, E4, FS4,
  B3, FS4, E4, FS4, A4, B4, E4, FS4,
  B3, FS4, E4, FS4, A4, B4, E4, FS4,
  B4, FS5, E5, FS5, A5, 
  A5, E5, FS5, A5, E5,
  D5, B4, D5, E5, FS5, A5, A5, B5, FS5, 
  FS5, B5, B5, A5, FS5, E5, D5, E5, FS5, E5, D5, B4, 
  FS5, E5, B4, A4, B4, A4, B4, FS4, B4, 
  FS4, B4, FS5, E5, FS5, A5, FS5, E5, FS5, 
  A5, E5, D5, B4, D5, E5, FS5, A5, A5, B5, FS5,
  FS5, B5, B5, A5, FS5, E5, D5, E5, FS5, E5, D5, B4,
  FS5, E5, B4, A4, B4, A4, B4,
  CS5, D5, FS5, B5, 0, 
  B5, CS6, D6, CS6, B5, A5, FS5, E5, FS5, B5,
  FS6, GS5, A5, GS5, FS5, GS5, E5, FS5, 
  B4, CS5, D5, CS5, B4, A4, E5, FS5, A5, E5,
  D5, CS5, B4, A4, B4, A4, B4, FS4, CS5, D5, A5
};

double noteDurations[] = {
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

void setup() {
  for (int thisNote = 0; thisNote < ELEMENTCOUNT(melody); thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    if(melody[thisNote] >= 494){
      tone(13, melody[thisNote], noteDuration);
      delay(noteDuration*1.3);
      noTone(13);
    }
    else if(melody[thisNote] <= 330){
      tone(12, melody[thisNote], noteDuration);
      delay(noteDuration*1.3);
      noTone(12);
    }
    else{
      tone(8, melody[thisNote], noteDuration);
      delay(noteDuration*1.3);
      noTone(8); 
    }
  }
}

void loop(){
// bruh
}

/*****************************

Genshin Impact - Jade Moon Upon a Sea of Clouds
Yu-Peng Chen - "Rapid as Wildfires"
MIDI shamelessly stolen from:
https://musescore.com/lindenviolin/genshin-impact-rapid-as-wildfires-violin

*****************************/

/*****************************

  This is the largest file in the entire project.
  Bumped up the storage usage from 32% to 50%.
  
  I can't be bothered to do this many notes.

  Converted unaltered from the orignal MIDI using:
  https://arduinomidi.netlify.app/

  Expect to be extremely scuffed.
  
*****************************/

const int raw_totalNotes = 970;

const int raw_melody[] PROGMEM = {
  220,
  330,
  330,
  330,
  330,
  294,
  330,
  392,
  220,
  330,
  330,
  330,
  330,
  294,
  330,
  392,
  220,
  294,
  220,
  330,
  330,
  330,
  330,
  294,
  330,
  392,
  220,
  330,
  330,
  330,
  330,
  330,
  294,
  330,
  392,
  220,
  294,
  220,
  330,
  330,
  330,
  330,
  330,
  330,
  294,
  330,
  392,
  220,
  294,
  330,
  330,
  330,
  330,
  330,
  330,
  294,
  330,
  392,
  220,
  220,
  330,
  330,
  330,
  330,
  330,
  330,
  294,
  330,
  392,
  220,
  294,
  330,
  330,
  330,
  294,
  294,
  294,
  330,
  330,
  330,
  392,
  392,
  392,
  440,
  880,
  330,
  330,
  330,
  330,
  294,
  330,
  392,
  220,
  294,
  330,
  330,
  330,
  330,
  330,
  330,
  330,
  330,
  294,
  330,
  392,
  220,
  880,
  330,
  370,
  330,
  330,
  330,
  330,
  330,
  330,
  294,
  330,
  392,
  220,
  294,
  330,
  294,
  392,
  294,
  330,
  440,
  330,
  392,
  587,
  392,
  440,
  659,
  440,
  587,
  659,
  880,
  330,
  330,
  330,
  330,
  330,
  330,
  330,
  330,
  294,
  330,
  392,
  220,
  294,
  330,
  330,
  330,
  330,
  330,
  330,
  330,
  294,
  330,
  392,
  220,
  294,
  880,
  494,
  494,
  494,
  494,
  494,
  494,
  494,
  440,
  494,
  587,
  440,
  220,
  196,
  220,
  262,
  220,
  262,
  294,
  262,
  294,
  330,
  294,
  330,
  392,
  330,
  392,
  440,
  392,
  440,
  523,
  440,
  523,
  587,
  523,
  587,
  659,
  587,
  659,
  784,
  880,
  440,
  587,
  494,
  440,
  587,
  494,
  440,
  494,
  440,
  392,
  330,
  294,
  330,
  392,
  440,
  587,
  494,
  440,
  659,
  494,
  440,
  494,
  440,
  392,
  440,
  294,
  330,
  392,
  880,
  1175,
  988,
  880,
  1175,
  988,
  880,
  988,
  880,
  784,
  659,
  587,
  659,
  784,
  880,
  1175,
  988,
  880,
  1319,
  988,
  880,
  988,
  880,
  784,
  880,
  784,
  784,
  880,
  659,
  784,
  587,
  659,
  523,
  587,
  440,
  523,
  330,
  392,
  440,
  392,
  440,
  523,
  440,
  523,
  587,
  523,
  587,
  659,
  587,
  659,
  784,
  784,
  880,
  659,
  784,
  587,
  659,
  523,
  587,
  440,
  523,
  392,
  440,
  523,
  440,
  523,
  587,
  523,
  587,
  659,
  587,
  659,
  784,
  659,
  784,
  880,
  1175,
  1319,
  1047,
  1175,
  880,
  1047,
  784,
  880,
  659,
  784,
  587,
  659,
  587,
  659,
  784,
  659,
  784,
  880,
  784,
  880,
  1047,
  880,
  1047,
  1175,
  1047,
  1175,
  1319,
  1568,
  1760,
  1319,
  1568,
  1175,
  1319,
  1047,
  1175,
  880,
  1047,
  784,
  880,
  659,
  784,
  587,
  659,
  523,
  587,
  440,
  523,
  392,
  440,
  523,
  587,
  659,
  784,
  880,
  1047,
  1175,
  1319,
  1175,
  1047,
  1175,
  1047,
  988,
  659,
  988,
  988,
  1047,
  988,
  880,
  784,
  659,
  523,
  440,
  659,
  659,
  698,
  659,
  587,
  523,
  494,
  523,
  494,
  392,
  330,
  494,
  440,
  494,
  523,
  587,
  659,
  659,
  698,
  784,
  880,
  1319,
  1175,
  1047,
  988,
  1047,
  988,
  784,
  659,
  988,
  988,
  1047,
  988,
  880,
  784,
  880,
  784,
  659,
  698,
  659,
  523,
  440,
  659,
  659,
  587,
  523,
  494,
  523,
  494,
  392,
  440,
  880,
  988,
  880,
  988,
  880,
  988,
  880,
  988,
  880,
  988,
  880,
  988,
  880,
  988,
  880,
  988,
  880,
  988,
  880,
  988,
  880,
  988,
  880,
  988,
  880,
  988,
  880,
  988,
  880,
  988,
  880,
  988,
  880,
  1175,
  988,
  880,
  1319,
  988,
  880,
  988,
  880,
  784,
  880,
  659,
  784,
  880,
  880,
  880,
  988,
  988,
  880,
  880,
  988,
  988,
  880,
  880,
  988,
  988,
  880,
  880,
  988,
  988,
  880,
  880,
  988,
  988,
  880,
  880,
  988,
  988,
  880,
  880,
  988,
  988,
  880,
  880,
  988,
  988,
  880,
  880,
  988,
  988,
  880,
  880,
  988,
  988,
  880,
  880,
  988,
  988,
  880,
  880,
  988,
  988,
  880,
  880,
  988,
  988,
  880,
  880,
  988,
  988,
  880,
  880,
  988,
  988,
  880,
  880,
  988,
  988,
  880,
  330,
  330,
  330,
  330,
  330,
  330,
  294,
  330,
  392,
  220,
  294,
  330,
  330,
  330,
  330,
  330,
  330,
  294,
  330,
  392,
  220,
  880,
  330,
  330,
  330,
  330,
  330,
  330,
  294,
  330,
  392,
  220,
  294,
  330,
  330,
  294,
  330,
  330,
  294,
  330,
  330,
  330,
  294,
  330,
  392,
  220,
  880,
  440,
  440,
  440,
  440,
  440,
  440,
  392,
  440,
  494,
  330,
  392,
  440,
  440,
  440,
  440,
  392,
  440,
  494,
  330,
  440,
  494,
  330,
  440,
  880,
  494,
  494,
  494,
  494,
  494,
  494,
  440,
  494,
  587,
  330,
  392,
  440,
  784,
  659,
  587,
  659,
  494,
  587,
  440,
  494,
  392,
  440,
  330,
  392,
  294,
  330,
  880,
  1175,
  988,
  880,
  1175,
  988,
  880,
  988,
  880,
  784,
  659,
  587,
  659,
  784,
  880,
  1175,
  988,
  880,
  1319,
  988,
  880,
  784,
  880,
  784,
  659,
  587,
  659,
  784,
  880,
  1175,
  988,
  880,
  1175,
  988,
  880,
  988,
  880,
  784,
  659,
  587,
  659,
  784,
  220,
  247,
  262,
  294,
  247,
  262,
  294,
  392,
  440,
  494,
  523,
  587,
  659,
  880,
  988,
  784,
  659,
  784,
  880,
  659,
  784,
  587,
  659,
  523,
  587,
  392,
  880,
  659,
  784,
  587,
  659,
  523,
  587,
  659,
  784,
  880,
  659,
  784,
  587,
  659,
  523,
  587,
  392,
  440,
  587,
  659,
  392,
  440,
  440,
  587,
  659,
  392,
  440,
  392,
  330,
  294,
  220,
  196,
  659,
  784,
  880,
  659,
  784,
  587,
  659,
  523,
  587,
  392,
  440,
  880,
  659,
  784,
  587,
  659,
  523,
  587,
  440,
  523,
  392,
  440,
  330,
  659,
  784,
  880,
  659,
  784,
  587,
  659,
  523,
  587,
  440,
  523,
  392,
  440,
  330,
  392,
  440,
  392,
  440,
  523,
  523,
  587,
  523,
  587,
  659,
  523,
  587,
  659,
  784,
  880,
  1047,
  1175,
  1319,
  1175,
  1319,
  1175,
  1047,
  1175,
  1047,
  988,
  659,
  988,
  988,
  1047,
  988,
  880,
  784,
  659,
  523,
  440,
  659,
  659,
  698,
  659,
  587,
  523,
  494,
  523,
  494,
  392,
  330,
  494,
  440,
  494,
  523,
  587,
  659,
  880,
  1319,
  1175,
  1047,
  988,
  1047,
  988,
  784,
  659,
  988,
  988,
  1047,
  988,
  880,
  784,
  659,
  523,
  440,
  659,
  587,
  784,
  880,
  1319,
  440,
  587,
  659,
  784,
  880,
  880,
  659,
  784,
  587,
  659,
  523,
  587,
  392,
  880,
  659,
  784,
  587,
  659,
  523,
  587,
  440,
  523,
  392,
  440,
  880,
  659,
  784,
  587,
  659,
  523,
  587,
  440,
  523,
  392,
  440,
  392,
  440,
  523,
  523,
  440,
  523,
  587,
  587,
  523,
  587,
  659,
  784,
  880,
  880,
  659,
  784,
  587,
  659,
  523,
  587,
  440,
  523,
  392,
  440,
  330,
  880,
  784,
  880,
  659,
  784,
  587,
  659,
  523,
  587,
  440,
  523,
  392,
  440,
  523,
  587,
  659,
  880,
  784,
  880,
  659,
  784,
  587,
  659,
  523,
  587,
  440,
  523,
  392,
  440,
  392,
  440,
  523,
  440,
  523,
  587,
  523,
  587,
  659,
  587,
  659,
  784,
  659,
  784,
  880,
  784,
  880,
  1047,
  880,
  1047,
  1175,
  1047,
  1175,
  1319,
  1175,
  1319,
  1568,
  1760,
  1568,
  1760,
  2093,
  880
};

const double raw_noteDurations[] PROGMEM = {
  4,
  4,
  5,
  8,
  8,
  8,
  8,
  8,
  8,
  4,
  5,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  4,
  4,
  5,
  8,
  8,
  8,
  8,
  8,
  8,
  5,
  8,
  5,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  5,
  5,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  5,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  5,
  5,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  15.16,
  15.16,
  15.16,
  15.16,
  15.16,
  15.16,
  15.16,
  15.16,
  15.16,
  15.16,
  15.16,
  15.16,
  4,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  15.16,
  15.16,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  4,
  0.48,
  4,
  4,
  2,
  4,
  4,
  2,
  11.76,
  11.76,
  11.76,
  1,
  2,
  2,
  2,
  0.5,
  4,
  4,
  2,
  4,
  4,
  2,
  11.76,
  11.76,
  11.76,
  1,
  2,
  2,
  2,
  22.22,
  4,
  4,
  2,
  4,
  4,
  1.29,
  11.76,
  11.76,
  11.76,
  0.65,
  2,
  2,
  2,
  0.5,
  4,
  4,
  2,
  4,
  4,
  1.29,
  11.76,
  11.76,
  11.76,
  22.22,
  4,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  2,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  2,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  0.5,
  4,
  4,
  2.58,
  15.16,
  15.16,
  2,
  1.29,
  4,
  16,
  16,
  0.67,
  4,
  4,
  2,
  2,
  1.29,
  4,
  16,
  16,
  0.67,
  4,
  4,
  2.58,
  15.16,
  15.16,
  2,
  1,
  1,
  1,
  16,
  16,
  16,
  321,
  170,
  170,
  170,
  1,
  1,
  4,
  4,
  2.58,
  15.16,
  15.16,
  2,
  1.29,
  4,
  16,
  16,
  1.11,
  4,
  15.16,
  15.16,
  8,
  2.58,
  15.16,
  15.16,
  2,
  1.29,
  4,
  1,
  4,
  4,
  2.58,
  15.16,
  15.16,
  2,
  0.5,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  22.22,
  4,
  4,
  2,
  4,
  4,
  0.5,
  11.76,
  11.76,
  11.76,
  1,
  2,
  2,
  0.5,
  0,
  16,
  0,
  16,
  0,
  16,
  0,
  16,
  0,
  16,
  0,
  16,
  0,
  16,
  0,
  16,
  0,
  16,
  0,
  16,
  0,
  16,
  0,
  16,
  0,
  16,
  0,
  16,
  0,
  16,
  0,
  16,
  0,
  16,
  0,
  16,
  0,
  16,
  0,
  16,
  0,
  16,
  0,
  16,
  0,
  16,
  0,
  16,
  0,
  16,
  0,
  16,
  0,
  16,
  0,
  16,
  0,
  16,
  0,
  16,
  0,
  16,
  0,
  16,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  5,
  15.16,
  15.16,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  0.5,
  4,
  4,
  2,
  4,
  4,
  1.29,
  11.76,
  11.76,
  11.76,
  0.65,
  2,
  2,
  2,
  0.5,
  4,
  4,
  2,
  4,
  4,
  0.65,
  2.58,
  15.16,
  15.16,
  2,
  2,
  2,
  2,
  0.5,
  4,
  4,
  2,
  4,
  4,
  1.29,
  11.76,
  11.76,
  11.76,
  0.65,
  2,
  2,
  2,
  2,
  2,
  2,
  2,
  2,
  2,
  2,
  2,
  2,
  2,
  2,
  2,
  2,
  2,
  2,
  2,
  15.16,
  15.16,
  8,
  8,
  5,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  5,
  8,
  8,
  8,
  8,
  15.16,
  15.16,
  8,
  8,
  5,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  4,
  8,
  8,
  8,
  8,
  8,
  15.16,
  15.16,
  8,
  8,
  5,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  15.16,
  15.16,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  15.16,
  15.16,
  15.16,
  15.16,
  8,
  8,
  16,
  16,
  58,
  4,
  4,
  2.58,
  15.16,
  15.16,
  2,
  1.29,
  4,
  16,
  16,
  1.11,
  4,
  4,
  2,
  2,
  1.29,
  4,
  16,
  16,
  1.11,
  4,
  4,
  2.58,
  15.16,
  15.16,
  2,
  1,
  1,
  1,
  16,
  16,
  16,
  1.19,
  1,
  0.65,
  4,
  4,
  2.58,
  15.16,
  15.16,
  2,
  1.29,
  4,
  16,
  16,
  0.67,
  4,
  4,
  2,
  2,
  1,
  1,
  1,
  1,
  1,
  0.5,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  5,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  4,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  32,
  32,
  15.16,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  0.28
};
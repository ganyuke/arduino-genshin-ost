/*****************************

Genshin Impact - City of Winds and Idylls
Yu-Peng Chen - "Dawn Winery Theme"
MIDI shamelessly stolen from:
https://flat.io/score/605cf3442ebc14578f0a8c22-dawn-winery-theme

*****************************/

/*****************************
 
  This is a very scuffed version I 'adapted' 
  by removing and shortening notes to prevent 
  multiple notes running at the same time, 
  which tone() cannot do.

  It's quite rough.

  Converted from MIDI using:
  https://arduinomidi.netlify.app/

  Formatting is garbage because this
  wasn't translated by hand. Regex expressions
  are a godsend when dealing with this many
  lines.
  
*****************************/

const int dwt_totalNotes = 120;

const int dwt_melody[] PROGMEM = {
  123,
  370,
  247,
  370,
  92,
  330,
  123,
  370,
  247,
  370,
  92,
  330,
  370,
  494,
  370,
  247,
  740,
  370,
  740,
  294,
  659,
  587,
  659,
  330,
  220,
  554,
  440,
  494,
  554,
  587,
  294,
  196,
  587,
  587,
  659,
  587,
  554,
  494,
  554,
  330,
  220,
  440,
  370,
  370,
  494,
  370,
  247,
  740,
  740,
  659,
  294,
  659,
  330,
  220,
  554,
  440,
  494,
  554,
  587,
  554,
  494,
  554,
  494,
  440,
  494,
  247,
  123,
  370,
  247,
  277,
  294,
  196,
  330,
  370,
  277,
  294,
  330,
  220,
  277,
  294,
  330,
  220,
  370,
  277,
  330,
  294,
  277,
  294,
  494,
  554,
  587,
  98,
  147,
  659,
  587,
  554,
  587,
  277,
  659,
  440,
  220,
  247,
  277,
  554,
  587,
  659,
  440,
  139,
  740,
  220,
  554,
  659,
  247,
  277,
  123,
  185,
  277,
  587
};

const double dwt_noteDurations[] PROGMEM = {
  2,
  4,
  4,
  2,
  2,
  1,
  2,
  4,
  4,
  2,
  2,
  2,
  2,
  2,
  4,
  4,
  4,
  4,
  2,
  4,
  4,
  2,
  2,
  4,
  4,
  2,
  2,
  2,
  2,
  2,
  4,
  4,
  2,
  4,
  8,
  8,
  2,
  2,
  2,
  4,
  4,
  2,
  1,
  2,
  2,
  4,
  4,
  2,
  2,
  2,
  2,
  2,
  4,
  4,
  2,
  1.33,
  4,
  2,
  2,
  2,
  2,
  2,
  2,
  2,
  2,
  1,
  2,
  1,
  2,
  2,
  2,
  2,
  2,
  2,
  2,
  2,
  2,
  0.67,
  2,
  2,
  2,
  2,
  2,
  2,
  1.14,
  8,
  8,
  0.8,
  2,
  2,
  2,
  4,
  4,
  2,
  2,
  2,
  2,
  4,
  4,
  2,
  4,
  4,
  2,
  2,
  2,
  2,
  4,
  4,
  2,
  4,
  4,
  2,
  4,
  1.33,
  2,
  4,
  1.33,
  0.5
};

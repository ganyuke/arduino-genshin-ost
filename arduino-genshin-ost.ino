#include "joystickHandler.h"
#include "musicNotes.h"
#include "mainTheme.h"
#include "windingRiver.h"
#include "tenderStrength.h"
#include "herMajesty.h"

bool halt = true; // Prevent running immediately after plugging in.
bool lastButtonState;
bool currentButtonState;
int buttonPushCounter = 0;

void toggle(){
  currentButtonState = digitalRead(SW);
  if (currentButtonState != lastButtonState){ 
    if (currentButtonState == LOW) { buttonPushCounter++;}
  }
  lastButtonState = currentButtonState;
  if (buttonPushCounter % 2 == 0) { halt = true; } 
  else { halt = false; }
}

void toneHandler(const int pin, const int* melody, const double noteDuration){
  tone(pin, melody, noteDuration);
  delay(noteDuration*1.3);
  noTone(pin);
}

void musicHandler(const int* melody, const double* noteDurations, const int totalNotes){
  for (int thisNote = 0; thisNote < totalNotes; thisNote++) {
    toggle();
    if (halt){break;} // Do not play song if stopped.
    int noteDuration = 1000 / pgm_read_float_near(&noteDurations[thisNote]);
    if(pgm_read_word_near(&melody[thisNote]) >= 494){
      toneHandler(13, pgm_read_word_near(&melody[thisNote]),noteDuration);
    }
    else if(pgm_read_word_near(&melody[thisNote]) <= 330){
      toneHandler(12,  pgm_read_word_near(&melody[thisNote]),noteDuration);
    }
    else{
       toneHandler(8,  pgm_read_word_near(&melody[thisNote]),noteDuration);
    }
    if (thisNote == totalNotes-1){ // Halt when song is complete.
      halt = true;
      buttonPushCounter++;
    }
  }  
}
 
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  initJoystick();
}
 
void loop() {
    detectJoystick();
    toggle();
   switch (pinSelected){
      case 0:
        digitalWrite(13, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(8, LOW);
        if (halt){break;}
        digitalWrite(13, LOW);
        musicHandler(hm_melody, hm_noteDurations, hm_totalNotes); // You can configure what song plays from here.
        break;
      case 1:
        digitalWrite(13, LOW);
        digitalWrite(12, HIGH);
        digitalWrite(8, LOW);
        if (halt){break;}
        digitalWrite(12, LOW);
        musicHandler(wr_melody, wr_noteDurations, wr_totalNotes);
        break;
      case 2:
        digitalWrite(13, LOW);
        digitalWrite(12, LOW);
        digitalWrite(8, HIGH);
        if (halt){break;}
        digitalWrite(8, LOW);
        musicHandler(mt_melody, mt_noteDurations, mt_totalNotes);
        break;
    }
}

#include "joystickHandler.h"
#include "musicNotes.h"
#include "mainTheme.h"
#include "windingRiver.h"
#include "tenderStrength.h"
#include "herMajesty.h"
#include "moonlikeSmile.h"
#include "dawnWineryTheme.h"
#include "rapidAsWildfires.h"
#include "deckTheHalls.h"
#include "joyToTheWorld.h"
#include "carolOfTheBells_v2.h"

const int primaryLedPins[] = {13, 12, 8};

bool halt = true; // Prevent running immediately after plugging in.
bool lastButtonState;
bool currentButtonState;
int buttonPushCounter = 0;

void ledOff(int exempt = 42) {
  for (int i = 0; i < 3; i++) {
    if (!(primaryLedPins[i] == exempt)) {
      digitalWrite(primaryLedPins[i], LOW);
    }
    else {
      digitalWrite(primaryLedPins[i], HIGH);
    }
  }
  if (pageNumber == 1) {
    digitalWrite(7, HIGH);
  }
  else {
    digitalWrite(7, LOW);
  }
  if (pageNumber == 2) {
    digitalWrite(11, HIGH);
  }
  else {
    digitalWrite(11, LOW);
  }
}

void toggle() {
  currentButtonState = digitalRead(SW);
  if (currentButtonState != lastButtonState) {
    if (currentButtonState == LOW) {
      buttonPushCounter++;
    }
  }
  lastButtonState = currentButtonState;
  if (buttonPushCounter % 2 == 0) {
    halt = true;
  }
  else {
    halt = false;
  }
}

void toneHandler(const int pin, const int* melody, const double noteDuration) {
  tone(pin, melody, noteDuration);
  delay(noteDuration);
  noTone(pin);
}

void musicHandler(const int* melody, const double* noteDurations, const int totalNotes, const double tempo = 1.3, const bool specialDuration = false) {
  for (int thisNote = 0; thisNote < totalNotes; thisNote++) {
    toggle();
    if (halt) {
      break; // Do not play song if stopped.
    }
    int noteDuration;
    if (specialDuration) {
      noteDuration = (pgm_read_float_near(&noteDurations[thisNote]) * tempo);
    }
    else {
      noteDuration = (1000 / pgm_read_float_near(&noteDurations[thisNote]) * tempo);
    }
    if (pgm_read_word_near(&melody[thisNote]) >= 494) {
      toneHandler(13, pgm_read_word_near(&melody[thisNote]), noteDuration);
    }
    else if (pgm_read_word_near(&melody[thisNote]) <= 330) {
      toneHandler(12,  pgm_read_word_near(&melody[thisNote]), noteDuration);
    }
    else {
      toneHandler(8,  pgm_read_word_near(&melody[thisNote]), noteDuration);
    }
    if (thisNote == totalNotes - 1) { // Halt when song is complete.
      halt = true;
      buttonPushCounter++;
      Serial.print(F("Song ended - Halting...!"));
      Serial.println();
    }
  }
}

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 3; i++) {
    pinMode(primaryLedPins[i], OUTPUT);
  }
  pinMode(7, OUTPUT);
  initJoystick();
}

void loop() {
  detectJoystick();
  toggle();
  switch (pinSelected + (pageNumber * 3)) {
    case 0:
      ledOff(13);
      if (halt) {
        break;
      }
      digitalWrite(13, LOW);
      musicHandler(hm_melody, hm_noteDurations, hm_totalNotes); // You can configure what song plays from here.
      break;
    case 1:
      ledOff(12);
      if (halt) {
        break;
      }
      digitalWrite(12, LOW);
      musicHandler(raw_melody, raw_noteDurations, raw_totalNotes, 1.1);
      break;
    case 2:
      ledOff(8);
      if (halt) {
        break;
      }
      digitalWrite(8, LOW);
      musicHandler(mt_melody, mt_noteDurations, mt_totalNotes);
      break;
    case 3:
      ledOff(13);
      if (halt) {
        break;
      }
      digitalWrite(13, LOW);
      musicHandler(ts_melody, ts_noteDurations, ts_totalNotes);
      break;
    case 4:
      ledOff(12);
      if (halt) {
        break;
      }
      digitalWrite(12, LOW);
      musicHandler(dwt_melody, dwt_noteDurations, dwt_totalNotes, 1);
      break;
    case 5:
      ledOff(8);
      if (halt) {
        break;
      }
      digitalWrite(8, LOW);
      musicHandler(ms_melody, ms_noteDurations, ms_totalNotes);
      break;
    case 6:
      ledOff(13);
      if (halt) {
        break;
      }
      digitalWrite(13, LOW);
      musicHandler(dth_melody, dth_noteDurations, dth_totalNotes, 1);
      break;
    case 7:
      ledOff(12);
      if (halt) {
        break;
      }
      digitalWrite(12, LOW);
      musicHandler(jttw_melody, jttw_noteDurations, jttw_totalNotes, 1, true);
      break;
    case 8:
      ledOff(8);
      if (halt) {
        break;
      }
      digitalWrite(8, LOW);
      musicHandler(cotb_melody, cotb_noteDurations, cotb_totalNotes, 0.9, true);
      break;
  }
}

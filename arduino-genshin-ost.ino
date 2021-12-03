
#include "musicNotes.h"
#include "mainTheme.h"
#include "windingRiver.h"
#include "tenderStrength.h"
#include "herMajesty.h"

#define ELEMENTCOUNT(x)  (sizeof(x) / sizeof(x[0])) // fixes error about "wagressive-loop-optmizations" or something, idk. https://forum.arduino.cc/t/beginner-for-loop-with-warning-waggressive-loop-optimizations/355463/6

const int switchPin = 2;  // Joystick button
const int pinX = A1; // Joystick X axis
const int pinY = A2; // Joystick Y axis
bool halt = true;
bool lastButtonState;
bool currentButtonState;
int buttonPushCounter = 0;

void toggle(){
  currentButtonState = digitalRead(switchPin);
  if (currentButtonState != lastButtonState){ 
    if (currentButtonState == LOW) { buttonPushCounter++;}
    // delay(50); 
  }
  lastButtonState = currentButtonState;
  if (buttonPushCounter % 2 == 0) { halt = true; } 
  else { halt = false; }
}

void musicHandler(const int* melody, const double* noteDurations, const int totalNotes){
  for (int thisNote = 0; thisNote < totalNotes; thisNote++) {
    toggle();
    if (halt){ // Do not play song if stopped.
      break;
    }
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
    if (thisNote == totalNotes-1){ // Halt when song is complete.
      halt = true;
      buttonPushCounter++;
    }
  }  
}

 
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(pinX, INPUT);
  pinMode(pinY, INPUT);
  pinMode(switchPin, INPUT);
  digitalWrite(switchPin, HIGH); // Connect the built-in wind-up resistor
  Serial.begin(9600);
  currentButtonState = digitalRead(currentButtonState);
}
 
void loop() {
    musicHandler(hm_melody,hm_noteDurations, hm_totalNotes); // You can configure what song plays from here.
    while (halt){ // Idle animation.
      toggle(); // Check if the button has been toggled yet.
      digitalWrite(13, HIGH);
      delay(1000);
      toggle(); // Don't leave the user waiting to see if it worked.
      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
      toggle(); // There's probably a cleaner way to do this...
      delay(1000);
      digitalWrite(12, LOW);
      digitalWrite(8, HIGH);
      toggle();
      delay(1000);
      digitalWrite(8, LOW);
    }
  }

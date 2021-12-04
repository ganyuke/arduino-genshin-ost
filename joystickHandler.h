// Pins
int VRx = A2;
int VRy = A3;
int SW = 2;

// Joystick Variables
int xPosition = 0;
int yPosition = 0;
int mapX = 0;
int mapY = 0;

// Misc Variables
int interval = 200;
int lastTime;
int pinSelected = 0;

void initJoystick() {
  pinMode(VRx, INPUT);
  pinMode(VRy, INPUT);
  pinMode(SW, INPUT_PULLUP); 
}

void detectJoystick() {
  int currentTime = millis();
  if ((currentTime-lastTime)>=interval){
    lastTime = currentTime;
    xPosition = analogRead(VRx);
    yPosition = analogRead(VRy);
    mapX = map(xPosition, 0, 1023, -512, 512);
    mapY = map(yPosition, 0, 1023, -512, 512);
  
    if (mapX <= -500){
      ++pinSelected;
      Serial.print(pinSelected);
      Serial.print(F("Increasing!"));
      Serial.println();
    }
    else if (mapX >= 500){
      --pinSelected;
      Serial.print(pinSelected);
      Serial.print(F("Decreasing!"));
      Serial.println();
    }
    if (pinSelected > 2){
      pinSelected = 0;
      Serial.print(pinSelected);
      Serial.print(F("Resetting!"));
      Serial.println();
    }
    else if (pinSelected < 0){
      pinSelected = 2;
      Serial.print(pinSelected);
      Serial.print(F("Resetting!"));
      Serial.println();
    }
  }
  delay(100);
}

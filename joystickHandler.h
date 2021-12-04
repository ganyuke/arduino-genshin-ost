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
int pageNumber = 0;

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

    // Check what page to switches the three songs.
    if (mapY >= 500){
      ++pageNumber;
      Serial.print(pageNumber);
      Serial.print(F("- Page Increasing!"));
      Serial.println();
    }
    else if (mapY <= -500){
      --pageNumber;
      Serial.print(pageNumber);
      Serial.print(F("- Page Decreasing!"));
      Serial.println();
    }
    if (pageNumber > 1){
      pageNumber = 0;
      Serial.print(pageNumber);
      Serial.print(F("- Page Resetting!"));
      Serial.println();
    }
    else if (pageNumber < 0){
      pageNumber = 1;
      Serial.print(pageNumber);
      Serial.print(F("- Page Resetting!"));
      Serial.println();
    }

    // Checks what pin is being hovered over.
    if (mapX <= -500){
      ++pinSelected;
      Serial.print(pinSelected + (pageNumber*3));
      Serial.print(F("- Pin Increasing!"));
      Serial.println();
    }
    else if (mapX >= 500){
      --pinSelected;
      Serial.print(pinSelected + (pageNumber*3));
      Serial.print(F("- Pin Decreasing!"));
      Serial.println();
    }
    if (pinSelected > 2){
      pinSelected = 0;
      Serial.print(pinSelected + (pageNumber*3));
      Serial.print(F("- Pin Resetting!"));
      Serial.println();
    }
    else if (pinSelected < 0){
      pinSelected = 2;
      Serial.print(pinSelected + (pageNumber*3));
      Serial.print(F("- Pin Resetting!"));
      Serial.println();
    }
  }
  delay(100);
}

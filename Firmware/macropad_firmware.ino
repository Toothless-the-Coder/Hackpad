#include "Keyboard.h"

const int keyPins[11] = {0,1,2,3,4,5,6,7,8,9,10};

void setup() {
  Keyboard.begin();
  for(int i=0;i<11;i++){
    pinMode(keyPins[i], INPUT_PULLUP);
  }
}

void loop() {
  for(int i=0;i<11;i++){
    if(digitalRead(keyPins[i]) == LOW){
      Keyboard.write('0' + i);
      delay(200);
    }
  }
}

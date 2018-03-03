#include "main.h"
#include "scissorlift.h"

// armset and arm functions
// left motor goes left to go down

void scissorliftset(bool up, bool down){
  if(up == true && down == false){
    motorSet(4, 127);
    motorSet(5, -127);
  }
  else if(up == false && down == true){
    motorSet(4, -127);
    motorSet(5, 127);
  }
  else{
    motorStop(4);
    motorStop(5);
  }
}

void scissorlift(){
  bool up = joystickGetDigital(1, 5, JOY_UP);
  bool down = joystickGetDigital(1, 5, JOY_DOWN);
  scissorliftset(up, down);
}

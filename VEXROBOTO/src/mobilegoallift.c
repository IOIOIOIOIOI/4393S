#include "main.h"
#include "mobilegoallift.h"

void mobilegoallift(){

  bool up = joystickGetDigital(1, 6, JOY_UP);
  bool down = joystickGetDigital(1, 6, JOY_DOWN);

  if(up == true && down == false){
    motorSet(8, 127);
    motorSet(7, -127);
  }

  else if(up == false && down == true){
    motorSet(8, -127);
    motorSet(7, 127);
  }

  else{
    motorStop(7);
    motorStop(8);
  }

}

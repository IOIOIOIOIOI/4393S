#include "main.h"
#include "claw.h"

// claw set and claw function

void claw(){
  bool pulllup = joystickGetDigital(1, 5, JOY_UP);
  bool pushdown = joystickGetDigital(1, 5, JOY_DOWN);

  if(pulllup == true && pushdown == false){
    motorSet(9, 127);
  }
  else if(pulllup == false && pushdown == true){
    motorSet(6, -127);
  }
  else{
    motorSet(6, -15);
  }
}

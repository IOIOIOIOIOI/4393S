#include "main.h"
#include "autotest.h"

void autotest(){
  bool autotestbutton = joystickGetDigital(1, 8, JOY_RIGHT);
  if(autotestbutton == true){
    //drop mobilegoallift
    motorSet(8, -127);
    motorSet(7, 127);
    delay(700);
    motorStopAll();

    // keep moving
    motorSet(2, 127);
    motorSet(3, -127);
    delay(2810);
    motorStopAll();

    // pick up goal
    motorSet(8, 127);
    motorSet(7, -127);
    delay(700);
    motorStopAll();

    // move backwards halfway
    motorSet(2, -127);
    motorSet(3, 127);
    delay(1405);
    motorStopAll();

    // turn 180
    motorSet(2, 127);
    motorSet(3, 127);
    delay(1430);
    motorStopAll();

    // move back (forward) towards 10pointzone
    motorSet(2, 127);
    motorSet(3, -127);
    delay(1430);
    motorStopAll();

    // drop mobilegoal
    motorSet(8, -127);
    motorSet(7, 127);
    delay(700);
    motorStopAll();

    // back out
    motorSet(2, -127);
    motorSet(3, 127);
    delay(1500);
    motorStopAll();
  }

}

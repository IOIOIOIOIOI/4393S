#include "main.h"
#include "selected_autonomous.h"
#include "lcdchooser.h"

void autonomous0(){
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

void autonomous1(){

}

void autonomous2(){

}

void autonomous3(){

}

// run the autonomous that is selected

void selected_autonomous(){
  switch(lcdchooser()){
    case 0:
      autonomous0();
    case 1:
      autonomous1();
    case 2:
      autonomous2();
    case 3:
      autonomous3();
  }
}

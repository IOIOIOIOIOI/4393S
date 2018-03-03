#include "main.h"
#include "clawarm.h"

// clawarm function

void clawarm(){
  bool forward = joystickGetDigital(1, , );
  bool backward = joystickGetDigital(1, , );

  if(forward == true && backward == false){
    motorSet(6, 127);
  }
  else if(forward == false && backward == true){
    motorSet(6, -127);
  }
  else{
    motorStop(6);
  }
}

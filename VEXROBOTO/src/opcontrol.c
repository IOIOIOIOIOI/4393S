#include "main.h"
#include "drivetrain.h"
#include "mobilegoallift.h"
#include "scissorlift.h"
#include "claw.h"
#include "clawarm.h"

#include "autotest.h"

// the operatorControl loop
void operatorControl() {
	while (1) {
    drivetrain();
    mobilegoallift();
		scissorlift();
		claw();
		clawarm();
		// remove autotest when live deploying!!!
		autotest();

	}
}

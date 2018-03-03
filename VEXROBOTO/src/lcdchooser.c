#include "main.h"
#include "lcdchooser.h"

// get / display the autonomous selection on the lcd display

//Wait for Press - helper function
void waitForPress()
{
  while(lcdReadButtons(uart2) == 0){}
  wait(5);
}

//Wait for Release - helper function
void waitForRelease()
{
  while(lcdReadButtons(uart2) != 0){}
  wait(5);
}

int lcdchooser(){
  // user interface

  //Declare count variable to keep track of our choice
  int count = 0;

  //Clear LCD
  lcdClear(uart2);

  //Loop while center button is not pressed
  while(lcdReadButtons(uart2) != LCD_BTN_CENTER){

    //Switch case that allows the user to choose from 4 different options
    switch(count){
      case 0:

        //Display first choice
        lcdPrint(uart2, 0, "Autonomous 1");
        lcdPrint(uart2, 1, "<         Enter        >");
        waitForPress();

        //Increment or decrement "count" based on button press
        if(lcdReadButtons(uart2) == LCD_BTN_LEFT){
          waitForRelease();
          count = 3;
        }
        else if(lcdReadButtons(uart2) == LCD_BTN_RIGHT){
          waitForRelease();
          count++;
        }

        break;

      case 1:
        //Display second choice
        lcdPrint(uart2, 0, "Autonomous 2");
        lcdPrint(uart2, 1, "<         Enter        >");
        waitForPress();

        //Increment or decrement "count" based on button press
        if(lcdReadButtons(uart2) == LCD_BTN_LEFT){
          waitForRelease();
          count--;
        }
        else if(lcdReadButtons(uart2) == LCD_BTN_RIGHT){
          waitForRelease();
          count++;
        }

        break;

      case 2:
        //Display third choice
        lcdPrint(uart2, 0, "Autonomous 3");
        lcdPrint(uart2, 1, "<         Enter        >");
        waitForPress();

        //Increment or decrement "count" based on button press
        if(lcdReadButtons(uart2) == LCD_BTN_LEFT){
          waitForRelease();
          count--;
        }
        else if(lcdReadButtons(uart2) == LCD_BTN_RIGHT){
          waitForRelease();
          count++;
        }

        break;

      case 3:
        //Display fourth choice
        lcdPrint(uart2, 0, "Autonomous 4");
        lcdPrint(uart2, 1, "<         Enter        >");
        waitForPress();

        //Increment or decrement "count" based on button press
        if(lcdReadButtons(uart2) == LCD_BTN_LEFT){
          waitForRelease();
          count--;
        }
        else if(lcdReadButtons(uart2) == LCD_BTN_RIGHT){
          waitForRelease();
          count = 0;
        }
        break;

      default:
        count = 0;
        break;

    }
  }

  return count;
}

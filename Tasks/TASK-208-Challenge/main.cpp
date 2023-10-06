#include "uop_msb.h"
using namespace uop_msb;

// Inputs
DigitalIn SW2(BTN1_PIN);
DigitalIn SW3(BTN2_PIN);

// Outputs
DigitalOut ledRed(TRAF_RED1_PIN);
DigitalOut ledYel(TRAF_YEL1_PIN);
DigitalOut ledGrn(TRAF_GRN1_PIN);

// Timers (modified version from Timer)
TimerCompat tmr_flash;
TimerCompat tmr_debounce;

// THE CODE BELOW IS NOT A SOLUTION
//
// IT IS FUNDAMENTALLY FLAWED (AND INCOMPLETE)
//
//

int main()
{
    //Starting all timer
    tmr_flash.start();
    tmr_debounce.start();
    
    bool switchState = false;

    while (true) {       

        //Reading the switch state
        bool sw2Pressed = (SW2.read() == 1);

        //Debouncing the swtich
        if (tmr_flash.read_ms() >= 500){
            if(sw2Pressed != switchState){
                switchState = sw2Pressed;
                tmr_debounce.reset();
            }
        }

        ledRed = switchState;
        
        //Reading if the timer has surpassed a certain time and switch the LED on and off 
        if (tmr_flash.read_ms() >= 500){
            ledYel = !ledYel;
            tmr_flash.reset();
        }
    }
}
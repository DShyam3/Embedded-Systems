#include "mbed.h"

// Hardware Definitions
#define TRAF_GRN1_PIN PC_6
#define TRAF_YEL1_PIN PC_3
#define TRAF_RED1_PIN PC_2

// Objects
// DigitalOut grn(TRAF_GRN1_PIN);
// DigitalOut yel(TRAF_YEL1_PIN);
// DigitalOut red(TRAF_RED1_PIN,1);
BusOut leds(TRAF_RED1_PIN, TRAF_YEL1_PIN, TRAF_GRN1_PIN);
BusOut new_leds(PB_0, PB_7, PB_14);

int main()
{
    while (true) {
        // new_leds = 0b000;
        // wait_us(500000);
        // new_leds = 0b111;
        // wait_us(500000);    

        //Showing LED's as a binary representation
        for (int i = 0; i < 8; i++){
            wait_us(500000);
            leds = i;
            wait_us(500000);
        }
    }
}



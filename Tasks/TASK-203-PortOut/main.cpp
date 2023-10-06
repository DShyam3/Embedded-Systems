#include "mbed.h"

// Hardware Definitions
#define TRAF_GRN1_PIN PC_6
#define TRAF_YEL1_PIN PC_3
#define TRAF_RED1_PIN PC_2
#define TRAF_PB_0 PB_0
#define TRAF_PB_7 PB_7
#define TRAF_PB_14 PB_14
#define TRAF_LEDMASK 0b0000000001001100
#define BOARD_LEDMASK 0b0010000001000001
// Objects
//BusOut leds(TRAF_RED1_PIN, TRAF_YEL1_PIN, TRAF_GRN1_PIN);
PortOut traf_leds(PortC, TRAF_LEDMASK);
PortOut board_leds(PortB, BOARD_LEDMASK);

int main()
{
    while (true) {
        traf_leds = 0;   //Binary 000
        board_leds = 0;
        
        wait_us(500000);
        traf_leds = 0xFF;   //Binary 11111111
        board_leds = 0xFF;
        wait_us(500000);    
    }
}

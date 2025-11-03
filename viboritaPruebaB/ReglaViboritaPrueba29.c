#include "cubelet.h"
#include <stdint.h>
#include "routing_table.h"

void setup() {
    //set_flashlight(0);
    set_drive_direction(BACKWARD);
    set_drive(0);
    block_value = 0;
    wait(1000);
}

void loop() {
    uint8_t aux2 = get_block_value(1410444);
    uint8_t aux1 = get_block_value(1458600);
    
    if(aux1 == 1 && block_value == 0){
 //       set_flashlight(100);
//        block_value = 1;
        set_drive(100);
        block_value = 1;
    } else if(aux2 == 1 && block_value == 1){
 //       set_flashlight(0);
//        block_value = 0;
        set_drive(0);
        block_value = 0;
    }

    wait(1000);
}

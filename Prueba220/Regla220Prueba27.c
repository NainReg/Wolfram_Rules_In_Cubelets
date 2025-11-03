#include "cubelet.h"
#include <stdint.h>
#include "routing_table.h"
void checa(void);
void setup() {
    wait(2000);
    checa();
}

void loop(){
    wait(6000);
    checa();
}

void checa() {
    uint8_t aux3 = get_block_value(1460358);//
    uint8_t aux1 = get_block_value(1410314);//
    uint8_t aux2 = get_block_value(935690);//
    
    if(aux1 == 0 && aux2 == 0 && aux3 == 0){
        set_drive(0);
        block_value = 0;
    } else if(aux1 == 0 && aux2 == 0 && aux3 == 1){
        set_drive(0);
        block_value = 0;
    } else if(aux1 == 0 && aux2 == 1 && aux3 == 0){
        set_drive(100);
        block_value = 1;
    } else if(aux1 == 0 && aux2 == 1 && aux3 == 1){
        set_drive(100);
        block_value = 1;
    } else if(aux1 == 1 && aux2 == 0 && aux3 == 0){
        set_drive(100);
        block_value = 1;
    } else if(aux1 == 1 && aux2 == 0 && aux3 == 1){
        set_drive(0);
        block_value = 0;
    } else if(aux1 == 1 && aux2 == 1 && aux3 == 0){
        set_drive(100);
        block_value = 1;
    } else if(aux1 == 1 && aux2 == 1 && aux3 == 1){
        set_drive(100);
        block_value = 1;
    }
}

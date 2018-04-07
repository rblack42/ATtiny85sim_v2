#include "Wire.h"

int Wire::serialno = 0;

Wire::Wire() {
    id = ++serialno;
}

int Wire::tock(void){
    return id;
}

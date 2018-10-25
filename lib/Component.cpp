// COpyright 2018 Roie R. Black

#include "Component.h"

int Component::serialno = 0;

Component::Component() {
    id = ++serialno;
}

int Component::tick(void) {
    return id;
}

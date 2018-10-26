// Copyright 2018 Roie R. Black

#include "Component.h"

int Component::serialno = 0;

Component::Component() {
    name = "unknown";
    id = ++serialno;
}

Component::Component(std::string n) {
    name = n;
    id = ++serialno;
}

Component::~Component() {
    for(int i=0; i < in_pins.size(); i++) {
        delete in_pins[i];
    }
    for(int i=0; i < out_pins.size(); i++) {
        delete out_pins[i];
    }
}

int Component::tick(void) {
    return id;
}

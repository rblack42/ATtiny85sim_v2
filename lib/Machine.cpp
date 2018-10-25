// Copyright 2018 Roie R. Black

#include "Machine.h"
#include <iterator>

Machine::Machine() {}

void Machine::add_component(std::string n) {
    parts[n] = new Component;
}

void Machine::add_wire(std::string n) {
    wires[n] = new Wire;
}

void Machine::tick(void) {
    std::map<std::string, Component *>::iterator it = parts.begin();
    while (it != parts.end()) {
        it->second->tick();
    }
}

void Machine::tock(void) {
    std::map<std::string, Wire *>::iterator it = wires.begin();
    while (it != wires.end()) {
        it->second->tock();
    }
}

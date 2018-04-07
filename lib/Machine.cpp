#include "Machine.h"

Machine::Machine(){}

void Machine::add_component(std::string n){
    parts.push_back(new Component(n));
}

void Machine::add_wire(std::string n){
    wires.push_back(new Wire());
}

void Machine::tick(void){
    for(int c=0;c<parts.size(); c++)
        parts[c]->tick();
}

void Machine::tock(void){
    for(int w=0;w<wires.size(); w++)
        wires[w]->tock();
}

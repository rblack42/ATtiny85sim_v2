// Copyright 2018 ROie R. Black

#include <iostream>
#include "../.version"
#include "argParse.h"
#include "Component.h"
#include "Wire.h"
#include "Machine.h"

int main(int argc, char *argv[]) {
    Machine m;

    std::cout
        << "ATtiny85sim v("
        << version
        << ")"
        << std::endl;
    OPTS argresult = argParse(argc, argv);
    if (argresult.error == OK) {
        std::cout
            << "\trunning..."
            << std::endl;
        // test components and wires
        m.add_component("PC");
        m.add_component("IR");
        std::cout
            << "tick: "
            << "PC"
            << "="
            << m.parts["PC"]->tick()
            << ","
            << "IR"
            << "="
            << m.parts["IR"]->tick()
            << std::endl;
        m.add_wire("w1");
        m.add_wire("w2");
        std::cout
            << "tock: "
            << m.wires["w1"]->tock()
            << ","
            << m.wires["w2"]->tock()
            << std::endl;
    } else {
        std::cout
            << "Error parsing command line"
            << std::endl;
        usage();
        exit(1);
    }
    std::cout
        << "simulation halted"
        << std::endl;
}

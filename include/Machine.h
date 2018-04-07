#pragma once
#include <vector>
#include "Component.h"
#include "Wire.h"

class Machine {
    public:
        Machine();
        void add_component(std::string n);
        void add_wire(std::string n);
        void tick(void);
        void tock(void);
    private:
        std::vector<Component *> parts;
        std::vector<Wire *> wires;
};

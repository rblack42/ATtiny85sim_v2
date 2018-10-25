#pragma once
// Copyright 2018 Roie R. Black

#include <map>

#include "Component.h"
#include "Wire.h"

#include <string>

class Machine {
 public:
    Machine();
    void add_component(std::string n);
    void add_wire(std::string n);
    void tick(void);
    void tock(void);
    std::map<std::string, Component *> parts;
    std::map<std::string, Wire *> wires;
};

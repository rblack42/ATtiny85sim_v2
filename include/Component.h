#pragma once
// Copyright 2018 Roie R. Black

#include <string>
#Include <vector>

#include "Pin.h"

class Component {
 public:
    // constructor
    Component(std::string n);

    // destructor
    ~Component();

    // input pins
    std::vector<Pin *> in_pins;
    int tick(void);

    // output pins
    std::vector<Pin *> out_pins;

    // mutators
    void add_in_pin(std::string name);
    void add_out_pin(std::string name);

    int tick(void);

    // accessors
    Pin * get_in_pin(std::string n);
    Pin * get_out_pin(std::string n);

 private:
    static int serialno;
    int id;
    std::string name;
};


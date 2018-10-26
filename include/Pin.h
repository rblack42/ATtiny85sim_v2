#pragma once
// COpyright 2018 Roie R. Black

// Pin class - for named pins
#include <cstdint>
#include <string>

class Pin {
 public:
    explicit Pin(std::string n);
    void set_val(uint16_t v);
    uint16_t get_val(void);
    std::string get_name(void);
 private:
    std::string name;
    uint16_t val;
};


#pragma once
// Copyright 2018 Roie R. Black

#include <string>

class Wire {
 public:
    Wire();
    int tock(void);
 private:
    static int serialno;
    int id;
};


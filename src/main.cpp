// Copyright 2018 Roie R. Black

#include "ArgParser.h"
#include "Compiler.h"
#include <iostream>

int main(int argc, char *argv[]) {
    ArgParser ap;
    ARGS result = ap.parse(argc, argv);
    if (result.error_code == OK) {
        std::cout
            << "CPUkit running("
            << "debug="
            << result.debug
            << ")\n";
        std::cout
            << "Processing "
            << result.source
            << "\n";
        std::cout
            << "\tmax cycles = "
            << result.max_cycles
            << "\n";
    } else {
        std::cout
            << "CPUkit Error: "
            << ap.getErrorMsg()
            << "\n";
    }
    Compiler c(true);
    std::string fname = result.source;
    c.parse_file(fname);
}


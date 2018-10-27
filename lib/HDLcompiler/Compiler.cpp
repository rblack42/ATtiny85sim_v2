// Copyright 2018 Roie R. Black

#include "Compiler.h"
#include <iostream>
#include <fstream>

Compiler::Compiler(bool dbg) {
    debug = dbg;
}

int Compiler::parse_file(std::string fn) {
    file_name = "examples/" + fn;
    std::ifstream fin(file_name);
    if (fin) {
        fin.seekg(0, std::ios::end);
        size = fin.tellg();
        std::string buffer(size, ' ');
        fin.seekg(0, std::ios::beg);
        fin.read(&buffer[0], size);
        fin.close();
        source_code = buffer;
    } else {
        std::cout
            << "Error: source file not found: "
            << file_name << "\n";
        return 1;
    }
    return 0;
}

int Compiler::parse_string(std::string code) {
    source_code = code;
    size = source_code.length();
    return 0;
}

int Compiler::run(void) {
    if (debug) {
        std::cout << "Debug: Compiler file_parser: " << std::endl;
        std::cout << "\tfile: " << file_name << std::endl;
        std::cout << "\tsize: " << size << std::endl;
        std::cout << "\tDebug: " << debug << std::endl;
        std::cout << "Processing code:\n" << source_code;
    }
    return 0;
}

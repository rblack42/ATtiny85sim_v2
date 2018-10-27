#pragma once
// Copyright 2018 Roie R. Black

#include <string>

class Compiler {
 public:
    explicit Compiler(bool dbg);
    int parse_file(std::string fn);
    int parse_string(std::string fn);
    int run(void);

    std::string file_name;
    std::string source_code;
    int size;
    bool debug;
};

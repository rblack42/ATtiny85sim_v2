#pragma once
// Copyright 2018 Roie R. Black

#include <string>

enum ERRORS {
    BAD_OPT,
    OK
};

struct ARGS {
    ERRORS error_code;
    bool debug;
    std::string source;
    int max_cycles;
};

class ArgParser {
 public:
    ArgParser();
    ARGS parse(int argc, char *argv[]);
    std::string getErrorMsg(void);
 private:
     ERRORS error_code;
     std::string source;
     bool debug;
     int max_cycles;
};

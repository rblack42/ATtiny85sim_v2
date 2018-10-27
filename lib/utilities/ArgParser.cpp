// Copyright 2018 Roie R. Black
#include "ArgParser.h"
#include <iostream>

ArgParser::ArgParser() {
}

struct ARGS ArgParser::parse(int argc, char *argv[]) {
    struct ARGS result;

    // reset parameters
    error_code = OK;
    debug = false;
    max_cycles = 10;
    source = "machine.hdl";
    for (int i=1; i< argc; i++) {
        if (argv[i][0] == '-') {
            switch (argv[i][1]) {
                case 'd':
                    debug = true;
                    break;
                case 'n':
                    max_cycles = std::stoi(argv[++i]);
                    break;
                default:
                    error_code = BAD_OPT;
            }
            if (error_code == BAD_OPT) break;
        } else {
            source = argv[i];
        }
    }
    result.error_code = error_code;
    result.debug = debug;
    result.source = source;
    result.max_cycles = max_cycles;
    if (debug) {
        std::cout
            << "error_code = " << result.error_code << "\n"
            << "debug      = " << result.debug      << "\n"
            << "max_cycles = " << result.max_cycles << "\n"
            << "source     = " << result.source     << "\n";
    }
    return result;
}

std::string ArgParser::getErrorMsg(void) {
    switch (error_code) {
        case OK:
            return "No error";
            break;
        case BAD_OPT:
            return "Unrecognized option";
            break;
    }
}

#include <iostream>
#include <cstdlib>

#include "argParse.h"

void usage(void) {
    std::cout
        << "cpusim usage:"
        << std::endl;
    std::cout
        << "   attiny85sim [-d] [-s num] codefile"
        << std::endl;
    std::cout
        << "   -d - enable debug messages"
        << std::endl;
    std::cout
        << "   -s num - run num steps"
        << std::endl;
}

int argParse(int argc, char *argv[]) {
    std::string fname = "";
    if( argc < 2) {
        return NO_FILE;
    }
    for(int i = 1; i < argc; i++) {
        if( argv[i][0] == '-' ) {
            switch ( argv[i][1] ) {
                case 'd':
                    break;
                case 's':
                    i++;
                    break;
                default:
                    return BAD_OPT;
            }
        } else {
            fname = argv[i];
        }
    }
    if( fname.length() == 0) {
        return NO_FILE;
    } else
        ;
    return OK;
}

void argError(int code) {
    switch (code) {
        case NO_FILE:
            std::cout
                << "code file cannot be opened"
                << std::endl;
            break;
        case BAD_OPT:
            std::cout
                << "bad command line option"
                << std::endl;
            break;
    }
}


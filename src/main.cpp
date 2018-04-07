#include <iostream>
#include "../.version"
#include "argParse.h"
#include "Component.h"

int main(int argc, char *argv[]) {
    std::cout
        << "ATtiny85sim v("
        << version
        << ")"
        << std::endl;
    int argcode = argParse(argc, argv);
    if(argcode == OK) {
        std::cout
            << "\trunning..."
            << std::endl;
        Component c("PC");
        std::cout
            << "tick: "
            << c.get_name()
            << "="
            << c.tick()
            << std::endl;
    } else {
        std::cout
            << "Error parsing command line"
            << std::endl;
        usage();
        exit(1);
    }
    std::cout
        << "simulation halted"
        << std::endl;

}

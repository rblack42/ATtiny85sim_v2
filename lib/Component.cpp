#include "Component.h"

Component::Component(std::string n) {
    id = 42;
    name = n;
}

int Component::tick(void){
    return id;
}

std::string Component::get_name(void){
    return name;
}

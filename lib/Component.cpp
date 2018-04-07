#include "Component.h"

int Component::serialno = 0;

Component::Component(std::string n) {
    id = ++serialno;
    name = n;
}

int Component::tick(void){
    return id;
}

std::string Component::get_name(void){
    return name;
}

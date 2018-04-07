#pragma once
#include <string>

class Component {
    public:
        Component(std::string n);
        int tick(void);
        std::string get_name(void);
    private:
        static int serialno;
        int id;
        std::string name;
};


#pragma once
#include <string>

class Component {
    public:
        Component();
        int tick(void);
    private:
        static int serialno;
        int id;
};


#pragma once
#include <string>

class Wire {
    public:
        Wire();
        int tock(void);
    private:
        static int serialno;
        int id;
};


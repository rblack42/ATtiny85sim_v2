#include "catch.hpp"
#include "argParse.h"

const char *p1 = "prog";

const char *data1[] = {
    p1
};
const char *data2[] = {
    p1,
    "machine.hdl"
};
const char *data3[] = {
    p1,
    "-d"
    "machine.hdl"
};


TEST_CASE( "argParse test", "argparse" ){
    int code = argParse(1,(char **) data1);
    REQUIRE(code == NO_FILE);
    code = argParse(2,(char **) data2);
    REQUIRE(code == OK);
    code = argParse(3,(char **) data3);
}

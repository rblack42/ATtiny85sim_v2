#include "catch.hpp"
#include "argParse.h"

char *data1[] = {
    (char *)"prog",
    NULL
};
char *data2[] = {
    (char *) "prog",
    (char *)"machine.hdl",
    NULL
};
char *data3[] = {
    (char *) "prog",
    (char *) "-d",
    (char *) "machine.hdl",
    NULL,
};


TEST_CASE( "argParse test", "argparse" ){
    int code = argParse(1,(char **) data1);
    REQUIRE(code == NO_FILE);
    code = argParse(2,(char **) data2);
    REQUIRE(code == OK);
    code = argParse(3,(char **) data3);
}

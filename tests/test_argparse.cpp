// Copyright 2018 Roie R. Black

#include "catch.hpp"
#include "ArgParser.h"

char *data1[] = {
    const_cast<char *>("prog"),
    NULL
};

char *data2[] = {
    const_cast<char *>("prog"),
    const_cast<char *>("test.hdl"),
    NULL
};

char *data3[] = {
    const_cast<char *>("prog"),
    const_cast<char *>("-d"),
    NULL,
};

char *data4[] = {
    const_cast<char *>("prog"),
    const_cast<char *>("-x"),
    NULL,
};

char *data5[] = {
    const_cast<char *>("prog"),
    const_cast<char *>("-n"),
    const_cast<char *>("15"),
    NULL,
};

ArgParser argp;
ARGS code;

TEST_CASE("argParse test no options", "argparse") {
    code = argp.parse(1, const_cast<char **>(data1));
    REQUIRE(code.error_code == OK);
    REQUIRE(code.debug == false);
    REQUIRE(code.source == "machine.hdl");
}

TEST_CASE("argParse: test file name", "argparse") {
    code = argp.parse(2, const_cast<char **>(data2));
    REQUIRE(code.error_code == OK);
    REQUIRE(code.debug == false);
    REQUIRE(code.source == "test.hdl");
    REQUIRE(code.max_cycles == 10);
}

TEST_CASE("argParse: test debug", "argparse") {
    code = argp.parse(2, const_cast<char **>(data3));
    REQUIRE(code.source == "machine.hdl");
    REQUIRE(code.error_code == OK);
    REQUIRE(code.max_cycles == 10);
    REQUIRE(code.debug == true);
}

TEST_CASE("argParse: test bad option", "argparse") {
    code = argp.parse(2, const_cast<char **>(data4));
    REQUIRE(code.error_code == BAD_OPT);
}

TEST_CASE("argParse test", "argparse") {
    code = argp.parse(2, const_cast<char **>(data5));
    REQUIRE(code.source == "machine.hdl");
    REQUIRE(code.max_cycles == 15);
    REQUIRE(code.error_code == OK);
    REQUIRE(code.debug == false);
}

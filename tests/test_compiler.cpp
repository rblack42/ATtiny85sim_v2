// Copyright 2018 Roie R. Black

#include "catch.hpp"
#include "Compiler.h"
#include <stdlib.h>

// test data for string compile test
const char test_code[] =
    "machine simtest {\n"
    "    wire w1: pin1 > 50 j1 > j2 > pin2;\n"
    "    wire w2 j1 v 50 > pin3;\n"
    "}\n";
int test_size = strlen(test_code);

// test data for file compile test
const char file_name[]  = "test.hdl";
int file_size = 116;

// check that the constructors work
TEST_CASE("compiler parse_string test", "compiler" ) {
    Compiler c1(false);
    c1.parse_string(test_code);
    REQUIRE(c1.size == test_size);
}

TEST_CASE("compiler parse file test", "compiler" ) {
    Compiler c2(false);
    c2.parse_file(file_name);
    REQUIRE(c2.size == file_size);
}


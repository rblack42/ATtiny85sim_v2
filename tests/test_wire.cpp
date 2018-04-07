#include "catch.hpp"
#include "Wire.h"

TEST_CASE( "wire test", "wire" ){
    Wire w1;
    Wire w2;
    REQUIRE(w1.tock() == 1);
    REQUIRE(w2.tock() == 2);
}

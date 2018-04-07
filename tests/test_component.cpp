#include "catch.hpp"
#include "Component.h"

TEST_CASE( "component test", "component" ){
    Component c1("PC");
    REQUIRE(c1.tick() == 42);
    REQUIRE(c1.get_name() == "PC");
}

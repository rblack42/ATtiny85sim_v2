#include "catch.hpp"
#include "Component.h"

TEST_CASE( "component test", "component" ){
    Component pc("PC");
    Component ir("IR");
    REQUIRE(pc.tick() == 1);
    REQUIRE(pc.get_name() == "PC");
    REQUIRE(ir.tick() == 2);
    REQUIRE(ir.get_name() == "IR");
}

// Copyright 2018 ROie R. Black

#include "catch.hpp"
#include "Component.h"

TEST_CASE("component test", "component") {
    Component pc;
    Component ir;
    REQUIRE(pc.tick() == 1);
    REQUIRE(ir.tick() == 2);
}

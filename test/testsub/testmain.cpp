#include <catch2/catch_all.hpp>

#include "../../sub.h"

TEST_CASE("Fibonacci") {
    CHECK(Sub(4, 3) == 1);
}


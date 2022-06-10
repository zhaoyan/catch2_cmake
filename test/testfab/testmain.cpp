//#define CATCH_CONFIG_ENABLE_BENCHMARKING
#include <catch2/catch_all.hpp>
#include "../../fab.h"

TEST_CASE("Fibonacci") {
    CHECK(Fibonacci(0) == 3);
    // some more asserts..
    CHECK(Fibonacci(5) == 8);
    // some more asserts..

    // now let's benchmark:
    //BENCHMARK("Fibonacci 20") {
    //    return Fibonacci(20);
    //};
}

#include "catch2/catch.hpp"

TEST_CASE("10x10 ints" ) {
  auto x = GENERATE(range(1,11));
  auto y = GENERATE(range(101,111));
  CHECK( x < y);
}


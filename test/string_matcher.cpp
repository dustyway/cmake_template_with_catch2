#include "catch2/catch.hpp"

inline const char* testStringForMatching() {
    return "this string contains 'abc' as substring";
}

using namespace Catch::Matchers;

TEST_CASE("String matchers", "[matchers]") {
  REQUIRE_THAT( testStringForMatching(), Contains("string"));
  CHECK_THAT( testStringForMatching(), Contains("abc"));
  CHECK_THAT( testStringForMatching(), Contains("this"));
  CHECK_THAT( testStringForMatching(), Contains("substring"));
}

TEST_CASE("Matchers can be composed with both && and ||",
          "[matchers][operators[operator||][operator&&]") {
  CHECK_THAT( testStringForMatching(),
             ( Contains("string") || Contains("different"))
             && Contains("substring"));
  }


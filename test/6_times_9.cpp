#include "catch2/catch.hpp"

std::string base13(int dec){
  std::string digits;
  do {
    int units = dec % 13;
    auto c = static_cast<char>(units < 10 ? '0' + units : 'A' + units + 10);
    digits = std::string(1,c) + digits;
    dec = dec / 13;
    }
    while(dec > 0);
    return digits;
  }

TEST_CASE("the ultimate answer" ) {
  REQUIRE( base13(6*9) == "42" );
}


#define CATCH_CONFIG_RUNNER
#include "catch2/catch.hpp"

int main( int argc, char *argv[] ) {
  Catch::Session session;

  int number = 0;

  using namespace Catch::clara;

  auto cli = session.cli()
      | Opt(number, "a number")
      ["-m"]["--number"]
      ("Some custom number");
      ;

  session.cli(cli);
  auto exitCode = session.applyCommandLine( argc, argv );
  if (exitCode != 0) {
    return exitCode;
  }

  std::cout << "The number is: " << number << std::endl;

  return session.run();
}
#define DOCTEST_CONFIG_IMPLEMENT
#include <iostream>

#include "doctest.h"

int factorial(int number) {
  return number <= 1 ? number : factorial(number - 1) * number;
}

int main(int argc, char** argv) {
  doctest::Context context;
  int doctest_ret = context.run();
  if (context.shouldExit()) return doctest_ret;

  ////////////////// Start - User's code /////////////////

  int user_ret = 0;
  std::cout << "factorial(5): " << factorial(5) << std::endl;

  /////////////////// End - User's code //////////////////

  return user_ret + doctest_ret;
}

TEST_CASE("testing the factorial function") {
  CHECK(factorial(1) == 1);
  CHECK(factorial(2) == 2);
  CHECK(factorial(3) == 6);
  CHECK(factorial(10) == 3628800);
}
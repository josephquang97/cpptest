
// University of Illinois
// CS 400 MP 0: Hello World
// Tests prepared by Eric Huber
// Based on Zephyr test runner by Prof. Wade Fagen-Ulmschneider and the CS 225 Course Staff
// Based on Catch2 unit testing framework

#include <cstdlib>

#include "../saledieng/catch/catch.hpp"

TEST_CASE("Should find your compiled main executable", "[weight=1]") {
  int result = std::system("test -x ./main");
  REQUIRE(0 == result);
}

// TEST_CASE("Should have ownership permissions to run your main executable", "[weight=1]") {
//   int result = std::system("test `stat -c \"%U\" ./test` = `whoami`");
//   REQUIRE(0 == result);
// }

TEST_CASE("n0", "[weight=1]") {
  int result = std::system("./main | tr \'\n\' \' \' | tr A-Z a-z | sed \'s/[^0-9]//g\' | grep 0 > /dev/null");
  REQUIRE(0 == result);
}

TEST_CASE("n1", "[weight=1]") {
  int result = std::system("./main | tr \'\n\' \' \' | tr A-Z a-z | sed \'s/[^0-9]//g\' | grep 1 > /dev/null");
  REQUIRE(0 == result);
}

TEST_CASE("n2", "[weight=1]") {
  int result = std::system("./main | tr \'\n\' \' \' | tr A-Z a-z | sed \'s/[^0-9]//g\' | grep 1 > /dev/null");
  REQUIRE(0 == result);
}

TEST_CASE("n3", "[weight=1]") {
  int result = std::system("./main | tr \'\n\' \' \' | tr A-Z a-z | sed \'s/[^0-9]//g\' | grep 2 > /dev/null");
  REQUIRE(0 == result);
}

TEST_CASE("n4", "[weight=1]") {
  int result = std::system("./main | tr \'\n\' \' \' | tr A-Z a-z | sed \'s/[^0-9]//g\' | grep 3 > /dev/null");
  REQUIRE(0 == result);
}

TEST_CASE("n5", "[weight=1]") {
  int result = std::system("./main | tr \'\n\' \' \' | tr A-Z a-z | sed \'s/[^0-9]//g\' | grep 5 > /dev/null");
  REQUIRE(0 == result);
}

TEST_CASE("n6", "[weight=1]") {
  int result = std::system("./main | tr \'\n\' \' \' | tr A-Z a-z | sed \'s/[^0-9]//g\' | grep 8 > /dev/null");
  REQUIRE(0 == result);
}

TEST_CASE("n7", "[weight=1]") {
  int result = std::system("./main | tr \'\n\' \' \' | tr A-Z a-z | sed \'s/[^0-9]//g\' | grep 13 > /dev/null");
  REQUIRE(0 == result);
}

TEST_CASE("n8", "[weight=1]") {
  int result = std::system("./main | tr \'\n\' \' \' | tr A-Z a-z | sed \'s/[^0-9]//g\' | grep 21 > /dev/null");
  REQUIRE(0 == result);
}

TEST_CASE("n9", "[weight=1]") {
  int result = std::system("./main | tr \'\n\' \' \' | tr A-Z a-z | sed \'s/[^0-9]//g\' | grep 34 > /dev/null");
  REQUIRE(0 == result);
}

TEST_CASE("n10", "[weight=1]") {
  int result = std::system("./main | tr \'\n\' \' \' | tr A-Z a-z | sed \'s/[^0-9]//g\' | grep 55 > /dev/null");
  REQUIRE(0 == result);
}


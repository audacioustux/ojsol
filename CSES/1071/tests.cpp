#include "solution.hpp"
#include <gtest/gtest.h>

static ostringstream TEST_IO(const char *input) {
  istringstream in(input);
  ostringstream out;

  NumberSpiral::solve(in, out);

  return out;
}
static void TEST_IO(const char *input, const char *expected) {
  EXPECT_EQ(expected, TEST_IO(input).str());
}

TEST(NumberSpiralTest, Example1) {
  TEST_IO(R"(3
2 3
1 1
4 2)",
          R"(8
1
15
)");
}
#include "solution.hpp"
#include <gtest/gtest.h>

static ostringstream TEST_IO(const char *input) {
  istringstream in(input);
  ostringstream out;

  GrayCode::solve(in, out);

  return out;
}
[[maybe_unused]] static void TEST_IO(const char *input, const char *expected) {
  EXPECT_EQ(expected, TEST_IO(input).str());
}

TEST(GrayCodeTest, Example1) {
  TEST_IO("2", R"(00
01
11
10
)");
}
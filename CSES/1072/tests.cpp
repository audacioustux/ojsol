#include "solution.hpp"
#include <gtest/gtest.h>

static ostringstream TEST_IO(const char *input) {
  istringstream in(input);
  ostringstream out;

  TwoKnights::solve(in, out);

  return out;
}
static void TEST_IO(const char *input, const char *expected) {
  EXPECT_EQ(expected, TEST_IO(input).str());
}

TEST(TwoKnightsTest, Example1) {
  TEST_IO("8", R"(0
6
28
96
252
550
1056
1848
)");
}
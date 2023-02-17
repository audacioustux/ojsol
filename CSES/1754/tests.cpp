#include "solution.hpp"
#include <gtest/gtest.h>

static ostringstream TEST_IO(const char *input) {
  istringstream in(input);
  ostringstream out;

  CoinPiles::solve(in, out);

  return out;
}
[[maybe_unused]] static void TEST_IO(const char *input, const char *expected) {
  EXPECT_EQ(expected, TEST_IO(input).str());
}

TEST(CoinPilesTest, Example1) {
  TEST_IO(R"(3
2 1
2 2
3 3)",
          R"(YES
NO
YES
)");
}
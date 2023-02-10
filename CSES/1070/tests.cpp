#include "solution.hpp"
#include <gtest/gtest.h>

static ostringstream TEST_IO(const char *input) {
  istringstream in(input);
  ostringstream out;

  Permutations::solve(in, out);

  return out;
}
static void TEST_IO(const char *input, const char *expected) {
  EXPECT_EQ(expected, TEST_IO(input).str());
}

TEST(PermutationsTest, Example1) {
  stringstream out(TEST_IO("5").str());

  int prev = -1;
  int cur;
  while (out >> cur) {
    if (prev != -1) {
      EXPECT_NE(1, abs(cur - prev));
    }
    prev = cur;
  }
}
TEST(PermutationsTest, Example2) { TEST_IO("3", "NO SOLUTION\n"); }
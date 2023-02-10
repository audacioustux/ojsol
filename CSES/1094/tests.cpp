#include "solution.hpp"
#include <gtest/gtest.h>

static void TEST_IO(const char *input, const char *expected) {
  istringstream in(input);
  ostringstream out;

  IncreasingArray::solve(in, out);

  EXPECT_EQ(expected, out.str());
}

TEST(IncreasingArrayTest, Example1) { TEST_IO("5 3 2 5 1 7", "5\n"); }
// TEST(IncreasingArrayTest, Example2) { TEST_IsO("5 1 2 3 4 5", "0\n"); }
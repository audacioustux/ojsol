#include "solution.hpp"
#include <gtest/gtest.h>

static void TEST_IO(const char *input, const char *expected) {
  istringstream in(input);
  ostringstream out;

  A::solve(in, out);

  EXPECT_EQ(expected, out.str());
}

TEST(ATest, Example1) { TEST_IO("3 5 4", "Sum of 3, 5 and 4 is 12\n"); }
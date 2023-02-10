#include "solution.hpp"
#include <gtest/gtest.h>

static ostringstream TEST_IO(const char *input) {
  istringstream in(input);
  ostringstream out;

  $ProblemName::solve(in, out);

  return out;
}
static void TEST_IO(const char *input, const char *expected) {
  EXPECT_EQ(expected, TEST_IO(input).str());
}

TEST($ProblemNameTest, Example1) { TEST_IO("", "\n"); }
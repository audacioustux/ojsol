#include "solution.hpp"
#include <gtest/gtest.h>

static void TEST_IO(const char *input, const char *expected) {
  istringstream in(input);
  ostringstream out;

  Repititions::solve(in, out);

  EXPECT_EQ(expected, out.str());
}

TEST(RepititionsTest, Example1) { TEST_IO("ATTCGGGA", "3\n"); }
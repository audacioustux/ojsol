#include "solution.hpp"
#include <gtest/gtest.h>

static void TEST_IO(const char *input, const char *expected) {
  istringstream in(input);
  ostringstream out;

  MissingNumber::solve(in, out);

  EXPECT_EQ(expected, out.str());
}

TEST(MissingNumberTest, Example1) { TEST_IO("5 2 3 1 5", "4\n"); }

TEST(MissingNumberTest, Example2) { TEST_IO("10 3 1 2 5 4 6 7 9 10", "8\n"); }

TEST(MissingNumberTest, Example4) { TEST_IO("2 1", "2\n"); }

TEST(MissingNumberTest, Example5) { TEST_IO("2 2", "1\n"); }
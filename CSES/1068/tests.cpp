#include "solution.hpp"
#include <gtest/gtest.h>

static void TEST_IO(const char *input, const char *expected) {
  istringstream in(input);
  ostringstream out;

  WeirdAlgorithm::solve(in, out);

  EXPECT_EQ(expected, out.str());
}

TEST(WeirdAlgorithmTest, Example1) { TEST_IO("3", "3 10 5 16 8 4 2 1\n"); }

TEST(WeirdAlgorithmTest, Example2) { TEST_IO("8", "8 4 2 1\n"); }

TEST(WeirdAlgorithmTest, Example3) { TEST_IO("6", "6 3 10 5 16 8 4 2 1\n"); }

TEST(WeirdAlgorithmTest, Example4) { TEST_IO("1", "1\n"); }
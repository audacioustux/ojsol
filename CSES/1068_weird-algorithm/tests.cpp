#include "solution.hpp"
#include <gtest/gtest.h>

TEST(WeirdAlgorithmTest, Example1) {
  auto input = "3";
  auto expected = "3 10 5 16 8 4 2 1\n";

  istringstream cin(input);
  ostringstream cout;

  Solution s(cin, cout);

  EXPECT_EQ(expected, cout.str());
}

TEST(WeirdAlgorithmTest, Example2) {
  auto input = "5";
  auto expected = "5 16 8 4 2 1\n";

  istringstream cin(input);
  ostringstream cout;

  Solution s(cin, cout);

  EXPECT_EQ(expected, cout.str());
}

TEST(WeirdAlgorithmTest, Example3) {
  auto input = "7";
  auto expected = "7 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1\n";

  istringstream cin(input);
  ostringstream cout;

  Solution s(cin, cout);

  EXPECT_EQ(expected, cout.str());
}

#include "solution.hpp"
#include <gtest/gtest.h>

static ostringstream TEST_IO(string input) {
  istringstream in(input);
  ostringstream out;

  TwoSets::solve(in, out);

  return out;
}
[[maybe_unused]] static void TEST_IO(string input, string expected) {
  EXPECT_EQ(expected, TEST_IO(input).str());
}

void check_two_sets(int n) {
  stringstream out(TEST_IO(to_string(n)).str());

  string verdict;
  out >> verdict;
  EXPECT_EQ("YES", verdict);

  int x;
  out >> x;
  vector<int> a(x);
  for (int i = 0; i < x; i++) {
    out >> a[i];
  }

  out >> x;
  vector<int> b(x);
  for (int i = 0; i < x; i++) {
    out >> b[i];
  }

  int sum_a = accumulate(a.begin(), a.end(), 0);
  int sum_b = accumulate(b.begin(), b.end(), 0);

  int expected_sum = (1 + n) * n / 2;
  EXPECT_EQ(expected_sum, sum_a + sum_b);

  EXPECT_EQ(sum_a, sum_b);
}
TEST(TwoSetsTest, Example1) { check_two_sets(7); }
TEST(TwoSetsTest, Example2) { check_two_sets(4); }
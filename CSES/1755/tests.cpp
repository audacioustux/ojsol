#include "solution.hpp"
#include <gtest/gtest.h>

static ostringstream TEST_IO(const char *input) {
  istringstream in(input);
  ostringstream out;

  PalindromeReorder::solve(in, out);

  return out;
}
[[maybe_unused]] static void TEST_IO(const char *input, const char *expected) {
  EXPECT_EQ(expected, TEST_IO(input).str());
}

static bool isPalindrome(const string &s) {
  int n = s.size();
  for (int i = 0; i < n / 2; i++) {
    if (s[i] != s[n - i - 1])
      return false;
  }
  return true;
}

TEST(PalindromeReorderTest, Example1) {
  stringstream out(TEST_IO(R"(AAAACACBA)").str());

  string s;
  out >> s;

  EXPECT_TRUE(isPalindrome(s));
}

TEST(PalindromeReorderTest, Example2) {
  stringstream out(TEST_IO(R"(AADDDCC)").str());

  string s;
  out >> s;

  EXPECT_TRUE(isPalindrome(s));
}
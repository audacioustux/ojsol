#include "solution.hpp"
#include <gtest/gtest.h>

static ostringstream TEST_IO(const char *input) {
  istringstream in(input);
  ostringstream out;

  auto solution = new CreatingStrings(in, out);
  solution->solve();

  return out;
}
[[maybe_unused]] static void TEST_IO(const char *input, const char *expected) {
  EXPECT_EQ(expected, TEST_IO(input).str());
}

TEST(CreatingStringsTest, Example1) {
  auto output = TEST_IO("aabac");
  stringstream out(output.str());

  int n;
  out >> n;
  EXPECT_EQ(20, n);

  while (n--) {
    string s;
    out >> s;

    EXPECT_EQ(5, s.size());

    EXPECT_TRUE(is_permutation(s.begin(), s.end(), "aabac"));
  }
}
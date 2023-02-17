#include "solution.hpp"
#include <gtest/gtest.h>

static ostringstream TEST_IO(const char *input) {
  istringstream in(input);
  ostringstream out;

  auto solution = new TowerOfHanoi(in, out);
  solution->solve();

  return out;
}
[[maybe_unused]] static void TEST_IO(const char *input, const char *expected) {
  EXPECT_EQ(expected, TEST_IO(input).str());
}

TEST(TowerOfHanoiTest, Example1) {
  TEST_IO("2", R"(3
1 2
1 3
2 3
)");
}
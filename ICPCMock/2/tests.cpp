#include "solution.hpp"
#include <gtest/gtest.h>

static void TEST_IO(const char *input, const char *expected) {
  istringstream in(input);
  ostringstream out;

  B::solve(in, out);

  EXPECT_EQ(expected, out.str());
}

TEST(BTest, Example1) {
  TEST_IO("3 100 7 10 300 20 15 500 50 20",
          R"(Case 1: Yes
Case 2: Yes
Case 3: No
)");
}
#include "solution.hpp"
#include <gtest/gtest.h>

TEST(GreatestCommonDivisorOfStringsTest, Example1) {
  Solution s;
  string str1 = "ABCABC";
  string str2 = "ABC";
  string expected = "ABC";
  EXPECT_EQ(expected, s.gcdOfStrings(str1, str2));
}

TEST(GreatestCommonDivisorOfStringsTest, Example2) {
  Solution s;
  string str1 = "ABABAB";
  string str2 = "ABAB";
  string expected = "AB";
  EXPECT_EQ(expected, s.gcdOfStrings(str1, str2));
}

TEST(GreatestCommonDivisorOfStringsTest, Example3) {
  Solution s;
  string str1 = "LEET";
  string str2 = "CODE";
  string expected = "";
  EXPECT_EQ(expected, s.gcdOfStrings(str1, str2));
}

TEST(GreatestCommonDivisorOfStringsTest, Example4) {
  Solution s;
  string str1 = "ABCDEF";
  string str2 = "ABC";
  string expected = "";
  EXPECT_EQ(expected, s.gcdOfStrings(str1, str2));
}
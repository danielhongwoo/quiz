#include <gtest/gtest.h>

#include "generator.h"

GTEST_TEST(GetDigitCount, basic) {
  EXPECT_EQ(0, GetDigitCount(0));
  EXPECT_EQ(1, GetDigitCount(1));
  EXPECT_EQ(2, GetDigitCount(10));
  EXPECT_EQ(2, GetDigitCount(99));
}

GTEST_TEST(GetDigitSum, basic) {
  EXPECT_EQ(0, GetDigitSum(0));
  EXPECT_EQ(2, GetDigitSum(1));
  EXPECT_EQ(4, GetDigitSum(2));
  EXPECT_EQ(13, GetDigitSum(11));
  EXPECT_EQ(256, GetDigitSum(245));
}

GTEST_TEST(IsDigitSum, basic) {
  EXPECT_EQ(true, IsDigitSum(13, 11));
}

GTEST_TEST(generator, basic) {
  EXPECT_EQ(0, GetSmallestGenerator(0));
  EXPECT_EQ(11, GetSmallestGenerator(13));
  EXPECT_EQ(198, GetSmallestGenerator(216));
  EXPECT_EQ(245, GetSmallestGenerator(256));
}

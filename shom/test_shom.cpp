#include <gtest/gtest.h>

#include "shom.h"

GTEST_TEST(IsSignIncluded, basic) {
  EXPECT_EQ(false, IsSignIncluded(1));
  EXPECT_EQ(false, IsSignIncluded(665));

  EXPECT_EQ(true, IsSignIncluded(666));
  EXPECT_EQ(true, IsSignIncluded(1666));
}

GTEST_TEST(IsSignIncludedFast, basic) {
  EXPECT_EQ(false, IsSignIncludedFast(1));
  EXPECT_EQ(false, IsSignIncluded(665));

  EXPECT_EQ(true, IsSignIncludedFast(666));
  EXPECT_EQ(true, IsSignIncludedFast(1666));
}

GTEST_TEST(Basic, basic) {
  EXPECT_EQ(666u, GetNthTitle(1));
  EXPECT_EQ(1666u, GetNthTitle(2));
  EXPECT_EQ(2666u, GetNthTitle(3));
  EXPECT_EQ(3666u, GetNthTitle(4));
  EXPECT_EQ(4666u, GetNthTitle(5));
  EXPECT_EQ(5666u, GetNthTitle(6));
  EXPECT_EQ(6660u, GetNthTitle(7));
  EXPECT_EQ(6661u, GetNthTitle(8));
  EXPECT_EQ(6662u, GetNthTitle(9));
  EXPECT_EQ(6663u, GetNthTitle(10));
  EXPECT_EQ(6664u, GetNthTitle(11));
  EXPECT_EQ(6665u, GetNthTitle(12));
  EXPECT_EQ(6666u, GetNthTitle(13));
}


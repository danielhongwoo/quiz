#include <gtest/gtest.h>

#include "coins.h"

GTEST_TEST(One, basic) {
  EXPECT_EQ(1, GetMinCount({1}, 1));
  EXPECT_EQ(1, GetMinCount({2}, 2));
  EXPECT_EQ(1, GetMinCount({4}, 4));

  EXPECT_EQ(-1, GetMinCount({3}, 1));
  EXPECT_EQ(-1, GetMinCount({3}, 2));
  EXPECT_EQ(-1, GetMinCount({3}, 4));
}

GTEST_TEST(Two, basic) {
  EXPECT_EQ(1, GetMinCount({1, 2}, 1));
  EXPECT_EQ(1, GetMinCount({2, 3}, 2));
  EXPECT_EQ(1, GetMinCount({2, 4}, 4));

  EXPECT_EQ(2, GetMinCount({1, 2}, 3));
  EXPECT_EQ(2, GetMinCount({1, 2}, 4));
  EXPECT_EQ(3, GetMinCount({1, 2}, 5));
  EXPECT_EQ(2, GetMinCount({2, 3}, 5));
  EXPECT_EQ(1, GetMinCount({2, 4}, 4));
}

GTEST_TEST(Three, basic) {
  EXPECT_EQ(4, GetMinCount({1, 2, 3}, 11));
  EXPECT_EQ(6, GetMinCount({2, 3, 7}, 29));
  EXPECT_EQ(5, GetMinCount({2, 4, 11}, 41));
  EXPECT_EQ(5, GetMinCount({3, 4, 11}, 41));

  EXPECT_EQ(-1, GetMinCount({17, 19, 29}, 59));
}

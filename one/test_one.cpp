#include <gtest/gtest.h>

#include "one.h"

GTEST_TEST(Basic, basic) {
  EXPECT_EQ(0, GetOpCount(1));
  EXPECT_EQ(1, GetOpCount(2));
  EXPECT_EQ(1, GetOpCount(3));
  EXPECT_EQ(1, GetOpCount(5));
  EXPECT_EQ(2, GetOpCount(6));
  EXPECT_EQ(3, GetOpCount(26));
  EXPECT_EQ(3, GetOpCount(27));
  EXPECT_EQ(4, GetOpCount(28));
  EXPECT_EQ(8, GetOpCount(30000));
}


#include <gtest/gtest.h>

#include "ants.h"

GTEST_TEST(Basic, basic) {
  EXPECT_EQ(1, GetMaxFoot({1}));
  EXPECT_EQ(2, GetMaxFoot({1, 2}));
  EXPECT_EQ(3, GetMaxFoot({3, 2}));
  EXPECT_EQ(8, GetMaxFoot({1, 3, 1, 5}));
  EXPECT_EQ(13, GetMaxFoot({1, 3, 1, 5, 8, 4, 2}));
}

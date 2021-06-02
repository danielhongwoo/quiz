#include <gtest/gtest.h>

#include "reservation.h"

GTEST_TEST(Basic, basic) {
  auto confs = Conferences {
    {1, 4},
    {3, 5},
    {0, 6},
    {5, 7},
    {3, 8},
    {5, 9},
    {6, 10},
    {8, 11},
    {8, 12},
    {2, 13},
    {12, 14},
  };

  EXPECT_EQ(4, GetMaximizedNumberOfConferences(std::move(confs)));
}

GTEST_TEST(Basic, smallest) {
  auto confs = Conferences {
    {1, 1},
  };

  EXPECT_EQ(1, GetMaximizedNumberOfConferences(std::move(confs)));
}

GTEST_TEST(Basic, overlapped) {
  auto confs = Conferences {
    {0, 1},
    {1, 1},
    {1, 1},
    {1, 1},
    {1, 1},
    {1, 2},
  };

  EXPECT_EQ(6, GetMaximizedNumberOfConferences(std::move(confs)));
}

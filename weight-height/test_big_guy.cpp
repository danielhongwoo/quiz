#include <gtest/gtest.h>

#include "big_guy.h"

GTEST_TEST(One, basic) {
  Guy wh(1, 2, 1);
  GuyList list = { wh };
  EXPECT_EQ(std::vector<int>{1}, CalcOrder(list));
}

GTEST_TEST(Two, basic) {
  Guy wh1(1, 2, 1);
  Guy wh2(2, 3, 2);
  GuyList list = { wh1, wh2 };
  auto expected = std::vector<int> { 2, 1 };
  EXPECT_EQ(expected, CalcOrder(list));
}

GTEST_TEST(TwoReverse, basic) {
  Guy wh1(2, 3, 1);
  Guy wh2(1, 2, 2);
  GuyList list = { wh1, wh2 };
  auto expected = std::vector<int> { 1, 2 };
  EXPECT_EQ(expected, CalcOrder(list));
}

GTEST_TEST(Three, basic) {
  Guy wh1(3, 4, 1);
  Guy wh2(2, 3, 2);
  Guy wh3(1, 2, 3);
  GuyList list = { wh1, wh2, wh3 };
  auto expected = std::vector<int> { 1, 2, 3 };
  EXPECT_EQ(expected, CalcOrder(list));
}

GTEST_TEST(TwoSame, basic) {
  Guy wh1(1, 2, 1);
  Guy wh2(1, 2, 1);
  GuyList list = { wh1, wh2 };
  auto expected = std::vector<int> { 1, 1 };
  EXPECT_EQ(expected, CalcOrder(list));
}

GTEST_TEST(Five, basic) {
  Guy wh1(3, 4, 1);
  Guy wh2(2, 3, 2);
  Guy wh3(1, 2, 3);
  Guy wh4(2, 3, 4);
  Guy wh5(1, 2, 5);
  GuyList list = { wh1, wh2, wh3, wh4, wh5 };
  auto expected = std::vector<int> { 1, 2, 3, 2, 3 };
  EXPECT_EQ(expected, CalcOrder(list));
}

GTEST_TEST(Five2, basic) {
  Guy wh1(3, 4, 1);
  Guy wh2(2, 3, 2);
  Guy wh3(1, 2, 3);
  Guy wh4(2, 3, 4);
  Guy wh5(5, 3, 5);
  GuyList list = { wh1, wh2, wh3, wh4, wh5 };
  auto expected = std::vector<int> { 1, 2, 3, 2, 3 };
  EXPECT_EQ(expected, CalcOrder(list));
}

GTEST_TEST(FiveSame, basic) {
  Guy wh1(3, 4, 1);
  Guy wh2(3, 4, 2);
  Guy wh3(3, 4, 3);
  Guy wh4(3, 4, 4);
  Guy wh5(3, 4, 5);
  GuyList list = { wh1, wh2, wh3, wh4, wh5 };
  auto expected = std::vector<int> { 1, 1, 1, 1, 1 };
  EXPECT_EQ(expected, CalcOrder(list));
}

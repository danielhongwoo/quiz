#include "generator.h"

#include <iostream>
#include <limits>
#include <vector>

int GetDigitCount(int number) {
  int count = 0;
  while(number != 0) {
    number = number / 10;
    count++;
  }
  return count;
}

int GetDigitSum(int number) {
  const int origin = number;
  int sum = 0;
  while(number != 0) {
    int remain = number % 10;
    number = number / 10;
    sum += remain;
  }
  return sum + origin;
}

bool IsDigitSum(int number, int candidate) {
  return number == GetDigitSum(candidate);
}

constexpr int IntMax = 0x7fffffff;

int GetSmallestGenerator(int n) {
  int smallest = IntMax;
  int count = GetDigitCount(n);
  for (auto i = n - count * 9; i < n; ++i) {
    if (IsDigitSum(n, i)) {
      smallest = std::min(smallest, i);
    }
  }

  if (smallest == IntMax) {
    smallest = 0;
  }
  return smallest;
}


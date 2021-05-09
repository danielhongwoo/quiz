#include "one.h"

#include <algorithm>
#include <map>

bool IsDevidable(int num, int denom) {
  return num % denom == 0;
}

std::map<int, int> m = {{1, 0}, {2, 1}, {3, 1}, {5, 1}};

int GetOpCount(int num) {
  if (m.find(num) != m.end()) {
    return m.at(num);
  }

  auto minus = GetOpCount(num - 1);
  int div = 1000000;
  if (IsDevidable(num, 5)) {
    div = GetOpCount(num / 5);
  } else if (IsDevidable(num, 3)) {
    div = GetOpCount(num / 3);
  } else if (IsDevidable(num, 2)) {
    div = GetOpCount(num / 2);
  }
  auto count = std::min(minus, div) + 1;
  m[num] = count;
  return count;
}

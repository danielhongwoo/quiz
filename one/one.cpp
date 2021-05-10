#include "one.h"

#include <algorithm>
#include <map>

bool IsDevidable(int num, int denom) {
  return num % denom == 0;
}

int GetOpCount(int num) {
  std::map<int, int> m = {{1, 0}, {2, 1}, {3, 1}, {5, 1}};
  for (int i = 2; i <= num; i++) {
    m[i] = m[i-1] + 1;
    if (IsDevidable(i, 5)) {
      m[i] = std::min(m[i], m[i/5] + 1);
    } else if (IsDevidable(i, 3)) {
      m[i] = std::min(m[i], m[i/3] + 1);
    } else if (IsDevidable(i, 2)) {
      m[i] = std::min(m[i], m[i/2] + 1);
    }
  }
  return m[num];
}

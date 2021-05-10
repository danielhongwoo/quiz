#include "coins.h"
#include <limits>

int GetMinCount(const Units& units, const int target) {
  const int count = units.size();
  constexpr auto infinite = std::numeric_limits<int>::max();
  std::vector<int> m(target+1, infinite);

  m[0] = 0;
  for (int i = 0; i < count; ++i) {
    auto unit = units[i];
    for (int j = unit; j <= target; ++j) {
      if (m[j - unit] != infinite) {
        m[j] = std::min(m[j], m[j-unit] + 1);
      }
    }
  }
  return (m[target] == infinite)? -1 : m[target];
}

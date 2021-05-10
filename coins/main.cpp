#include <iostream>
#include <algorithm>

#include "coins.h"

int main(int, char**) {
  int count = 0;
  int target = 0;

  Units units;
  std::cin >> count >> target;
  for (int i = 0; i < count; ++i) {
    int unit = 0;
    std::cin >> unit;
    units.push_back(unit);
  }

  std::cout << GetMinCount(units, target) << std::endl;
  return 0;
}

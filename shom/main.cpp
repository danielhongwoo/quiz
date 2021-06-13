#include <iostream>
#include <algorithm>

#include "shom.h"

int main(int, char**) {
  unsigned int n = 0;
  std::cin >> n;

  std::cout << GetNthTitle(n) << std::endl;
  return 0;
}

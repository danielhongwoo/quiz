#include <iostream>
#include <algorithm>

#include "one.h"

int main(int, char**) {
  int num = 0;
  std::cin >> num;
  std::cout << GetOpCount(num) << std::endl;

  return 0;
}

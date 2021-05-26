#include "shom.h"
#include <iostream>
#include <string>

bool IsSignIncluded(unsigned int n) {
  auto str = std::to_string(n);
  auto found = (str.find("666") != std::string::npos);
  return found;
}

bool IsSignIncludedFast(unsigned int n) {
  while (true) {
    if (n < 666) {
      return false;
    }
    if (n % 1000 == 666) {
      return true;
    }
    n = n / 10;
  }
  return false;
}

unsigned int GetNthTitle(unsigned int n) {
  n--;

  auto title = 666u;
  while (n > 0) {
    if (IsSignIncluded(++title)) {
      n--;
    }
  }

  return title;
}

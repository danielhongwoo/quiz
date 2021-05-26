#include "shom.h"
#include <iostream>
#include <string>

bool IsSignIncluded(unsigned int n) {
  auto str = std::to_string(n);
  auto found = (str.find("666") != std::string::npos);
  return found;
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

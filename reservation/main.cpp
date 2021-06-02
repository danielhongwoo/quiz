#include <iostream>
#include <algorithm>

#include "reservation.h"

int main(int, char**) {
  int count = 0;
  std::cin >> count;

  Conferences confs;
  for (int i = 0; i < count; ++i) {
    int a, b;
    std::cin >> a >> b;
    confs.push_back(std::make_pair(a, b));
  }

  std::cout << GetMaximizedNumberOfConferences(std::move(confs));

  return 0;
}

#include <iostream>
#include <algorithm>

#include "big_guy.h"

int main(int, char**) {

  int count;
  std::cin >> count;

  GuyList guyList;
  for (auto i = 0; i < count; ++i) {
    int w, h;
    std::cin >> w >> h;
    guyList.push_back(Guy(w, h, i));
  }

  auto result = CalcOrder(guyList);
  
  std::for_each(result.begin(), result.end(), [] (const int& order) {
      std::cout << order << " " << std::endl;
      });
  return 0;
}

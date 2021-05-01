#include "generator.h"

#include <iostream>

int main(int argc, char** argv) {
  int number = 0;
  std::cin >> number;
  auto g = GetSmallestGenerator(number);
  std::cout << g << std::endl;

  return 0;
}


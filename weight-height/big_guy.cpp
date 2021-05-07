#include "big_guy.h"

#include <algorithm>
#include <iostream>

bool IsBigger(const Guy& left, const Guy& right) {
  return left.w_ > right.w_ && left.h_ > right.h_;
}

std::vector<int> CalcOrder(GuyList& list) {
  std::sort(list.begin(), list.end(), IsBigger);
  std::for_each(list.begin(), list.end(), [&] (const Guy& wh) {
      std::cout << "(" << wh.i_ << ", " << wh.order_ << ") ";
      });
  std::cout << std::endl;

  auto count = list.size();
  list[0].order_ = 1;
  auto prev = list[0];

  for (auto i = 1ul; i < count; ++i) {
    if (IsBigger(prev, list[i])) {
      list[i].order_ = prev.order_ + 1;
    } else {
      list[i].order_ = prev.order_;
    }
    prev = list[i];
  }

  std::sort(list.begin(), list.end(), [] (const Guy& left, const Guy& right) {
        return left.i_ < right.i_;
      });

  std::vector<int> result;
  std::for_each(list.begin(), list.end(), [&] (const Guy& wh) {
    result.push_back(wh.order_);
      });
  return result;
}

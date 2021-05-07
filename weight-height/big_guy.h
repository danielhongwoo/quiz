#ifndef _BIG_GUY_H_
#define _BIG_GUY_H_

#include <vector>

struct Guy {
  Guy(int w, int h, int i) : w_(w), h_(h), i_(i) {}
  int w_;
  int h_;
  int i_;
  int order_ = -1;
};

using GuyList = std::vector<Guy>;

std::vector<int> CalcOrder(GuyList& list);

#endif // end of _BIG_GUY_H_

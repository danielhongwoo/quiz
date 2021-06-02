#include "reservation.h"

#include <algorithm>
#include <iostream>

int GetMaximizedNumberOfConferences(Conferences&& confs) {
  std::sort(confs.begin(), confs.end(), [] (const Conference& a, const Conference& b) {
      if (a.second == b.second) {
        return a.first < b.first;
      }
      return a.second < b.second;
    });

  // std::for_each(confs.begin(), confs.end(), [] (const Conference& conf) {
  //     std::cout << conf.first << " " << conf.second << std::endl;
  //   });

  int last_finished = 0;
  int count = 0;

  std::for_each(
      confs.begin(),
      confs.end(),
      [&] (const Conference& c) {
        if (last_finished <= c.first) {
          count++;
          last_finished = c.second;
        }
      });
  return count;
}


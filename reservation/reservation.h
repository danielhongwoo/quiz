#ifndef _RESERVATION_H_
#define _RESERVATION_H_

#include <vector>

using Conference = std::pair<int, int>;
using Conferences = std::vector<Conference>;

int GetMaximizedNumberOfConferences(Conferences&& confs);

#endif // end of _RESERVATION_H_

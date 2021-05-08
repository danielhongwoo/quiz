#include "ants.h"

/*
 * F(n) is a function returning maximized food at the point of n of array A
 *
 * F(0) = A[0]
 * F(1) = max(A[0], A[1])
 * ...
 * F(n) = max(F(n-2) + A[n], F(n - 1))
 */

int GetMaxFoot(const std::vector<int>& storage_list) {
  auto size = storage_list.size();
  std::vector<int> solution(size);

  solution[0] = storage_list[0];

  if (size == 1) {
    return solution[0];
  }
  solution[1] = std::max(solution[0], storage_list[1]);
  if (size == 2) {
    return solution[1];
  }

  for (auto i = 2ul; i < size; ++i) {
    solution[i] = std::max(solution[i - 2] + storage_list[i], solution[i - 1]);
  }

  return solution[size - 1];
}

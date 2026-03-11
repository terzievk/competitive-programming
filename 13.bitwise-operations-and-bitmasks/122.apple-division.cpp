/* copyright
   Source:
   https://cses.fi/problemset/task/1623

   I was using abs(static_cast<int>(sum))
   and had some undefined behavior that ran
   on the judge system differently than mine
   anyways...
 */
#include <bits/stdc++.h>

int main() {
  // std::ios_base::sync_with_stdio(false);
  // std::cin.tie(NULL);

  int64_t n;
  std::cin >> n;
  int64_t a[20];

  for (int64_t i{}; i < n; ++i) {
    std::cin >> a[i];
  }

  int64_t min{1000*1000*1000};
  for (int64_t i{}; i < (1ll << n); ++i) {
    int64_t sum{};
    for (int64_t j{}; j < n; ++j) {
      // std::cout << "i: " << i << std::endl;
      // std::cout << "j: " << j << std::endl;
      // std::cout << "1<<j: " << (1 << j) << std::endl;
      // std::cout << "ij: " << (i & (1 << j)) << std::endl;
      if (i & (1ll << j)) {
        sum += a[j];
      } else {
        sum -= a[j];
      }
    }
    if (sum < 0) {
      sum *= -1;
    }
    if (sum < min) {
      min = sum;
    }
  }

  std::cout << min << '\n';
  return 0;
}

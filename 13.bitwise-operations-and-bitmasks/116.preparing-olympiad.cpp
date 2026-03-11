/* copyright
   Source:
   https://codeforces.com/problemset/problem/550/B
 */
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  uint64_t l, r, x;
  std::cin >> n >> l >> r >> x;

  uint64_t c[15];

  for (int i{}; i < n; ++i) {
    std::cin >> c[i];
  }

  int count{};
  for (uint64_t i{}; i < (1ull << n); ++i) {
    uint64_t sum{};
    uint64_t min{1000*1000*1000};
    uint64_t max{0};
    for (int j{}; j < n; ++j) {
      if (i & (1 << j)) {
        sum += c[j];

        if (c[j] < min) {
          min = c[j];
        }

        if (c[j] > max) {
          max = c[j];
        }
      }
    }

    if (sum >= l && sum <= r && (max - min >= x)) {
      ++count;
    }
  }

  std::cout << count << '\n';

  return 0;
}

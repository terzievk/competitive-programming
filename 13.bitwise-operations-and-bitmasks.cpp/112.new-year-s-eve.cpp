/* copyright
   Source:
   https://codeforces.com/problemset/problem/912/B
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  uint64_t n, k;
  std::cin >> n >> k;

  if (k >= 2) {
    uint64_t count{};
    while (n) {
      n >>= 1;
      ++count;
    }

    std::cout << (1ull << count) - 1 << '\n';

    return 0;
  }

  // uint64_t count{};
  // while (n) {
  //   count += n & 1;
  //   n >>= 1;
  // }

  std::cout << n << '\n';
  return 0;
}

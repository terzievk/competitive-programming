/* copyright
   Source:
   https://vjudge.net/problem/HackerRank-30-bitwise-and
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int t;
  std::cin >> t;

  for (int i{}; i < t; ++i) {
    int n, k;
    std::cin >> n >> k;

    int max{};
    for (int i{1}; i <= n; ++i) {
      for (int j{i + 1}; j <= n; ++j) {
        int x{i & j};
        if (x > max && x < k) {
          max = x;
        }
      }
    }
    std::cout << max << '\n';
  }

  return 0;
}

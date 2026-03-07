/* copyright
   Source:
   https://vjudge.net/problem/HackerRank-maximizing-xor
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int l, r;
  std::cin >> l >> r;

  int max{};
  for (int i{l}; i <= r; ++i) {
    for (int j{l}; j <= r; ++j) {
      int x{i ^ j};
      if (x > max) {
        max = x;
      }
    }
  }

  std::cout << max << '\n';
  return 0;
}

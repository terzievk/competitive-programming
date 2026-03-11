/* copyright
   Source:
   https://vjudge.net/problem/HackerRank-flipping-bits
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int t;
  std::cin >> t;

  for(int i{}; i < t; ++i) {
    uint32_t x;
    std::cin >> x;

    uint32_t y{(1ull << 32) - 1};

    std::cout << y - x << '\n';
  }
  return 0;
}

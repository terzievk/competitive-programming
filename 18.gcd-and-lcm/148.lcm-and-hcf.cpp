/* copyright
   Source:
   https://vjudge.net/problem/HackerRank-si-lcm-and-hcf
 */
#include <bits/stdc++.h>

int64_t gcd(int64_t a, int64_t b) {
  while (b) {
    a %= b;
    std::swap(a, b);
  }
  return a;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int64_t t;
  std::cin >> t;
  for (int64_t i{}; i < t; ++i) {
    int64_t a, b;
    std::cin >> a >> b;
    int64_t d{gcd(a, b)};
    std::cout << a * b / d << ' ' << d << '\n';
  }

  return 0;
}

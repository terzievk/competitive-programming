/* copyright
   Source:
   https://codeforces.com/contest/2125/problem/B
 */
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int64_t t;
  std::cin >> t;
  for (int64_t i{}; i < t; ++i) {
    int64_t a, b, k;
    std::cin >> a >> b >> k;

    if (b < a) {
      std::swap(a, b);
    }

    int64_t d{std::gcd(a, b)};
    int64_t x{a / d};
    int64_t y{b / d};

    if (x <= k && y <= k) {
      std::cout << "1\n";
    } else {
      std::cout << "2\n";
    }
  }
  return 0;
}

/* copyright
   Source:
   https://codeforces.com/contest/1916/problem/B
 */
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int64_t t;
  std::cin >> t;

  for (int64_t i{}; i < t; ++i) {
    int64_t a, b;
    std::cin >> a >> b;
    if (b % a) {
      int64_t lcm{a * b / std::gcd(a, b)};
      std::cout << lcm << '\n';
    } else {
      std::cout << b * b / a << '\n';
    }
  }
  return 0;
}

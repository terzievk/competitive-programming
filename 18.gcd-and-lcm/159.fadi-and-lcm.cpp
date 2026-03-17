/* copyright
   Source:
   https://codeforces.com/problemset/problem/1285/C
 */
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int64_t n;
  std::cin >> n;

  int64_t a{1};
  int64_t b{n};
  for (int64_t i{1}; i * i <= n; ++i) {
    if (n % i == 0) {
      if (std::gcd(i, n/i) == 1 && std::max(i, n/i) < std::max(a, b)) {
        a = i;
        b = n/i;
      }
    }
  }

  std::cout << a << ' ' << b << '\n';

  return 0;
}

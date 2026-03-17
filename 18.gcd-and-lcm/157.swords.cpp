/* copyright
   Source:
   https://codeforces.com/problemset/problem/1216/D
 */
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int64_t n;
  std::cin >> n;

  int64_t a[200*1000];

  int64_t max{-1};
  for (int64_t i{}; i < n; ++i) {
    std::cin >> a[i];
    if (a[i] > max) {
      max = a[i];
    }
  }

  int64_t d{};
  for (int64_t i{}; i < n; ++i) {
    d = std::gcd(d, max - a[i]);
  }

  int64_t count{};
  for (int64_t i{}; i < n; ++i) {
    count += (max - a[i]) / d;
  }

  std::cout << count << ' ' << d << '\n';
  return 0;
}

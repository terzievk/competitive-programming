/* copyright
   Source:
   https://codeforces.com/problemset/problem/1543/A
 */
#include <bits/stdc++.h>

void solve() {
  int64_t a, b;
  std::cin >> a >> b;

  if (a == b) {
    std::cout << "0 0\n";
    return;
  }

  int64_t d{a - b};
  if (d < 0) {
    d = -d;
  }

  // hot af
  if (a % d <= d / 2) {
    std::cout << d << ' ' << a % d << '\n';
  } else {
    std::cout << d << ' ' << d - a % d << '\n';
  }
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int64_t t;
  std::cin >> t;

  for (int64_t i{}; i < t; ++i) {
    solve();
  }

  return 0;
}

/* copyright
   Source:
   https://codeforces.com/problemset/problem/2124/C
 */
#include <bits/stdc++.h>

int64_t a[600*1000];

void solve() {
  int n;
  std::cin >> n;

  if (n == 1) {
    int x;
    std::cin >> x;

    std::cout << "1\n";
    return;
  }

  for (int i{}; i < n; ++i) {
    std::cin >> a[i];
  }

  int64_t d{};

  for (int i{}; i < n; ++i) {
    while (a[i] == 1) {
      ++i;
      if (i == n) {
        std::cout << "1\n";

        return;
      }
    }
    d = std::gcd(d, a[i]);

    if (d == 1) {
      std::exit(EXIT_FAILURE);
    }
  }

  std::cout << d << std::endl;
}


int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int t;
  std::cin >> t;
  for (int i{}; i < t; ++i) {
    solve();
  }

  return 0;
}

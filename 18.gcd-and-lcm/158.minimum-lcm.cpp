/* copyright
   Source:
   https://codeforces.com/problemset/problem/1765/M
 */
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int t;
  std::cin >> t;

  for (int i{}; i < t; ++i) {
    int n;
    std::cin >> n;

    int x{1};
    for (int i{2}; i * i <= n; ++i) {
      if (n % i == 0) {
        x = n / i;
        break;
      }
    }

    std::cout << x << ' ' << n - x << '\n';
  }

  return 0;
}

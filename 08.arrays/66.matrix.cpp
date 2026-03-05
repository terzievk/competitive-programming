/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  int m{};
  int s{};
  for (int i{}; i < n; ++i) {
    for (int j{}; j < n; ++j) {
      int x;
      std::cin >> x;

      if (i == j) {
        m += x;
      }

      if (i + j == n - 1) {
        s += x;
      }
    }
  }

  std::cout << abs(m - s) << '\n';

  return 0;
}

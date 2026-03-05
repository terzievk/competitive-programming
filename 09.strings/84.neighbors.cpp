/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/X
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n, m;
  std::cin >> n >> m;

  char a[100][100];

  for (int i{}; i < n; ++i) {
    for (int j{}; j < m; ++j) {
      std::cin >> a[i][j];
    }
  }

  int x, y;
  std::cin >> x >> y;

  // count from 0
  --x;
  --y;

  for (int i{x-1}; i <= x + 1; ++i) {
    for (int j{y-1}; j <= y + 1; ++j) {
      if (i != x && j != y
          && i >= 0 && j >= 0
          && i <= n && j <= m) {
        if (a[i][j] != 'x') {
          std::cout << "no\n";

          return 0;
        }
      }
    }
  }

  std::cout << "yes\n";
  return 0;
}

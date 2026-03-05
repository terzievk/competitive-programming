/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n, m;
  std::cin >> n >> m;
  int a[100][100];

  for (int i{}; i < n; ++i) {
    for (int j{}; j < m; ++j) {
      std::cin >> a[i][j];
    }
  }

  for (int i{}; i < n; ++i) {
    for (int j{}; j < m; ++j) {
      std::cout << a[i][m - j - 1] << ' ';
    }
    std::cout << '\n';
  }

  return 0;
}

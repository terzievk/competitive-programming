/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/U
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n, m;
  std::cin >> n >> m;

  int a[10*1000];
  for (int i{}; i < n; ++i) {
    std::cin >> a[i];
  }

  int cur{};
  for (int i{}; i < m; ++i) {
    int x;
    std::cin >> x;
    while (x != a[cur]) {
      if (cur >= n) {
        std::cout << "NO\n";

        return 0;
      }

      ++cur;
    }

    // count the one found too
    ++cur;
  }

  std::cout << "YES\n";
  return 0;
}

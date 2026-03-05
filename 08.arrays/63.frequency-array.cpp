/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n, m;
  std::cin >> n >> m;

  int a[100*1000] {};

  for (int i{}; i < n; ++i) {
    int x;
    std::cin >> x;

    ++a[x-1];
  }

  for (int i{}; i < m; ++i) {
    std::cout << a[i] << '\n';
  }

  return 0;
}

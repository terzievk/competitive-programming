/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n, m;
  std::cin >> n >> m;
  int a[100*100];

  for (int i{}; i < n * m; ++i) {
    std::cin >> a[i];
  }

  int x;
  std::cin >> x;

  for (int i{}; i < n * m; ++i) {
    if (a[i] == x) {
      std::cout << "will not take number\n";

      return 0;
    }
  }

  std::cout << "will take number\n";

  return 0;
}

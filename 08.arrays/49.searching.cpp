/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  int a[100*1000];

  for (int i{}; i < n; ++i) {
    std::cin >> a[i];
  }

  int x;
  std::cin >> x;

  for (int i{}; i < n; ++i) {
    if (a[i] == x) {
      std::cout << i << '\n';

      return 0;
    }
  }

  std::cout << "-1\n";

  return 0;
}

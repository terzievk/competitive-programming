/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  int a[100*1000];
  std::cin >> n;

  for (int i{}; i < n; ++i) {
    std::cin >> a[i];
  }

  for (int i{}; i <= n/2; ++i) {
    if (a[i] != a[n-i-1]) {
      std::cout << "NO\n";

      return 0;
    }
  }
  std::cout << "YES\n";

  return 0;
}

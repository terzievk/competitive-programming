/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  int a[1000];
  std::cin >> n;

  for (int i{}; i < n; ++i) {
    std::cin >> a[i];
  }

  for (int i{n - 1}; i >= 0; --i) {
    std::cout << a[i] << ' ';
  }
  std::cout << '\n';

  return 0;
}

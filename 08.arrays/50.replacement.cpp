/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  for (int i{}; i < n; ++i) {
    int x;
    std::cin >> x;

    if (x > 0) {
      std::cout << 1;
    } else if (x == 0) {
      std::cout << 0;
    } else {
      std::cout << 2;
    }

    std::cout << ' ';
  }

  std::cout << '\n';

  return 0;
}

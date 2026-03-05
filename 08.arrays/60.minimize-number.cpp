/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  int a[200];

  for (int i{}; i < n; ++i) {
    std::cin >> a[i];
  }

  int min{1000000};
  for (int i{}; i < n; ++i) {
    int count{};
    int x{a[i]};

    while (x % 2 == 0) {
      ++count;
      x /= 2;
    }

    if (count < min) {
      min = count;
    }
  }

  std::cout << min << '\n';

  return 0;
}

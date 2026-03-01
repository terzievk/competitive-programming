/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int t;
  std::cin >> t;

  for (int i{}; i < t; ++i) {
    int n;
    int m;
    std::cin >> n >> m;

    if (m < n) {
      int temp{m};
      m = n;
      n = temp;
    }

    int sum{};
    for (int i{n + 1}; i < m; ++i) {
      sum += i % 2 ? i : 0;
    }

    std::cout << sum << '\n';
  }

  return 0;
}

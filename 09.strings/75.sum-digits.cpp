/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  int sum{};
  for (int i{}; i < n; ++i) {
    char c;
    std::cin >> c;

    sum += c - '0';
  }

  std::cout << sum << '\n';
  return 0;
}

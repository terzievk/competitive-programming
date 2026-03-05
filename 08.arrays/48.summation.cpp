/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  int64_t sum{};
  for (int i{};i < n; ++i) {
    int x;
    std::cin >> x;
    sum += x;
  }

  std::cout << std::abs(sum) << '\n';

  return 0;
}

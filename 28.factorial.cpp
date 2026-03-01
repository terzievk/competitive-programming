/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  //  std::cin.tie(NULL);

  int t;
  std::cin >> t;

  for (int i{}; i < t; ++i) {
    uint64_t n;
    std::cin >> n;

    uint64_t f{1};
    for (uint64_t j{2}; j <= n; ++j) {
      f *= j;
    }
    std::cout << f << '\n';
  }

  return 0;
}

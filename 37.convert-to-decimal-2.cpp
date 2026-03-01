/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int t;
  std::cin >> t;

  for (int i{}; i < t; ++i) {
    uint64_t n;
    std::cin >> n;

    int count{};
    // n is in range [0, 2^32]
    for (int j{32}; j >= 0; --j) {
      uint64_t temp{1};
      temp <<= j;

      if (n >= temp) {
        n -= temp;
        ++count;
      }
    }

    int result{};
    for (int i{}; i < count; ++i) {
      result += (1 << i);
    }

    std::cout << result << '\n';
  }


  return 0;
}

/* copyright
   Source:
   https://codeforces.com/problemset/problem/598/A
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int t;
  std::cin >> t;

  for (int i{}; i < t; ++i) {
    int64_t n;
    std::cin >> n;

    int64_t sum {n*(n+1)/2};

    int64_t sum2{};
    for (int i{1}; i <= n; i*=2) {
      sum2 += i;
    }

    std::cout << sum - 2*sum2 << '\n';
  }

  return 0;
}

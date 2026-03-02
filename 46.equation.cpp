/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F
*/
#include <bits/stdc++.h>

int64_t pow(int64_t b, int64_t e) {
  int64_t res{1};
  while (e-- > 0) {
    res *= b;
  }

  return res;
}
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int64_t x;
  int64_t n;

  std::cin >> x >> n;

  int64_t sum{};
  for (int64_t i{2}; i <= n; i += 2) {
    sum += pow(x, i);
  }

  std::cout << sum << '\n';

  return 0;
}

/* copyright
   Source:
   https://vjudge.net/problem/SPOJ-HRECURS
 */
#include <bits/stdc++.h>

int64_t sum(int64_t n) {
  if (!n) {
    return 0;
  }

  int64_t x;
  std::cin >> x;

  return x + sum(n - 1);
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int t;
  std::cin >> t;
  for (int i{}; i < t; ++i) {
    int64_t n;
    std::cin >> n;
    std::cout << "Case " << i + 1 << ": " << sum(n) << '\n';
  }

  return 0;
}

/* copyright
   Source:
   https://codeforces.com/problemset/problem/1389/A
 */
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int64_t t;
  std::cin >> t;

  for (int64_t i{}; i < t; ++i) {
    int l, r;
    std::cin >> l >> r;
    if (2 * l > r) {
      std::cout << "-1 -1\n";
    } else {
      std::cout << l << ' ' << 2 * l << '\n';
    }
  }


  return 0;
}

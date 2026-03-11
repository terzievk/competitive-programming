/* copyright
   Source:
   https://codeforces.com/problemset/problem/486/A
 */
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int64_t n;
  std::cin >> n;

  if (n & 1) {
    std::cout << n/2 - n << '\n';
  } else {
    std::cout << n/2 << '\n';
  }
  return 0;
}

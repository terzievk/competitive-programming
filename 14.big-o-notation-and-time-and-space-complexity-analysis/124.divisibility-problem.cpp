/* copyright
   Source:
   https://codeforces.com/problemset/problem/1328/A
 */
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int t;
  std::cin >> t;

  for (int i{}; i < t; ++i) {
    int a, b;
    std::cin >> a >> b;
    std::cout << ((b - (a % b)) % b) << '\n';
  }
  return 0;
}

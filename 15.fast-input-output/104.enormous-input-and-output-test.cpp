/* copyright
   Source:
   https://vjudge.net/problem/SPOJ-INOUTEST
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  for (int i{}; i < n; ++i) {
    int a, b;
    std::cin >> a >> b;
    std::cout << a * b << '\n';
  }
  return 0;
}

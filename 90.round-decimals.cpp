/* copyright
   Source:
   https://vjudge.net/problem/AtCoder-abc226_a
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  double x;
  std::cin >> x;

  std::cout << (x - floor(x) >= 0.5 ? ceil(x) : floor(x)) << '\n';

  return 0;
}

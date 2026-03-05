/* copyright
   Source:
   https://vjudge.net/problem/AtCoder-abc193_a
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  double a, b;
  std::cin >> a >> b;

  std::cout << (a - b) / a * 100 << '\n';
  return 0;
}

/* copyright
   Source:
   https://vjudge.net/problem/AtCoder-abc199_a
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int a, b, c;
  std::cin >> a >> b >> c;

  std::cout << (a*a + b*b < c*c ? "Yes" : "No") << '\n';
  return 0;
}

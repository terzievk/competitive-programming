/* copyright
   Source:
   https://vjudge.net/problem/AtCoder-abc209_a
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int a, b;
  std::cin >> a >> b;
  if (b < a) {
    std::cout << "0\n";

    return 0;
  }

  std::cout << b - a + 1 << '\n';
  return 0;
}

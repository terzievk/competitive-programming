/* copyright
   Source:
   https://vjudge.net/problem/AtCoder-abc220_a
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int a, b, c;
  std::cin >> a >> b >> c;

  if (a % c == 0) {
    std::cout << a << '\n';

    return 0;
  }

  int x{(a/c + 1) * c};

  std::cout << (x <= b ? x : -1) << '\n';
  return 0;
}

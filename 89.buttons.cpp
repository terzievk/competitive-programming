/* copyright
   Source:
   https://vjudge.net/problem/AtCoder-abc124_a
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int a, b;
  std::cin >> a >> b;

  int sum{};
  for (int i{}; i < 2; ++i) {
    sum += a > b ? a-- : b--;
  }

  std::cout << sum << '\n';
  return 0;
}

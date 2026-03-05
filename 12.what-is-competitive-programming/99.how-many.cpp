/* copyright
   Source:
   https://vjudge.net/problem/AtCoder-abc214_b
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int s, t;
  std::cin >> s >> t;

  int count{};
  for (int i{}; i <= 100; ++i) {
    for (int j{}; j <= 100; ++j) {
      for (int k{}; k <= 100; ++k) {
        if (i + j + k <= s && i * j * k <= t) {
          ++count;
        }
      }
    }
  }

  std::cout << count << '\n';
  return 0;
}

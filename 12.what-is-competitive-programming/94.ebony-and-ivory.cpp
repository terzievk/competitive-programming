/* copyright
   Source:
   https://vjudge.net/problem/CodeForces-633A
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  // I'll just brute force it without algebra
  int a, b, c;
  std::cin >> a >> b >> c;

  for (int i{};i < 10000; ++i) {
    for (int j{}; j < 10000; ++j) {
      if (i * a + j * b == c) {
        std::cout << "yes\n";

        return 0;
      }
    }
  }

  std::cout << "no\n";
  return 0;
}

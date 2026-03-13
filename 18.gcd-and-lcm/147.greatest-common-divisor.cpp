/* copyright
   Source:
   https://csacademy.com/contest/archive/task/gcd/
 */
#include <bits/stdc++.h>

int gcd(int a, int b) {
  while (b) {
    a %= b;
    std::swap(a, b);
  }

  return a;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int a, b;
  std::cin >> a >> b;
  std::cout << gcd(a, b) << '\n';
  return 0;
}

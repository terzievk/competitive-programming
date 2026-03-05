/* copyright
   Source:
   https://vjudge.net/problem/CodeForces-271A
*/
#include <bits/stdc++.h>

bool distinct(int x) {
  int a{x % 10};
  int b{(x/10) % 10};
  int c{(x/100) % 10};
  int d{(x/1000) % 10};


  return a != b && a != c && a != d
      && b != c && b != d
      && c != d;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int x;
  std::cin >> x;
  while (++x) {
    if (distinct(x)) {
      std::cout << x << '\n';

      return 0;
    }
  }
  return 0;
}

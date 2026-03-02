/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M
*/
#include <bits/stdc++.h>

bool isLucky(int x) {
  while (x > 0) {
    int last{x % 10};
    x /= 10;

    if (last != 4 && last != 7) {
      return false;
    }
  }

  return true;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int a;
  int b;

  std::cin >> a >> b;

  bool hasLucky{false};

  for (int i{a}; i <= b; ++i) {
    if (isLucky(i)) {
      hasLucky = true;
      std::cout << i << ' ';
    }
  }

  if (!hasLucky) {
    std::cout << "-1";
  }
  std::cout << '\n';

  return 0;
}

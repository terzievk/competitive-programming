/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F
 */
#include <bits/stdc++.h>

void print(int n) {
  if (n == 0) {
    return;
  }

  if (n == 1) {
    int x;
    std::cin >> x;
    std::cout << x << ' ';

    return;
  }

  int x, y;
  std::cin >> x >> y;

  print(n - 2);

  std::cout << x << ' ';

  return;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  print(n);
  return 0;
}

/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int a;
  int b;
  int c;

  std::cin >> a >> b >> c;

  int max{a};
  int min{a};

  if (b > max) {
    max = b;
  }

  if (c > max) {
    max = c;
  }

  if (b < min) {
    min = b;
  }
  if (c < min) {
    min = c;
  }

  std::cout << min << ' ' << max << '\n';
  return 0;
}

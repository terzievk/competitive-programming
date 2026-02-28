/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  float x;
  std::cin >> x;

  int y{static_cast<int>(x)};

  if (static_cast<float>(y) - x == 0) {
    std::cout << "int " << y << '\n';
  } else {
    std::cout << "float " << y << ' '
              << std::setprecision(4)
              << x - static_cast<float>(y) << '\n';
  }

  return 0;
}

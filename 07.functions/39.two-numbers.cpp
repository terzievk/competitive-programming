/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  //  std::cin.tie(NULL);

  double x;
  double y;

  std::cin >> x >> y;

  std::cout << "floor " << x << " / " << y << " = " << std::floor(x/y) << '\n';
  std::cout << "ceil " << x << " / " << y << " = " << std::ceil(x/y) << '\n';
  std::cout << "round " << x << " / " << y << " = ";

  if (x/y - floor(x/y) >= 0.5) {
    std::cout << std::ceil(x/y);
  } else {
    std::cout << std::floor(x/y);
  }

  std::cout << '\n';

  return 0;
}

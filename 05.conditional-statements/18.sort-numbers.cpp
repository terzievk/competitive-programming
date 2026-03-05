/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int x;
  int y;
  int z;

  std::cin >> x >> y >> z;
  // let's do this as intended without sorting per se


  // we need the else-if-s to cover edge cases like x = y = z
  if (x <= y && x <= z && y <= z) {
    std::cout << x << '\n' << y << '\n' << z << '\n';
  } else if (x <= y && x <= z && z <= y) {
    std::cout << x << '\n' << z << '\n' << y << '\n';
  } else if (y <= x && y <= z && x <= z) {
    std::cout << y << '\n' << x << '\n' << z << '\n';
  } else if (y <= x && y <= z && z <= x) {
    std::cout << y << '\n' << z << '\n' << x << '\n';
  } else if (z <= x && z <= y && x <= y) {
    std::cout << z << '\n' << x << '\n' << y << '\n';
  } else if (z <= x && z <= y && y <= x) {
    std::cout << z << '\n' << y << '\n' << x << '\n';
  }


  std::cout << '\n' << x << '\n' << y << '\n' << z << '\n';
  return 0;
}

/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C
*/
#include <iostream>

int main() {
  int64_t x;
  int64_t y;

  std::cin >> x >> y;
  std::cout
      << x << " + " << y << " = " << x + y << '\n'
      << x << " * " << y << " = " << x * y << '\n'
      << x << " - " << y << " = " << x - y << '\n';
  return 0;
}

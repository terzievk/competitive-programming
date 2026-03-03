/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  char c;
  std::cin >> c;

  int x{c - '0'};

  std::cout << (x % 2 ? "ODD" : "EVEN") << '\n';

  return 0;
}

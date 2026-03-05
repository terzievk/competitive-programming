/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  std::string a, b;
  std::cin >> a >> a >> b >> b;

  if (a == b) {
    std::cout << "ARE Brothers\n";
  } else {
    std::cout << "NOT\n";
  }

  return 0;
}

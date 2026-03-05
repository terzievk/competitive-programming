/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  char x;

  std::cin >> x;

  if (x >= '0' && x <= '9') {
    std::cout << "IS DIGIT\n";
    return 0;
  }

  // asume either digit or alpha
  std::cout << "ALPHA\n";

  if (x >= 'a' && x <= 'z') {
    std::cout << "IS SMALL\n";
  } else {
    std::cout << "IS CAPITAL\n";
  }

  return 0;
}

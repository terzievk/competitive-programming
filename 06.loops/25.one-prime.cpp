/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int p;
  std::cin >> p;

  if (p == 2) {
    std::cout << "YES\n";

    return 0;
  }

  if (p % 2 == 0) {
    std::cout << "NO\n";

    return 0;
  }

  for (int i{3}; i <= sqrt(p) + 1; i+=2) {
    if (p % i == 0) {
      std::cout << "NO\n";

      return 0;
    }
  }

  std::cout << "YES\n";
  return 0;
}

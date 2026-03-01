/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int t;
  std::cin >> t;

  for (int i{}; i < t; ++i) {
    int n;
    std::cin >> n;
    do {
      std::cout << n % 10 << ' ';
      n /= 10;
    } while (n > 0);
    std::cout << '\n';
  }

  return 0;
}
